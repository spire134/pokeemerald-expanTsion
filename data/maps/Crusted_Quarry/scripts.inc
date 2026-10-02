Crusted_Quarry_MapScripts::
	.byte 0


Crusted_Quarry_Drone1::
# 4 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_8, Crusted_Quarry_Drone1_Text_0, Crusted_Quarry_Drone1_Text_1
# 9 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Drone1_Text_2, MSGBOX_AUTOCLOSE
# 10 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 11 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_Drone2::
# 15 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_9, Crusted_Quarry_Drone2_Text_0, Crusted_Quarry_Drone2_Text_1
# 20 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Drone2_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 22 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_Seer_LastResort::
# 26 "data/maps/Crusted_Quarry/scripts.pory"
	lockall
# 27 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_CRUSTED_QUARRY_SEER, Crusted_Quarry_Seer_LastResort_Movement_0
# 28 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 0
# 29 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Seer_LastResort_Text_0
# 32 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_CRUSTED_QUARRY_SEER, Crusted_Quarry_Seer_LastResort_Movement_1
# 33 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 0
# 34 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Seer_LastResort_Text_1
# 37 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_15, Crusted_Quarry_Seer_LastResort_Text_2
# 40 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_CRUSTED_QUARRY_SEER, Crusted_Quarry_Seer_LastResort_Movement_1
# 41 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 0
# 42 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_CRUSTED_QUARRY_SEER, Crusted_Quarry_Seer_LastResort_Movement_2
# 43 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 0
# 44 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Seer_LastResort_Text_3
# 47 "data/maps/Crusted_Quarry/scripts.pory"
	special ShakeCamera
# 48 "data/maps/Crusted_Quarry/scripts.pory"
	waitstate
# 49 "data/maps/Crusted_Quarry/scripts.pory"
	setflag FLAG_CRUSTED_QUARRY_DEFEATED
# 50 "data/maps/Crusted_Quarry/scripts.pory"
	setflag FLAG_QUARRY_COLLAPSING
# 51 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Seer_LastResort_Text_4
# 52 "data/maps/Crusted_Quarry/scripts.pory"
	fadescreen FADE_TO_BLACK
# 53 "data/maps/Crusted_Quarry/scripts.pory"
	removeobject LOCALID_CRUSTED_QUARRY_SEER
# 54 "data/maps/Crusted_Quarry/scripts.pory"
	removeobject LOCALID_CRUSTED_QUARRY_DRONE1
# 55 "data/maps/Crusted_Quarry/scripts.pory"
	removeobject LOCALID_CRUSTED_QUARRY_DRONE2
# 56 "data/maps/Crusted_Quarry/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 57 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_PLAYER, Crusted_Quarry_Seer_LastResort_Movement_3
# 58 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 0
# 59 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Seer_LastResort_Text_5
# 60 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 61 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_DontRunAway::
# 65 "data/maps/Crusted_Quarry/scripts.pory"
	goto_if_set FLAG_QUARRY_COLLAPSING, Crusted_Quarry_DontRunAway_1
	return

Crusted_Quarry_DontRunAway_1:
# 66 "data/maps/Crusted_Quarry/scripts.pory"
	lock
# 67 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_DontRunAway_Text_0
# 69 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 70 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_PLAYER, Crusted_Quarry_DontRunAway_Movement_0
# 71 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 0
# 72 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_MachineControls::
# 78 "data/maps/Crusted_Quarry/scripts.pory"
	lock
# 79 "data/maps/Crusted_Quarry/scripts.pory"
	goto_if_set FLAG_QUARRY_COLLAPSING, Crusted_Quarry_MachineControls_2
# 120 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_6
Crusted_Quarry_MachineControls_1:
# 123 "data/maps/Crusted_Quarry/scripts.pory"
	release
	return

Crusted_Quarry_MachineControls_2:
# 80 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_0
# 83 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 84 "data/maps/Crusted_Quarry/scripts.pory"
	multichoice 21, 8, MULTI_CUT_OR_SMASH, TRUE
# 85 "data/maps/Crusted_Quarry/scripts.pory"
	switch VAR_RESULT
# 86 "data/maps/Crusted_Quarry/scripts.pory"
	case 0, Crusted_Quarry_MachineControls_6
