Quartz_Gym_MapScripts::
	.byte 0


Worried_OldMan::
# 4 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 5 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 6 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Worried_OldMan_Text_0
# 8 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 9 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Worried_OldWoman::
# 13 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 14 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 15 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Worried_OldWoman_Text_0
# 17 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 18 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Confident_YoungMan::
# 22 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 23 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 24 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Confident_YoungMan_Text_0
# 25 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 26 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Confused_Girl::
# 30 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 31 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 32 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Confused_Girl_Text_0
# 34 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 35 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Reassuring_Man::
# 39 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 40 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 41 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Reassuring_Man_Text_0
# 43 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 44 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Hopeful_Woman::
# 48 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 49 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 50 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Hopeful_Woman_Text_0
# 52 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 53 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Nervous_Kid::
# 58 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 59 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 60 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Nervous_Kid_Text_0
# 62 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 63 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Ditzy_Teenager::
# 67 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 68 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 69 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Ditzy_Teenager_Text_0
# 71 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 72 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Quartz_Gym_FinalblowChallenge::
# 76 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 77 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 78 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Quartz_Gym_FinalblowChallenge_2
# 80 "data/maps/Quartz_Gym/scripts.pory"
	checktrainerflag TRAINER_MAKAYLA
	goto_if 1, Quartz_Gym_FinalblowChallenge_3
# 83 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Quartz_Gym_FinalblowChallenge_4
# 97 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_6
Quartz_Gym_FinalblowChallenge_1:
# 100 "data/maps/Quartz_Gym/scripts.pory"
	release
	return

Quartz_Gym_FinalblowChallenge_2:
# 79 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_0
	goto Quartz_Gym_FinalblowChallenge_1

Quartz_Gym_FinalblowChallenge_3:
# 81 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_1
	goto Quartz_Gym_FinalblowChallenge_1

Quartz_Gym_FinalblowChallenge_4:
# 84 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_2, MSGBOX_YESNO
# 87 "data/maps/Quartz_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_Gym_FinalblowChallenge_9
# 94 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_5
	goto Quartz_Gym_FinalblowChallenge_1

Quartz_Gym_FinalblowChallenge_9:
# 88 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_3
# 89 "data/maps/Quartz_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_MAKAYLA, Quartz_Gym_FinalblowChallenge_Text_4
# 92 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_Gym_FinalblowChallenge_1


Quartz_Gym_PatienceChallenge::
# 104 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 105 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 106 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Quartz_Gym_PatienceChallenge_2
# 108 "data/maps/Quartz_Gym/scripts.pory"
	checktrainerflag TRAINER_KOJI_1
	goto_if 1, Quartz_Gym_PatienceChallenge_3
# 111 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Quartz_Gym_PatienceChallenge_4
# 129 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_6
Quartz_Gym_PatienceChallenge_1:
# 132 "data/maps/Quartz_Gym/scripts.pory"
	release
	return

Quartz_Gym_PatienceChallenge_2:
# 107 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_0
	goto Quartz_Gym_PatienceChallenge_1

Quartz_Gym_PatienceChallenge_3:
# 109 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_PatienceChallenge_Text_0
	goto Quartz_Gym_PatienceChallenge_1

Quartz_Gym_PatienceChallenge_4:
# 112 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_PatienceChallenge_Text_1, MSGBOX_YESNO
# 115 "data/maps/Quartz_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_Gym_PatienceChallenge_9
# 126 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_PatienceChallenge_Text_5
	goto Quartz_Gym_PatienceChallenge_1

Quartz_Gym_PatienceChallenge_9:
# 116 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_PatienceChallenge_Text_2
# 117 "data/maps/Quartz_Gym/scripts.pory"
	delay 1800
# 118 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_PatienceChallenge_Text_3
# 121 "data/maps/Quartz_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_KOJI_1, Quartz_Gym_PatienceChallenge_Text_4
# 124 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_Gym_PatienceChallenge_1


Quartz_Gym_WeakpointChallenge::
# 136 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 137 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 138 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Quartz_Gym_WeakpointChallenge_2
# 140 "data/maps/Quartz_Gym/scripts.pory"
	checktrainerflag TRAINER_CYNDY_1
	goto_if 1, Quartz_Gym_WeakpointChallenge_3
# 143 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Quartz_Gym_WeakpointChallenge_4
# 156 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_6
Quartz_Gym_WeakpointChallenge_1:
# 159 "data/maps/Quartz_Gym/scripts.pory"
	release
	return

Quartz_Gym_WeakpointChallenge_2:
# 139 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_0
	goto Quartz_Gym_WeakpointChallenge_1

Quartz_Gym_WeakpointChallenge_3:
# 141 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_WeakpointChallenge_Text_0
	goto Quartz_Gym_WeakpointChallenge_1

