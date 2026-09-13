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
# 50 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_unset FLAG_MARA_DEFEATED, Mara_Gym_Script_15
# 75 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_SHUDDERWOOD_MANSION_CLEARED, Mara_Gym_Script_18
# 81 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Mara_Gym_Script_19
# 94 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Mara_Gym_Script_20
# 99 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_CRUSTED_QUARRY_DEFEATED, Mara_Gym_Script_21
# 117 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_MARA_DEFEATED, Mara_Gym_Script_22
# 123 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_21
Mara_Gym_Script_17:
# 126 "data/maps/Hazolt_Gym/scripts.pory"
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
# 47 "data/maps/Hazolt_Gym/scripts.pory"
	releaseall
	end

Mara_Gym_Script_15:
# 51 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_6, MSGBOX_YESNO
# 53 "data/maps/Hazolt_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Mara_Gym_Script_29
# 70 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_11
# 71 "data/maps/Hazolt_Gym/scripts.pory"
	releaseall
	end

Mara_Gym_Script_18:
# 76 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_12
	goto Mara_Gym_Script_17

Mara_Gym_Script_19:
# 82 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_SHUDDERWOOD_HIVE_PATROL_DEFEATED, Mara_Gym_Script_32
# 88 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_14
	goto Mara_Gym_Script_17

Mara_Gym_Script_20:
# 95 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_15
	goto Mara_Gym_Script_17

Mara_Gym_Script_21:
# 100 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_16
# 104 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAREHOUSE_KEY, Mara_Gym_Script_35
	goto Mara_Gym_Script_17

Mara_Gym_Script_22:
# 118 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_20
	goto Mara_Gym_Script_17

Mara_Gym_Script_29:
# 54 "data/maps/Hazolt_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_MARA_EVAL, Mara_Gym_Script_Text_7
# 55 "data/maps/Hazolt_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 56 "data/maps/Hazolt_Gym/scripts.pory"
	setflag FLAG_MARA_DEFEATED
# 57 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_8
# 59 "data/maps/Hazolt_Gym/scripts.pory"
	giveitem ITEM_HM01
# 60 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_9
# 61 "data/maps/Hazolt_Gym/scripts.pory"
	waitfanfare
# 62 "data/maps/Hazolt_Gym/scripts.pory"
	waitbuttonpress
# 63 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_10
# 66 "data/maps/Hazolt_Gym/scripts.pory"
	releaseall
	end

Mara_Gym_Script_32:
# 83 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_13
	goto Mara_Gym_Script_17

Mara_Gym_Script_35:
# 105 "data/maps/Hazolt_Gym/scripts.pory"
	giveitem ITEM_WAREHOUSE_KEY
# 106 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_17
# 107 "data/maps/Hazolt_Gym/scripts.pory"
	waitmessage
# 108 "data/maps/Hazolt_Gym/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 5
# 109 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_18
# 110 "data/maps/Hazolt_Gym/scripts.pory"
	waitmessage
# 111 "data/maps/Hazolt_Gym/scripts.pory"
	setflag FLAG_RECEIVED_WAREHOUSE_KEY
# 112 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Mara_Gym_Script_Text_19
	goto Mara_Gym_Script_17


Eon_Gym_Script::
# 132 "data/maps/Hazolt_Gym/scripts.pory"
	lock
# 133 "data/maps/Hazolt_Gym/scripts.pory"
	faceplayer
# 134 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_MARA_EVAL_READY, Eon_Gym_Script_2
Eon_Gym_Script_1:
# 141 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Eon_Gym_Script_Text_2
# 143 "data/maps/Hazolt_Gym/scripts.pory"
	release
	return

Eon_Gym_Script_2:
# 135 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Eon_Gym_Script_Text_0, MSGBOX_YESNO
# 138 "data/maps/Hazolt_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Eon_Gym_Script_4
	goto Eon_Gym_Script_1

Eon_Gym_Script_4:
# 139 "data/maps/Hazolt_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_ANDRES_2, Eon_Gym_Script_Text_1
	goto Eon_Gym_Script_1