# 102 "data/maps/Crusted_Quarry/scripts.pory"
	case 1, Crusted_Quarry_MachineControls_7
	goto Crusted_Quarry_MachineControls_1

Crusted_Quarry_MachineControls_6:
# 87 "data/maps/Crusted_Quarry/scripts.pory"
	playse SE_M_CUT
# 88 "data/maps/Crusted_Quarry/scripts.pory"
	waitse
# 89 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_1
# 91 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 92 "data/maps/Crusted_Quarry/scripts.pory"
	clearflag FLAG_QUARRY_COLLAPSING
# 93 "data/maps/Crusted_Quarry/scripts.pory"
	playse SE_APPLAUSE
# 94 "data/maps/Crusted_Quarry/scripts.pory"
	waitse
# 95 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_PLAYER, Crusted_Quarry_MachineControls_Movement_0
# 96 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 30
# 97 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_2
# 98 "data/maps/Crusted_Quarry/scripts.pory"
	setwildbattle SPECIES_KABUTO, 20
# 99 "data/maps/Crusted_Quarry/scripts.pory"
	dowildbattle
# 100 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_3
# 101 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
	goto Crusted_Quarry_MachineControls_1

Crusted_Quarry_MachineControls_7:
# 103 "data/maps/Crusted_Quarry/scripts.pory"
	playse SE_M_ROCK_THROW
# 104 "data/maps/Crusted_Quarry/scripts.pory"
	waitse
# 105 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_4
# 107 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 108 "data/maps/Crusted_Quarry/scripts.pory"
	clearflag FLAG_QUARRY_COLLAPSING
# 109 "data/maps/Crusted_Quarry/scripts.pory"
	playse SE_APPLAUSE
# 110 "data/maps/Crusted_Quarry/scripts.pory"
	waitse
# 111 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_PLAYER, Crusted_Quarry_MachineControls_Movement_0
# 112 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 30
# 113 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_5
# 114 "data/maps/Crusted_Quarry/scripts.pory"
	setwildbattle SPECIES_CRANIDOS, 20
# 115 "data/maps/Crusted_Quarry/scripts.pory"
	dowildbattle
# 116 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_3
# 117 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
	goto Crusted_Quarry_MachineControls_1


Crusted_Quarry_FlameEngineer1::
# 127 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_COLE, Crusted_Quarry_FlameEngineer1_Text_0, Crusted_Quarry_FlameEngineer1_Text_1
# 131 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_FlameEngineer1_Text_2, MSGBOX_AUTOCLOSE
# 133 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 134 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_FlameEngineer2::
# 138 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_JEFF, Crusted_Quarry_FlameEngineer2_Text_0, Crusted_Quarry_FlameEngineer2_Text_1
# 142 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_FlameEngineer2_Text_2, MSGBOX_AUTOCLOSE
# 144 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 145 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_BlindHikerFight::
# 149 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_ELI, Crusted_Quarry_BlindHikerFight_Text_0, Crusted_Quarry_BlindHikerFight_Text_1
# 154 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_BlindHikerFight_Text_2, MSGBOX_AUTOCLOSE
# 156 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 157 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_ChiseledAbsTrainer::
# 161 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_REYNA, Crusted_Quarry_ChiseledAbsTrainer_Text_0, Crusted_Quarry_ChiseledAbsTrainer_Text_1
# 166 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_ChiseledAbsTrainer_Text_2, MSGBOX_AUTOCLOSE
# 168 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 169 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_OwnBusinessTrainer::
# 173 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_JONATHAN, Crusted_Quarry_OwnBusinessTrainer_Text_0, Crusted_Quarry_OwnBusinessTrainer_Text_1
# 178 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_OwnBusinessTrainer_Text_2, MSGBOX_AUTOCLOSE
# 179 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 180 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_WarningSign::
# 184 "data/maps/Crusted_Quarry/scripts.pory"
	lock
# 185 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_WarningSign_Text_0, MSGBOX_SIGN
# 187 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 188 "data/maps/Crusted_Quarry/scripts.pory"
	release
	return


# 27 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_Seer_LastResort_Movement_0:
# 27 "data/maps/Crusted_Quarry/scripts.pory"
	face_player
	step_end

# 32 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_Seer_LastResort_Movement_1:
# 32 "data/maps/Crusted_Quarry/scripts.pory"
	emote_question_mark
	step_end

