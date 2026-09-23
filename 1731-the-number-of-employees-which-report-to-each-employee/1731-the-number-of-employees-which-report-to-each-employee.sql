# Write your MySQL query statement below

select  s.reports_to as employee_id  , (select name from Employees as e where s.reports_to = e.employee_id ) as name , count(s.reports_to) as reports_count , round(avg(s.age),0) as average_age from Employees as s group by s.reports_to having s.reports_to is not null  order by employee_id asc; 