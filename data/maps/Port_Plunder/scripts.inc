Port_Plunder_MapScripts::
	.byte 0


Port_Plunder_Garrick_Fight_Trigger_1::
# 4 "data/maps/Port_Plunder/scripts.pory"
	lockall
# 5 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_PLAYER, Port_Plunder_Garrick_Fight_Trigger_1_Movement_0
# 6 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 7 "data/maps/Port_Plunder/scripts.pory"
	goto Port_Plunder_Garrick_Fight_Trigger_4
	return


Port_Plunder_Garrick_Fight_Trigger_2::
# 11 "data/maps/Port_Plunder/scripts.pory"
	lockall
# 12 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_PLAYER, Port_Plunder_Garrick_Fight_Trigger_2_Movement_0
# 13 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 14 "data/maps/Port_Plunder/scripts.pory"
	goto Port_Plunder_Garrick_Fight_Trigger_4
	return


Port_Plunder_Garrick_Fight_Trigger_3::
# 18 "data/maps/Port_Plunder/scripts.pory"
	lockall
# 19 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_PLAYER, Port_Plunder_Garrick_Fight_Trigger_3_Movement_0
# 20 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 21 "data/maps/Port_Plunder/scripts.pory"
	goto Port_Plunder_Garrick_Fight_Trigger_4
	return


Port_Plunder_Garrick_Fight_Trigger_4::
# 25 "data/maps/Port_Plunder/scripts.pory"
	lockall
# 26 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_GARRICK, Port_Plunder_Garrick_Fight_Trigger_4_Movement_0
# 27 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 28 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_0
# 30 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 31 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_1
# 32 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_PLAYER, Port_Plunder_Garrick_Fight_Trigger_4_Movement_1
# 33 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 34 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_2
# 35 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 36 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_GARRICK, Port_Plunder_Garrick_Fight_Trigger_4_Movement_2
# 37 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 38 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_3
# 40 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 41 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_PLAYER, Port_Plunder_Garrick_Fight_Trigger_4_Movement_3
# 42 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 43 "data/maps/Port_Plunder/scripts.pory"
	playse SE_PIN
# 44 "data/maps/Port_Plunder/scripts.pory"
	waitse
# 45 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_4
# 48 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 49 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_5
# 51 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 52 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_GARRICK, Port_Plunder_Garrick_Fight_Trigger_4_Movement_4
# 53 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 54 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_6, MSGBOX_YESNO
# 56 "data/maps/Port_Plunder/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Port_Plunder_Garrick_Fight_Trigger_4_2
# 60 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_8
Port_Plunder_Garrick_Fight_Trigger_4_1:
# 63 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 64 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_GARRICK, Port_Plunder_Garrick_Fight_Trigger_4_Movement_5
# 65 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 66 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_9
# 68 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 69 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_GARRICK, Port_Plunder_Garrick_Fight_Trigger_4_Movement_6
# 70 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 71 "data/maps/Port_Plunder/scripts.pory"
	playse SE_PIN
# 72 "data/maps/Port_Plunder/scripts.pory"
	waitse
# 73 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_10
# 74 "data/maps/Port_Plunder/scripts.pory"
	playse SE_BALL_THROW
# 75 "data/maps/Port_Plunder/scripts.pory"
	waitse
# 76 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_PLAYER, Port_Plunder_Garrick_Fight_Trigger_4_Movement_7
# 77 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 78 "data/maps/Port_Plunder/scripts.pory"
	setvar VAR_0x8004, 1
# 79 "data/maps/Port_Plunder/scripts.pory"
	setvar VAR_0x8005, 1
# 80 "data/maps/Port_Plunder/scripts.pory"
	setvar VAR_0x8006, 6
# 81 "data/maps/Port_Plunder/scripts.pory"
	setvar VAR_0x8007, 3
# 82 "data/maps/Port_Plunder/scripts.pory"
	special ShakeCamera
# 83 "data/maps/Port_Plunder/scripts.pory"
	waitstate
# 84 "data/maps/Port_Plunder/scripts.pory"
	playse SE_BREAKABLE_DOOR
# 85 "data/maps/Port_Plunder/scripts.pory"
	waitse
# 86 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_PLAYER, Port_Plunder_Garrick_Fight_Trigger_4_Movement_8
# 87 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 88 "data/maps/Port_Plunder/scripts.pory"
	trainerbattle_no_intro TRAINER_WATTSON_1, Port_Plunder_Garrick_Fight_Trigger_4_Text_11
# 89 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_12
# 90 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 91 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_13
# 92 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 93 "data/maps/Port_Plunder/scripts.pory"
	giveitem ITEM_HM04
# 94 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 95 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_GARRICK, Port_Plunder_Garrick_Fight_Trigger_4_Movement_9
# 96 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 97 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_14
# 100 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 101 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_15
# 103 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 104 "data/maps/Port_Plunder/scripts.pory"
	fadescreen FADE_TO_BLACK
# 105 "data/maps/Port_Plunder/scripts.pory"
	playse SE_EXIT
# 106 "data/maps/Port_Plunder/scripts.pory"
	waitse
