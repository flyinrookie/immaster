inherit STD_OUTDOORS;

protected void create()
{
    ::create();
    setArea(0,0,1,0);
    set("short", "前院");
    set("long", @LONG
一个小小的院子，随意地扔着几件工具：斧头、锄头、铁镐和一根钓鱼竿。
LONG);
    set("outdoors", 1); // 设置户外
}

