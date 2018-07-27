/*Please add ; after each select statement*/
CREATE PROCEDURE suspectsInvestigation2()
BEGIN
	SELECT id, name, surname from Suspect WHERE not (height <= 170  and  
 LOWER(name) LIKE 'b%' and surname LIKE "Gre_n") ;
END