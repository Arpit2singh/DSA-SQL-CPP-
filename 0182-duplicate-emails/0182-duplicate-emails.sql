# Write your MySQL query statement below

select s.email from Person as s join Person as u on s.email = u.email group by email having count(s.email) >=2 ; 