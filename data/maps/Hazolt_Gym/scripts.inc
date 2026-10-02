Hazolt_Gym_MapScripts::
	.byte 0


Mara_Gym_Script::
# 4 "data/maps/Hazolt_Gym/scripts.pory"
	lockall
# 5 "data/maps/Hazolt_Gym/scripts.pory"
	faceplayer
# 6 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_unset FLAG_MARA_FIELD_TEST_STARTED, Mara_Gym_Script_2
# 29 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_unset FLAG_EON_CLEARED, Mara_Gym_Script_5
# 29 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_unset FLAG_CORIN_CLEARED, Mara_Gym_Script_5
# 29 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_unset FLAG_TASMIN_CLEARED, Mara_Gym_Script_5
# 36 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_unset FLAG_MARA_EVAL_READY, Mara_Gym_Script_12
# 53 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_unset FLAG_MARA_DEFEATED, Mara_Gym_Script_15
# 78 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_SHUDDERWOOD_MANSION_CLEARED, Mara_Gym_Script_18
# 84 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Mara_Gym_Script_19
# 97 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Mara_Gym_Script_20
# 103 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_CRUSTED_QUARRY_DEFEATED, Mara_Gym_Script_21
# 120 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_MARA_DEFEATED, Mara_Gym_Script_22
# 126 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_21
Mara_Gym_Script_17:
# 129 "data/maps/Hazolt_Gym/scripts.pory"
	releaseall
	end

Mara_Gym_Script_2:
# 7 "data/maps/Hazolt_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_HAZOLT_VILLAGE
# 8 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_0
# 12 "data/maps/Hazolt_Gym/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 13 "data/maps/Hazolt_Gym/scripts.pory"
	giveitem ITEM_POTION, 5
# 14 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_1
# 18 "data/maps/Hazolt_Gym/scripts.pory"
	setflag FLAG_MARA_FIELD_TEST_STARTED
# 19 "data/maps/Hazolt_Gym/scripts.pory"
	clearflag FLAG_BEGINNING_TRAINERS
# 20 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_2
# 23 "data/maps/Hazolt_Gym/scripts.pory"
	giveitem ITEM_EXP_ALL
# 24 "data/maps/Hazolt_Gym/scripts.pory"
	waitfanfare
# 25 "data/maps/Hazolt_Gym/scripts.pory"
	waitbuttonpress
# 26 "data/maps/Hazolt_Gym/scripts.pory"
	releaseall
	end

Mara_Gym_Script_5:
# 30 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_3
# 33 "data/maps/Hazolt_Gym/scripts.pory"
	releaseall
	end

Mara_Gym_Script_12:
# 37 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_4
# 40 "data/maps/Hazolt_Gym/scripts.pory"
	setflag FLAG_MARA_EVAL_READY
# 41 "data/maps/Hazolt_Gym/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
# 42 "data/maps/Hazolt_Gym/scripts.pory"
	addobject LOCALID_EON_GYM
# 43 "data/maps/Hazolt_Gym/scripts.pory"
	addobject LOCALID_TASMIN_GYM
# 44 "data/maps/Hazolt_Gym/scripts.pory"
	addobject LOCALID_CORIN_GYM
# 45 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_5
# 50 "data/maps/Hazolt_Gym/scripts.pory"
	releaseall
	end

Mara_Gym_Script_15:
# 54 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_6, MSGBOX_YESNO
# 56 "data/maps/Hazolt_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mara_Gym_Script_29
# 73 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_11
# 74 "data/maps/Hazolt_Gym/scripts.pory"
	releaseall
	end

Mara_Gym_Script_18:
# 79 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_12
	goto Mara_Gym_Script_17

Mara_Gym_Script_19:
# 85 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_SHUDDERWOOD_HIVE_PATROL_DEFEATED, Mara_Gym_Script_32
# 91 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_14
	goto Mara_Gym_Script_17

Mara_Gym_Script_20:
# 98 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_15
	goto Mara_Gym_Script_17

Mara_Gym_Script_21:
# 104 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_16
# 108 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAREHOUSE_KEY, Mara_Gym_Script_35
	goto Mara_Gym_Script_17

Mara_Gym_Script_22:
# 121 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_20
	goto Mara_Gym_Script_17

