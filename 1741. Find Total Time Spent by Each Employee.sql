# Write your MySQL query statement below
Select event_day AS day, emp_id, SUM(out_time-in_time) AS total_time From Employees 
GROUP BY 1,2