# 107 "data/maps/Port_Plunder/scripts.pory"
	applymovement LOCALID_GARRICK, Port_Plunder_Garrick_Fight_Trigger_4_Movement_10
# 108 "data/maps/Port_Plunder/scripts.pory"
	waitmovement 0
# 109 "data/maps/Port_Plunder/scripts.pory"
	removeobject LOCALID_GARRICK
# 110 "data/maps/Port_Plunder/scripts.pory"
	removeobject LOCALID_PORT_PLUNDER_GUARD_1
# 111 "data/maps/Port_Plunder/scripts.pory"
	removeobject LOCALID_PORT_PLUNDER_PATROL_1
# 112 "data/maps/Port_Plunder/scripts.pory"
	removeobject LOCALID_PORT_PLUNDER_FIRST_MATE
# 113 "data/maps/Port_Plunder/scripts.pory"
	setflag FLAG_BADGE03_GET
# 114 "data/maps/Port_Plunder/scripts.pory"
	addvar VAR_PIRATE_QUEST_PROGRESSION, 1
# 115 "data/maps/Port_Plunder/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 116 "data/maps/Port_Plunder/scripts.pory"
	releaseall
	return

Port_Plunder_Garrick_Fight_Trigger_4_2:
# 57 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Garrick_Fight_Trigger_4_Text_7
	goto Port_Plunder_Garrick_Fight_Trigger_4_1


Port_Plunder_Guard_Battle_Trigger::
# 120 "data/maps/Port_Plunder/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, Port_Plunder_Guard_Battle_Trigger_Text_0, Port_Plunder_Guard_Battle_Trigger_Text_1
# 124 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Guard_Battle_Trigger_Text_2, MSGBOX_AUTOCLOSE
# 125 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 126 "data/maps/Port_Plunder/scripts.pory"
	release
	return


Port_Plunder_Patrol_Battle_Trigger::
# 130 "data/maps/Port_Plunder/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, Port_Plunder_Patrol_Battle_Trigger_Text_0, Port_Plunder_Patrol_Battle_Trigger_Text_1
# 134 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_Patrol_Battle_Trigger_Text_2, MSGBOX_AUTOCLOSE
# 135 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 136 "data/maps/Port_Plunder/scripts.pory"
	release
	return


Port_Plunder_First_Mate_Battle::
# 140 "data/maps/Port_Plunder/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Port_Plunder_First_Mate_Battle_Text_0, Port_Plunder_First_Mate_Battle_Text_1
# 144 "data/maps/Port_Plunder/scripts.pory"
	msgbox Port_Plunder_First_Mate_Battle_Text_2, MSGBOX_AUTOCLOSE
# 145 "data/maps/Port_Plunder/scripts.pory"
	waitmessage
# 146 "data/maps/Port_Plunder/scripts.pory"
	release
	return


# 5 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_1_Movement_0:
# 5 "data/maps/Port_Plunder/scripts.pory"
	walk_slow_down
# 5 "data/maps/Port_Plunder/scripts.pory"
	walk_slow_down
# 5 "data/maps/Port_Plunder/scripts.pory"
	face_right
	step_end

# 12 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_2_Movement_0:
# 12 "data/maps/Port_Plunder/scripts.pory"
	walk_slow_down
# 12 "data/maps/Port_Plunder/scripts.pory"
	face_right
	step_end

# 19 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_3_Movement_0:
# 19 "data/maps/Port_Plunder/scripts.pory"
	walk_slow_up
# 19 "data/maps/Port_Plunder/scripts.pory"
	face_right
	step_end

# 26 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_0:
# 26 "data/maps/Port_Plunder/scripts.pory"
	face_player
# 26 "data/maps/Port_Plunder/scripts.pory"
	emote_question_mark
	step_end

# 32 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_1:
# 32 "data/maps/Port_Plunder/scripts.pory"
	walk_slow_right
# 32 "data/maps/Port_Plunder/scripts.pory"
	walk_slow_right
	step_end

# 36 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_2:
# 36 "data/maps/Port_Plunder/scripts.pory"
	walk_in_place_slow_left
	step_end

# 41 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_3:
# 41 "data/maps/Port_Plunder/scripts.pory"
	walk_in_place_right
	step_end

# 52 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_4:
# 52 "data/maps/Port_Plunder/scripts.pory"
	walk_in_place_slow_down
	step_end

# 64 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_5:
# 64 "data/maps/Port_Plunder/scripts.pory"
	walk_in_place_slow_left
# 64 "data/maps/Port_Plunder/scripts.pory"
	walk_slow_left
# 64 "data/maps/Port_Plunder/scripts.pory"
	walk_in_place_slow_down
	step_end

# 69 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_6:
# 69 "data/maps/Port_Plunder/scripts.pory"
	emote_exclamation_mark
# 69 "data/maps/Port_Plunder/scripts.pory"
	face_left
	step_end

# 76 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_7:
# 76 "data/maps/Port_Plunder/scripts.pory"
	emote_question_mark
	step_end

