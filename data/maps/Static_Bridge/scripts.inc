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
	goto_if_unset FLAG_BADGE01_GET, Team_Hive_Drone_1
# 66 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_0
# 67 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_2
# 68 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_3
# 69 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_4
# 70 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_4
# 71 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 72 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_3
# 74 "data/maps/Static_Bridge/scripts.pory"
	trainerbattle_two_trainers TRAINER_BRIDGE_TOPDRONE, Team_Hive_Drone_Text_4, TRAINER_BRIDGE_BOTDRONE, Team_Hive_Drone_Text_5
# 75 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_5
# 76 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_5
# 77 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 78 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_6
# 79 "data/maps/Static_Bridge/scripts.pory"
	waitmessage
# 80 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_6
# 81 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_6
# 82 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 83 "data/maps/Static_Bridge/scripts.pory"
	removeobject LOCALID_TOPDRONE
# 84 "data/maps/Static_Bridge/scripts.pory"
	removeobject LOCALID_BOTDRONE
# 85 "data/maps/Static_Bridge/scripts.pory"
	setflag FLAG_STATIC_DRONE_FIGHT
# 86 "data/maps/Static_Bridge/scripts.pory"
	release
	return

Team_Hive_Drone_1:
# 55 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_TOPDRONE, Team_Hive_Drone_Movement_0
# 56 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_0
# 58 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_1
# 59 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 60 "data/maps/Static_Bridge/scripts.pory"
	msgbox Team_Hive_Drone_Text_1
# 61 "data/maps/Static_Bridge/scripts.pory"
	applymovement LOCALID_BOTDRONE, Team_Hive_Drone_Movement_2
# 62 "data/maps/Static_Bridge/scripts.pory"
	waitmovement 0
# 63 "data/maps/Static_Bridge/scripts.pory"
	release
	return


# 55 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_0:
# 55 "data/maps/Static_Bridge/scripts.pory"
	walk_in_place_down
	step_end

# 58 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_1:
# 58 "data/maps/Static_Bridge/scripts.pory"
	walk_in_place_up
# 58 "data/maps/Static_Bridge/scripts.pory"
	face_right
	step_end

# 61 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_2:
# 61 "data/maps/Static_Bridge/scripts.pory"
	face_up
	step_end

# 68 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_3:
# 68 "data/maps/Static_Bridge/scripts.pory"
	emote_exclamation_mark
# 68 "data/maps/Static_Bridge/scripts.pory"
	walk_in_place_up
	step_end

# 69 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_4:
# 69 "data/maps/Static_Bridge/scripts.pory"
	face_right
	step_end

# 75 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_5:
# 75 "data/maps/Static_Bridge/scripts.pory"
	walk_in_place_right
	step_end

# 80 "data/maps/Static_Bridge/scripts.pory"
Team_Hive_Drone_Movement_6:
# 80 "data/maps/Static_Bridge/scripts.pory"
	walk_faster_left
# 80 "data/maps/Static_Bridge/scripts.pory"
	walk_faster_left
# 80 "data/maps/Static_Bridge/scripts.pory"
	walk_faster_left
# 80 "data/maps/Static_Bridge/scripts.pory"
	walk_faster_left
# 80 "data/maps/Static_Bridge/scripts.pory"
	walk_faster_left
# 80 "data/maps/Static_Bridge/scripts.pory"
	walk_faster_left
# 80 "data/maps/Static_Bridge/scripts.pory"
	walk_faster_left
	step_end

OldRod_Guy_Text_0:
# 7 "data/maps/Static_Bridge/scripts.pory"
	.string "FISHER DON: Hey there! You look like\n"
	.string "you know your way around a rod and reel.\p"
	.string "Here, take this Old Rod. It's not much,\n"
	.string "but it'll get you started.$"

OldRod_Guy_Text_1:
# 13 "data/maps/Static_Bridge/scripts.pory"
	.string "FISHER DON: I fish here to catch\n"
	.string "Tadbulb, they make a great nightlight!$"

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
	.string "I said Rangers were useless.\p"
	.string "Then you proved me wrong on this very\n"
	.string "bridge.\p"
	.string "I won't forget that.$"

Team_Hive_Drone_Text_0:
# 56 "data/maps/Static_Bridge/scripts.pory"
	.string "DRONE: We've gotten quite a few\n"
	.string "recruits to join Team Hive recently.\p"
	.string "The seer will very pleased.$"

Team_Hive_Drone_Text_1:
# 60 "data/maps/Static_Bridge/scripts.pory"
	.string "DRONE: Oh, another Ranger. But you look\n"
	.string "pretty weak. Maybe another time.$"

Team_Hive_Drone_Text_2:
# 67 "data/maps/Static_Bridge/scripts.pory"
	.string "DRONE: I can't wait for the Seer to\n"
	.string "return.$"

Team_Hive_Drone_Text_3:
# 72 "data/maps/Static_Bridge/scripts.pory"
	.string "DRONE: Oh that look in your eye, you\n"
	.string "have a problem with us?\p"
	.string "The Seer said not to battle Rangers,\n"
	.string "but you're annoying us!$"

Team_Hive_Drone_Text_4:
# 74 "data/maps/Static_Bridge/scripts.pory"
	.string "DRONE: You're pretty strong for a Ranger.$"

Team_Hive_Drone_Text_5:
# 74 "data/maps/Static_Bridge/scripts.pory"
	.string "DRONE: Uh-oh, I'm out of bugs!$"

Team_Hive_Drone_Text_6:
# 78 "data/maps/Static_Bridge/scripts.pory"
	.string "DRONE: Gah! You're stronger than we\n"
	.string "thought! Retreat!$"
