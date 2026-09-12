MAGNET_CAVE_MapScripts::
	.byte 0


Corin_Field_Script::
# 4 "data/maps/MAGNET_CAVE/scripts.pory"
	lockall
# 5 "data/maps/MAGNET_CAVE/scripts.pory"
	faceplayer
# 6 "data/maps/MAGNET_CAVE/scripts.pory"
	goto_if_unset FLAG_MARA_FIELD_TEST_STARTED, Corin_Field_Script_2
# 11 "data/maps/MAGNET_CAVE/scripts.pory"
	goto_if_unset FLAG_CORIN_CLEARED, Corin_Field_Script_4
# 27 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Corin_Field_Script_Text_5
# 28 "data/maps/MAGNET_CAVE/scripts.pory"
	releaseall
	end

Corin_Field_Script_2:
# 7 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Corin_Field_Script_Text_0
# 8 "data/maps/MAGNET_CAVE/scripts.pory"
	releaseall
	end

Corin_Field_Script_4:
# 12 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Corin_Field_Script_Text_1, MSGBOX_YESNO
# 13 "data/maps/MAGNET_CAVE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Corin_Field_Script_7
# 21 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Corin_Field_Script_Text_4
# 22 "data/maps/MAGNET_CAVE/scripts.pory"
	releaseall
	return

Corin_Field_Script_7:
# 14 "data/maps/MAGNET_CAVE/scripts.pory"
	trainerbattle_no_intro TRAINER_CORIN_RESCUE, Corin_Field_Script_Text_2
# 15 "data/maps/MAGNET_CAVE/scripts.pory"
	setflag FLAG_CORIN_CLEARED
# 16 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Corin_Field_Script_Text_3
# 17 "data/maps/MAGNET_CAVE/scripts.pory"
	waitmessage
# 18 "data/maps/MAGNET_CAVE/scripts.pory"
	releaseall
	return


Magnet_Maniac_1::
# 34 "data/maps/MAGNET_CAVE/scripts.pory"
	trainerbattle_single TRAINER_WYATT, Magnet_Maniac_1_Text_0, Magnet_Maniac_1_Text_1
# 38 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Magnet_Maniac_1_Text_2, MSGBOX_AUTOCLOSE
# 39 "data/maps/MAGNET_CAVE/scripts.pory"
	waitmessage
	return


Magnet_Hiker_1::
# 43 "data/maps/MAGNET_CAVE/scripts.pory"
	trainerbattle_single TRAINER_DEVAN, Magnet_Hiker_1_Text_0, Magnet_Hiker_1_Text_1
# 47 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Magnet_Hiker_1_Text_2, MSGBOX_AUTOCLOSE
# 48 "data/maps/MAGNET_CAVE/scripts.pory"
	waitmessage
	return


Magnet_Cave_Ore_Maniac::
# 52 "data/maps/MAGNET_CAVE/scripts.pory"
	lock
# 53 "data/maps/MAGNET_CAVE/scripts.pory"
	faceplayer
# 54 "data/maps/MAGNET_CAVE/scripts.pory"
	checkitem ITEM_ITEMFINDER
# 55 "data/maps/MAGNET_CAVE/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Magnet_Cave_Ore_Maniac_2
# 60 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Magnet_Cave_Ore_Maniac_Text_1, MSGBOX_YESNO
# 62 "data/maps/MAGNET_CAVE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Magnet_Cave_Ore_Maniac_4
# 72 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Magnet_Cave_Ore_Maniac_Text_5
# 73 "data/maps/MAGNET_CAVE/scripts.pory"
	release
	return

Magnet_Cave_Ore_Maniac_2:
# 56 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Magnet_Cave_Ore_Maniac_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/MAGNET_CAVE/scripts.pory"
	release
	end

Magnet_Cave_Ore_Maniac_4:
# 63 "data/maps/MAGNET_CAVE/scripts.pory"
	trainerbattle_no_intro TRAINER_GARRISON, Magnet_Cave_Ore_Maniac_Text_2
# 64 "data/maps/MAGNET_CAVE/scripts.pory"
	waitstate
# 65 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Magnet_Cave_Ore_Maniac_Text_3
# 66 "data/maps/MAGNET_CAVE/scripts.pory"
	giveitem ITEM_ITEMFINDER
# 67 "data/maps/MAGNET_CAVE/scripts.pory"
	waitse
# 68 "data/maps/MAGNET_CAVE/scripts.pory"
	msgbox Magnet_Cave_Ore_Maniac_Text_4
# 69 "data/maps/MAGNET_CAVE/scripts.pory"
	release
	return


Corin_Field_Script_Text_0:
# 7 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "Corin: I hope your feet are well, it sure\n"
	.string "is rocky in here. I'll need a break soon.$"

Corin_Field_Script_Text_1:
# 12 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "Corin: I'm all wrapped up here, want to\n"
	.string "have a practice bout?$"

Corin_Field_Script_Text_2:
# 14 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "Corin: Good stuff! How about a snack?$"

Corin_Field_Script_Text_3:
# 16 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "Corin: Let's meet at HQ with Tasmin!$"

Corin_Field_Script_Text_4:
# 21 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "Corin: I'll be here if you change your mind.$"

Corin_Field_Script_Text_5:
# 27 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "Corin: I'll wrap up here soon.$"

Magnet_Maniac_1_Text_0:
# 35 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "I live here in the caves, with my\n"
	.string "friends.$"

Magnet_Maniac_1_Text_1:
# 36 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "Those Hive Drones are messing with my\n"
	.string "home!$"

Magnet_Maniac_1_Text_2:
# 38 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "I'm too worried about my next meal to\n"
	.string "care about you.$"

Magnet_Hiker_1_Text_0:
# 44 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "These caves are full of surprises!$"

Magnet_Hiker_1_Text_1:
# 45 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "Exploring is half the fun of battling!$"

Magnet_Hiker_1_Text_2:
# 47 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "There's another one of you Rangers up\n"
	.string "ahead!$"

Magnet_Cave_Ore_Maniac_Text_0:
# 56 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "I hope you've found some rare ores with\n"
	.string "that Itemfinder!$"

Magnet_Cave_Ore_Maniac_Text_1:
# 60 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "I'm searching for rare ores in these\n"
	.string "caves.\p"
	.string "If you give me a good battle, I'll give\n"
	.string "you something, how about it?$"

Magnet_Cave_Ore_Maniac_Text_2:
# 63 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "Processed like ore!$"

Magnet_Cave_Ore_Maniac_Text_3:
# 65 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "Here, take this Ore Collector as a\n"
	.string "reward!$"

Magnet_Cave_Ore_Maniac_Text_4:
# 68 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "You can use it to find hidden items in\n"
	.string "caves and other places!$"

Magnet_Cave_Ore_Maniac_Text_5:
# 72 "data/maps/MAGNET_CAVE/scripts.pory"
	.string "I'm going to keep looking for ores then!$"
