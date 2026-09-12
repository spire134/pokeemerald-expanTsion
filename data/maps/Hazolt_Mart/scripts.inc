Hazolt_Mart_MapScripts::
	.byte 0


Hazolt_MartLocked::
# 4 "data/maps/Hazolt_Mart/scripts.pory"
	lock
# 5 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Hazolt_MartLocked_Text_0
# 9 "data/maps/Hazolt_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/Hazolt_Mart/scripts.pory"
	checkitem ITEM_WAREHOUSE_KEY
# 11 "data/maps/Hazolt_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Hazolt_MartLocked_1
# 18 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Hazolt_MartLocked_Text_2, MSGBOX_YESNO
# 19 "data/maps/Hazolt_Mart/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Hazolt_MartLocked_5
# 24 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Hazolt_MartLocked_Text_3
Hazolt_MartLocked_4:
# 26 "data/maps/Hazolt_Mart/scripts.pory"
	release
	return

Hazolt_MartLocked_1:
# 12 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Hazolt_MartLocked_Text_1
# 13 "data/maps/Hazolt_Mart/scripts.pory"
	waitmessage
# 14 "data/maps/Hazolt_Mart/scripts.pory"
	release
	end

Hazolt_MartLocked_5:
# 20 "data/maps/Hazolt_Mart/scripts.pory"
	fadescreen FADE_TO_BLACK
# 21 "data/maps/Hazolt_Mart/scripts.pory"
	warp MAP_HAZOLT_MART, 4, 11
# 22 "data/maps/Hazolt_Mart/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Hazolt_MartLocked_4


Tasmin_Warehouse::
# 31 "data/maps/Hazolt_Mart/scripts.pory"
	lock
# 32 "data/maps/Hazolt_Mart/scripts.pory"
	faceplayer
# 33 "data/maps/Hazolt_Mart/scripts.pory"
	checkitem ITEM_STORAGE_KEY
# 34 "data/maps/Hazolt_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tasmin_Warehouse_1
# 69 "data/maps/Hazolt_Mart/scripts.pory"
	checkflag FLAG_CLEARED_TIDESMERCYWRECK
# 70 "data/maps/Hazolt_Mart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Tasmin_Warehouse_4
# 79 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_8
# 80 "data/maps/Hazolt_Mart/scripts.pory"
	applymovement LOCALID_TASMIN_WAREHOUSE, Tasmin_Warehouse_Movement_1
# 81 "data/maps/Hazolt_Mart/scripts.pory"
	waitmovement 0
# 82 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_9
# 88 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_10
# 92 "data/maps/Hazolt_Mart/scripts.pory"
	waitmessage
# 93 "data/maps/Hazolt_Mart/scripts.pory"
	release
	return

Tasmin_Warehouse_1:
# 35 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_0
# 37 "data/maps/Hazolt_Mart/scripts.pory"
	applymovement LOCALID_TASMIN_WAREHOUSE, Tasmin_Warehouse_Movement_0
# 38 "data/maps/Hazolt_Mart/scripts.pory"
	waitmovement 0
# 39 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_1
# 44 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_2
# 50 "data/maps/Hazolt_Mart/scripts.pory"
	giveitem ITEM_STORAGE_KEY
# 51 "data/maps/Hazolt_Mart/scripts.pory"
	waitmessage
# 52 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_3
# 53 "data/maps/Hazolt_Mart/scripts.pory"
	waitmessage
# 54 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_4
# 56 "data/maps/Hazolt_Mart/scripts.pory"
	giveitem ITEM_FULL_HEAL, 5
# 57 "data/maps/Hazolt_Mart/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 58 "data/maps/Hazolt_Mart/scripts.pory"
	waitmessage
# 59 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_5
# 60 "data/maps/Hazolt_Mart/scripts.pory"
	waitmessage
# 61 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_6
# 65 "data/maps/Hazolt_Mart/scripts.pory"
	waitmessage
# 66 "data/maps/Hazolt_Mart/scripts.pory"
	release
	return

Tasmin_Warehouse_4:
# 71 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Warehouse_Text_7
# 75 "data/maps/Hazolt_Mart/scripts.pory"
	waitmessage
# 76 "data/maps/Hazolt_Mart/scripts.pory"
	release
	return


Tasmin_Field_Script::
# 100 "data/maps/Hazolt_Mart/scripts.pory"
	lockall
# 101 "data/maps/Hazolt_Mart/scripts.pory"
	faceplayer
# 102 "data/maps/Hazolt_Mart/scripts.pory"
	goto_if_unset FLAG_MARA_FIELD_TEST_STARTED, Tasmin_Field_Script_2
