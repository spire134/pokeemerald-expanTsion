Hazolt_ItemHouse_MapScripts::
	.byte 0


Karate_Master::
# 4 "data/maps/Hazolt_ItemHouse/scripts.pory"
	lockall
# 5 "data/maps/Hazolt_ItemHouse/scripts.pory"
	applymovement LOCALID_ITEM_MONK, Karate_Master_Movement_0
# 6 "data/maps/Hazolt_ItemHouse/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Karate_Master_2
# 11 "data/maps/Hazolt_ItemHouse/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Karate_Master_8
# 16 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_2
Karate_Master_1:
# 21 "data/maps/Hazolt_ItemHouse/scripts.pory"
	goto_if_set FLAG_SHUDDERWOOD_MANSION_CLEARED, Karate_Master_6
# 38 "data/maps/Hazolt_ItemHouse/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Karate_Master_12
# 54 "data/maps/Hazolt_ItemHouse/scripts.pory"
	checkitem ITEM_MACHO_BRACE, 1
# 55 "data/maps/Hazolt_ItemHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Karate_Master_19
# 61 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_10
Karate_Master_18:
# 63 "data/maps/Hazolt_ItemHouse/scripts.pory"
	releaseall
	end

Karate_Master_2:
# 7 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_0
	goto Karate_Master_1

Karate_Master_6:
# 22 "data/maps/Hazolt_ItemHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHOICE_BAND, Karate_Master_15
# 30 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_5
Karate_Master_14:
# 34 "data/maps/Hazolt_ItemHouse/scripts.pory"
	releaseall
	end

Karate_Master_8:
# 12 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_1
	goto Karate_Master_1

Karate_Master_12:
# 39 "data/maps/Hazolt_ItemHouse/scripts.pory"
	goto_if_unset FLAG_RECEIVED_MUSCLE_BAND, Karate_Master_23
# 47 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_8
Karate_Master_22:
# 50 "data/maps/Hazolt_ItemHouse/scripts.pory"
	releaseall
	end

Karate_Master_15:
# 23 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_3
# 25 "data/maps/Hazolt_ItemHouse/scripts.pory"
	giveitem ITEM_CHOICE_BAND
# 26 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_4
# 27 "data/maps/Hazolt_ItemHouse/scripts.pory"
	setflag FLAG_RECEIVED_CHOICE_BAND
# 28 "data/maps/Hazolt_ItemHouse/scripts.pory"
	waitmessage
	goto Karate_Master_14

Karate_Master_19:
# 56 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_9
# 58 "data/maps/Hazolt_ItemHouse/scripts.pory"
	giveitem ITEM_MACHO_BRACE
# 59 "data/maps/Hazolt_ItemHouse/scripts.pory"
	setflag FLAG_RECEIVED_MACHO_BRACE
	goto Karate_Master_18

Karate_Master_23:
# 40 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_6
# 42 "data/maps/Hazolt_ItemHouse/scripts.pory"
	giveitem ITEM_MUSCLE_BAND
# 43 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Master_Text_7
# 44 "data/maps/Hazolt_ItemHouse/scripts.pory"
	setflag FLAG_RECEIVED_MUSCLE_BAND
# 45 "data/maps/Hazolt_ItemHouse/scripts.pory"
	waitmessage
	goto Karate_Master_22


Karate_Trainee::
# 68 "data/maps/Hazolt_ItemHouse/scripts.pory"
	lockall
# 69 "data/maps/Hazolt_ItemHouse/scripts.pory"
	checkitem ITEM_MACHO_BRACE, 1
# 70 "data/maps/Hazolt_ItemHouse/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Karate_Trainee_2
# 74 "data/maps/Hazolt_ItemHouse/scripts.pory"
	goto_if_set FLAG_SHUDDERWOOD_MANSION_CLEARED, Karate_Trainee_5
# 79 "data/maps/Hazolt_ItemHouse/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Karate_Trainee_8
# 83 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Trainee_Text_3
Karate_Trainee_1:
# 88 "data/maps/Hazolt_ItemHouse/scripts.pory"
	releaseall
	end

Karate_Trainee_2:
# 71 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Trainee_Text_0
	goto Karate_Trainee_1

Karate_Trainee_5:
# 75 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Trainee_Text_1
	goto Karate_Trainee_1

Karate_Trainee_8:
# 80 "data/maps/Hazolt_ItemHouse/scripts.pory"
	msgbox Karate_Trainee_Text_2
	goto Karate_Trainee_1


# 5 "data/maps/Hazolt_ItemHouse/scripts.pory"
Karate_Master_Movement_0:
# 5 "data/maps/Hazolt_ItemHouse/scripts.pory"
	face_player
	step_end

Karate_Master_Text_0:
# 7 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "Discipline will save this region.\p"
	.string "The pirates tested your nerve, Team\n"
	.string "Hive tested your judgment.\p"
	.string "Both are defeated by the same habit:\n"
	.string "steady work every day.$"

Karate_Master_Text_1:
# 12 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "You drove pirates off the wreck, good.\p"
	.string "Do not mistake one victory for mastery.\p"
	.string "Team Hive still pressures the weak\n"
	.string "where discipline is absent.$"

Karate_Master_Text_2:
# 16 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "One earns results one day at a time.\p"
	.string "There is no rushing true technique.\p"
	.string "$"

Karate_Master_Text_3:
# 23 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "You've crossed Shudderwood and\n"
	.string "prevailed.\p"
	.string "Take this Choice Band. Wield it with\n"
	.string "intent.$"

Karate_Master_Text_4:
# 26 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "{PLAYER} received a Choice Band!$"

Karate_Master_Text_5:
# 30 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "You already carry a Choice Band.\p"
	.string "When you strap it on, commit to offense.\p"
	.string "Choose your first attack wisely and\n"
	.string "press the advantage.$"

Karate_Master_Text_6:
# 40 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "You've proven your fundamentals in\n"
	.string "Quartzite.\p"
	.string "Now take this and sharpen your physical\n"
	.string "pressure.$"

Karate_Master_Text_7:
# 43 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "{PLAYER} received a Muscle Band!$"

Karate_Master_Text_8:
# 47 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "You have the Muscle Band for this stage\n"
	.string "of your training.\p"
	.string "It's a clean, reliable boost for physical\n"
	.string "offense in any matchup.$"

Karate_Master_Text_9:
# 56 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "Here, take this. It will help you train\n"
	.string "harder.\p"
	.string "Weight teaches patience better than\n"
	.string "any lecture.$"

Karate_Master_Text_10:
# 61 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "Weighted gear slows you down, but\n"
	.string "hardens your body and decisions.$"

Karate_Trainee_Text_0:
# 71 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "Master gives out a Macho Brace to his\n"
	.string "trusted trainees.\p"
	.string "It slows your Pokemon, but the training\n"
	.string "payoff is huge.\p"
	.string "$"

Karate_Trainee_Text_1:
# 75 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "That Choice Band is intense!\p"
	.string "It locks your Pokemon into one move, so\n"
	.string "skip setup and commit to attacks.\p"
	.string "Pick the right move first, then keep\n"
	.string "swinging.$"

Karate_Trainee_Text_2:
# 80 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "Muscle Band is awesome for all-around\n"
	.string "physical offense.\p"
	.string "No gimmick, just steady extra punch on\n"
	.string "every physical hit.$"

Karate_Trainee_Text_3:
# 83 "data/maps/Hazolt_ItemHouse/scripts.pory"
	.string "Macho Brace is for training grit.\p"
	.string "It slows you down now so your team\n"
	.string "grows tougher later.$"