Quartz_Gym_WeakpointChallenge_4:
# 144 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_WeakpointChallenge_Text_1, MSGBOX_YESNO
# 146 "data/maps/Quartz_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_Gym_WeakpointChallenge_9
# 153 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_5
	goto Quartz_Gym_WeakpointChallenge_1

Quartz_Gym_WeakpointChallenge_9:
# 147 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_WeakpointChallenge_Text_2
# 148 "data/maps/Quartz_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNDY_1, Quartz_Gym_WeakpointChallenge_Text_3
# 151 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_Gym_WeakpointChallenge_1


Quartz_CaptRojan::
# 164 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 165 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 166 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Quartz_CaptRojan_2
# 170 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_unset FLAG_TALKED_TO_CORIN, Quartz_CaptRojan_3
# 178 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_unset FLAG_QUARTZITE_HIVE_DEFEATED, Quartz_CaptRojan_4
# 183 "data/maps/Quartz_Gym/scripts.pory"
	checktrainerflag TRAINER_MAKAYLA
	goto_if 0, Quartz_CaptRojan_5
# 183 "data/maps/Quartz_Gym/scripts.pory"
	checktrainerflag TRAINER_KOJI_1
	goto_if 0, Quartz_CaptRojan_5
# 183 "data/maps/Quartz_Gym/scripts.pory"
	checktrainerflag TRAINER_CYNDY_1
	goto_if 0, Quartz_CaptRojan_5
# 190 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_4
# 192 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 193 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_5, MSGBOX_YESNO
# 195 "data/maps/Quartz_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_CaptRojan_15
# 218 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_10
Quartz_CaptRojan_1:
# 222 "data/maps/Quartz_Gym/scripts.pory"
	release
	return

Quartz_CaptRojan_2:
# 167 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_0
# 169 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_CaptRojan_1

Quartz_CaptRojan_3:
# 171 "data/maps/Quartz_Gym/scripts.pory"
	setflag FLAG_TALKED_TO_ROJAN
# 172 "data/maps/Quartz_Gym/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 173 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_1
	goto Quartz_CaptRojan_1

Quartz_CaptRojan_4:
# 179 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_2
# 182 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_CaptRojan_1

Quartz_CaptRojan_5:
# 184 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_3
# 188 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_CaptRojan_1

Quartz_CaptRojan_15:
# 196 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_6
# 197 "data/maps/Quartz_Gym/scripts.pory"
	playse SE_M_ROCK_THROW
# 198 "data/maps/Quartz_Gym/scripts.pory"
	applymovement LOCALID_CAPT_ROJAN, Quartz_CaptRojan_Movement_0
# 199 "data/maps/Quartz_Gym/scripts.pory"
	applymovement LOCALID_QUARTZGYMLEFTROCK, Quartz_CaptRojan_Movement_1
# 200 "data/maps/Quartz_Gym/scripts.pory"
	applymovement LOCALID_QUARTZGYMRIGHTROCK, Quartz_CaptRojan_Movement_1
# 201 "data/maps/Quartz_Gym/scripts.pory"
	waitmovement 0
# 202 "data/maps/Quartz_Gym/scripts.pory"
	removeobject LOCALID_QUARTZGYMLEFTROCK
# 203 "data/maps/Quartz_Gym/scripts.pory"
	removeobject LOCALID_QUARTZGYMRIGHTROCK
# 204 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_7
# 205 "data/maps/Quartz_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, Quartz_CaptRojan_Text_8
# 208 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 209 "data/maps/Quartz_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 210 "data/maps/Quartz_Gym/scripts.pory"
	giveitem ITEM_HM06
# 211 "data/maps/Quartz_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 212 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_9
# 216 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_CaptRojan_1


# 198 "data/maps/Quartz_Gym/scripts.pory"
Quartz_CaptRojan_Movement_0:
# 198 "data/maps/Quartz_Gym/scripts.pory"
	emote_exclamation_mark
# 198 "data/maps/Quartz_Gym/scripts.pory"
	jump_in_place_down
	step_end

# 199 "data/maps/Quartz_Gym/scripts.pory"
Quartz_CaptRojan_Movement_1:
# 199 "data/maps/Quartz_Gym/scripts.pory"
	rock_smash_break
	step_end

Worried_OldMan_Text_0:
# 6 "data/maps/Quartz_Gym/scripts.pory"
	.string "The Hive has taken over the city!\p"
	.string "I hope the Rangers are doing something\n"
	.string "about it!$"

Worried_OldWoman_Text_0:
# 15 "data/maps/Quartz_Gym/scripts.pory"
	.string "The Rangers have been so busy lately.\p"
	.string "I just hope they keep Quartzite safe\n"
	.string "from those Hive Drones!$"

