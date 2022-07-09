# Write your MySQL query statement below
Select email AS Email  from Person
GROUP BY email
HAVING COUNT(email) >= 2;
