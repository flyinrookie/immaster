# A mud game based on LPC/Fluffos/mudcore

Ongoing building of the mudlib, as a learning project. The master branch is kept in working condition.

This mudlib contains the following parts:

1. ext: external modules, including mudcore and www
2. system: the framework the game runs on
3. game: build the world

This depository does not contain driver and configure file/folders, to run the mudlib, the following file/folders need to be added to root:

1. driver: https://www.fluffos.info
2. config: see mudcore/ for config example
3. data/
4. log/

using the web client included in ext/ can access the game from browser

This mudlib is based on "MudCore" from: https://github.com/oiuv/mudcore
