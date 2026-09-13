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


Gym_Guard::
# 57 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 58 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 59 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Gym_Guard_Text_0
# 61 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 62 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Nervous_Kid::
# 66 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 67 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 68 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Nervous_Kid_Text_0
# 70 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 71 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Ditzy_Teenager::
# 75 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 76 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 77 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Ditzy_Teenager_Text_0
# 79 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 80 "data/maps/Quartz_Gym/scripts.pory"
	release
	return


Quartz_Gym_FinalblowChallenge::
# 84 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 85 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 86 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Quartz_Gym_FinalblowChallenge_2
# 105 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_5
Quartz_Gym_FinalblowChallenge_1:
# 107 "data/maps/Quartz_Gym/scripts.pory"
	release
	return

Quartz_Gym_FinalblowChallenge_2:
# 87 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Quartz_Gym_FinalblowChallenge_5
# 101 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_4
	goto Quartz_Gym_FinalblowChallenge_1

Quartz_Gym_FinalblowChallenge_5:
# 88 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_0, MSGBOX_YESNO
# 91 "data/maps/Quartz_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_Gym_FinalblowChallenge_8
# 98 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_3
	goto Quartz_Gym_FinalblowChallenge_1

Quartz_Gym_FinalblowChallenge_8:
# 92 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_1
# 93 "data/maps/Quartz_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_MAKAYLA, Quartz_Gym_FinalblowChallenge_Text_2
# 96 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_Gym_FinalblowChallenge_1


Quartz_Gym_PatienceChallenge::
# 111 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 112 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 113 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Quartz_Gym_PatienceChallenge_2
# 136 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_5
Quartz_Gym_PatienceChallenge_1:
# 138 "data/maps/Quartz_Gym/scripts.pory"
	release
	return

Quartz_Gym_PatienceChallenge_2:
# 114 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Quartz_Gym_PatienceChallenge_5
# 132 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_4
	goto Quartz_Gym_PatienceChallenge_1

Quartz_Gym_PatienceChallenge_5:
# 115 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_PatienceChallenge_Text_0, MSGBOX_YESNO
# 118 "data/maps/Quartz_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_Gym_PatienceChallenge_8
# 129 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_PatienceChallenge_Text_4
	goto Quartz_Gym_PatienceChallenge_1

Quartz_Gym_PatienceChallenge_8:
# 119 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_PatienceChallenge_Text_1
# 120 "data/maps/Quartz_Gym/scripts.pory"
	delay 1800
# 121 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_PatienceChallenge_Text_2
# 124 "data/maps/Quartz_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_KOJI_1, Quartz_Gym_PatienceChallenge_Text_3
# 127 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_Gym_PatienceChallenge_1


Quartz_Gym_WeakpointChallenge::
# 142 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 143 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 144 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Quartz_Gym_WeakpointChallenge_2
# 162 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_5
Quartz_Gym_WeakpointChallenge_1:
# 164 "data/maps/Quartz_Gym/scripts.pory"
	release
	return

Quartz_Gym_WeakpointChallenge_2:
# 145 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Quartz_Gym_WeakpointChallenge_5
# 158 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_4
	goto Quartz_Gym_WeakpointChallenge_1

Quartz_Gym_WeakpointChallenge_5:
# 146 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_WeakpointChallenge_Text_0, MSGBOX_YESNO
# 148 "data/maps/Quartz_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_Gym_WeakpointChallenge_8
# 155 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_FinalblowChallenge_Text_3
	goto Quartz_Gym_WeakpointChallenge_1

Quartz_Gym_WeakpointChallenge_8:
# 149 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_Gym_WeakpointChallenge_Text_1
# 150 "data/maps/Quartz_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_CYNDY_1, Quartz_Gym_WeakpointChallenge_Text_2
# 153 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_Gym_WeakpointChallenge_1


Quartz_CaptRojan::
# 169 "data/maps/Quartz_Gym/scripts.pory"
	lock
