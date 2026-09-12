Shudderwood_First_MapScripts::
	.byte 0


Shudderwood_Bug_Catcher_1::
# 4 "data/maps/Shudderwood_First/scripts.pory"
	trainerbattle_single TRAINER_RICK, Shudderwood_Bug_Catcher_1_Text_0, Shudderwood_Bug_Catcher_1_Text_1
# 8 "data/maps/Shudderwood_First/scripts.pory"
	msgbox Shudderwood_Bug_Catcher_1_Text_2, MSGBOX_AUTOCLOSE
# 9 "data/maps/Shudderwood_First/scripts.pory"
	waitmessage
	return


Shudderwood_Bug_Catcher_2::
# 13 "data/maps/Shudderwood_First/scripts.pory"
	trainerbattle_single TRAINER_LYLE, Shudderwood_Bug_Catcher_2_Text_0, Shudderwood_Bug_Catcher_2_Text_1
# 17 "data/maps/Shudderwood_First/scripts.pory"
	msgbox Shudderwood_Bug_Catcher_2_Text_2, MSGBOX_AUTOCLOSE
# 18 "data/maps/Shudderwood_First/scripts.pory"
	waitmessage
	return


Shudderwood_Hex_Maniac_1::
# 22 "data/maps/Shudderwood_First/scripts.pory"
	trainerbattle_single TRAINER_LEAH, Shudderwood_Hex_Maniac_1_Text_0, Shudderwood_Hex_Maniac_1_Text_1
# 26 "data/maps/Shudderwood_First/scripts.pory"
	msgbox Shudderwood_Hex_Maniac_1_Text_2, MSGBOX_AUTOCLOSE
# 29 "data/maps/Shudderwood_First/scripts.pory"
	waitmessage
	return


Shudderwood_Bug_Maniac::
# 33 "data/maps/Shudderwood_First/scripts.pory"
	trainerbattle_single TRAINER_TAYLOR, Shudderwood_Bug_Maniac_Text_0, Shudderwood_Bug_Maniac_Text_1
# 37 "data/maps/Shudderwood_First/scripts.pory"
	msgbox Shudderwood_Bug_Maniac_Text_2, MSGBOX_AUTOCLOSE
# 38 "data/maps/Shudderwood_First/scripts.pory"
	waitmessage
	return


Shudderwood_Berry_Picker::
# 42 "data/maps/Shudderwood_First/scripts.pory"
	lockall
# 43 "data/maps/Shudderwood_First/scripts.pory"
	faceplayer
# 44 "data/maps/Shudderwood_First/scripts.pory"
	msgbox Shudderwood_Berry_Picker_Text_0
# 46 "data/maps/Shudderwood_First/scripts.pory"
	checkitem ITEM_BLUK_BERRY
# 47 "data/maps/Shudderwood_First/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shudderwood_Berry_Picker_2
# 59 "data/maps/Shudderwood_First/scripts.pory"
	msgbox Shudderwood_Berry_Picker_Text_3
Shudderwood_Berry_Picker_1:
# 61 "data/maps/Shudderwood_First/scripts.pory"
	releaseall
	return

Shudderwood_Berry_Picker_2:
# 48 "data/maps/Shudderwood_First/scripts.pory"
	playse SE_PIN
# 49 "data/maps/Shudderwood_First/scripts.pory"
	applymovement LOCALID_BERRY_PICKER, Shudderwood_Berry_Picker_Movement_0
# 50 "data/maps/Shudderwood_First/scripts.pory"
	waitmovement 0
# 51 "data/maps/Shudderwood_First/scripts.pory"
	msgbox Shudderwood_Berry_Picker_Text_1
# 53 "data/maps/Shudderwood_First/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 1
# 54 "data/maps/Shudderwood_First/scripts.pory"
	removeitem ITEM_BLUK_BERRY, 1
# 55 "data/maps/Shudderwood_First/scripts.pory"
	msgbox Shudderwood_Berry_Picker_Text_2
# 56 "data/maps/Shudderwood_First/scripts.pory"
	playse SE_PIN
# 57 "data/maps/Shudderwood_First/scripts.pory"
	applymovement LOCALID_BERRY_PICKER, Shudderwood_Berry_Picker_Movement_1