Corin_Gym_Script::
# 147 "data/maps/Hazolt_Gym/scripts.pory"
	lock
# 148 "data/maps/Hazolt_Gym/scripts.pory"
	faceplayer
# 149 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_MARA_EVAL_READY, Corin_Gym_Script_2
Corin_Gym_Script_1:
# 156 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Corin_Gym_Script_Text_2
# 159 "data/maps/Hazolt_Gym/scripts.pory"
	release
	return

Corin_Gym_Script_2:
# 150 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Corin_Gym_Script_Text_0, MSGBOX_YESNO
# 153 "data/maps/Hazolt_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Corin_Gym_Script_4
	goto Corin_Gym_Script_1

Corin_Gym_Script_4:
# 154 "data/maps/Hazolt_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_LORENZO, Corin_Gym_Script_Text_1
	goto Corin_Gym_Script_1


Tasmin_Gym_Script::
# 163 "data/maps/Hazolt_Gym/scripts.pory"
	lock
# 164 "data/maps/Hazolt_Gym/scripts.pory"
	faceplayer
# 165 "data/maps/Hazolt_Gym/scripts.pory"
	goto_if_set FLAG_MARA_EVAL_READY, Tasmin_Gym_Script_2
Tasmin_Gym_Script_1:
# 172 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Tasmin_Gym_Script_Text_2
# 175 "data/maps/Hazolt_Gym/scripts.pory"
	release
	return

Tasmin_Gym_Script_2:
# 166 "data/maps/Hazolt_Gym/scripts.pory"
	msgbox Tasmin_Gym_Script_Text_0, MSGBOX_YESNO
# 169 "data/maps/Hazolt_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Tasmin_Gym_Script_4
	goto Tasmin_Gym_Script_1

Tasmin_Gym_Script_4:
# 170 "data/maps/Hazolt_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_WALLY_MAUVILLE, Tasmin_Gym_Script_Text_1
	goto Tasmin_Gym_Script_1


Mara_Gym_Script_Text_0:
# 8 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: You're standing, breathing, and\n"
	.string "ready to work.\p"
	.string "That's enough for me.\p"
	.string "That storm should have broken us, but\n"
	.string "this team held the line.\p"
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
	.string "Mara: Excellent. You checked every\n"
	.string "operative and came back with\l"
	.string "discipline.\p"
	.string "That's what keeps Rangers alive, not\n"
	.string "bravado.\p"
	.string "Your first evaluation is next. Train\n"
	.string "first, then face me when you're steady.$"

Mara_Gym_Script_Text_5:
# 45 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Run rematches with Eon, Corin, or\n"
	.string "Tasmin.\p"
	.string "Learn their habits, sharpen yours, and\n"
	.string "come back ready.$"

Mara_Gym_Script_Text_6:
# 51 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Ready for your Ranger\n"
	.string "evaluation?\p"
	.string "Show me precision under pressure.$"

Mara_Gym_Script_Text_7:
# 54 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: That's an easy pass. Well done.$"

Mara_Gym_Script_Text_8:
# 57 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Excellent work,\p"
	.string "{PLAYER}, take Cut and clear the\n"
	.string "western woods. Check on Quartzite\l"
	.string "Village for us.$"

Mara_Gym_Script_Text_9:
# 60 "data/maps/Hazolt_Gym/scripts.pory"
	.string "{PLAYER} received HM01 Cut!$"

Mara_Gym_Script_Text_10:
# 63 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Good luck. I've tuned this Cut HM\n"
	.string "myself.\p"
	.string "Steel isn't just force. It's control and\n"
	.string "restraint.\p"
	.string "Carry that with you, Ranger.$"

Mara_Gym_Script_Text_11:
# 70 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Good choice. Preparation wins\n"
	.string "more fights than pride.$"

Mara_Gym_Script_Text_12:
# 76 "data/maps/Hazolt_Gym/scripts.pory"
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
# 83 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: I heard you broke that Hive\n"
	.string "patrol at the bridge. Clean work.\p"
	.string "Now use STRENGTH from Garrick to force\n"
	.string "open the sealed doors at Shudderwood\l"
	.string "Mansion.\p"
	.string "Head north from the bridge, let's squish\n"
	.string "these buggers!$"

