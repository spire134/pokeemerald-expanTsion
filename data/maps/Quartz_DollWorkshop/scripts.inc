Quartz_DollWorkshop_MapScripts::
	.byte 0


Quartz_OldMan_WorkshopHelper::
# 4 "data/maps/Quartz_DollWorkshop/scripts.pory"
	lock
# 5 "data/maps/Quartz_DollWorkshop/scripts.pory"
	faceplayer
# 6 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_OldMan_WorkshopHelper_Text_0
# 7 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 8 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return


Quartz_SoullessMaidDoll::
# 12 "data/maps/Quartz_DollWorkshop/scripts.pory"
	lock
# 13 "data/maps/Quartz_DollWorkshop/scripts.pory"
	faceplayer
# 14 "data/maps/Quartz_DollWorkshop/scripts.pory"
	compare_var_to_value VAR_HEART_SCALES_GIVEN_TO_DOLL, 4
# 15 "data/maps/Quartz_DollWorkshop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Quartz_SoullessMaidDoll_1
# 22 "data/maps/Quartz_DollWorkshop/scripts.pory"
	goto_if_unset FLAG_SPOKE_WITH_SOULLESS_MAID_DOLL, Quartz_SoullessMaidDoll_4
# 29 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_Text_1
# 30 "data/maps/Quartz_DollWorkshop/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 31 "data/maps/Quartz_DollWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Quartz_SoullessMaidDoll_NoHeartScale
# 32 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_Text_2
# 33 "data/maps/Quartz_DollWorkshop/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
# 34 "data/maps/Quartz_DollWorkshop/scripts.pory"
	addvar VAR_HEART_SCALES_GIVEN_TO_DOLL, 1
# 35 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_Text_3
# 36 "data/maps/Quartz_DollWorkshop/scripts.pory"
	compare_var_to_value VAR_HEART_SCALES_GIVEN_TO_DOLL, 4
# 37 "data/maps/Quartz_DollWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Quartz_SoullessMaidDoll_3rdHeartScale
# 38 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 39 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return

Quartz_SoullessMaidDoll_1:
# 16 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_Text_0
# 18 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 19 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return

Quartz_SoullessMaidDoll_4:
# 23 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_Text_1
# 24 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 25 "data/maps/Quartz_DollWorkshop/scripts.pory"
	setflag FLAG_SPOKE_WITH_SOULLESS_MAID_DOLL
# 26 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return


Quartz_SoullessMaidDoll_NoHeartScale::
# 45 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_NoHeartScale_Text_0
# 47 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 48 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return


Quartz_SoullessMaidDoll_3rdHeartScale::
# 52 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_3rdHeartScale_Text_0
# 55 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 56 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return


Quartz_Dollmaker_Prodigy::
# 60 "data/maps/Quartz_DollWorkshop/scripts.pory"
	lock
# 61 "data/maps/Quartz_DollWorkshop/scripts.pory"
	faceplayer
# 62 "data/maps/Quartz_DollWorkshop/scripts.pory"
	compare_var_to_value VAR_HEART_SCALES_GIVEN_TO_DOLL, 4
# 63 "data/maps/Quartz_DollWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Quartz_Dollmaker_Prodigy_SoulHint
# 64 "data/maps/Quartz_DollWorkshop/scripts.pory"
	goto_if_unset FLAG_SPOKE_WITH_SOULLESS_MAID_DOLL, Quartz_Dollmaker_Prodigy_2
# 70 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_Dollmaker_Prodigy_Text_1
# 72 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 73 "data/maps/Quartz_DollWorkshop/scripts.pory"
	applymovement LOCALID_DOLLMAKER_PRODIGY, Quartz_Dollmaker_Prodigy_Movement_0
# 74 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmovement 0
# 75 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_Dollmaker_Prodigy_Text_2, MSGBOX_YESNO
# 76 "data/maps/Quartz_DollWorkshop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_Dollmaker_Prodigy_5
Quartz_Dollmaker_Prodigy_1:
# 83 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return

Quartz_Dollmaker_Prodigy_2:
# 65 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_Dollmaker_Prodigy_Text_0
# 67 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
	goto Quartz_Dollmaker_Prodigy_1

Quartz_Dollmaker_Prodigy_5:
# 77 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_Dollmaker_Prodigy_Text_3
# 80 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
	goto Quartz_Dollmaker_Prodigy_1


Quartz_Dollmaker_Prodigy_SoulHint::
# 87 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_Dollmaker_Prodigy_SoulHint_Text_0
# 90 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 91 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return


# 73 "data/maps/Quartz_DollWorkshop/scripts.pory"
Quartz_Dollmaker_Prodigy_Movement_0:
# 73 "data/maps/Quartz_DollWorkshop/scripts.pory"
	emote_question_mark
	step_end

Quartz_OldMan_WorkshopHelper_Text_0:
# 6 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "You are always welcome to the\n"
	.string "Dollmaker's workshop.\p"
	.string "$"

Quartz_SoullessMaidDoll_Text_0:
# 16 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "The doll's eyes glow warmly as it smiles\n"
	.string "at you.\p"
	.string "It seems to just need a soul now to be\n"
	.string "complete.$"

Quartz_SoullessMaidDoll_Text_1:
# 23 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "…$"

Quartz_SoullessMaidDoll_Text_2:
# 32 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "You insert the Heart Scale into the\n"
	.string "doll's chest.\p"
	.string "$"

Quartz_SoullessMaidDoll_Text_3:
# 35 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "The doll's eyes light up, and seem to\n"
	.string "follow you around the room.\p"
	.string "$"

Quartz_SoullessMaidDoll_NoHeartScale_Text_0:
# 45 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "The doll's eyes seem to follow you\n"
	.string "around the room.\p"
	.string "It looks like it wants something…$"

Quartz_SoullessMaidDoll_3rdHeartScale_Text_0:
# 52 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "With a soft chime, the doll blinks and\n"
	.string "sputters.\p"
	.string "It looks at you emptily.\n"
	.string "It seems to need something else to\l"
	.string "fully come to life…$"

Quartz_Dollmaker_Prodigy_Text_0:
# 65 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "Dollmaker Susan: Welcome to my\n"
	.string "workshop!\p"
	.string "Feel free to look around and see my\n"
	.string "creations.$"

Quartz_Dollmaker_Prodigy_Text_1:
# 70 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "Dollmaker Susan: Ah, I see you've met my\n"
	.string "latest creation.\p"
	.string "She's still a work in progress, but I'm\n"
	.string "hopeful she'll come to life one day.$"

Quartz_Dollmaker_Prodigy_Text_2:
# 75 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "What? Do you want to know more about\n"
	.string "her?$"

Quartz_Dollmaker_Prodigy_Text_3:
# 77 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "Dollmaker Susan: Well, I designed her\n"
	.string "along with master Mollie, but she still\l"
	.string "lacks a soul.\p"
	.string "Perhaps one day, with enough care and\n"
	.string "attention, she'll come to life. For now\l"
	.string "she just needs a few more Heart Scales\l"
	.string "to be complete physically.$"

Quartz_Dollmaker_Prodigy_SoulHint_Text_0:
# 87 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "Dollmaker Susan: Ah, I see you've been\n"
	.string "helping my little doll friend here.\p"
	.string "She's almost complete physically, but I\n"
	.string "believe she still needs a soul to truly\l"
	.string "come to life.\p"
	.string "Perhaps if we had a soul, one that was\n"
	.string "fresh and full of life, she could awaken.$"