# 108 "data/maps/Hazolt_Mart/scripts.pory"
	goto_if_unset FLAG_TASMIN_CLEARED, Tasmin_Field_Script_4
# 126 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Field_Script_Text_5
# 127 "data/maps/Hazolt_Mart/scripts.pory"
	releaseall
	return

Tasmin_Field_Script_2:
# 103 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Field_Script_Text_0
# 105 "data/maps/Hazolt_Mart/scripts.pory"
	releaseall
	end

Tasmin_Field_Script_4:
# 109 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Field_Script_Text_1, MSGBOX_YESNO
# 111 "data/maps/Hazolt_Mart/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Tasmin_Field_Script_7
# 120 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Field_Script_Text_4
# 121 "data/maps/Hazolt_Mart/scripts.pory"
	releaseall
	return

Tasmin_Field_Script_7:
# 112 "data/maps/Hazolt_Mart/scripts.pory"
	trainerbattle_no_intro TRAINER_TASMIN_LOGISTICS, Tasmin_Field_Script_Text_2
# 113 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Tasmin_Field_Script_Text_3
# 116 "data/maps/Hazolt_Mart/scripts.pory"
	setflag FLAG_TASMIN_CLEARED
# 117 "data/maps/Hazolt_Mart/scripts.pory"
	releaseall
	return


Hazolt_MartEmployee::
# 132 "data/maps/Hazolt_Mart/scripts.pory"
	lock
# 133 "data/maps/Hazolt_Mart/scripts.pory"
	faceplayer
# 134 "data/maps/Hazolt_Mart/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Hazolt_MartEmployee_2
# 137 "data/maps/Hazolt_Mart/scripts.pory"
	goto_if_unset FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_MartEmployee_9
# 140 "data/maps/Hazolt_Mart/scripts.pory"
	message Hazolt_MartEmployee_Text_2
Hazolt_MartEmployee_1:
# 143 "data/maps/Hazolt_Mart/scripts.pory"
	waitmessage
# 144 "data/maps/Hazolt_Mart/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Hazolt_MartEmployee_6
# 147 "data/maps/Hazolt_Mart/scripts.pory"
	pokemart Hazolt_MartBase
Hazolt_MartEmployee_5:
# 149 "data/maps/Hazolt_Mart/scripts.pory"
	msgbox Hazolt_MartEmployee_Text_3
# 150 "data/maps/Hazolt_Mart/scripts.pory"
	applymovement LOCALID_HAZOLT_MART_CLERK, Hazolt_MartEmployee_Movement_0
# 151 "data/maps/Hazolt_Mart/scripts.pory"
	release
	return

Hazolt_MartEmployee_2:
# 135 "data/maps/Hazolt_Mart/scripts.pory"
	message Hazolt_MartEmployee_Text_0
	goto Hazolt_MartEmployee_1

Hazolt_MartEmployee_6:
# 145 "data/maps/Hazolt_Mart/scripts.pory"
	pokemart Hazolt_MartQuartziteClear
	goto Hazolt_MartEmployee_5

Hazolt_MartEmployee_9:
# 138 "data/maps/Hazolt_Mart/scripts.pory"
	message Hazolt_MartEmployee_Text_1
	goto Hazolt_MartEmployee_1


	.align 2
# 154 "data/maps/Hazolt_Mart/scripts.pory"
Hazolt_MartBase:
# 155 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 156 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 157 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_POTION
# 158 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 159 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 160 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 161 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

	.align 2
# 164 "data/maps/Hazolt_Mart/scripts.pory"
Hazolt_MartQuartziteClear:
# 165 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 166 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 167 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 168 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_POTION
# 169 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 170 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 171 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 172 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 173 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 174 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 175 "data/maps/Hazolt_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_NONE

# 37 "data/maps/Hazolt_Mart/scripts.pory"
Tasmin_Warehouse_Movement_0:
# 37 "data/maps/Hazolt_Mart/scripts.pory"
	emote_exclamation_mark
	step_end

# 80 "data/maps/Hazolt_Mart/scripts.pory"
Tasmin_Warehouse_Movement_1:
# 80 "data/maps/Hazolt_Mart/scripts.pory"
	emote_question_mark
	step_end

# 150 "data/maps/Hazolt_Mart/scripts.pory"
Hazolt_MartEmployee_Movement_0:
# 150 "data/maps/Hazolt_Mart/scripts.pory"
	face_right
	step_end

Hazolt_MartLocked_Text_0:
# 5 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Hazolt supply room, authorized\n"
	.string "personnel only!\p"
	.string "You're banned, Corin.\n"
	.string "(Yes, still.)\p"
	.string "-Tasmin$"

