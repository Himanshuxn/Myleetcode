CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
      select distinct salary from employee e1 where N-1 = (select count(distinct salary) from employee e2  where (e2.salary > e1.salary))
      
  );
END