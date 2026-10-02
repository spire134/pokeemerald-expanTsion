Static_Bridge_MapScripts::
	.byte 0


OldRod_Guy::
# 4 "data/maps/Static_Bridge/scripts.pory"
	lock
# 5 "data/maps/Static_Bridge/scripts.pory"
	faceplayer
# 6 "data/maps/Static_Bridge/scripts.pory"
	goto_if_unset FLAG_RECEIVED_OLD_ROD, OldRod_Guy_2
# 13 "data/maps/Static_Bridge/scripts.pory"
	msgbox OldRod_Guy_Text_1
OldRod_Guy_1:
# 15 "data/maps/Static_Bridge/scripts.pory"
	release
	return

OldRod_Guy_2:
# 7 "data/maps/Static_Bridge/scripts.pory"
	msgbox OldRod_Guy_Text_0
# 9 "data/maps/Static_Bridge/scripts.pory"
	giveitem ITEM_OLD_ROD
# 10 "data/maps/Static_Bridge/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
	goto OldRod_Guy_1


Static_Bridge_Sign::
# 19 "data/maps/Static_Bridge/scripts.pory"
	lock
# 20 "data/maps/Static_Bridge/scripts.pory"
	msgbox Static_Bridge_Sign_Text_0
# 22 "data/maps/Static_Bridge/scripts.pory"
	release
	return


Static_Bridge_Doubter::
# 26 "data/maps/Static_Bridge/scripts.pory"
	lock
# 27 "data/maps/Static_Bridge/scripts.pory"
	faceplayer
# 28 "data/maps/Static_Bridge/scripts.pory"
	goto_if_unset FLAG_STATIC_DRONE_FIGHT, Static_Bridge_Doubter_2
# 36 "data/maps/Static_Bridge/scripts.pory"
	goto_if_unset FLAG_STATIC_BRIDGE_APOLOGY_GIFT, Static_Bridge_Doubter_5
# 44 "data/maps/Static_Bridge/scripts.pory"
	msgbox Static_Bridge_Doubter_Text_3
Static_Bridge_Doubter_4:
# 48 "data/maps/Static_Bridge/scripts.pory"
	release
	end

Static_Bridge_Doubter_2:
# 29 "data/maps/Static_Bridge/scripts.pory"
	msgbox Static_Bridge_Doubter_Text_0
# 32 "data/maps/Static_Bridge/scripts.pory"
	release
	end

Static_Bridge_Doubter_5:
# 37 "data/maps/Static_Bridge/scripts.pory"
	msgbox Static_Bridge_Doubter_Text_1
# 40 "data/maps/Static_Bridge/scripts.pory"
	giveitem ITEM_SUPER_POTION, 5
# 41 "data/maps/Static_Bridge/scripts.pory"
	msgbox Static_Bridge_Doubter_Text_2
# 42 "data/maps/Static_Bridge/scripts.pory"
	setflag FLAG_STATIC_BRIDGE_APOLOGY_GIFT
	goto Static_Bridge_Doubter_4


Team_Hive_Drone::
# 53 "data/maps/Static_Bridge/scripts.pory"
	lock
# 54 "data/maps/Static_Bridge/scripts.pory"
	faceplayer
# 56 "data/maps/Static_Bridge/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Team_Hive_Drone_1
# 79 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_0
# 80 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_3
# 82 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_1
# 83 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 84 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_4
# 86 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_2
# 87 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_2
# 88 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 90 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_4
# 91 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_4
# 92 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 94 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_5
# 97 "data/maps/Static_Bridge/scripts.pory"
	trainerbattle_two_trainers TRAINER_BRIDGE_TOPDRONE, Team_Hive_Drone_Text_6, TRAINER_BRIDGE_BOTDRONE, Team_Hive_Drone_Text_7
# 99 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_5
# 100 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_5
# 101 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 103 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_8
# 104 "data/maps/Static_Bridge/scripts.pory"
	waitmessage
# 106 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_6
# 107 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_6
# 108 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 110 "data/maps/Static_Bridge/scripts.pory"
	removeobject LOCALID_TOPDRONE
# 111 "data/maps/Static_Bridge/scripts.pory"
	removeobject LOCALID_BOTDRONE
# 112 "data/maps/Static_Bridge/scripts.pory"
	setflag FLAG_STATIC_DRONE_FIGHT
# 113 "data/maps/Static_Bridge/scripts.pory"
	release
	return

Team_Hive_Drone_1:
# 57 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_0
# 58 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_0
# 61 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_1
# 62 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 63 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_1
# 66 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_2
# 67 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_2
# 68 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 70 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_3
# 71 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_3
# 72 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 74 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_2
# 76 "data/maps/Static_Bridge/scripts.pory"
	release
	return


# 57 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_0:
# 57 "data/maps/Static_Bridge/scripts.pory"
	walk_in_place_down
	step_end

# 61 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_1:
# 61 "data/maps/Static_Bridge/scripts.pory"
	walk_in_place_up
	step_end

# 66 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_2:
# 66 "data/maps/Static_Bridge/scripts.pory"
	face_right
	step_end

