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
	applymovement LOCALID_CRUSTED_QUARRY_SEER, Crusted_Quarry_Seer_LastResort_Movement_0
# 27 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Seer_LastResort_Text_0
# 30 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_CRUSTED_QUARRY_SEER, Crusted_Quarry_Seer_LastResort_Movement_1
# 31 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 0
# 32 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Seer_LastResort_Text_1
# 35 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_15, Crusted_Quarry_Seer_LastResort_Text_2
# 38 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_CRUSTED_QUARRY_SEER, Crusted_Quarry_Seer_LastResort_Movement_2
# 39 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 30
# 40 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_CRUSTED_QUARRY_SEER, Crusted_Quarry_Seer_LastResort_Movement_3
# 41 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 0
# 42 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Seer_LastResort_Text_3
# 45 "data/maps/Crusted_Quarry/scripts.pory"
	special ShakeCamera
# 46 "data/maps/Crusted_Quarry/scripts.pory"
	waitstate
# 47 "data/maps/Crusted_Quarry/scripts.pory"
	setflag FLAG_CRUSTED_QUARRY_DEFEATED
# 48 "data/maps/Crusted_Quarry/scripts.pory"
	setflag FLAG_QUARRY_COLLAPSING
# 49 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Seer_LastResort_Text_4
# 50 "data/maps/Crusted_Quarry/scripts.pory"
	fadescreen FADE_TO_BLACK
# 51 "data/maps/Crusted_Quarry/scripts.pory"
	removeobject LOCALID_CRUSTED_QUARRY_SEER
# 52 "data/maps/Crusted_Quarry/scripts.pory"
	removeobject LOCALID_CRUSTED_QUARRY_DRONE1
# 53 "data/maps/Crusted_Quarry/scripts.pory"
	removeobject LOCALID_CRUSTED_QUARRY_DRONE2
# 54 "data/maps/Crusted_Quarry/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 55 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_PLAYER, Crusted_Quarry_Seer_LastResort_Movement_4
# 56 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 0
# 57 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_Seer_LastResort_Text_5
# 58 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 59 "data/maps/Crusted_Quarry/scripts.pory"
	release
	return


Crusted_Quarry_DontRunAway::
# 63 "data/maps/Crusted_Quarry/scripts.pory"
	goto_if_set FLAG_QUARRY_COLLAPSING, Crusted_Quarry_DontRunAway_1
	return

Crusted_Quarry_DontRunAway_1:
# 64 "data/maps/Crusted_Quarry/scripts.pory"
	lock
# 65 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_DontRunAway_Text_0
# 67 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 68 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_PLAYER, Crusted_Quarry_DontRunAway_Movement_0
# 69 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 0
# 70 "data/maps/Crusted_Quarry/scripts.pory"
	release
	return


Crusted_Quarry_MachineControls::
# 76 "data/maps/Crusted_Quarry/scripts.pory"
	lock
# 77 "data/maps/Crusted_Quarry/scripts.pory"
	goto_if_set FLAG_QUARRY_COLLAPSING, Crusted_Quarry_MachineControls_2
# 116 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_7
Crusted_Quarry_MachineControls_1:
# 119 "data/maps/Crusted_Quarry/scripts.pory"
	release
	return

Crusted_Quarry_MachineControls_2:
# 78 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_0
# 80 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 81 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_1, MSGBOX_YESNO
# 82 "data/maps/Crusted_Quarry/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Crusted_Quarry_MachineControls_5
# 99 "data/maps/Crusted_Quarry/scripts.pory"
	playse SE_M_ROCK_THROW
# 100 "data/maps/Crusted_Quarry/scripts.pory"
	waitse
# 101 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_5
# 103 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 104 "data/maps/Crusted_Quarry/scripts.pory"
	clearflag FLAG_QUARRY_COLLAPSING
# 105 "data/maps/Crusted_Quarry/scripts.pory"
	playse SE_APPLAUSE
# 106 "data/maps/Crusted_Quarry/scripts.pory"
	waitse
# 107 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_PLAYER, Crusted_Quarry_Seer_LastResort_Movement_4
# 108 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 30
# 109 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_6
# 110 "data/maps/Crusted_Quarry/scripts.pory"
	setwildbattle SPECIES_CRANIDOS, 20
