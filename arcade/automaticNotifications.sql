CREATE PROCEDURE automaticNotifications()
    SELECT email
    FROM users
    WHERE role not in  ("admin", "premium")

    ORDER BY email;