# 170 "data/maps/Quartz_Gym/scripts.pory"
	faceplayer
# 171 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Quartz_CaptRojan_2
# 178 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_unset FLAG_TALKED_TO_CORIN, Quartz_CaptRojan_5
# 187 "data/maps/Quartz_Gym/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Quartz_CaptRojan_8
# 212 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_7
# 214 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
Quartz_CaptRojan_4:
# 217 "data/maps/Quartz_Gym/scripts.pory"
	release
	return

Quartz_CaptRojan_2:
# 172 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_0
# 174 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 175 "data/maps/Quartz_Gym/scripts.pory"
	release
	end

Quartz_CaptRojan_5:
# 179 "data/maps/Quartz_Gym/scripts.pory"
	setflag FLAG_TALKED_TO_ROJAN
# 180 "data/maps/Quartz_Gym/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 181 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_1
	goto Quartz_CaptRojan_4

Quartz_CaptRojan_8:
# 188 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_2, MSGBOX_YESNO
# 192 "data/maps/Quartz_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_CaptRojan_11
# 208 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_6
	goto Quartz_CaptRojan_4

Quartz_CaptRojan_11:
# 193 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_3
# 194 "data/maps/Quartz_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, Quartz_CaptRojan_Text_4
# 197 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 198 "data/maps/Quartz_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 199 "data/maps/Quartz_Gym/scripts.pory"
	giveitem ITEM_HM06
# 200 "data/maps/Quartz_Gym/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 201 "data/maps/Quartz_Gym/scripts.pory"
	msgbox Quartz_CaptRojan_Text_5
# 205 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
# 206 "data/maps/Quartz_Gym/scripts.pory"
	waitmessage
	goto Quartz_CaptRojan_4


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

Gym_Guard_Text_0:
# 59 "data/maps/Quartz_Gym/scripts.pory"
	.string "The Gym is currently closed while Team\n"
	.string "Hive is dealt with.\p"
	.string "Please come back later!$"

Nervous_Kid_Text_0:
# 68 "data/maps/Quartz_Gym/scripts.pory"
	.string "I heard Team Hive Drones have been\n"
	.string "seen near the Quartz Tunnels.\p"
	.string "I'm scared to go outside!$"

Ditzy_Teenager_Text_0:
# 77 "data/maps/Quartz_Gym/scripts.pory"
	.string "Did you hear about those Hive Drones?\p"
	.string "They're like, everywhere now!$"

Quartz_Gym_FinalblowChallenge_Text_0:
# 88 "data/maps/Quartz_Gym/scripts.pory"
	.string "I represent the final, powerful strike\n"
	.string "to end a battle!\p"
	.string "Demonstrate your ability to finish\n"
	.string "strong by defeating me in battle!\p"
	.string "Are you ready to begin?$"

Quartz_Gym_FinalblowChallenge_Text_1:
# 92 "data/maps/Quartz_Gym/scripts.pory"
	.string "Excellent! Let's see your finishing\n"
	.string "power!$"

Quartz_Gym_FinalblowChallenge_Text_2:
# 94 "data/maps/Quartz_Gym/scripts.pory"
	.string "Incredible!$"

Quartz_Gym_FinalblowChallenge_Text_3:
# 98 "data/maps/Quartz_Gym/scripts.pory"
	.string "Take your time to prepare!$"

Quartz_Gym_FinalblowChallenge_Text_4:
# 101 "data/maps/Quartz_Gym/scripts.pory"
	.string "Team Hive has been causing trouble\n"
	.string "around Quartzite.\p"
	.string "I hope the Rangers can handle them\n"
	.string "soon!$"

Quartz_Gym_FinalblowChallenge_Text_5:
# 105 "data/maps/Quartz_Gym/scripts.pory"
	.string "You've already proven your skill by\n"
	.string "earning the Rock Smash HM!$"