Mara_Gym_Script_29:
# 57 "data/maps/Hazolt_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_MARA_EVAL, Mara_Gym_Script_Text_7
# 58 "data/maps/Hazolt_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 59 "data/maps/Hazolt_Gym/scripts.pory"
	setflag FLAG_MARA_DEFEATED
# 60 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_8
# 62 "data/maps/Hazolt_Gym/scripts.pory"
	giveitem ITEM_HM01
# 63 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_9
# 64 "data/maps/Hazolt_Gym/scripts.pory"
	waitfanfare
# 65 "data/maps/Hazolt_Gym/scripts.pory"
	waitbuttonpress
# 66 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_10
# 69 "data/maps/Hazolt_Gym/scripts.pory"
	releaseall
	end

Mara_Gym_Script_32:
# 86 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_13
	goto Mara_Gym_Script_17

Mara_Gym_Script_35:
# 109 "data/maps/Hazolt_Gym/scripts.pory"
	giveitem ITEM_WAREHOUSE_KEY
# 110 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_17
# 111 "data/maps/Hazolt_Gym/scripts.pory"
	waitmessage
# 112 "data/maps/Hazolt_Gym/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 5
# 113 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_18
# 114 "data/maps/Hazolt_Gym/scripts.pory"
	waitmessage
# 115 "data/maps/Hazolt_Gym/scripts.pory"
	setflag FLAG_RECEIVED_WAREHOUSE_KEY
# 116 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_19
	goto Mara_Gym_Script_17


Eon_Gym_Script::
# 135 "data/maps/Hazolt_Gym/scripts.pory"
	lock
# 136 "data/maps/Hazolt_Gym/scripts.pory"
	faceplayer
# 137 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_MARA_EVAL_READY, Eon_Gym_Script_2
Eon_Gym_Script_1:
# 144 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Eon_Gym_Script_Text_2
# 146 "data/maps/Hazolt_Gym/scripts.pory"
	release
	return

Eon_Gym_Script_2:
# 138 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Eon_Gym_Script_Text_0, MSGBOX_YESNO
# 141 "data/maps/Hazolt_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Eon_Gym_Script_4
	goto Eon_Gym_Script_1

Eon_Gym_Script_4:
# 142 "data/maps/Hazolt_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDRES_2, Eon_Gym_Script_Text_1
	goto Eon_Gym_Script_1


Corin_Gym_Script::
# 150 "data/maps/Hazolt_Gym/scripts.pory"
	lock
# 151 "data/maps/Hazolt_Gym/scripts.pory"
	faceplayer
# 152 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_MARA_EVAL_READY, Corin_Gym_Script_2
Corin_Gym_Script_1:
# 159 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Corin_Gym_Script_Text_2
# 162 "data/maps/Hazolt_Gym/scripts.pory"
	release
	return

Corin_Gym_Script_2:
# 153 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Corin_Gym_Script_Text_0, MSGBOX_YESNO
# 156 "data/maps/Hazolt_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Corin_Gym_Script_4
	goto Corin_Gym_Script_1

Corin_Gym_Script_4:
# 157 "data/maps/Hazolt_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_LORENZO, Corin_Gym_Script_Text_1
	goto Corin_Gym_Script_1


Tasmin_Gym_Script::
# 166 "data/maps/Hazolt_Gym/scripts.pory"
	lock
# 167 "data/maps/Hazolt_Gym/scripts.pory"
	faceplayer
# 168 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_MARA_EVAL_READY, Tasmin_Gym_Script_2
Tasmin_Gym_Script_1:
# 175 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Tasmin_Gym_Script_Text_2
# 178 "data/maps/Hazolt_Gym/scripts.pory"
	release
	return

Tasmin_Gym_Script_2:
# 169 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Tasmin_Gym_Script_Text_0, MSGBOX_YESNO
# 172 "data/maps/Hazolt_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Tasmin_Gym_Script_4
	goto Tasmin_Gym_Script_1

Tasmin_Gym_Script_4:
# 173 "data/maps/Hazolt_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, Tasmin_Gym_Script_Text_1
	goto Tasmin_Gym_Script_1


Mara_Gym_Script_Text_0:
# 8 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: You're standing, breathing, and\n"
	.string "ready to work.\p"
	.string "That's enough for me.\p"
	.string "That storm almost drowned us, but Steel\n"
	.string "team held strong.\p"
	.string "Take these supplies and get your\n"
	.string "footing, Ranger.$"

