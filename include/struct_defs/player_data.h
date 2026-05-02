#ifndef POKEPLATINUM_STRUCT_DEF_PLAYER_DATA_H
#define POKEPLATINUM_STRUCT_DEF_PLAYER_DATA_H

typedef struct PlayerData {
    u16 cyclingGear;
    u16 runningShoes: 15;
    u16 autoRun:1;
    u32 form;
} PlayerData;

#endif // POKEPLATINUM_STRUCT_DEF_PLAYER_DATA_H
