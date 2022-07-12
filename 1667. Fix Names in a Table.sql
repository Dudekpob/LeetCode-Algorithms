
Select user_id,CONCAT(UCASE(LEFT(name, 1)),LCASE(SUBSTRING(name, 2))) AS name  From  Users
Order by user_id asc;