Mara_Gym_Script_Text_14:
# 88 "data/maps/Hazolt_Gym/scripts.pory"
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
# 95 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Tasmin confirmed the wreck is\n"
	.string "compromised.\p"
	.string "The pirates fled west across Rocky\n"
	.string "Road toward Port Plunder.\p"
	.string "Track them, and show their captain the\n"
	.string "consequences of messing with the\l"
	.string "rangers!$"

Mara_Gym_Script_Text_16:
# 100 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Corin reported your success at\n"
	.string "Crusted Quarry.\p"
	.string "You kept pressure, adapted, and came\n"
	.string "back standing. That's Ranger work.\p"
	.string "Next objective: investigate the\n"
	.string "shipwreck on the southern shore.\p"
	.string "Report to Tasmin at the Hazolt Mart for\n"
	.string "details.$"

Mara_Gym_Script_Text_17:
# 106 "data/maps/Hazolt_Gym/scripts.pory"
	.string "{PLAYER} received the Warehouse Key!$"

Mara_Gym_Script_Text_18:
# 109 "data/maps/Hazolt_Gym/scripts.pory"
	.string "{PLAYER} received 5 Ultra Balls!$"

Mara_Gym_Script_Text_19:
# 112 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Use that key at the Hazolt Mart\n"
	.string "to access our storage area.\p"
	.string "And keep your options open in the field.\p"
	.string "New teammates await at unexpected\n"
	.string "locations.$"

Mara_Gym_Script_Text_20:
# 118 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: You've got Cut. Head west through\n"
	.string "the woods toward Quartzite Station.\p"
	.string "We've had reports of Team Hive\n"
	.string "movement there.\p"
	.string "Keep your cool, and trust your training.$"

Mara_Gym_Script_Text_21:
# 123 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara: Take your time and prepare for\n"
	.string "your evaluation.\p"
	.string "I don't need fearless. I need\n"
	.string "dependable.$"

Eon_Gym_Script_Text_0:
# 135 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Eon: I only joined this expedition\n"
	.string "because Mara was leading it.\p"
	.string "If she says you're worth sharpening,\n"
	.string "I'll test you again.\p"
	.string "Rematch?$"

Eon_Gym_Script_Text_1:
# 139 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Eon: Not bad, Ranger. Keep training.$"

Eon_Gym_Script_Text_2:
# 141 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara doesn't ask for loyalty speeches.\n"
	.string "She earns them.\p"
	.string "Anyway, I've got to train my Chinchou to\n"
	.string "DIVE through those flooded tunnels.$"

Corin_Gym_Script_Text_0:
# 150 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Corin: Hey! Rematch time?\p"
	.string "Mara's scary in the best way. She\n"
	.string "pushes us hard because she believes we\l"
	.string "can handle it.\p"
	.string "I've got new strategies and better\n"
	.string "snacks.$"

Corin_Gym_Script_Text_1:
# 154 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Corin: Nice! Let's hit the snack room.$"

Corin_Gym_Script_Text_2:
# 156 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Mara acts like steel, but she notices\n"
	.string "every Ranger's limits.\p"
	.string "Some good training and good food will\n"
	.string "give us the STRENGTH we need at Magnet\l"
	.string "Cave! I should request extra rations.$"

Tasmin_Gym_Script_Text_0:
# 166 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Tasmin: Want a rematch?\p"
	.string "Mara sets the standard here.\p"
	.string "I've optimized my routes and my battle\n"
	.string "plan.$"

Tasmin_Gym_Script_Text_1:
# 170 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Tasmin: Wow, you're really strong now!$"

Tasmin_Gym_Script_Text_2:
# 172 "data/maps/Hazolt_Gym/scripts.pory"
	.string "Glameow is doing a wonderful job\n"
	.string "keeping Zigzagoon and Corin away from\l"
	.string "our supplies.\p"
	.string "Mara says logistics wins, and she's\n"
	.string "right!\p"
	.string "Still, I could use a Pokemon with bright\n"
	.string "FLASH for inventory checks.$"
