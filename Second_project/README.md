# Football Team Manager

This project implements a very simple database for friendly games between teams, as well as a history of the matches that have been played.

# Data Scheme

Matches and teams are stored in hashtables and are hashed according to their names. Conflicts are resolved through external chaining.

# Features 

Here's a list of the supported features and the respective commands.

| Command | Action | Input command|
|---------|--------|--------------|
| a | Adds a new match | a:game_name:team_1:team_2:score_1:score_2 |
| l | Lists all matches | l |
| p | Looks up a match by its name | p:game_name |
| r | Erases a match | r:game_name |
| s | Changes the score in a given match | s:game_name:new_score1:new_score2 |
| A | Adds a new team | A:team_name | 
| P | Looks up a team by its name | P:team_name |
| g | Shows most winning teams | g |




