Shudderwood_Second_MapScripts::
	.byte 0


Shudderwood_LeftDrone::
# 4 "data/maps/Shudderwood_Second/scripts.pory"
	lock
# 5 "data/maps/Shudderwood_Second/scripts.pory"
	faceplayer
# 6 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_LeftDrone_Text_0
# 7 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_LEFT_DRONE, Shudderwood_LeftDrone_Movement_0
# 8 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_RIGHT_DRONE, Shudderwood_LeftDrone_Movement_1
# 9 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 10 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_LeftDrone_Text_1
# 11 "data/maps/Shudderwood_Second/scripts.pory"
	waitmessage
# 12 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_LEFT_DRONE, Shudderwood_LeftDrone_Movement_2
# 13 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_RIGHT_DRONE, Shudderwood_LeftDrone_Movement_2
# 14 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 15 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_LeftDrone_Text_2, MSGBOX_YESNO
# 17 "data/maps/Shudderwood_Second/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shudderwood_LeftDrone_1
# 22 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_LeftDrone_Text_4
# 23 "data/maps/Shudderwood_Second/scripts.pory"
	trainerbattle_two_trainers TRAINER_GRUNT_MAGMA_HIDEOUT_10, Shudderwood_LeftDrone_Text_5, TRAINER_GRUNT_MAGMA_HIDEOUT_11, Shudderwood_LeftDrone_Text_6
# 24 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_LeftDrone_Text_7
# 25 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_LEFT_DRONE, Shudderwood_LeftDrone_Movement_3
# 26 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_LeftDrone_Text_8
# 27 "data/maps/Shudderwood_Second/scripts.pory"
	waitmessage
# 28 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_LeftDrone_Text_9
# 29 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_LEFT_DRONE, Shudderwood_LeftDrone_Movement_4
# 30 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_RIGHT_DRONE, Shudderwood_LeftDrone_Movement_4
# 31 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 32 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_SEER, Shudderwood_LeftDrone_Movement_5
# 33 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 34 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_LEFT_DRONE, Shudderwood_LeftDrone_Movement_6
# 35 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 36 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_SEER, Shudderwood_LeftDrone_Movement_7
# 37 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 38 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_LeftDrone_Text_10
# 39 "data/maps/Shudderwood_Second/scripts.pory"
	waitmessage
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_LEFT_DRONE, Shudderwood_LeftDrone_Movement_8
# 41 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_RIGHT_DRONE, Shudderwood_LeftDrone_Movement_8
# 42 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 43 "data/maps/Shudderwood_Second/scripts.pory"
	removeobject LOCALID_SHUDDERWOOD_LEFT_DRONE
# 44 "data/maps/Shudderwood_Second/scripts.pory"
	removeobject LOCALID_SHUDDERWOOD_RIGHT_DRONE
# 45 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_LeftDrone_Text_11
# 46 "data/maps/Shudderwood_Second/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_16, Shudderwood_LeftDrone_Text_12
# 49 "data/maps/Shudderwood_Second/scripts.pory"
	call Shudderwood_SeerJuneDefeated
# 50 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end

Shudderwood_LeftDrone_1:
# 18 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_LeftDrone_Text_3
# 19 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end


Shudderwood_SeerJuneDefeated::
# 56 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_SeerJuneDefeated_Text_0
# 57 "data/maps/Shudderwood_Second/scripts.pory"
	waitmessage
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_SEER, Shudderwood_SeerJuneDefeated_Movement_0
# 59 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 60 "data/maps/Shudderwood_Second/scripts.pory"
	removeobject LOCALID_SHUDDERWOOD_SEER
# 61 "data/maps/Shudderwood_Second/scripts.pory"
	setflag FLAG_SHUDDERWOOD_HIVE_PATROL_DEFEATED
	return


Shudderwood_StrengthDoorLeft::
# 66 "data/maps/Shudderwood_Second/scripts.pory"
	compare VAR_MANSION_PROGRESSION, 1
	goto_if_ge Shudderwood_StrengthDoorLeft_2
# 69 "data/maps/Shudderwood_Second/scripts.pory"
	lock
# 70 "data/maps/Shudderwood_Second/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Shudderwood_StrengthDoorLeft_5
# 78 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_1
# 79 "data/maps/Shudderwood_Second/scripts.pory"
	checkpartymove MOVE_STRENGTH
# 80 "data/maps/Shudderwood_Second/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shudderwood_StrengthDoorLeft_8
# 87 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_3, MSGBOX_YESNO
# 88 "data/maps/Shudderwood_Second/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shudderwood_StrengthDoorLeft_11
# 95 "data/maps/Shudderwood_Second/scripts.pory"
	playse SE_M_STRENGTH
# 96 "data/maps/Shudderwood_Second/scripts.pory"
	waitse
# 97 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_5
# 98 "data/maps/Shudderwood_Second/scripts.pory"
	addvar VAR_MANSION_PROGRESSION, 1
# 99 "data/maps/Shudderwood_Second/scripts.pory"
	waitmessage
# 100 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end

