/* Write your PL/SQL query statement below */
SELECT firstName,LastName,city,state from Person left join Address on 
person.personId = Address.personId;