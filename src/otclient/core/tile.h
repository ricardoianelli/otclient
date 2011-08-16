#ifndef TILE_H
#define TILE_H

#include "declarations.h"
#include <framework/luascript/luaobject.h>

class Tile : public LuaObject
{
public:
    Tile();

    void addThing(ThingPtr thing, uint8 stackpos);
    void removeThing(ThingPtr thing, uint8 stackpos);

    void draw(int x, int y);

    bool hasGround() { return (!!m_ground); }

    int getStackSize();

private:
    ThingPtr m_ground;
    std::deque<ThingPtr> m_itemsBottom;
    std::deque<ThingPtr> m_creatures;
    std::deque<ThingPtr> m_itemsTop;
    std::deque<ThingPtr> m_effects;
};

#endif
