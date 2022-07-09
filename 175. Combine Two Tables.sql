SELECT 
    firstName, 
    lastName, 
    city,
    state
FROM
     Address t2 
RIGHT JOIN Person t1
    ON t2.personId = t1.personId;
