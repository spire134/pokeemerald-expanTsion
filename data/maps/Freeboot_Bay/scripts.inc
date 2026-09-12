Freeboot_Bay_MapScripts::
	.byte 0


Freeboot_Bay_No_Entry::
# 4 "data/maps/Freeboot_Bay/scripts.pory"
	lock
# 5 "data/maps/Freeboot_Bay/scripts.pory"
	applymovement LOCALID_PIRATEGUARD_LEFT, Freeboot_Bay_No_Entry_Movement_0
# 6 "data/maps/Freeboot_Bay/scripts.pory"
	waitmovement 0
# 7 "data/maps/Freeboot_Bay/scripts.pory"
	playse SE_PIN
# 8 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Freeboot_Bay_No_Entry_Text_0
# 9 "data/maps/Freeboot_Bay/scripts.pory"
	applymovement LOCALID_PIRATEGUARD_RIGHT, Freeboot_Bay_No_Entry_Movement_0
# 10 "data/maps/Freeboot_Bay/scripts.pory"
	waitmovement 0
# 11 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Freeboot_Bay_No_Entry_Text_1
# 12 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Freeboot_Bay_No_Entry_Text_2
# 13 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Freeboot_Bay_No_Entry_Text_3
# 14 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Freeboot_Bay_No_Entry_Text_4
# 15 "data/maps/Freeboot_Bay/scripts.pory"
	applymovement LOCALID_PLAYER, Freeboot_Bay_No_Entry_Movement_1
# 16 "data/maps/Freeboot_Bay/scripts.pory"
	waitmovement 0
# 17 "data/maps/Freeboot_Bay/scripts.pory"
	release
	return


Freeboot_Buried_Pirate_F::
# 21 "data/maps/Freeboot_Bay/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, Freeboot_Buried_Pirate_F_Text_0, Freeboot_Buried_Pirate_F_Text_1
# 25 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Freeboot_Buried_Pirate_F_Text_2, MSGBOX_AUTOCLOSE
# 26 "data/maps/Freeboot_Bay/scripts.pory"
	waitmessage
# 27 "data/maps/Freeboot_Bay/scripts.pory"
	release
	return


Freeboot_Buried_Pirate_M::
# 31 "data/maps/Freeboot_Bay/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, Freeboot_Buried_Pirate_M_Text_0, Freeboot_Buried_Pirate_M_Text_1
# 35 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Freeboot_Buried_Pirate_M_Text_2, MSGBOX_AUTOCLOSE
# 36 "data/maps/Freeboot_Bay/scripts.pory"
	waitmessage
# 37 "data/maps/Freeboot_Bay/scripts.pory"
	release
	return


Port_Plunder_Approach_Trigger::
# 41 "data/maps/Freeboot_Bay/scripts.pory"
	lock
# 42 "data/maps/Freeboot_Bay/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/Freeboot_Bay/scripts.pory"
	showobjectat LOCALID_BRIDGE_PIRATE, MAP_FREEBOOT_BAY
# 44 "data/maps/Freeboot_Bay/scripts.pory"
	applymovement LOCALID_BRIDGE_PIRATE, Port_Plunder_Approach_Trigger_Movement_0
# 45 "data/maps/Freeboot_Bay/scripts.pory"
	waitmovement 0
# 46 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Port_Plunder_Approach_Trigger_Text_0
# 47 "data/maps/Freeboot_Bay/scripts.pory"
	applymovement LOCALID_BRIDGE_PIRATE, Port_Plunder_Approach_Trigger_Movement_1
# 48 "data/maps/Freeboot_Bay/scripts.pory"
	waitmovement 0
# 49 "data/maps/Freeboot_Bay/scripts.pory"
	playse SE_FAILURE
# 50 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Port_Plunder_Approach_Trigger_Text_1, MSGBOX_YESNO
# 51 "data/maps/Freeboot_Bay/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Port_Plunder_Approach_Trigger_1
# 60 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Port_Plunder_Approach_Trigger_Text_3
# 61 "data/maps/Freeboot_Bay/scripts.pory"
	applymovement LOCALID_PLAYER, Port_Plunder_Approach_Trigger_Movement_3
# 62 "data/maps/Freeboot_Bay/scripts.pory"
	applymovement LOCALID_BRIDGE_PIRATE, Port_Plunder_Approach_Trigger_Movement_2
# 63 "data/maps/Freeboot_Bay/scripts.pory"
	waitmovement 0
# 64 "data/maps/Freeboot_Bay/scripts.pory"
	removeobject LOCALID_BRIDGE_PIRATE
# 65 "data/maps/Freeboot_Bay/scripts.pory"
	release
	return

Port_Plunder_Approach_Trigger_1:
# 52 "data/maps/Freeboot_Bay/scripts.pory"
	msgbox Port_Plunder_Approach_Trigger_Text_2
# 53 "data/maps/Freeboot_Bay/scripts.pory"
	addvar VAR_PIRATE_QUEST_PROGRESSION, 1
# 54 "data/maps/Freeboot_Bay/scripts.pory"
	applymovement LOCALID_BRIDGE_PIRATE, Port_Plunder_Approach_Trigger_Movement_2
