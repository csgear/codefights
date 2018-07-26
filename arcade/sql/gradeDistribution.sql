/*Please add ; after each select statement*/
CREATE PROCEDURE gradeDistribution()
BEGIN
	SELECT Name, ID from Grades WHERE Final > 0.5 * Midterm1 + 0.5 * Midterm2  AND 
        Final > 0.25 * Midterm1 + 0.25 * Midterm2 + 0.5 * Final order by SUBSTR(Name, 1, 3), ID ;
END