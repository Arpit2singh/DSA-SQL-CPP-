# Write your MySQL query statement below

select s.machine_id , Round(sum(
    case 
    when s.activity_type = "start" and u.activity_type = "end" and s.process_id = u.process_id then u.timestamp - s.timestamp 
    end 
) / (count(s.machine_id)/4) , 3) as processing_time from Activity as s join Activity as u on s.machine_id  = u.machine_id and s.process_id  = u.process_id  group by s.machine_id ;    