Hazolt_MartLocked_Text_1:
# 12 "data/maps/Hazolt_Mart/scripts.pory"
	.string "You don't have the key to enter the\n"
	.string "warehouse.$"

Hazolt_MartLocked_Text_2:
# 18 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Enter the warehouse?$"

Hazolt_MartLocked_Text_3:
# 24 "data/maps/Hazolt_Mart/scripts.pory"
	.string "You decided not to enter the\n"
	.string "warehouse.$"

Tasmin_Warehouse_Text_0:
# 35 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: Oh, hey! Mara sent you, right?\n"
	.string "Give me a second to grab the spare\l"
	.string "storage key.$"

Tasmin_Warehouse_Text_1:
# 39 "data/maps/Hazolt_Mart/scripts.pory"
	.string "We had an extra made after Corin's\n"
	.string "'mysteriously disappeared.'\p"
	.string "He swears he was 'borrowing it for field\n"
	.string "work.'\n"
	.string "I swore I'd label everything twice after\l"
	.string "that.\p"
	.string "Anyway, about those shipwrecked\n"
	.string "supplies…$"

Tasmin_Warehouse_Text_2:
# 44 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: We've spotted suspicious\n"
	.string "activity around the wreck site.\p"
	.string "And if those are Garrick's pirates,\n"
	.string "watch for dirty tricks.\p"
	.string "Some of them toss items to heal\n"
	.string "or boost their Pokemon mid-fight.$"

Tasmin_Warehouse_Text_3:
# 52 "data/maps/Hazolt_Mart/scripts.pory"
	.string "You received the Storage Key!$"

Tasmin_Warehouse_Text_4:
# 54 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: This gets you inside the ship.\n"
	.string "Take these too, just in case.$"

Tasmin_Warehouse_Text_5:
# 59 "data/maps/Hazolt_Mart/scripts.pory"
	.string "You received 5 Full Heals and\n"
	.string "5 Super Potions!$"

Tasmin_Warehouse_Text_6:
# 61 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: Stay sharp out there, Ranger.\n"
	.string "If they throw items, watch out for\l"
	.string "their effects!\p"
	.string "And if Corin asks, no, I did not organize\n"
	.string "his bag for him. Again.$"

Tasmin_Warehouse_Text_7:
# 71 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: Watch your back near that\n"
	.string "wreck.\n"
	.string "Something is very wrong there.\p"
	.string "Don't let pirates stall the fight while\n"
	.string "they patch up their team with items.$"

Tasmin_Warehouse_Text_8:
# 79 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: You actually dealt with pirates\n"
	.string "AND Team Hive? That's insane!$"

Tasmin_Warehouse_Text_9:
# 82 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: Their captain, Garrick… I've\n"
	.string "heard\n"
	.string "the name. That's bad news.\p"
	.string "Pirates like his crew don't just\n"
	.string "disappear\n"
	.string "because they lost once.\p"
	.string "Restock when you can. If they return,\n"
	.string "expect the worst.$"

Tasmin_Warehouse_Text_10:
# 88 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: Also… if Corin says I go easy\n"
	.string "on him, he's exaggerating.\p"
	.string "I just prefer not to waste energy\n"
	.string "arguing when there is work to do.$"

Tasmin_Field_Script_Text_0:
# 103 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: I'm stocking up here, I'll have\n"
	.string "your supplies ready soon.\p"
	.string "Everything is sorted by type, then size,\n"
	.string "$"

Tasmin_Field_Script_Text_1:
# 109 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: Sorted and labeled. Want a\n"
	.string "battle?\n"
	.string "I recommend a few extra teammates\l"
	.string "first.$"

Tasmin_Field_Script_Text_2:
# 112 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: Put me away like spare rope!$"

Tasmin_Field_Script_Text_3:
# 113 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: Let's meet at HQ with Mara\n"
	.string "after you find the others!\p"
	.string "And if Corin asks, tell him I am not\n"
	.string "covering his inventory 'mistakes'\l"
	.string "anymore.$"

Tasmin_Field_Script_Text_4:
# 120 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: No worries, I'll be here stocking\n"
	.string "supplies.$"

Tasmin_Field_Script_Text_5:
# 126 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Tasmin: I'll wrap up here soon.$"

Hazolt_MartEmployee_Text_0:
# 135 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Welcome back. New stock is in.$"

Hazolt_MartEmployee_Text_1:
# 138 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Welcome. Need anything?$"

Hazolt_MartEmployee_Text_2:
# 140 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Welcome back. Need supplies?$"

Hazolt_MartEmployee_Text_3:
# 149 "data/maps/Hazolt_Mart/scripts.pory"
	.string "Thanks. Come again!$"
