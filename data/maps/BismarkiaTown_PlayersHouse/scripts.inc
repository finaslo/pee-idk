BismarkiaTown_PlayersHouse_MapScripts::
	.byte 0


BismarkiaTown_PlayersHouse_GetOut::
# 8 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	lockall
# 9 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	delay 10
# 10 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	playse SE_PIN
# 11 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 12 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	waitmovement 0
# 13 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	delay 48
# 14 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	applymovement 1, BismarkiaTown_PlayersHouse_MomApproach
# 15 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	waitmovement 0
# 16 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	msgbox BismarkiaTown_PlayersHouse_GetOut_Text_0, MSGBOX_DEFAULT
# 17 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 18 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	special SetUnlockedPokedexFlags
# 19 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 2
# 20 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 21 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	special StartWallClock
# 22 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	waitstate
# 23 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	waitmessage
# 24 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	releaseall
	return


# 27 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
BismarkiaTown_PlayersHouse_MomApproach:
# 28 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	walk_down
# 28 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	walk_down
# 29 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	walk_left
# 29 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	walk_left
# 29 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	walk_left
	step_end

BismarkiaTown_PlayersHouse_GetOut_Text_0:
# 16 "data/maps/BismarkiaTown_PlayersHouse/scripts.pory"
	.string "Ay bro i got ya pokedex thingy from the\n"
	.string "delivery men\p"
	.string "Set da clok or smth$"
