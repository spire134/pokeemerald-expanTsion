Shunu_Beach_Cliffs_MapScripts::
	.byte 0


Eon_Field_Script::
# 4 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	lockall
# 5 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	faceplayer
# 6 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	goto_if_unset FLAG_MARA_FIELD_TEST_STARTED, Eon_Field_Script_2
# 11 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	goto_if_unset FLAG_EON_CLEARED, Eon_Field_Script_4
# 26 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	msgbox Eon_Field_Script_Text_5
# 27 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	releaseall
	return

Eon_Field_Script_2:
# 7 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	msgbox Eon_Field_Script_Text_0
# 8 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	releaseall
	end

Eon_Field_Script_4:
# 12 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	call Eon_StarterCommentary
# 13 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	msgbox Eon_Field_Script_Text_1, MSGBOX_YESNO
# 14 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Eon_Field_Script_7
# 21 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	msgbox Eon_Field_Script_Text_4
# 22 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	releaseall
	return

Eon_Field_Script_7:
# 15 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	trainerbattle_no_intro TRAINER_EON_SCOUT, Eon_Field_Script_Text_2
# 16 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	msgbox Eon_Field_Script_Text_3
# 17 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	setflag FLAG_EON_CLEARED
# 19 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	releaseall
	return


Eon_StarterCommentary:
# 32 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	switch VAR_STARTER_MON
# 33 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	case 0, Eon_StarterCommentary_3
# 35 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	case 1, Eon_StarterCommentary_4
# 37 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	case 2, Eon_StarterCommentary_5
Eon_StarterCommentary_1:
	return

Eon_StarterCommentary_3:
# 34 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	msgbox Eon_StarterCommentary_Text_0
	goto Eon_StarterCommentary_1

Eon_StarterCommentary_4:
# 36 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	msgbox Eon_StarterCommentary_Text_1
	goto Eon_StarterCommentary_1

Eon_StarterCommentary_5:
# 38 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	msgbox Eon_StarterCommentary_Text_2
	goto Eon_StarterCommentary_1


Shunu_Fisherman_Fight::
# 44 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	trainerbattle_single TRAINER_DARIAN, Shunu_Fisherman_Fight_Text_0, Shunu_Fisherman_Fight_Text_1
# 47 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	msgbox Shunu_Fisherman_Fight_Text_2, MSGBOX_AUTOCLOSE
# 48 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	waitmessage
	return


Shunu_BlackBelt_Fight::
# 52 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Shunu_BlackBelt_Fight_Text_0, Shunu_BlackBelt_Fight_Text_1
# 55 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	msgbox Shunu_BlackBelt_Fight_Text_2, MSGBOX_AUTOCLOSE
# 56 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	waitmessage
	return


Eon_Field_Script_Text_0:
# 7 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Eon: I'm mapping the cliffs. This route\n"
	.string "is a dead end. You should go to HQ. West.$"

Eon_Field_Script_Text_1:
# 13 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Eon: One more question, then. Are you\n"
	.string "sure you're ready to test your\l"
	.string "conviction here?$"

Eon_Field_Script_Text_2:
# 15 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Eon: Not bad. I'll see you at HQ.$"

Eon_Field_Script_Text_3:
# 16 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Eon: Good. Remember your wins, study\n"
	.string "your losses.$"

Eon_Field_Script_Text_4:
# 21 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Eon: Then don't bluff your way through\n"
	.string "this. Come back when you're ready.$"

Eon_Field_Script_Text_5:
# 26 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Eon: See you back at HQ.$"

Eon_StarterCommentary_Text_0:
# 34 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Eon: TURTWIG fits a patient trainer.\n"
	.string "You don't rush. You wait for the right\l"
	.string "time.$"

Eon_StarterCommentary_Text_1:
# 36 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Eon: TORCHIC suits a bold stride. I can\n"
	.string "see you like to push forward.$"

Eon_StarterCommentary_Text_2:
# 38 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Eon: FROAKIE is all balance and timing.\n"
	.string "You're watching the field before you\l"
	.string "move.$"

Shunu_Fisherman_Fight_Text_0:
# 45 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Fishing's great here, but battling's\n"
	.string "better!$"

Shunu_Fisherman_Fight_Text_1:
# 46 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "That was a great battle by the sea!$"

Shunu_Fisherman_Fight_Text_2:
# 47 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "I love a good battle by the sea!$"

Shunu_BlackBelt_Fight_Text_0:
# 53 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "The ocean's power flows through me!$"

Shunu_BlackBelt_Fight_Text_1:
# 54 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "The ocean's power is truly unstoppable!$"

Shunu_BlackBelt_Fight_Text_2:
# 55 "data/maps/Shunu_Beach_Cliffs/scripts.pory"
	.string "Feel the power of the ocean!$"