# 111 "data/maps/Crusted_Quarry/scripts.pory"
	dowildbattle
# 112 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_4
# 113 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
	goto Crusted_Quarry_MachineControls_1

Crusted_Quarry_MachineControls_5:
# 83 "data/maps/Crusted_Quarry/scripts.pory"
	playse SE_M_CUT
# 84 "data/maps/Crusted_Quarry/scripts.pory"
	waitse
# 85 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_2
# 87 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 88 "data/maps/Crusted_Quarry/scripts.pory"
	clearflag FLAG_QUARRY_COLLAPSING
# 89 "data/maps/Crusted_Quarry/scripts.pory"
	playse SE_APPLAUSE
# 90 "data/maps/Crusted_Quarry/scripts.pory"
	waitse
# 91 "data/maps/Crusted_Quarry/scripts.pory"
	applymovement LOCALID_PLAYER, Crusted_Quarry_Seer_LastResort_Movement_4
# 92 "data/maps/Crusted_Quarry/scripts.pory"
	waitmovement 30
# 93 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_3
# 94 "data/maps/Crusted_Quarry/scripts.pory"
	setwildbattle SPECIES_KABUTO, 20
# 95 "data/maps/Crusted_Quarry/scripts.pory"
	dowildbattle
# 96 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_MachineControls_Text_4
# 97 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
	goto Crusted_Quarry_MachineControls_1


Crusted_Quarry_FlameEngineer1::
# 123 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_COLE, Crusted_Quarry_FlameEngineer1_Text_0, Crusted_Quarry_FlameEngineer1_Text_1
# 127 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_FlameEngineer1_Text_2, MSGBOX_AUTOCLOSE
# 129 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 130 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_FlameEngineer2::
# 134 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_JEFF, Crusted_Quarry_FlameEngineer2_Text_0, Crusted_Quarry_FlameEngineer2_Text_1
# 138 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_FlameEngineer2_Text_2, MSGBOX_AUTOCLOSE
# 140 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 141 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_BlindHikerFight::
# 145 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_ELI, Crusted_Quarry_BlindHikerFight_Text_0, Crusted_Quarry_BlindHikerFight_Text_1
# 150 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_BlindHikerFight_Text_2, MSGBOX_AUTOCLOSE
# 152 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 153 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_ChiseledAbsTrainer::
# 157 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_REYNA, Crusted_Quarry_ChiseledAbsTrainer_Text_0, Crusted_Quarry_ChiseledAbsTrainer_Text_1
# 162 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_ChiseledAbsTrainer_Text_2, MSGBOX_AUTOCLOSE
# 164 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 165 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_OwnBusinessTrainer::
# 169 "data/maps/Crusted_Quarry/scripts.pory"
	trainerbattle_single TRAINER_JONATHAN, Crusted_Quarry_OwnBusinessTrainer_Text_0, Crusted_Quarry_OwnBusinessTrainer_Text_1
# 174 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_OwnBusinessTrainer_Text_2, MSGBOX_AUTOCLOSE
# 175 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 176 "data/maps/Crusted_Quarry/scripts.pory"
	releaseall
	return


Crusted_Quarry_WarningSign::
# 180 "data/maps/Crusted_Quarry/scripts.pory"
	lock
# 181 "data/maps/Crusted_Quarry/scripts.pory"
	msgbox Crusted_Quarry_WarningSign_Text_0, MSGBOX_SIGN
# 183 "data/maps/Crusted_Quarry/scripts.pory"
	waitmessage
# 184 "data/maps/Crusted_Quarry/scripts.pory"
	release
	return


# 26 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_Seer_LastResort_Movement_0:
# 26 "data/maps/Crusted_Quarry/scripts.pory"
	face_player
	step_end

# 30 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_Seer_LastResort_Movement_1:
# 30 "data/maps/Crusted_Quarry/scripts.pory"
	emote_question_mark
	step_end

# 38 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_Seer_LastResort_Movement_2:
# 38 "data/maps/Crusted_Quarry/scripts.pory"
	emote_x
	step_end

# 40 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_Seer_LastResort_Movement_3:
# 40 "data/maps/Crusted_Quarry/scripts.pory"
	face_left
