/*Please add ; after each select statement*/
CREATE PROCEDURE suspectsInvestigation()
BEGIN
	SELECT id, name, surname from Suspect WHERE height <= 170  and  
 LOWER(name) LIKE 'b%' and surname LIKE "Gre_n";
END