# 70 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_3:
# 70 "data/maps/Static_Bridge/scripts.pory"
	emote_question_mark
	step_end

# 90 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_4:
# 90 "data/maps/Static_Bridge/scripts.pory"
	emote_exclamation_mark
	step_end

# 99 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_5:
# 99 "data/maps/Static_Bridge/scripts.pory"
	jump_in_place_right
	step_end

# 106 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_6:
# 106 "data/maps/Static_Bridge/scripts.pory"
	walk_fast_left
# 106 "data/maps/Static_Bridge/scripts.pory"
	walk_fast_left
# 106 "data/maps/Static_Bridge/scripts.pory"
	walk_fast_left
# 106 "data/maps/Static_Bridge/scripts.pory"
	walk_fast_left
# 106 "data/maps/Static_Bridge/scripts.pory"
	walk_fast_left
# 106 "data/maps/Static_Bridge/scripts.pory"
	walk_fast_left
# 106 "data/maps/Static_Bridge/scripts.pory"
	walk_fast_left
	step_end

OldRod_Guy_Text_0:
# 7 "data/maps/Static_Bridge/scripts.pory"
	.string "Hey there! You look like you know your\n"
	.string "way around a rod and reel.\p"
	.string "Here, take this Old Rod. It's not much,\n"
	.string "but it'll get you started.$"

OldRod_Guy_Text_1:
# 13 "data/maps/Static_Bridge/scripts.pory"
	.string "I fish here to catch Tadbulb, they make\n"
	.string "a great nightlight!$"

Static_Bridge_Sign_Text_0:
# 20 "data/maps/Static_Bridge/scripts.pory"
	.string "West - Quartzite City\n"
	.string "East - Hazolt Village$"

Static_Bridge_Doubter_Text_0:
# 29 "data/maps/Static_Bridge/scripts.pory"
	.string "Hive folks said Rangers were all talk.\p"
	.string "After the storm and pirates, I can't\n"
	.string "argue.\p"
	.string "You are all a sniveling bunch!$"

Static_Bridge_Doubter_Text_1:
# 37 "data/maps/Static_Bridge/scripts.pory"
	.string "I was wrong about the Rangers.\p"
	.string "You drove those Hive Drones off this\n"
	.string "bridge when nobody else would.\p"
	.string "Take these as an apology, and as\n"
	.string "thanks.$"

Static_Bridge_Doubter_Text_2:
# 41 "data/maps/Static_Bridge/scripts.pory"
	.string "{PLAYER} received 5 Super Potions!$"

Static_Bridge_Doubter_Text_3:
# 44 "data/maps/Static_Bridge/scripts.pory"
	.string "Sorry I said Rangers were useless.\p"
	.string "Thanks for opening up the bridge.\p"
	.string "I won't forget that.$"

Team_Hive_Drone_Text_0:
# 58 "data/maps/Static_Bridge/scripts.pory"
	.string "DRONE: Bzz! The swarm grows larger\n"
	.string "every day.\p"
	.string "The Seer will be most pleased with our\n"
	.string "new recruits. Buzz!$"

Team_Hive_Drone_Text_1:
# 63 "data/maps/Static_Bridge/scripts.pory"
	.string "Hive Drone: Buzz-buzz! Affirmative!\p"
	.string "...Wait, do you hear footsteps?$"

Team_Hive_Drone_Text_2:
# 74 "data/maps/Static_Bridge/scripts.pory"
	.string "Hive Drone: A Ranger? You don't have\n"
	.string "the edge to challenge us.\p"
	.string "Scram before my Skorupi gets\n"
	.string "pinch-happy!$"

Team_Hive_Drone_Text_3:
# 80 "data/maps/Static_Bridge/scripts.pory"
	.string "Hive Drone: The Seer's grand design is\n"
	.string "nearly complete! Buzz!$"

Team_Hive_Drone_Text_4:
# 84 "data/maps/Static_Bridge/scripts.pory"
	.string "Hive Drone: Buzz-buzz! I can't wait to\n"
	.string "let Venipede roll all over these\l"
	.string "Rangers!$"

Team_Hive_Drone_Text_5:
# 94 "data/maps/Static_Bridge/scripts.pory"
	.string "Hive Drone: Bzz! Look out, it's that\n"
	.string "Ranger again! And they look... slightly\l"
	.string "more annoying!\p"
	.string "The Seer ordered us to ignore the\n"
	.string "Rangers, but my stingers are itching!\l"
	.string "Let's swarm 'em!$"

Team_Hive_Drone_Text_6:
# 97 "data/maps/Static_Bridge/scripts.pory"
	.string "Skorupi's shell cracked!$"

Team_Hive_Drone_Text_7:
# 97 "data/maps/Static_Bridge/scripts.pory"
	.string "Bzz! My spores were ineffective!$"

Team_Hive_Drone_Text_8:
# 103 "data/maps/Static_Bridge/scripts.pory"
	.string "Hive Drone: Gah! They swatted us! Fall\n"
	.string "back to the hive! Buzz-buzz!$"