# 40 "data/maps/Crusted_Quarry/scripts.pory"
	face_right
# 40 "data/maps/Crusted_Quarry/scripts.pory"
	face_player
	step_end

# 55 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_Seer_LastResort_Movement_4:
# 55 "data/maps/Crusted_Quarry/scripts.pory"
	jump_in_place_up
# 55 "data/maps/Crusted_Quarry/scripts.pory"
	emote_exclamation_mark
	step_end

# 68 "data/maps/Crusted_Quarry/scripts.pory"
Crusted_Quarry_DontRunAway_Movement_0:
# 68 "data/maps/Crusted_Quarry/scripts.pory"
	walk_fast_up
	step_end

Crusted_Quarry_Drone1_Text_0:
# 5 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Hive Drone: You again? The Seer won't\n"
	.string "be happy to hear about this!\n"
	.string "Prepare to be buzzed!$"

Crusted_Quarry_Drone1_Text_1:
# 7 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Hive Drone: Gah! You got me again,\n"
	.string "Ranger.$"

Crusted_Quarry_Drone1_Text_2:
# 9 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Hive Drone: The Seer may have been\n"
	.string "wrong?!\n"
	.string "$"

Crusted_Quarry_Drone2_Text_0:
# 16 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Hive Drone: You think you can just\n"
	.string "stroll through here?\n"
	.string "Not this time!$"

Crusted_Quarry_Drone2_Text_1:
# 18 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Hive Drone: Ugh… I'm bugged out.$"

Crusted_Quarry_Drone2_Text_2:
# 20 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Hive Drone: The Seer can't be wrong!\n"
	.string "$"

Crusted_Quarry_Seer_LastResort_Text_0:
# 27 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Seer: I didn't want it to come to this…\n"
	.string "I've overloaded the machinery to\l"
	.string "collapse the quarry!\n"
	.string "I was just supposed to get some\l"
	.string "specific books from the library!\n"
	.string "$"

Crusted_Quarry_Seer_LastResort_Text_1:
# 32 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Seer: What kind of books? I'll never\n"
	.string "tell you!\n"
	.string "You'll have to defeat me in battle! But\l"
	.string "then, will you be able to stop the\l"
	.string "collapse?$"

Crusted_Quarry_Seer_LastResort_Text_2:
# 36 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Seer: You may have defeated me, but the\n"
	.string "quarry will be lost!\n"
	.string "$"

Crusted_Quarry_Seer_LastResort_Text_3:
# 42 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Seer: I've lost again…\n"
	.string "But I'll never tell you about the books\l"
	.string "sent to the Shudderwood Mansion!\p"
	.string "Or maybe I've said too much already…\n"
	.string "$"

Crusted_Quarry_Seer_LastResort_Text_4:
# 49 "data/maps/Crusted_Quarry/scripts.pory"
	.string "The lights flicker as the Seer escapes\n"
	.string "into the shadows.\n"
	.string "$"

Crusted_Quarry_Seer_LastResort_Text_5:
# 57 "data/maps/Crusted_Quarry/scripts.pory"
	.string "You need to fix the quarry machinery\n"
	.string "before it collapses completely!\n"
	.string "$"

Crusted_Quarry_DontRunAway_Text_0:
# 65 "data/maps/Crusted_Quarry/scripts.pory"
	.string "The quarry is collapsing! You can't run\n"
	.string "away now!\n"
	.string "You need to fix the machinery first!$"

Crusted_Quarry_MachineControls_Text_0:
# 78 "data/maps/Crusted_Quarry/scripts.pory"
	.string "You quickly analyze the machinery to\n"
	.string "come up with a plan to stop the\l"
	.string "collapse.\n"
	.string "You think you can either CUT the power\l"
	.string "or just SMASH the controls.$"

Crusted_Quarry_MachineControls_Text_1:
# 81 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Will you CUT the power?$"

Crusted_Quarry_MachineControls_Text_2:
# 85 "data/maps/Crusted_Quarry/scripts.pory"
	.string "You successfully cut the power to the\n"
	.string "machinery just in time!\n"
	.string "The collapse stops, and the quarry is\l"
	.string "safe once more!$"

