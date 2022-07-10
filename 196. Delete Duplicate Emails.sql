
DELETE S1 FROM Person  AS S1  
INNER JOIN Person  AS S2   
WHERE S1.id > S2.id AND S1.email = S2.email;  
