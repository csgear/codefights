/*Please add ; after each select statement*/
CREATE PROCEDURE volleyballResults()
BEGIN
	SELECT name, country, scored, missed, wins FROM results order by wins ;
END