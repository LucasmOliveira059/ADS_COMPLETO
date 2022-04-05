USE `classicmodels`;

select * from orders; 

create view vw_pag_maior_que_dezMil AS
select * from payments
where amount >= 10000
order by paymentDate;

select * from vw_pag_maior_que_dezMil;

Create view vw_vendas_por_pedido as
Select
orderNumber,
SUM(quantityOrdered * priceEach) total
FROM
orderDetails
GROUP BY orderNumber
ORDER BY total DESC;

drop view vw_vendas_porpedido;

show tables;
Select * from vw_vendas_por_pedido;

CREATE VIEW vw_bigSalesOrder AS
SELECT orderNumber,
ROUND(total,2) as total
FROM vw_vendas_por_pedido
WHERE total > 60000;

CREATE OR REPLACE VIEW vw_customerOrders AS
SELECT orderNumber,
customerName,
SUM(quantityOrdered * priceEach) total
FROM orderDetails
INNER JOIN orders o USING (orderNumber)
INNER JOIN customers USING (customerNumber)
GROUP BY orderNumber;

SELECT * FROM vw_customerOrders
ORDER BY total DESC;

Create table martian_confidential
(martian_id int,
first_name varchar(40),
last_name varchar(80),
base_id int,
super_id int,
salary decimal(8,2),
dna_id varchar(30));

insert into martian_confidential values
(1, 'Ray', 'Bradburry', 1, null, 155900, 'gcta'),
(2, 'John', 'Black', 4, 10, 120100, 'cagt'); 

select * from martian_confidential;

create table visitor(visitor_id integer,
host_id integer,
first_name varchar(30),
last_name varchar(80));

insert into visitor values (1, 1,'George', 'Ambrose'),
(2, 2,'Kris', 'Cardenas'),
(3, 3, 'Priscilla', 'Lane'),
(4, 4,'Jane', 'Thorton');
