BismarkiaTown_MapScripts::
# 2 "data/maps/BismarkiaTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BismarkiaTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BismarkiaTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BismarkiaTown/scripts.pory"
	setflag FLAG_VISITED_BISMARKIA_TOWN
	return