Shudderwood_StrengthDoorLeft_2:
	end

Shudderwood_StrengthDoorLeft_5:
# 71 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_0
# 72 "data/maps/Shudderwood_Second/scripts.pory"
	waitmessage
# 73 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_StrengthDoorLeft_Movement_0
# 74 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 75 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end

Shudderwood_StrengthDoorLeft_8:
# 81 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_2, MSGBOX_AUTOCLOSE
# 82 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_StrengthDoorLeft_Movement_0
# 83 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 84 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end

Shudderwood_StrengthDoorLeft_11:
# 89 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_4
# 90 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_StrengthDoorLeft_Movement_0
# 91 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 92 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end


Shudderwood_StrengthDoorRight::
# 105 "data/maps/Shudderwood_Second/scripts.pory"
	compare VAR_MANSION_PROGRESSION, 1
	goto_if_ge Shudderwood_StrengthDoorRight_2
# 108 "data/maps/Shudderwood_Second/scripts.pory"
	lock
# 109 "data/maps/Shudderwood_Second/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Shudderwood_StrengthDoorRight_5
# 117 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_1
# 118 "data/maps/Shudderwood_Second/scripts.pory"
	checkpartymove MOVE_STRENGTH
# 119 "data/maps/Shudderwood_Second/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shudderwood_StrengthDoorRight_8
# 126 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_3, MSGBOX_YESNO
# 127 "data/maps/Shudderwood_Second/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shudderwood_StrengthDoorRight_11
# 134 "data/maps/Shudderwood_Second/scripts.pory"
	playse SE_M_STRENGTH
# 135 "data/maps/Shudderwood_Second/scripts.pory"
	waitse
# 136 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_5
# 137 "data/maps/Shudderwood_Second/scripts.pory"
	addvar VAR_MANSION_PROGRESSION, 1
# 138 "data/maps/Shudderwood_Second/scripts.pory"
	waitmessage
# 139 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end

Shudderwood_StrengthDoorRight_2:
	end

Shudderwood_StrengthDoorRight_5:
# 110 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_0
# 111 "data/maps/Shudderwood_Second/scripts.pory"
	waitmessage
# 112 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_StrengthDoorLeft_Movement_0
# 113 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 114 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end

Shudderwood_StrengthDoorRight_8:
# 120 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_2, MSGBOX_AUTOCLOSE
# 121 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_StrengthDoorLeft_Movement_0
# 122 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 123 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end

Shudderwood_StrengthDoorRight_11:
# 128 "data/maps/Shudderwood_Second/scripts.pory"
	msgbox Shudderwood_StrengthDoorLeft_Text_4
# 129 "data/maps/Shudderwood_Second/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_StrengthDoorLeft_Movement_0
# 130 "data/maps/Shudderwood_Second/scripts.pory"
	waitmovement 0
# 131 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end


Shudderwood_GateHouseLeft::
# 144 "data/maps/Shudderwood_Second/scripts.pory"
	lock
# 145 "data/maps/Shudderwood_Second/scripts.pory"
	warp MAP_SHUDDERWOOD_MANSION, 24, 49
# 146 "data/maps/Shudderwood_Second/scripts.pory"
	waitstate
# 147 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end


Shudderwood_GateHouseRight::
# 152 "data/maps/Shudderwood_Second/scripts.pory"
	lock
# 153 "data/maps/Shudderwood_Second/scripts.pory"
	warp MAP_SHUDDERWOOD_MANSION, 25, 49
# 154 "data/maps/Shudderwood_Second/scripts.pory"
	waitstate
# 155 "data/maps/Shudderwood_Second/scripts.pory"
	release
	end


# 7 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_LeftDrone_Movement_0:
# 7 "data/maps/Shudderwood_Second/scripts.pory"
	face_right
	step_end

# 8 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_LeftDrone_Movement_1:
# 8 "data/maps/Shudderwood_Second/scripts.pory"
	face_left
	step_end

# 12 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_LeftDrone_Movement_2:
# 12 "data/maps/Shudderwood_Second/scripts.pory"
	face_down
	step_end

# 25 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_LeftDrone_Movement_3:
# 25 "data/maps/Shudderwood_Second/scripts.pory"
	walk_in_place_fast_down
	step_end

# 29 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_LeftDrone_Movement_4:
# 29 "data/maps/Shudderwood_Second/scripts.pory"
	emote_x
	step_end

# 32 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_LeftDrone_Movement_5:
# 32 "data/maps/Shudderwood_Second/scripts.pory"
	walk_fast_right
# 32 "data/maps/Shudderwood_Second/scripts.pory"
	walk_fast_right
# 32 "data/maps/Shudderwood_Second/scripts.pory"
	walk_fast_right
# 32 "data/maps/Shudderwood_Second/scripts.pory"
	walk_fast_right
# 32 "data/maps/Shudderwood_Second/scripts.pory"
	walk_fast_right
# 32 "data/maps/Shudderwood_Second/scripts.pory"
	walk_fast_right
# 32 "data/maps/Shudderwood_Second/scripts.pory"
	walk_fast_right
	step_end

