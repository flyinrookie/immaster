// 标准户外环境模板 STD_OUTDOORS

inherit STD_ROOM;

protected void create()
{
    ::create();
    set("short", "院子")；
    set("long", @long
一个小小的院子，随意地扔着几件工具。
LONG);
    set("outdoors", 1); // 设置户外
}