SELECT name AS 'Customers'
FROM Customers 
Where id NOT IN(Select customerId from Orders)
