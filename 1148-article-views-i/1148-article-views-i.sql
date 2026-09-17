-- # Write your MySQL query statement below
-- select distinct s.author_id as id  from Views as s  join Views as u on s.author_id = u.viewer_id  order by s.author_id asc ;

select distinct author_id as id from Views where author_id = viewer_id order by author_id ; 