Crusted_Quarry_MachineControls_Text_3:
# 93 "data/maps/Crusted_Quarry/scripts.pory"
	.string "A Pokémon is attracted to the sound of\n"
	.string "slashing!$"

Crusted_Quarry_MachineControls_Text_4:
# 96 "data/maps/Crusted_Quarry/scripts.pory"
	.string "All done here. That was close!$"

Crusted_Quarry_MachineControls_Text_5:
# 101 "data/maps/Crusted_Quarry/scripts.pory"
	.string "You smash the controls, and it works!\n"
	.string "The collapse stops, and the quarry is\l"
	.string "safe once more!$"

Crusted_Quarry_MachineControls_Text_6:
# 109 "data/maps/Crusted_Quarry/scripts.pory"
	.string "A Pokémon is attracted to the sound of\n"
	.string "smashing!$"

Crusted_Quarry_MachineControls_Text_7:
# 116 "data/maps/Crusted_Quarry/scripts.pory"
	.string "The machinery here seems to be\n"
	.string "non-functional. There are signs of Hive\l"
	.string "tampering.$"

Crusted_Quarry_FlameEngineer1_Text_0:
# 124 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Quartz Engineer: All hail the Seer!$"

Crusted_Quarry_FlameEngineer1_Text_1:
# 125 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Quartz Engineer: Thank you for clearing\n"
	.string "my mind, Ranger!$"

Crusted_Quarry_FlameEngineer1_Text_2:
# 127 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Quartz Engineer: The Seer must be\n"
	.string "stopped at all costs!\n"
	.string "She's been using Psychic powers to\l"
	.string "control us!$"

Crusted_Quarry_FlameEngineer2_Text_0:
# 135 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Quartz Engineer: The Seer's vision will\n"
	.string "lead us to greatness!$"

Crusted_Quarry_FlameEngineer2_Text_1:
# 136 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Quartz Engineer: Ugh… My mind feels\n"
	.string "clearer now.$"

Crusted_Quarry_FlameEngineer2_Text_2:
# 138 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Quartz Engineer: The Seer has been\n"
	.string "controlling us for a while!\n"
	.string "But I think she's under orders, too!$"

Crusted_Quarry_BlindHikerFight_Text_0:
# 146 "data/maps/Crusted_Quarry/scripts.pory"
	.string "I can't see a thing in this dusty\n"
	.string "quarry!\n"
	.string "But I can still fight!$"

Crusted_Quarry_BlindHikerFight_Text_1:
# 148 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Ugh… I guess I need to be more careful.$"

Crusted_Quarry_BlindHikerFight_Text_2:
# 150 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Blind Hiker: Whew! That was close!\n"
	.string "These Hive Drones made it hard to\l"
	.string "navigate through here!$"

Crusted_Quarry_ChiseledAbsTrainer_Text_0:
# 158 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Trainer Lisa: These quarry workouts are\n"
	.string "the best!\n"
	.string "Wanna see my chiseled abs?$"

Crusted_Quarry_ChiseledAbsTrainer_Text_1:
# 160 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Trainer Lisa: Haha! Gotta keep these\n"
	.string "abs in shape!$"

Crusted_Quarry_ChiseledAbsTrainer_Text_2:
# 162 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Trainer Lisa: The quarry's a great place\n"
	.string "to train!\n"
	.string "Just watch out for falling rocks!$"

Crusted_Quarry_OwnBusinessTrainer_Text_0:
# 170 "data/maps/Crusted_Quarry/scripts.pory"
	.string "I'm just here minding my own business.\n"
	.string "And my business is to battle you!$"

Crusted_Quarry_OwnBusinessTrainer_Text_1:
# 172 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Ugh… I was too focused on other\n"
	.string "business.$"

Crusted_Quarry_OwnBusinessTrainer_Text_2:
# 174 "data/maps/Crusted_Quarry/scripts.pory"
	.string "Trainer Jonathan: Sorry about that. I\n"
	.string "was just trying to mind my own business.$"

Crusted_Quarry_WarningSign_Text_0:
# 181 "data/maps/Crusted_Quarry/scripts.pory"
	.string "WARNING!: Dangerous Pokémon live in\n"
	.string "this quarry area.\n"
	.string "It has been closed to the public for\l"
	.string "safety reasons.$"