Mara_Gym_Script_Text_1:
# 14 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: I got this post by making hard\n"
	.string "calls when the going got tough.\p"
	.string "That doesn't make me above the team. It\n"
	.string "means I answer for every Ranger under\l"
	.string "me.\p"
	.string "Check on our three field operatives and\n"
	.string "report back.\p"
	.string "Eon is mapping the eastern cliffs, Corin\n"
	.string "is scouting Zatik Gorge, and Tasmin is\l"
	.string "running logistics at the Mart.$"

Mara_Gym_Script_Text_2:
# 20 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Oh, and one more thing.\p"
	.string "I'm issuing you an EXP. ALL device. It\n"
	.string "will speed up field training for your\l"
	.string "whole team.\p"
	.string "Use it well, and don't let it make you\n"
	.string "careless.$"

Mara_Gym_Script_Text_3:
# 30 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: I'm still waiting on all three\n"
	.string "check-ins.\p"
	.string "Eon, Corin, and Tasmin each hold a part\n"
	.string "of this operation together.\p"
	.string "Get eyes on all three, then return. We\n"
	.string "move as one unit.$"

Mara_Gym_Script_Text_4:
# 37 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Excellent. I've heard reports\n"
	.string "your first battles went well.\p"
	.string "I will be expecting great things from\n"
	.string "you moving forward.\p"
	.string "Your first evaluation is next. Train\n"
	.string "first, then you will face me.$"

Mara_Gym_Script_Text_5:
# 45 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Run rematches with Eon, Corin, or\n"
	.string "Tasmin.\p"
	.string "Learn their habits, sharpen yours, and\n"
	.string "come back ready.\p"
	.string "I don't train Rangers to copy me, but to\n"
	.string "think when the plan falls apart.\p"
	.string "Eon will test your patience, Corin will\n"
	.string "pressure your choices, and Tasmin will\l"
	.string "punish sloppy preparation.\p"
	.string "Listen to what each battle teaches\n"
	.string "you. The field won't care how confident\l"
	.string "you felt when you started.\p"
	.string "$"

Mara_Gym_Script_Text_6:
# 54 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: You've seen the field, Ranger. But\n"
	.string "seeing isn't surviving.\p"
	.string "Are you ready for your field\n"
	.string "evaluation? I need to see precision\l"
	.string "under pressure.$"

Mara_Gym_Script_Text_7:
# 57 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Good pacing. You pass.$"

Mara_Gym_Script_Text_8:
# 60 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: You held your nerve when it\n"
	.string "counted,\p"
	.string "{PLAYER}. Take HM01 Cut. I want you\n"
	.string "to clear the western woods and\l"
	.string "establish contact with Quartzite\l"
	.string "Village.$"

Mara_Gym_Script_Text_9:
# 63 "data/maps/Hazolt_Gym/scripts.pory"
	.string "{PLAYER} received HM01 Cut!$"

Mara_Gym_Script_Text_10:
# 66 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: I've calibrated that HM myself.\n"
	.string "It's the sharpest CUT in the Ranger\l"
	.string "Corps.\p"
	.string "Remember, Steel isn't just about\n"
	.string "swinging a heavy hammer. It's about\l"
	.string "knowing exactly where to place the nail.\p"
	.string "Control and restraint. Carry that with\n"
	.string "you, Ranger.$"

Mara_Gym_Script_Text_11:
# 73 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Smart call. Hesitation in the field\n"
	.string "gets people hurt. Come back when you're\l"
	.string "certain.$"

Mara_Gym_Script_Text_12:
# 79 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Excellent work at Shudderwood\n"
	.string "Mansion, Ranger.\p"
	.string "You hit Team Hive where it hurts we'll\n"
	.string "keep up the momentum.\p"
	.string "Take some time to recover. Strong teams\n"
	.string "don't sprint forever.\p"
	.string "THIS IS THE END OF THE DEMO. THANK YOU\n"
	.string "FOR PLAYING!\p"
	.string "$"

Mara_Gym_Script_Text_13:
# 86 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: I heard you broke that Hive\n"
	.string "patrol at the bridge. Clean work.\p"
	.string "Now use STRENGTH from Garrick to force\n"
	.string "open the sealed doors at Shudderwood\l"
	.string "Mansion.\p"
	.string "Head north from the bridge, let's squish\n"
	.string "these buggers!$"