# 55 "data/maps/Freeboot_Bay/scripts.pory"
	waitmovement 0
# 56 "data/maps/Freeboot_Bay/scripts.pory"
	playse SE_EXIT
# 57 "data/maps/Freeboot_Bay/scripts.pory"
	removeobject LOCALID_BRIDGE_PIRATE
# 58 "data/maps/Freeboot_Bay/scripts.pory"
	release
	return


# 5 "data/maps/Freeboot_Bay/scripts.pory"
Freeboot_Bay_No_Entry_Movement_0:
# 5 "data/maps/Freeboot_Bay/scripts.pory"
	walk_in_place_fast_down
# 5 "data/maps/Freeboot_Bay/scripts.pory"
	emote_exclamation_mark
	step_end

# 15 "data/maps/Freeboot_Bay/scripts.pory"
Freeboot_Bay_No_Entry_Movement_1:
# 15 "data/maps/Freeboot_Bay/scripts.pory"
	walk_fast_down
	step_end

# 44 "data/maps/Freeboot_Bay/scripts.pory"
Port_Plunder_Approach_Trigger_Movement_0:
# 44 "data/maps/Freeboot_Bay/scripts.pory"
	walk_slow_up
# 44 "data/maps/Freeboot_Bay/scripts.pory"
	walk_slow_up
# 44 "data/maps/Freeboot_Bay/scripts.pory"
	walk_slow_up
# 44 "data/maps/Freeboot_Bay/scripts.pory"
	emote_exclamation_mark
	step_end

# 47 "data/maps/Freeboot_Bay/scripts.pory"
Port_Plunder_Approach_Trigger_Movement_1:
# 47 "data/maps/Freeboot_Bay/scripts.pory"
	face_left
# 47 "data/maps/Freeboot_Bay/scripts.pory"
	face_right
# 47 "data/maps/Freeboot_Bay/scripts.pory"
	emote_x
	step_end

# 54 "data/maps/Freeboot_Bay/scripts.pory"
Port_Plunder_Approach_Trigger_Movement_2:
# 54 "data/maps/Freeboot_Bay/scripts.pory"
	walk_down
# 54 "data/maps/Freeboot_Bay/scripts.pory"
	walk_down
# 54 "data/maps/Freeboot_Bay/scripts.pory"
	walk_down
	step_end

# 61 "data/maps/Freeboot_Bay/scripts.pory"
Port_Plunder_Approach_Trigger_Movement_3:
# 61 "data/maps/Freeboot_Bay/scripts.pory"
	walk_fast_up
	step_end

Freeboot_Bay_No_Entry_Text_0:
# 8 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Avast there, ye landlubber!\n"
	.string "Where do ye think ye're sailin'?$"

Freeboot_Bay_No_Entry_Text_1:
# 11 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Aye, the Captain's given strict\n"
	.string "orders! No scallywags allowed past this\l"
	.string "point 'til he returns from his voyage!$"

Freeboot_Bay_No_Entry_Text_2:
# 12 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: These be dangerous waters,\n"
	.string "Ranger. Best be weighin' anchor and\l"
	.string "settin' sail elsewhere!$"

Freeboot_Bay_No_Entry_Text_3:
# 13 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Arrr, but if ye be brave enough\n"
	.string "to face the Captain's wrath, ye can try\l"
	.string "yer luck when he's back at the helm!$"

Freeboot_Bay_No_Entry_Text_4:
# 14 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Now shove off before we make ye\n"
	.string "walk the plank! Har har har!$"

Freeboot_Buried_Pirate_F_Text_0:
# 22 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Sneak attack, pirate style!\n"
	.string "Prepare to be boarded ye scurvy dog!$"

Freeboot_Buried_Pirate_F_Text_1:
# 23 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Ugh… You got lucky this time\n"
	.string "lad.$"

Freeboot_Buried_Pirate_F_Text_2:
# 25 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: I'm washed up…$"

Freeboot_Buried_Pirate_M_Text_0:
# 32 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Arrr! Ye think ye can just stroll\n"
	.string "into Freeboot Bay? Think again,\l"
	.string "landlubber!$"

Freeboot_Buried_Pirate_M_Text_1:
# 33 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Arrr, I be defeated.$"

Freeboot_Buried_Pirate_M_Text_2:
# 35 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Arrr, you really swabbed my\n"
	.string "deck.$"

Port_Plunder_Approach_Trigger_Text_0:
# 46 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Hey! What do ye think ye're doin'\n"
	.string "here? This be private property of the\l"
	.string "Cap'n!$"

Port_Plunder_Approach_Trigger_Text_1:
# 50 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Our Cap'n Garrick is a scary\n"
	.string "fella, you sure you wanna be messin'\l"
	.string "with us?$"

Port_Plunder_Approach_Trigger_Text_2:
# 52 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Aye aye, that's the spirit! Just\n"
	.string "be ready to be swabbing our decks for\l"
	.string "the rest of yer days! Har har har!$"

Port_Plunder_Approach_Trigger_Text_3:
# 60 "data/maps/Freeboot_Bay/scripts.pory"
	.string "Pirate: Wise choice, landlubber. Best be\n"
	.string "headin' back before ye get in over yer\l"
	.string "head.$"