# 58 "data/maps/Shudderwood_First/scripts.pory"
	waitmovement 0
	goto Shudderwood_Berry_Picker_1


# 49 "data/maps/Shudderwood_First/scripts.pory"
Shudderwood_Berry_Picker_Movement_0:
# 49 "data/maps/Shudderwood_First/scripts.pory"
	emote_exclamation_mark
	step_end

# 57 "data/maps/Shudderwood_First/scripts.pory"
Shudderwood_Berry_Picker_Movement_1:
# 57 "data/maps/Shudderwood_First/scripts.pory"
	emote_heart
	step_end

Shudderwood_Bug_Catcher_1_Text_0:
# 5 "data/maps/Shudderwood_First/scripts.pory"
	.string "What makes a Bug to be a Bug?\n"
	.string "Is it the way they look, or the way they\l"
	.string "move?\n"
	.string "$"

Shudderwood_Bug_Catcher_1_Text_1:
# 6 "data/maps/Shudderwood_First/scripts.pory"
	.string "Bugs are more than just their\n"
	.string "appearance!$"

Shudderwood_Bug_Catcher_1_Text_2:
# 8 "data/maps/Shudderwood_First/scripts.pory"
	.string "Bugs are cool! My Krabby is the best bug\n"
	.string "around!$"

Shudderwood_Bug_Catcher_2_Text_0:
# 14 "data/maps/Shudderwood_First/scripts.pory"
	.string "Even the same Pokémon can be\n"
	.string "different!\n"
	.string "I like to see what makes them unique.$"

Shudderwood_Bug_Catcher_2_Text_1:
# 15 "data/maps/Shudderwood_First/scripts.pory"
	.string "Your Pokémon are all special in their\n"
	.string "own way!$"

Shudderwood_Bug_Catcher_2_Text_2:
# 17 "data/maps/Shudderwood_First/scripts.pory"
	.string "These woods get creepier the deeper\n"
	.string "you go!$"

Shudderwood_Hex_Maniac_1_Text_0:
# 23 "data/maps/Shudderwood_First/scripts.pory"
	.string "The spirits are restless here. I can\n"
	.string "feel them watching us.$"

Shudderwood_Hex_Maniac_1_Text_1:
# 24 "data/maps/Shudderwood_First/scripts.pory"
	.string "The spirits seem calmer now.$"

Shudderwood_Hex_Maniac_1_Text_2:
# 27 "data/maps/Shudderwood_First/scripts.pory"
	.string "Just up ahead is a spooky old mansion!\n"
	.string "Some of those Hive Drones are lurking\l"
	.string "there.$"

Shudderwood_Bug_Maniac_Text_0:
# 34 "data/maps/Shudderwood_First/scripts.pory"
	.string "Bugs are full of potential!\n"
	.string "They grow strong quickly!$"

Shudderwood_Bug_Maniac_Text_1:
# 35 "data/maps/Shudderwood_First/scripts.pory"
	.string "Bugs can surprise you with their\n"
	.string "strength!$"

Shudderwood_Bug_Maniac_Text_2:
# 37 "data/maps/Shudderwood_First/scripts.pory"
	.string "Those Hive Goons keep messing with the\n"
	.string "bugs here!$"

Shudderwood_Berry_Picker_Text_0:
# 44 "data/maps/Shudderwood_First/scripts.pory"
	.string "If you find a Bluk Berry, could you bring\n"
	.string "it to me? I'll give you Juice for each\l"
	.string "one!$"

Shudderwood_Berry_Picker_Text_1:
# 51 "data/maps/Shudderwood_First/scripts.pory"
	.string "Oh, a Bluk Berry! Thank you so much!\n"
	.string "Here, take this as a reward.$"

Shudderwood_Berry_Picker_Text_2:
# 55 "data/maps/Shudderwood_First/scripts.pory"
	.string "I hope you and your Pokémon love the\n"
	.string "Berry Juice!$"

Shudderwood_Berry_Picker_Text_3:
# 59 "data/maps/Shudderwood_First/scripts.pory"
	.string "I'll be here if you find Bluk Berries!$"
