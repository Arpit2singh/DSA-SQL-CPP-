# Write your MySQL query statement below
select s.firstName , s.lastName , u.city , u.state from Person as s left join Address as u on s.personId  = u.personId ; 