Quartz_DollWorkshop_MapScripts::
	.byte 0


Quartz_OldMan_WorkshopHelper::
# 4 "data/maps/Quartz_DollWorkshop/scripts.pory"
	lock
# 5 "data/maps/Quartz_DollWorkshop/scripts.pory"
	faceplayer
# 6 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_OldMan_WorkshopHelper_Text_0
# 11 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 12 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return


Quartz_SoullessMaidDoll::
# 16 "data/maps/Quartz_DollWorkshop/scripts.pory"
	lock
# 17 "data/maps/Quartz_DollWorkshop/scripts.pory"
	faceplayer
# 18 "data/maps/Quartz_DollWorkshop/scripts.pory"
	compare_var_to_value VAR_HEART_SCALES_GIVEN_TO_DOLL, 4
# 19 "data/maps/Quartz_DollWorkshop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Quartz_SoullessMaidDoll_1
# 26 "data/maps/Quartz_DollWorkshop/scripts.pory"
	goto_if_unset FLAG_SPOKE_WITH_SOULLESS_MAID_DOLL, Quartz_SoullessMaidDoll_4
# 34 "data/maps/Quartz_DollWorkshop/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 35 "data/maps/Quartz_DollWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Quartz_SoullessMaidDoll_NoHeartScale
# 36 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_Text_2
# 37 "data/maps/Quartz_DollWorkshop/scripts.pory"
	removeitem ITEM_HEART_SCALE, 1
# 38 "data/maps/Quartz_DollWorkshop/scripts.pory"
	addvar VAR_HEART_SCALES_GIVEN_TO_DOLL, 1
# 39 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_Text_3
# 40 "data/maps/Quartz_DollWorkshop/scripts.pory"
	compare_var_to_value VAR_HEART_SCALES_GIVEN_TO_DOLL, 4
# 41 "data/maps/Quartz_DollWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Quartz_SoullessMaidDoll_3rdHeartScale
# 42 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 43 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return

Quartz_SoullessMaidDoll_1:
# 20 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_Text_0
# 22 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 23 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return

Quartz_SoullessMaidDoll_4:
# 27 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_Text_1
# 29 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 30 "data/maps/Quartz_DollWorkshop/scripts.pory"
	setflag FLAG_SPOKE_WITH_SOULLESS_MAID_DOLL
# 31 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return


Quartz_SoullessMaidDoll_NoHeartScale::
# 49 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_NoHeartScale_Text_0
# 51 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 52 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return


Quartz_SoullessMaidDoll_3rdHeartScale::
# 56 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_SoullessMaidDoll_3rdHeartScale_Text_0
# 58 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 59 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return


Quartz_Dollmaker_Prodigy::
# 63 "data/maps/Quartz_DollWorkshop/scripts.pory"
	lock
# 64 "data/maps/Quartz_DollWorkshop/scripts.pory"
	faceplayer
# 65 "data/maps/Quartz_DollWorkshop/scripts.pory"
	compare_var_to_value VAR_HEART_SCALES_GIVEN_TO_DOLL, 4
# 66 "data/maps/Quartz_DollWorkshop/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Quartz_Dollmaker_Prodigy_SoulHint
# 68 "data/maps/Quartz_DollWorkshop/scripts.pory"
	goto_if_unset FLAG_SPOKE_WITH_SOULLESS_MAID_DOLL, Quartz_Dollmaker_Prodigy_2
# 76 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_Dollmaker_Prodigy_Text_1
# 77 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 78 "data/maps/Quartz_DollWorkshop/scripts.pory"
	applymovement LOCALID_DOLLMAKER_PRODIGY, Quartz_Dollmaker_Prodigy_Movement_0
# 79 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmovement 0
# 80 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_Dollmaker_Prodigy_Text_2, MSGBOX_YESNO
# 81 "data/maps/Quartz_DollWorkshop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_Dollmaker_Prodigy_5
Quartz_Dollmaker_Prodigy_1:
# 88 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return

Quartz_Dollmaker_Prodigy_2:
# 69 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_Dollmaker_Prodigy_Text_0
# 73 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
	goto Quartz_Dollmaker_Prodigy_1

Quartz_Dollmaker_Prodigy_5:
# 82 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_Dollmaker_Prodigy_Text_3
# 85 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
	goto Quartz_Dollmaker_Prodigy_1


Quartz_Dollmaker_Prodigy_SoulHint::
# 92 "data/maps/Quartz_DollWorkshop/scripts.pory"
	msgbox Quartz_Dollmaker_Prodigy_SoulHint_Text_0
# 95 "data/maps/Quartz_DollWorkshop/scripts.pory"
	waitmessage
# 96 "data/maps/Quartz_DollWorkshop/scripts.pory"
	release
	return