Confident_YoungMan_Text_0:
# 24 "data/maps/Quartz_Gym/scripts.pory"
	.string "With the Rangers around, Quartzite is\n"
	.string "as safe as can be!$"

Confused_Girl_Text_0:
# 32 "data/maps/Quartz_Gym/scripts.pory"
	.string "I heard Team Hive Drones have been\n"
	.string "spotted near the Quartz Tunnels.\p"
	.string "I wonder what they're up to...$"

Reassuring_Man_Text_0:
# 41 "data/maps/Quartz_Gym/scripts.pory"
	.string "Don't worry about those Hive Drones!\p"
	.string "The Rangers will take care of them in no\n"
	.string "time!$"

Hopeful_Woman_Text_0:
# 50 "data/maps/Quartz_Gym/scripts.pory"
	.string "I just hope the Rangers can deal with\n"
	.string "Team Hive soon.\p"
	.string "They're causing so much trouble around\n"
	.string "Quartzite!$"

Nervous_Kid_Text_0:
# 60 "data/maps/Quartz_Gym/scripts.pory"
	.string "I heard Team Hive Drones have been\n"
	.string "seen near the Quartz Tunnels.\p"
	.string "I'm scared to go outside!$"

Ditzy_Teenager_Text_0:
# 69 "data/maps/Quartz_Gym/scripts.pory"
	.string "Did you hear about those Hive Drones?\p"
	.string "They're like, everywhere now!$"

Quartz_Gym_FinalblowChallenge_Text_0:
# 79 "data/maps/Quartz_Gym/scripts.pory"
	.string "You've already proven your skill by\n"
	.string "earning the Rock Smash HM!$"

Quartz_Gym_FinalblowChallenge_Text_1:
# 81 "data/maps/Quartz_Gym/scripts.pory"
	.string "I already showed you my finishing\n"
	.string "power, Ranger!\p"
	.string "No need to see it twice, save your\n"
	.string "strength for Captain Rojan.$"

Quartz_Gym_FinalblowChallenge_Text_2:
# 84 "data/maps/Quartz_Gym/scripts.pory"
	.string "I represent the final, powerful strike\n"
	.string "to end a battle!\p"
	.string "Demonstrate your ability to finish\n"
	.string "strong by defeating me in battle!\p"
	.string "Are you ready to begin?$"

Quartz_Gym_FinalblowChallenge_Text_3:
# 88 "data/maps/Quartz_Gym/scripts.pory"
	.string "Excellent! Let's see your finishing\n"
	.string "power!$"

Quartz_Gym_FinalblowChallenge_Text_4:
# 90 "data/maps/Quartz_Gym/scripts.pory"
	.string "Incredible!$"

Quartz_Gym_FinalblowChallenge_Text_5:
# 94 "data/maps/Quartz_Gym/scripts.pory"
	.string "Take your time to prepare!$"

Quartz_Gym_FinalblowChallenge_Text_6:
# 97 "data/maps/Quartz_Gym/scripts.pory"
	.string "Team Hive has been causing trouble\n"
	.string "around Quartzite.\p"
	.string "I hope the Rangers can handle them\n"
	.string "soon!$"

Quartz_Gym_PatienceChallenge_Text_0:
# 109 "data/maps/Quartz_Gym/scripts.pory"
	.string "Patience, patience... I already proved\n"
	.string "mine facing you once!\p"
	.string "Go on now, don't test it further.$"

Quartz_Gym_PatienceChallenge_Text_1:
# 112 "data/maps/Quartz_Gym/scripts.pory"
	.string "I represent waiting until the perfect\n"
	.string "moment to strike!\p"
	.string "Demonstrate your patience by waiting\n"
	.string "here for 30 seconds without moving!\p"
	.string "Are you ready to begin?$"

Quartz_Gym_PatienceChallenge_Text_2:
# 116 "data/maps/Quartz_Gym/scripts.pory"
	.string "Great! Start waiting now.$"

Quartz_Gym_PatienceChallenge_Text_3:
# 118 "data/maps/Quartz_Gym/scripts.pory"
	.string "Well done! You've completed the\n"
	.string "Patience Challenge!\p"
	.string "Just kidding, but you did wait there\n"
	.string "like a champ.\p"
	.string "Now for the real challenge, HYAAAAH!$"

Quartz_Gym_PatienceChallenge_Text_4:
# 122 "data/maps/Quartz_Gym/scripts.pory"
	.string "Patience is a virtue, but so is\n"
	.string "strength!$"

Quartz_Gym_PatienceChallenge_Text_5:
# 126 "data/maps/Quartz_Gym/scripts.pory"
	.string "No worries! Take your time.$"