Mara_Gym_Script_Text_14:
# 91 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Captain Garrick is handled and\n"
	.string "you've secured STRENGTH.\p"
	.string "Good. Next objective is Shudderwood\n"
	.string "Mansion to the north.\p"
	.string "You'll need STRENGTH for the sealed\n"
	.string "doors, and likely resistance before you\l"
	.string "reach them.\p"
	.string "Move north from the bridge and expect\n"
	.string "Hive patrols en route.$"

Mara_Gym_Script_Text_15:
# 98 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Tasmin confirmed the wreck is\n"
	.string "compromised.\p"
	.string "The pirates fled west across Rocky\n"
	.string "Road toward a stolen port.\p"
	.string "I'm sending Tasmin as well, meet her\n"
	.string "there to take them together!\p"
	.string "Track them, and show their captain the\n"
	.string "consequences of betraying the\l"
	.string "rangers!$"

Mara_Gym_Script_Text_16:
# 104 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Corin reported your success at\n"
	.string "Crusted Quarry.\p"
	.string "You kept pressure, adapted, and came\n"
	.string "back standing. That's Ranger work.\p"
	.string "Next objective: investigate the\n"
	.string "shipwreck on the southern shore.\p"
	.string "Report to Tasmin at the Hazolt Mart for\n"
	.string "details. Take this key to the Hazolt\l"
	.string "Mart storage area.$"

Mara_Gym_Script_Text_17:
# 110 "data/maps/Hazolt_Gym/scripts.pory"
	.string "{PLAYER} received the Warehouse Key!$"

Mara_Gym_Script_Text_18:
# 113 "data/maps/Hazolt_Gym/scripts.pory"
	.string "{PLAYER} received 5 Ultra Balls!$"

Mara_Gym_Script_Text_19:
# 116 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Use that key at the Hazolt Mart\n"
	.string "to access our storage area.\p"
	.string "And keep your options open in the field.\p"
	.string "$"

Mara_Gym_Script_Text_20:
# 121 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: You've got Cut. Head west through\n"
	.string "the woods toward Quartzite Station.\p"
	.string "We've had reports of Team Hive\n"
	.string "movement there.\p"
	.string "Keep your cool, and trust your training.$"

Mara_Gym_Script_Text_21:
# 126 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Take your time and prepare for\n"
	.string "your evaluation.\p"
	.string "I don't need fearless. I need\n"
	.string "dependable.$"

Eon_Gym_Script_Text_0:
# 138 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Eon: I only joined this expedition\n"
	.string "because Mara was leading it.\p"
	.string "If she says you're worth sharpening,\n"
	.string "I'll test you again.\p"
	.string "Rematch?$"

Eon_Gym_Script_Text_1:
# 142 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Eon: Not bad, Ranger. Keep training.$"

Eon_Gym_Script_Text_2:
# 144 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara doesn't ask for loyalty speeches.\n"
	.string "She earns them.\p"
	.string "Anyway, I've got to train my Chinchou to\n"
	.string "DIVE through those flooded tunnels.$"

Corin_Gym_Script_Text_0:
# 153 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Corin: Hey! Rematch time?\p"
	.string "Mara's scary in the best way. She\n"
	.string "pushes us hard because she believes we\l"
	.string "can handle it.\p"
	.string "I've got new strategies and better\n"
	.string "snacks.$"

Corin_Gym_Script_Text_1:
# 157 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Corin: Nice! Let's hit the snack room.$"

Corin_Gym_Script_Text_2:
# 159 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara acts like steel, but she notices\n"
	.string "every Ranger's limits.\p"
	.string "Some good training and good food will\n"
	.string "give us the STRENGTH we need at Magnet\l"
	.string "Cave! I should request extra rations.$"

Tasmin_Gym_Script_Text_0:
# 169 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Tasmin: Want a rematch?\p"
	.string "Mara sets the standard here.\p"
	.string "I've optimized my routes and my battle\n"
	.string "plan.$"

Tasmin_Gym_Script_Text_1:
# 173 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Tasmin: Wow, you're really strong now!$"

Tasmin_Gym_Script_Text_2:
# 175 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Glameow is doing a wonderful job\n"
	.string "keeping Zigzagoon and Corin away from\l"
	.string "our supplies.\p"
	.string "Mara says logistics wins, and she's\n"
	.string "right!\p"
	.string "Still, I could use a Pokemon with bright\n"
	.string "FLASH for inventory checks.$"
