# Write your MySQL query statement below
Select DISTINCT author_id AS id FROM Views 
Where viewer_id  = author_id 
ORDER BY  author_id ASC;