# 78 "data/maps/Quartz_DollWorkshop/scripts.pory"
Quartz_Dollmaker_Prodigy_Movement_0:
# 78 "data/maps/Quartz_DollWorkshop/scripts.pory"
	emote_question_mark
	step_end

Quartz_OldMan_WorkshopHelper_Text_0:
# 6 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "Welcome to Master Mollie's workshop.\p"
	.string "Lady Sonya is currently immersed in her\n"
	.string "craft. Please forgive her intense\l"
	.string "staring; she views everyone as a\l"
	.string "potential reference model.\p"
	.string "If you wish to assist her magnum opus,\n"
	.string "the doll requires Heart Scales for its\l"
	.string "internal mechanisms.\p"
	.string "I used to gather them from the\n"
	.string "Quartzite Quarry. Since Team Hive\l"
	.string "flooded it, the scales have washed into\l"
	.string "the deeper, submerged sections.\p"
	.string "Only a capable Ranger could dive down\n"
	.string "there now… the aquatic Pokémon lurking\l"
	.string "in those depths are incredibly\l"
	.string "territorial and powerful.$"

Quartz_SoullessMaidDoll_Text_0:
# 20 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "The doll's glass eyes glow with a faint,\n"
	.string "warm light, fixed perfectly upon your\l"
	.string "face.\p"
	.string "Its physical mechanisms are complete.\n"
	.string "It waits only for a soul.$"

Quartz_SoullessMaidDoll_Text_1:
# 27 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "…\p"
	.string "The doll's cold, porcelain face is angled\n"
	.string "downward, but you feel an uncanny\l"
	.string "sensation that it is watching you.$"

Quartz_SoullessMaidDoll_Text_2:
# 36 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "You carefully insert the Heart Scale\n"
	.string "into a small recess on the doll's chest…$"

Quartz_SoullessMaidDoll_Text_3:
# 39 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "A faint, rhythmic ticking begins to echo\n"
	.string "from within its porcelain shell.$"

Quartz_SoullessMaidDoll_NoHeartScale_Text_0:
# 49 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "The doll's eyes track your movements\n"
	.string "with an unsettling, mechanical\l"
	.string "precision.\p"
	.string "An empty slot on its chest seems to be\n"
	.string "waiting for a specific, iridescent\l"
	.string "scale.$"

Quartz_SoullessMaidDoll_3rdHeartScale_Text_0:
# 56 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "With a sharp metallic click, the doll's\n"
	.string "joints lock into place. It blinks,\l"
	.string "tilting its head toward you emptily.\p"
	.string "The physical vessel is fully repaired.\n"
	.string "It requires something far more\l"
	.string "profound to truly awaken.$"

Quartz_Dollmaker_Prodigy_Text_0:
# 69 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "Dollmaker Sonya: Shh. Do not move.\p"
	.string "Let me study the way the light catches\n"
	.string "your brow…\p"
	.string "…Yes. The jawline is asymmetrical, and\n"
	.string "the cheekbones lack the pristine\l"
	.string "symmetry of polished porcelain. But\l"
	.string "your eyes are remarkably expressive.\p"
	.string "So hard to capture that. You may\n"
	.string "observe my creations, but do not\l"
	.string "smudge the glass.$"

Quartz_Dollmaker_Prodigy_Text_1:
# 76 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "Dollmaker Sonya: You noticed her. My\n"
	.string "magnum opus. Her proportions are\l"
	.string "mathematically flawless.$"

Quartz_Dollmaker_Prodigy_Text_2:
# 80 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "You wish to understand the mechanics\n"
	.string "of perfection?$"

Quartz_Dollmaker_Prodigy_Text_3:
# 82 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "Dollmaker Sonya: Master Mollie and I\n"
	.string "shaped her vessel, but her joints and\l"
	.string "artificial heart require the\l"
	.string "friction-less enamel found only on\l"
	.string "Heart Scales.\p"
	.string "Our assistant handles the mundane\n"
	.string "gathering. Speak to him if you wish to\l"
	.string "be useful.\p"
	.string "But remember… even with a flawless\n"
	.string "physical form, she remains hollow. An\l"
	.string "empty shell.$"

Quartz_Dollmaker_Prodigy_SoulHint_Text_0:
# 92 "data/maps/Quartz_DollWorkshop/scripts.pory"
	.string "Dollmaker Sonya: The physical form is\n"
	.string "complete. Her synthetic heart beats,\l"
	.string "yet her eyes remain vacant.\p"
	.string "The symmetry is perfect, but the spark\n"
	.string "is absent. To bridge the gap between a\l"
	.string "masterpiece and true life…\p"
	.string "She requires a soul. A fresh, potent\n"
	.string "spiritual energy. If only such an\l"
	.string "intangible thing could be captured…$"
