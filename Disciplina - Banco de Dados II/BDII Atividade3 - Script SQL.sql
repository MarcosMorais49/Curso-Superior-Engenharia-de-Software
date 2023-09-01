create schema BDII_ativ3;

use BDII_ativ3;

create table clientes(
	id int not null auto_increment,
	nome varchar(200),
	saldodevedor numeric(10,2),
	primary key (id)
);

create table contasreceber (
	id int not null auto_increment,
	idcliente int not null,
	valor numeric(10,2) not null default 0,
	status enum('N', 'S'),
	primary key (id),
	foreign key (idcliente) references clientes(id)
);

create trigger contasreceber_incluir 
	after insert 
	on contasreceber
	for each row 
	begin 
		update clientes c, contasreceber cr
		set c.saldodevedor  = c.saldodevedor + cr.valor 
		where cr.id = (select max(cr.id) 
		from contasreceber cr) and c.id = cr.idcliente and cr.status = 'N';
end;

CREATE TRIGGER contasreceber_alterar
AFTER UPDATE
ON contasreceber 
FOR EACH ROW 
BEGIN
	IF (old.status = 'N' AND new.status = 'S') THEN
    	UPDATE clientes c, contasreceber cr 
    	SET c.saldodevedor = c.saldodevedor - new.valor
    	WHERE c.id = new.idcliente;
  	ELSEIF (old.status = 'S' AND new.status = 'N') THEN 
    	UPDATE clientes c, contasreceber cr 
    	SET c.saldodevedor = c.saldodevedor + new.valor
    	WHERE c.id = new.idcliente;
  	END IF;
END;

select  c.id, c.nome, c.saldodevedor 
from clientes c 
where c.saldodevedor > 0;