# 86 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_8:
# 86 "data/maps/Port_Plunder/scripts.pory"
	jump_in_place_left
	step_end

# 95 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_9:
# 95 "data/maps/Port_Plunder/scripts.pory"
	face_down
	step_end

# 107 "data/maps/Port_Plunder/scripts.pory"
Port_Plunder_Garrick_Fight_Trigger_4_Movement_10:
# 107 "data/maps/Port_Plunder/scripts.pory"
	walk_down
# 107 "data/maps/Port_Plunder/scripts.pory"
	walk_down
# 107 "data/maps/Port_Plunder/scripts.pory"
	walk_down
	step_end

Port_Plunder_Garrick_Fight_Trigger_4_Text_0:
# 28 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: Whoa there, Ranger!\p"
	.string "What brings you to my dockhouse? Here\n"
	.string "for the supplies, I bet.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_1:
# 31 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: Sorry, but I can't just hand\n"
	.string "them over.\p"
	.string "$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_2:
# 34 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: Insistent one, huh? I like\n"
	.string "that.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_3:
# 38 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: You made a lot of noise getting\n"
	.string "here, Rookie.\p"
	.string "Step quieter, or you won't last in the\n"
	.string "more dangerous parts of Corymbra.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_4:
# 45 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: Let me guess. Mara sent you?\p"
	.string "She probably gave you the speech about\n"
	.string "'Taming the Wild.'\l"
	.string "Funny. I wrote that speech fifteen\l"
	.string "years ago.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_5:
# 49 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: I'm Garrick. Former Captain of\n"
	.string "the Coastal Division.\p"
	.string "Now? I'm the guy trying to stop you kids\n"
	.string "from making a mistake.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_6:
# 54 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: You want the supplies?\p"
	.string "First tell me, are you just following\n"
	.string "orders blindly?$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_7:
# 57 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: Ha. At least you've got a sense\n"
	.string "of humor.\p"
	.string "Let's see if you've got the skill to back\n"
	.string "it up.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_8:
# 60 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: Smart answer. But I know Mara\n"
	.string "doesn't send quitters.\p"
	.string "We're in for a fight, whether you like it\n"
	.string "or not.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_9:
# 66 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: This island doesn't play fair.\p"
	.string "Neither should us.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_10:
# 73 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: Think fast!$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_11:
# 88 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: Hmph. Not bad.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_12:
# 89 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: Take the supplies. I'm sure\n"
	.string "your station will find them useful.\p"
	.string "$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_13:
# 91 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: Here, take this HM as well. It\n"
	.string "will let you uncover the secrets of this\l"
	.string "island.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_14:
# 97 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: But listen to me:\p"
	.string "The Rangers are digging up things that\n"
	.string "should stay buried.\l"
	.string "We aren't the heroes here. We're the\l"
	.string "intruders.$"

Port_Plunder_Garrick_Fight_Trigger_4_Text_15:
# 101 "data/maps/Port_Plunder/scripts.pory"
	.string "Garrick: I'll be watching.\p"
	.string "Try not to get yourself into too much\n"
	.string "trouble before I decide if you're worth\l"
	.string "saving.$"

Port_Plunder_Guard_Battle_Trigger_Text_0:
# 121 "data/maps/Port_Plunder/scripts.pory"
	.string "Avast, ye scurvy dog! Ye not be passin'\n"
	.string "through 'ere!$"

Port_Plunder_Guard_Battle_Trigger_Text_1:
# 122 "data/maps/Port_Plunder/scripts.pory"
	.string "I wish I wasn't washed.$"

Port_Plunder_Guard_Battle_Trigger_Text_2:
# 124 "data/maps/Port_Plunder/scripts.pory"
	.string "Har har! The Captain'll make ye walk the\n"
	.string "plank fer this!$"

Port_Plunder_Patrol_Battle_Trigger_Text_0:
# 131 "data/maps/Port_Plunder/scripts.pory"
	.string "Shiver me timbers! A landlubber tryin'\n"
	.string "to sneak past ol' Garrick's crew!$"

Port_Plunder_Patrol_Battle_Trigger_Text_1:
# 132 "data/maps/Port_Plunder/scripts.pory"
	.string "Arr… Ye bested me, ye bilge rat!$"

Port_Plunder_Patrol_Battle_Trigger_Text_2:
# 134 "data/maps/Port_Plunder/scripts.pory"
	.string "Mark me words, ye'll be sleepin' with the\n"
	.string "Magikarp soon enough!$"

Port_Plunder_First_Mate_Battle_Text_0:
# 141 "data/maps/Port_Plunder/scripts.pory"
	.string "Yo ho ho! Thought ye could just waltz\n"
	.string "into our port, did ye?$"

Port_Plunder_First_Mate_Battle_Text_1:
# 142 "data/maps/Port_Plunder/scripts.pory"
	.string "Blast it all… Bested by a greenhorn!$"

Port_Plunder_First_Mate_Battle_Text_2:
# 144 "data/maps/Port_Plunder/scripts.pory"
	.string "Captain Garrick'll keelhaul ye fer this,\n"
	.string "mark me words!$"