# 34 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_LeftDrone_Movement_6:
# 34 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_up
# 34 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_right
# 34 "data/maps/Shudderwood_Second/scripts.pory"
	walk_in_place_faster_down
	step_end

# 36 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_LeftDrone_Movement_7:
# 36 "data/maps/Shudderwood_Second/scripts.pory"
	walk_right
# 36 "data/maps/Shudderwood_Second/scripts.pory"
	walk_down
	step_end

# 40 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_LeftDrone_Movement_8:
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_up
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_up
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 40 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
	step_end

# 58 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_SeerJuneDefeated_Movement_0:
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_up
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_up
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
# 58 "data/maps/Shudderwood_Second/scripts.pory"
	walk_faster_left
	step_end

# 73 "data/maps/Shudderwood_Second/scripts.pory"
Shudderwood_StrengthDoorLeft_Movement_0:
# 73 "data/maps/Shudderwood_Second/scripts.pory"
	walk_down
	step_end

Shudderwood_LeftDrone_Text_0:
# 6 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Drone: Buzz off, Ranger! This area is\n"
	.string "off-limits!\p"
	.string "We're the toughest Drones our\n"
	.string "Commander has!\p"
	.string "I bet you're not even worth our time!$"

Shudderwood_LeftDrone_Text_1:
# 10 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Drones: Mutter mutter… Glory for us if\n"
	.string "we win perhaps?\l"
	.string "Buzz buzz… He beat the Seer we saw the\l"
	.string "Maven punish earlier!$"

Shudderwood_LeftDrone_Text_2:
# 15 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Drone: Let's leave it up to the Ranger\n"
	.string "then.\p"
	.string "Do you want to buzz off?$"

Shudderwood_LeftDrone_Text_3:
# 18 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Drone: Buzz buzz… Wise choice, Ranger!\p"
	.string "We'll be watching you from afar!$"

Shudderwood_LeftDrone_Text_4:
# 22 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Drone: Buzz buzz… You're making a big\n"
	.string "mistake, Ranger!\p"
	.string "Prepare to be defeated!$"

Shudderwood_LeftDrone_Text_5:
# 23 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Drone: Buzzing mad!$"

Shudderwood_LeftDrone_Text_6:
# 23 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Drone: I feel the sting of defeat!$"

Shudderwood_LeftDrone_Text_7:
# 24 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Drones: Bested, BESTED?!$"

Shudderwood_LeftDrone_Text_8:
# 26 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Drones: Gah! You've bested us…\p"
	.string "The Maven will not be pleased…$"

Shudderwood_LeftDrone_Text_9:
# 28 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Seer June: You have more immediate\n"
	.string "concerns, simpletons!\p"
	.string "The Ranger has defeated you both at\n"
	.string "once?!$"

Shudderwood_LeftDrone_Text_10:
# 38 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Seer June: Retreat, now! Back to the\n"
	.string "mansion!\p"
	.string "I'll handle them myself!$"

Shudderwood_LeftDrone_Text_11:
# 45 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Seer June: Hmph… These woods are no\n"
	.string "place for Rangers!\p"
	.string "I will show you a true Seer's power, not\n"
	.string "like that weakling Lysa at the quarry!$"

Shudderwood_LeftDrone_Text_12:
# 47 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Seer June: What?! But the Rangers were\n"
	.string "weaklings last time!$"

Shudderwood_SeerJuneDefeated_Text_0:
# 56 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Seer June: Impossible… I've been\n"
	.string "defeated as well!\p"
	.string "But you'll never get into the mansion!\n"
	.string "It's locked with solid stone doors!\p"
	.string "You'd need more STRENGTH than any\n"
	.string "ranger around here to force them open!$"

Shudderwood_StrengthDoorLeft_Text_0:
# 71 "data/maps/Shudderwood_Second/scripts.pory"
	.string "The door is firmly sealed shut.\p"
	.string "It looks like it requires a lot of\n"
	.string "STRENGTH to open.$"

Shudderwood_StrengthDoorLeft_Text_1:
# 78 "data/maps/Shudderwood_Second/scripts.pory"
	.string "The door is firmly sealed shut.\p"
	.string "You might be able to force it open with\n"
	.string "STRENGTH.$"

Shudderwood_StrengthDoorLeft_Text_2:
# 81 "data/maps/Shudderwood_Second/scripts.pory"
	.string "You are unable to force the door open\n"
	.string "without STRENGTH.$"

Shudderwood_StrengthDoorLeft_Text_3:
# 87 "data/maps/Shudderwood_Second/scripts.pory"
	.string "Would you like to use STRENGTH to force\n"
	.string "open the door?$"

Shudderwood_StrengthDoorLeft_Text_4:
# 89 "data/maps/Shudderwood_Second/scripts.pory"
	.string "You decided not to use STRENGTH right\n"
	.string "now.$"

Shudderwood_StrengthDoorLeft_Text_5:
# 97 "data/maps/Shudderwood_Second/scripts.pory"
	.string "You used STRENGTH to force open the\n"
	.string "doors!$"
