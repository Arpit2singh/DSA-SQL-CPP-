
select  k.Department ,  p.name as Employee, k.Salary from
(select Deptid , Department , Max(Salary) as Salary from 
(select u.id as Deptid , u.name as Department , s.name as Employee , s.salary as Salary from 
Employee as s join Department as u on s.departmentId = u.id) as t group by  Deptid , Department) as k inner join Employee as p on k.Salary = p.salary and p.departmentId = k.Deptid; 