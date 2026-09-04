# Write your MySQL query statement below

select s.name from Employee as s join Employee as u on s.id = u.managerId 
group by s.id having count(u.managerId) >= 5; 