Quartz_Gym_WeakpointChallenge_Text_0:
# 141 "data/maps/Quartz_Gym/scripts.pory"
	.string "You already found my one weak point,\n"
	.string "Ranger!\p"
	.string "I won't be caught off guard twice in one\n"
	.string "day.$"

Quartz_Gym_WeakpointChallenge_Text_1:
# 144 "data/maps/Quartz_Gym/scripts.pory"
	.string "I represent exploiting a foe's\n"
	.string "weakness! I practice looking for faults\l"
	.string "in rocks!\p"
	.string "Are you ready to begin?$"

Quartz_Gym_WeakpointChallenge_Text_2:
# 147 "data/maps/Quartz_Gym/scripts.pory"
	.string "Excellent! Let's see your strategy in\n"
	.string "action!$"

Quartz_Gym_WeakpointChallenge_Text_3:
# 149 "data/maps/Quartz_Gym/scripts.pory"
	.string "Impressive!$"

Quartz_CaptRojan_Text_0:
# 167 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Ho ho, still feeling that\n"
	.string "battle in my old bones, Ranger!\p"
	.string "A good ache, mind you. Keep it up out\n"
	.string "there!$"

Quartz_CaptRojan_Text_1:
# 173 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Oh! A visitor. Excuse my\n"
	.string "slippers, my knees aren't what they\l"
	.string "used to be.\p"
	.string "Wait, you're the Ranger from Hazolt HQ?\n"
	.string "Splendid! I was just about to put the\l"
	.string "kettle on, but duty calls.\p"
	.string "This sinister Team Hive has been\n"
	.string "buzzing around Quartzite City\l"
	.string "somethin' fierce.\p"
	.string "I've tucked most of the townsfolk away\n"
	.string "safe and sound, but Ranger Corin went\l"
	.string "snooping around the Quartz Tunnels all\l"
	.string "on his own. That boy was stubborn as a\l"
	.string "Lairon!\p"
	.string "Would you go check on him for this old\n"
	.string "man?$"

Quartz_CaptRojan_Text_2:
# 179 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Still no word from young\n"
	.string "Corin, eh?\p"
	.string "I'd go myself, but my lumbago's actin' up\n"
	.string "somethin' terrible today.\p"
	.string "Hurry along now, there's an entrance in\n"
	.string "the water pump house!$"

Quartz_CaptRojan_Text_3:
# 184 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Whew, glad that Hive\n"
	.string "business is settled! My hip was startin'\l"
	.string "to ache just from the worryin'.\p"
	.string "Hold your horses, though, Ranger. You\n"
	.string "don't just waltz up to an old man and\l"
	.string "get a badge for free!\p"
	.string "Go spar with my star pupils here in the\n"
	.string "Gym first. Makayla, Koji, and our\l"
	.string "sharp-eyed Cyndy will each show you a\l"
	.string "different side of battling.\p"
	.string "Come back once you've bested all three,\n"
	.string "and then we'll talk business.$"

Quartz_CaptRojan_Text_4:
# 190 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Ho? You've gone and\n"
	.string "thrashed all three of my pupils\l"
	.string "already?\p"
	.string "Ha! Reminds me of my glory days, back\n"
	.string "before these knees started singin'\l"
	.string "opera every mornin'.$"

Quartz_CaptRojan_Text_5:
# 193 "data/maps/Quartz_Gym/scripts.pory"
	.string "But it's time for your final test.\p"
	.string "Rojan: No more jokes, Ranger. Are you\n"
	.string "ready to prove your strength?$"

Quartz_CaptRojan_Text_6:
# 196 "data/maps/Quartz_Gym/scripts.pory"
	.string "Rojan: Then observe!$"

Quartz_CaptRojan_Text_7:
# 204 "data/maps/Quartz_Gym/scripts.pory"
	.string "Rojan: That's the strength it takes to\n"
	.string "earn this badge. Let's begin!$"

Quartz_CaptRojan_Text_8:
# 206 "data/maps/Quartz_Gym/scripts.pory"
	.string "Well done, Ranger!$"

Quartz_CaptRojan_Text_9:
# 212 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Impressive work!\p"
	.string "You've earned the Rock Smash HM and\n"
	.string "your Ranger Rank has been upgraded!\p"
	.string "Use Rock Smash to clear small boulders\n"
	.string "blocking your path.\n"
	.string "Keep up the great work, Ranger!$"

Quartz_CaptRojan_Text_10:
# 218 "data/maps/Quartz_Gym/scripts.pory"
	.string "Rojan: Oh, thank goodness, this old hip\n"
	.string "needs a rest anyway.\p"
	.string "Come back when you're ready, sonny.$"
