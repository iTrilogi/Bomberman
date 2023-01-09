typedef struct vec2
{
    int x;
    int y;
}vec2_t;

typedef struct player
{
    vec2_t position;
    unsigned int number_of_lifes;
    unsigned int number_of_bombs;
    unsigned int score;
    unsigned int speed;
} player_t;

typedef struct  bomb
{
    vec2_t position;
    unsigned int range;
    unsigned int cooldown;
} bomb_t;

enum CellType{
    GROUND, WALL,UNDESTROYABLE_WALL, TELEPORT
};
enum BonusType{
    NONE, SPEED, BOPMB2, BOMB3
};

typedef struct cell{
    enum CellType type;
    enum BonusType bonus;
}cell_t;

enum EnemyType{
    BAT, BALLON
};

typedef struct enemy
{
    vec2_t position;
    enum EnemyType type;
}enemy_t;

typedef struct  game_mode
{
    unsigned int timer;
}game_mode_t;