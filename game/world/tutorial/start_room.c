// 玩家出生点
inherit ROOM;

protected void create()
{
    set("short", "茅草屋");
    set("long", @LONG
破旧的茅草屋，几乎没有像样的家具，一床一桌而已。床上铺着草席，胡乱地堆着几只枕头，桌上一盏油灯和几只野果。屋子中间的地上还摆着一只破损的蒲团，门边的一只水缸旁倒着两个木桶，水缸里还有些清水。
LONG);
    setArea(0,0,0,0); //设置所属地区和X,Y,Z坐标
    set("outdoors", 0); //设置是否户外
    set("no_get", 0); //是否禁止拾起
    set("no_drop", 0); //是否禁止丢弃
    set("no_fight", 1); //是否禁止战斗
    set("exits", ([
        "south" : WORLD_DIR"tutorial/courtyard",
    ])); //设置出口
}