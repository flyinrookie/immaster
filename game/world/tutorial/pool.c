inherit STD_WILD;

protected void create()
{
    ::create();
    //setArea(0,0,1,-1);
    set("short", "忘忧潭");
    set("long", @LONG
    溪水顺着岩壁飞流直下，溅起层层水花。
LONG);

    set("exits", ([
    "southwest": WORLD_DIR"/tutorial/trail1",
    "up": WORLD_DIR"/tutorial/waterfall",
]));
}