# 42 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_Seer_LastResort_Movement_2:
# 42 "data/maps/Crusted_Quarry/scripts.pory"
	face_left
# 42 "data/maps/Crusted_Quarry/scripts.pory"
	face_right
# 42 "data/maps/Crusted_Quarry/scripts.pory"
	face_player
	step_end

# 57 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_Seer_LastResort_Movement_3:
# 57 "data/maps/Crusted_Quarry/scripts.pory"
	jump_in_place_up
# 57 "data/maps/Crusted_Quarry/scripts.pory"
	face_down
# 57 "data/maps/Crusted_Quarry/scripts.pory"
	emote_exclamation_mark
	step_end

# 70 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_DontRunAway_Movement_0:
# 70 "data/maps/Crusted_Quarry/scripts.pory"
	walk_fast_up
	step_end

# 95 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_MachineControls_Movement_0:
# 95 "data/maps/Crusted_Quarry/scripts.pory"
	jump_in_place_up
# 95 "data/maps/Crusted_Quarry/scripts.pory"
	emote_exclamation_mark
	step_end

Crusted_Quarry_Drone1_Text_0:
# 5 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Hive Drone: You again? The Seer won't\n"
	.string "be happy to hear about this!\n"
	.string "Prepare to be buzzed!$"

Crusted_Quarry_Drone1_Text_1:
# 7 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Gah! You got me again, Ranger.$"

Crusted_Quarry_Drone1_Text_2:
# 9 "data/maps/Crusted_Quarry/scripts.pory"
	.string "The Seer may have been wrong?!\n"
	.string "$"

Crusted_Quarry_Drone2_Text_0:
# 16 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Hive Drone: You think you can just\n"
	.string "stroll through here?\n"
	.string "Not this time!$"

Crusted_Quarry_Drone2_Text_1:
# 18 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Ugh… I'm bugged out.$"

Crusted_Quarry_Drone2_Text_2:
# 20 "data/maps/Crusted_Quarry/scripts.pory"
	.string "The Seer can't be wrong!\n"
	.string "$"

Crusted_Quarry_Seer_LastResort_Text_0:
# 29 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Seer: I didn't want it to come to this…\p"
	.string "I've overloaded the machinery to\n"
	.string "collapse the quarry!\p"
	.string "I was just supposed to get some\n"
	.string "specific books from the library!$"

Crusted_Quarry_Seer_LastResort_Text_1:
# 34 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Seer: What kind of books? I'll never\n"
	.string "tell you!\p"
	.string "You'll have to defeat me in battle!\p"
	.string "But then, will you be able to stop the\n"
	.string "collapse?$"

Crusted_Quarry_Seer_LastResort_Text_2:
# 38 "data/maps/Crusted_Quarry/scripts.pory"
	.string "You may have defeated me, but the\n"
	.string "quarry will be lost!\n"
	.string "$"

Crusted_Quarry_Seer_LastResort_Text_3:
# 44 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Seer: I've lost again…\n"
	.string "But I'll never tell you about the books\l"
	.string "sent to the Shudderwood Mansion!\p"
	.string "Or maybe I've said too much already…\n"
	.string "$"

Crusted_Quarry_Seer_LastResort_Text_4:
# 51 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Seer: See you never, Ranger!\n"
	.string "$"

Crusted_Quarry_Seer_LastResort_Text_5:
# 59 "data/maps/Crusted_Quarry/scripts.pory"
	.string "You need to fix the quarry machinery\n"
	.string "before it collapses completely!$"

Crusted_Quarry_DontRunAway_Text_0:
# 67 "data/maps/Crusted_Quarry/scripts.pory"
	.string "The quarry is collapsing! You can't run\n"
	.string "away now!\n"
	.string "You need to fix the machinery first!$"

Crusted_Quarry_MachineControls_Text_0:
# 80 "data/maps/Crusted_Quarry/scripts.pory"
	.string "You quickly analyze the machinery to\n"
	.string "come up with a plan to stop the\l"
	.string "collapse.\p"
	.string "You think you can either CUT the power\n"
	.string "or SMASH the controls.\p"
	.string "Either way, the noise is bound to\n"
	.string "attract a wild Pokémon.$"

Crusted_Quarry_MachineControls_Text_1:
# 89 "data/maps/Crusted_Quarry/scripts.pory"
	.string "You successfully cut the power to the\n"
	.string "machinery just in time!\n"
	.string "The collapse stops, and the quarry is\l"
	.string "safe once more!$"

