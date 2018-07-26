/*Please add ; after each select statement*/
CREATE PROCEDURE mostExpensive()
BEGIN
	SELECT name FROM Products order by price * quantity desc, name ASC LIMIT 1 ;
END