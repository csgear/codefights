/*Please add ; after each select statement*/
CREATE PROCEDURE monthlyScholarships()
BEGIN
	select id, scholarship / 12.0 as scholarship from scholarships ;
END