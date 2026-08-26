# Write your MySQL query statement below
select s.name as Customers from Customers as s left join  Orders as u on s.id = u.customerId where u.customerId is null;