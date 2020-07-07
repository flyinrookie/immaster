//启动时自动加载

#ifndef GLOBALS_H
#define GLOBALS_H

//管理员账号
#define WIZARD "teamug"

// 底层核心
#define CORE_DIR "mudcore/"

//功能模块
#include "inherit.h"
//守护进程
#include "daemons.h"
//标准继承对象
#include "stdob.h"

// 系统
#define LOGIN_OB "system/object/login"
#define USER_OB "system/object/user"
#define VOID_OB "system/object/void"

//数据存储
#define LOG_DIR "log/"
#define DATA_DIR "data/"

// 其他
#define HTTP_PORT 8888
#define MOTD "system/etc/motd"
#define PRELOAD "system/etc/preload"

// 指令路径
#define CMD_PATH_WIZ ({"cmds/wizard/", "mudcore/cmds/wizard/"})
#define CMD_PATH_STD ({"cmds/player/", "mudcore/cmds/player/"})

// 核心框架头文件
#include <mudcore.h>

#endif