Select user_id,MAX(time_stamp) AS last_stamp from Logins 
Where year(time_stamp) = 2020 
group by user_id
