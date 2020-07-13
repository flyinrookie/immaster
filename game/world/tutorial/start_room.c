// 玩家出生点 START_ROOM
inherit STD_ROOM;

protected void create()
{
    ::create();
    set("short", "茅草屋");
    set("long", @LONG
破旧的茅草屋，几乎没有像样的家具，一床一桌而已。床上铺着草席，胡乱地堆着几只枕头；桌上摆着一个灵位，供着几只野果。灵位上的字迹模糊不清，隐约可见一个“天”字。屋子中间的地上还摆着一只破损的蒲团，门边的倒着一只木桶，桶里还有些许清水。
LONG);
    setArea(0,0,0,0); //设置所属地区和X,Y,Z坐标
    set("exits", ([
        "south" : WORLD_DIR"tutorial/courtyard",
        "north" : WORLD_DIR"tutorial/backyard",
    ])); //设置出口
}