Crusted_Quarry_MachineControls_Text_2:
# 97 "data/maps/Crusted_Quarry/scripts.pory"
	.string "A Pokémon is attracted to the sound of\n"
	.string "slashing!$"

Crusted_Quarry_MachineControls_Text_3:
# 100 "data/maps/Crusted_Quarry/scripts.pory"
	.string "All done here. That was close!$"

Crusted_Quarry_MachineControls_Text_4:
# 105 "data/maps/Crusted_Quarry/scripts.pory"
	.string "You smash the controls, and it works!\n"
	.string "The collapse stops, and the quarry is\l"
	.string "safe once more!$"

Crusted_Quarry_MachineControls_Text_5:
# 113 "data/maps/Crusted_Quarry/scripts.pory"
	.string "A Pokémon is attracted to the sound of\n"
	.string "smashing!$"

Crusted_Quarry_MachineControls_Text_6:
# 120 "data/maps/Crusted_Quarry/scripts.pory"
	.string "The machinery here seems to be\n"
	.string "non-functional.\p"
	.string "There are signs of Hive tampering.$"

Crusted_Quarry_FlameEngineer1_Text_0:
# 128 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Brainwashed Engineer: All hail the Seer!$"

Crusted_Quarry_FlameEngineer1_Text_1:
# 129 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Thank you for clearing my mind, Ranger!$"

Crusted_Quarry_FlameEngineer1_Text_2:
# 131 "data/maps/Crusted_Quarry/scripts.pory"
	.string "The Seer must be stopped at all costs!\n"
	.string "She's been using Psychic powers to\l"
	.string "control us!$"

Crusted_Quarry_FlameEngineer2_Text_0:
# 139 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Brainwashed Engineer: The Seer's vision\n"
	.string "will lead us to greatness!$"

Crusted_Quarry_FlameEngineer2_Text_1:
# 140 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Ugh… My mind feels clearer now.$"

Crusted_Quarry_FlameEngineer2_Text_2:
# 142 "data/maps/Crusted_Quarry/scripts.pory"
	.string "The Seer has been controlling us for a\n"
	.string "while!\n"
	.string "But I think she's acting under orders,\l"
	.string "too!$"

Crusted_Quarry_BlindHikerFight_Text_0:
# 150 "data/maps/Crusted_Quarry/scripts.pory"
	.string "I can't see a thing in this dusty\n"
	.string "quarry!\n"
	.string "But I can still fight!$"

Crusted_Quarry_BlindHikerFight_Text_1:
# 152 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Ugh… I guess I need to be more careful.$"

Crusted_Quarry_BlindHikerFight_Text_2:
# 154 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Whew! That was close!\n"
	.string "These Hive Drones made it hard to\l"
	.string "navigate through here!$"

Crusted_Quarry_ChiseledAbsTrainer_Text_0:
# 162 "data/maps/Crusted_Quarry/scripts.pory"
	.string "These quarry workouts are the best!\n"
	.string "Wanna see my chiseled abs?$"

Crusted_Quarry_ChiseledAbsTrainer_Text_1:
# 164 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Haha! Gotta keep these abs in shape!$"

Crusted_Quarry_ChiseledAbsTrainer_Text_2:
# 166 "data/maps/Crusted_Quarry/scripts.pory"
	.string "The quarry's a great place to train!\n"
	.string "Just watch out for falling rocks!$"

Crusted_Quarry_OwnBusinessTrainer_Text_0:
# 174 "data/maps/Crusted_Quarry/scripts.pory"
	.string "I'm just here minding my own business.\n"
	.string "And my business is to battle you!$"

Crusted_Quarry_OwnBusinessTrainer_Text_1:
# 176 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Ugh… I was too focused on other\n"
	.string "business.$"

Crusted_Quarry_OwnBusinessTrainer_Text_2:
# 178 "data/maps/Crusted_Quarry/scripts.pory"
	.string "I've been juiced.$"

Crusted_Quarry_WarningSign_Text_0:
# 185 "data/maps/Crusted_Quarry/scripts.pory"
	.string "WARNING!: Dangerous Pokémon live in\n"
	.string "this quarry area.\n"
	.string "It has been closed to the public for\l"
	.string "safety reasons.$"
