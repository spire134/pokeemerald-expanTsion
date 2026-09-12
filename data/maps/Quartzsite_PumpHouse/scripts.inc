Quartzsite_PumpHouse_MapScripts::
	.byte 0


Pumphouse_Drone::
# 4 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	lock
# 5 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	faceplayer
# 6 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	goto_if_unset FLAG_TALKED_TO_ROJAN, Pumphouse_Drone_1
# 12 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	msgbox Pumphouse_Drone_Text_1
# 14 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_7, Pumphouse_Drone_Text_2
# 16 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	msgbox Pumphouse_Drone_Text_3
# 17 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	waitmessage
# 18 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	setflag FLAG_PUMPHOUSE_DRONE_DEFEATED
# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	applymovement LOCALID_PUMPHOUSE_DRONE, Pumphouse_Drone_Movement_0
# 20 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	waitmovement 0
# 21 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	removeobject LOCALID_PUMPHOUSE_DRONE
# 22 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	playse SE_EXIT
# 23 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	msgbox Pumphouse_Drone_Text_4
# 24 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	waitmessage
# 25 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	release
	return

Pumphouse_Drone_1:
# 7 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	msgbox Pumphouse_Drone_Text_0
# 9 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	release
	return


# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
Pumphouse_Drone_Movement_0:
# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	walk_faster_right
# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	walk_faster_up
# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	walk_faster_up
# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	walk_faster_left
# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	walk_faster_left
# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	walk_faster_left
# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	walk_faster_up
# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	walk_faster_up
# 19 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	walk_faster_up
	step_end

Pumphouse_Drone_Text_0:
# 7 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	.string "Drone: The Seer has assigned me to\n"
	.string "guard this pump house.\p"
	.string "No one is allowed in or out without\n"
	.string "permission!$"

Pumphouse_Drone_Text_1:
# 12 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	.string "Drone: So, you're working with Captain\n"
	.string "Rojan now, huh?\p"
	.string "But I'll stop you right here!$"

Pumphouse_Drone_Text_2:
# 15 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	.string "Drone: I've been roasted and toasted!$"

Pumphouse_Drone_Text_3:
# 16 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	.string "Drone: The Seer will not be pleased...$"

Pumphouse_Drone_Text_4:
# 23 "data/maps/Quartzsite_PumpHouse/scripts.pory"
	.string "You hear the groaning of the pump\n"
	.string "house as it starts working again.$"