Quartz_Gym_PatienceChallenge_Text_0:
# 115 "data/maps/Quartz_Gym/scripts.pory"
	.string "I represent waiting until the perfect\n"
	.string "moment to strike!\p"
	.string "Demonstrate your patience by waiting\n"
	.string "here for 30 seconds without moving!\p"
	.string "Are you ready to begin?$"

Quartz_Gym_PatienceChallenge_Text_1:
# 119 "data/maps/Quartz_Gym/scripts.pory"
	.string "Great! Start waiting now.$"

Quartz_Gym_PatienceChallenge_Text_2:
# 121 "data/maps/Quartz_Gym/scripts.pory"
	.string "Well done! You've completed the\n"
	.string "Patience Challenge!\n"
	.string "Just kidding, but you did wait there\l"
	.string "like a champ.\p"
	.string "Now for the real challenge, HYAAAAH!$"

Quartz_Gym_PatienceChallenge_Text_3:
# 125 "data/maps/Quartz_Gym/scripts.pory"
	.string "Patience is a virtue, but so is\n"
	.string "strength!$"

Quartz_Gym_PatienceChallenge_Text_4:
# 129 "data/maps/Quartz_Gym/scripts.pory"
	.string "No worries! Take your time.$"

Quartz_Gym_WeakpointChallenge_Text_0:
# 146 "data/maps/Quartz_Gym/scripts.pory"
	.string "I represent exploiting a foe's\n"
	.string "weakness! I practice looking for faults\l"
	.string "in rocks!\p"
	.string "Are you ready to begin?$"

Quartz_Gym_WeakpointChallenge_Text_1:
# 149 "data/maps/Quartz_Gym/scripts.pory"
	.string "Excellent! Let's see your strategy in\n"
	.string "action!$"

Quartz_Gym_WeakpointChallenge_Text_2:
# 151 "data/maps/Quartz_Gym/scripts.pory"
	.string "Impressive!$"

Quartz_CaptRojan_Text_0:
# 172 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: You've proven your skill\n"
	.string "by earning the Rock Smash HM!\p"
	.string "Keep up the great work, Ranger!$"

Quartz_CaptRojan_Text_1:
# 181 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Hey there, Ranger!\p"
	.string "I heard you were coming from Hazolt HQ.\n"
	.string "Hope you are ready for some action!\p"
	.string "This sinister Team Hive has been\n"
	.string "causing trouble all over Quartzite City.\p"
	.string "I've gotten most of the people here for\n"
	.string "safety. Ranger Corin went to\l"
	.string "investigate the Quartz Tunnels.\p"
	.string "Could you go check on him?$"

Quartz_CaptRojan_Text_2:
# 188 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Thanks for helping out\n"
	.string "back there!\p"
	.string "With Team Hive dealt with, Quartzite can\n"
	.string "finally return to normal.\p"
	.string "The Rangers here owe you a debt of\n"
	.string "gratitude!\l"
	.string "Now, are you ready to earn your next\l"
	.string "field move, and Ranger Rank?$"

Quartz_CaptRojan_Text_3:
# 193 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Excellent! Show me your\n"
	.string "skills!$"

Quartz_CaptRojan_Text_4:
# 195 "data/maps/Quartz_Gym/scripts.pory"
	.string "Well done, Ranger!$"

Quartz_CaptRojan_Text_5:
# 201 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Impressive work!\p"
	.string "You've earned the Rock Smash HM and\n"
	.string "your Ranger Rank has been upgraded!\p"
	.string "Use Rock Smash to clear small boulders\n"
	.string "blocking your path.\n"
	.string "Keep up the great work, Ranger!$"

Quartz_CaptRojan_Text_6:
# 208 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Take your time to\n"
	.string "prepare!\p"
	.string "I suggest you battle with my students\n"
	.string "here in the Gym to hone your skills.$"

Quartz_CaptRojan_Text_7:
# 212 "data/maps/Quartz_Gym/scripts.pory"
	.string "Captain Rojan: Please hurry to the\n"
	.string "Quartz Tunnels and help Ranger Corin!\p"
	.string "There should be an entrance in the\n"
	.string "water pump house.$"
