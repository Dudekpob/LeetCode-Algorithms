# Write your MySQL query statement below
Select user_id, Count( DISTINCT  follower_id ) AS followers_count from Followers
Group by user_id ;
