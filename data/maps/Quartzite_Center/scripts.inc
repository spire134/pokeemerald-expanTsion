Quartzite_Center_MapScripts::
	.byte 0


Script_QuartzNurse::
# 4 "data/maps/Quartzite_Center/scripts.pory"
	setvar VAR_0x800B, LOCALID_QUARTZ_NURSE
# 5 "data/maps/Quartzite_Center/scripts.pory"
	setrespawn HEAL_LOCATION_QUARTZSITE_VILLAGE
# 6 "data/maps/Quartzite_Center/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 7 "data/maps/Quartzite_Center/scripts.pory"
	waitmessage
# 8 "data/maps/Quartzite_Center/scripts.pory"
	applymovement LOCALID_PLAYER, Script_QuartzNurse_Movement_0
# 9 "data/maps/Quartzite_Center/scripts.pory"
	waitbuttonpress
# 10 "data/maps/Quartzite_Center/scripts.pory"
	release
	return


Quartz_Center_RestingTrainer::
# 14 "data/maps/Quartzite_Center/scripts.pory"
	lock
# 15 "data/maps/Quartzite_Center/scripts.pory"
	faceplayer
# 16 "data/maps/Quartzite_Center/scripts.pory"
	msgbox Quartz_Center_RestingTrainer_Text_0
# 18 "data/maps/Quartzite_Center/scripts.pory"
	waitmessage
# 19 "data/maps/Quartzite_Center/scripts.pory"
	release
	return


# 8 "data/maps/Quartzite_Center/scripts.pory"
Script_QuartzNurse_Movement_0:
# 8 "data/maps/Quartzite_Center/scripts.pory"
	walk_in_place_down
	step_end

Quartz_Center_RestingTrainer_Text_0:
# 16 "data/maps/Quartzite_Center/scripts.pory"
	.string "Trainer: Phew! That was a tough trek!\n"
	.string "Good thing there's a Pokémon Center\l"
	.string "right here to heal up!$"
