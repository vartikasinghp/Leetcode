# Write your MySQL query statement below
SELECT distinct author_id as id from Views
WHERE author_id = viewer_id
ORDER BY id;

