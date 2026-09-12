HAZOLT_CENTER_MapScripts::
	.byte 0


Script_HazoltNurse::
# 4 "data/maps/HAZOLT_CENTER/scripts.pory"
	setvar VAR_0x800B, LOCALID_HAZOLT_NURSE
# 5 "data/maps/HAZOLT_CENTER/scripts.pory"
	setrespawn HEAL_LOCATION_HAZOLT_VILLAGE
# 6 "data/maps/HAZOLT_CENTER/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 7 "data/maps/HAZOLT_CENTER/scripts.pory"
	waitmessage
# 8 "data/maps/HAZOLT_CENTER/scripts.pory"
	applymovement LOCALID_PLAYER, Script_HazoltNurse_Movement_0
# 9 "data/maps/HAZOLT_CENTER/scripts.pory"
	waitbuttonpress
# 10 "data/maps/HAZOLT_CENTER/scripts.pory"
	release
	return


# 8 "data/maps/HAZOLT_CENTER/scripts.pory"
Script_HazoltNurse_Movement_0:
# 8 "data/maps/HAZOLT_CENTER/scripts.pory"
	walk_in_place_down
	step_end
