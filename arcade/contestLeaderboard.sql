/*Please add ; after each select statement*/
CREATE PROCEDURE contestLeaderboard()
BEGIN
	SELECT name from leaderboard order by score desc limit 3,5 ;
END