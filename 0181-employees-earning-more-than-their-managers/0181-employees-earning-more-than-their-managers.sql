# Write your MySQL query statement below

select s.name as Employee from Employee as s join  Employee as u on s.managerId = u.id 
where s.salary > u.salary ; 