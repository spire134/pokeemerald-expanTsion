Tidesmercyinterior_MapScripts::
	.byte 0


PlayerRoom_Note::
# 5 "data/maps/Tidesmercyinterior/scripts.pory"
	lock
# 6 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_unset FLAG_NOTE_READ, PlayerRoom_Note_2
# 17 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox PlayerRoom_Note_Text_1
PlayerRoom_Note_1:
# 22 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 23 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 24 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 25 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 26 "data/maps/Tidesmercyinterior/scripts.pory"
	special EnableNationalPokedex
# 27 "data/maps/Tidesmercyinterior/scripts.pory"
	special SetUnlockedPokedexFlags
# 28 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 29 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox PlayerRoom_Note_Text_2
# 30 "data/maps/Tidesmercyinterior/scripts.pory"
	release
	end

PlayerRoom_Note_2:
# 7 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox PlayerRoom_Note_Text_0
# 15 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_NOTE_READ
	goto PlayerRoom_Note_1


Should_Read_Note::
# 35 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_unset FLAG_NOTE_READ, Should_Read_Note_1
	end

Should_Read_Note_1:
# 36 "data/maps/Tidesmercyinterior/scripts.pory"
	lock
# 37 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Should_Read_Note_Text_0
# 38 "data/maps/Tidesmercyinterior/scripts.pory"
	waitbuttonpress
# 39 "data/maps/Tidesmercyinterior/scripts.pory"
	applymovement LOCALID_PLAYER, Should_Read_Note_Movement_0
# 40 "data/maps/Tidesmercyinterior/scripts.pory"
	waitmovement 0
# 41 "data/maps/Tidesmercyinterior/scripts.pory"
	release
	end


RangerA_Script::
# 57 "data/maps/Tidesmercyinterior/scripts.pory"
	lock
# 58 "data/maps/Tidesmercyinterior/scripts.pory"
	faceplayer
# 59 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox RangerA_Script_Text_0
# 68 "data/maps/Tidesmercyinterior/scripts.pory"
	release
	end


RangerB_Script::
# 73 "data/maps/Tidesmercyinterior/scripts.pory"
	lock
# 74 "data/maps/Tidesmercyinterior/scripts.pory"
	faceplayer
# 75 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox RangerB_Script_Text_0
# 85 "data/maps/Tidesmercyinterior/scripts.pory"
	release
	end


RangerSolo_Script::
# 91 "data/maps/Tidesmercyinterior/scripts.pory"
	lock
# 92 "data/maps/Tidesmercyinterior/scripts.pory"
	faceplayer
# 93 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox RangerSolo_Script_Text_0
# 102 "data/maps/Tidesmercyinterior/scripts.pory"
	release
	end


CaptainRoom_Talk::
# 111 "data/maps/Tidesmercyinterior/scripts.pory"
	lockall
# 112 "data/maps/Tidesmercyinterior/scripts.pory"
	faceplayer
# 113 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_unset FLAG_GOT_STARTER, CaptainRoom_Talk_2
# 125 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox CaptainRoom_Talk_Text_1
CaptainRoom_Talk_1:
# 128 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

CaptainRoom_Talk_2:
# 114 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox CaptainRoom_Talk_Text_0
	goto CaptainRoom_Talk_1


Starter_Turtwig::
# 134 "data/maps/Tidesmercyinterior/scripts.pory"
	lockall
# 135 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_set FLAG_GOT_STARTER, Starter_Turtwig_2
# 140 "data/maps/Tidesmercyinterior/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 141 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Turtwig_Text_1, MSGBOX_YESNO
# 143 "data/maps/Tidesmercyinterior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Starter_Turtwig_5
# 148 "data/maps/Tidesmercyinterior/scripts.pory"
	call Give_Starter0
# 149 "data/maps/Tidesmercyinterior/scripts.pory"
	call PostStarter_StormInterrupt
# 150 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Turtwig_2:
# 136 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Turtwig_Text_0
# 137 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Turtwig_5:
# 144 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 145 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end


Starter_Torchic::
# 155 "data/maps/Tidesmercyinterior/scripts.pory"
	lockall
# 156 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_set FLAG_GOT_STARTER, Starter_Torchic_2
# 161 "data/maps/Tidesmercyinterior/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 162 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Torchic_Text_0, MSGBOX_YESNO
# 164 "data/maps/Tidesmercyinterior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Starter_Torchic_5
# 169 "data/maps/Tidesmercyinterior/scripts.pory"
	call Give_Starter1
# 170 "data/maps/Tidesmercyinterior/scripts.pory"
	call PostStarter_StormInterrupt
# 171 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Torchic_2:
# 157 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Turtwig_Text_0
# 158 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Torchic_5:
# 165 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 166 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end


Starter_Froakie::
# 176 "data/maps/Tidesmercyinterior/scripts.pory"
	lockall
# 177 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_set FLAG_GOT_STARTER, Starter_Froakie_2
# 182 "data/maps/Tidesmercyinterior/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 183 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Froakie_Text_0, MSGBOX_YESNO
# 185 "data/maps/Tidesmercyinterior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Starter_Froakie_5
# 190 "data/maps/Tidesmercyinterior/scripts.pory"
	call Give_Starter2
# 191 "data/maps/Tidesmercyinterior/scripts.pory"
	call PostStarter_StormInterrupt
# 192 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Froakie_2:
# 178 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Turtwig_Text_0
# 179 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Froakie_5:
# 186 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 187 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end


Give_Starter0:
# 197 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 198 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 199 "data/maps/Tidesmercyinterior/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 200 "data/maps/Tidesmercyinterior/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 201 "data/maps/Tidesmercyinterior/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 202 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_GOT_STARTER
# 203 "data/maps/Tidesmercyinterior/scripts.pory"
	playfanfare FANFARE_RG_OBTAIN_KEY_ITEM
# 204 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Give_Starter0_Text_0
	return


Give_Starter1:
# 210 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 211 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 212 "data/maps/Tidesmercyinterior/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 213 "data/maps/Tidesmercyinterior/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 214 "data/maps/Tidesmercyinterior/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 215 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_GOT_STARTER
# 216 "data/maps/Tidesmercyinterior/scripts.pory"
	playfanfare FANFARE_RG_OBTAIN_KEY_ITEM
# 217 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Give_Starter1_Text_0
	return


Give_Starter2:
# 223 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 224 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 225 "data/maps/Tidesmercyinterior/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 226 "data/maps/Tidesmercyinterior/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 227 "data/maps/Tidesmercyinterior/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 228 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_GOT_STARTER
# 229 "data/maps/Tidesmercyinterior/scripts.pory"
	playfanfare FANFARE_RG_OBTAIN_KEY_ITEM
# 230 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Give_Starter2_Text_0
	return


# 240 "data/maps/Tidesmercyinterior/scripts.pory"
BurstRanger_Enter:
# 241 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_up
# 242 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_up
# 243 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_up
# 244 "data/maps/Tidesmercyinterior/scripts.pory"
	emote_exclamation_mark
# 245 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_left
# 246 "data/maps/Tidesmercyinterior/scripts.pory"
	face_right
	step_end

PostStarter_StormInterrupt::
# 250 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_set FLAG_STORM_STARTED, PostStarter_StormInterrupt_2
# 252 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox PostStarter_StormInterrupt_Text_0
# 253 "data/maps/Tidesmercyinterior/scripts.pory"
	addobject OBJ_BURST_RANGER
# 254 "data/maps/Tidesmercyinterior/scripts.pory"
	showobjectat OBJ_BURST_RANGER, MAP_TIDESMERCYINTERIOR
# 255 "data/maps/Tidesmercyinterior/scripts.pory"
	playse SE_EXIT
# 256 "data/maps/Tidesmercyinterior/scripts.pory"
	waitse
# 257 "data/maps/Tidesmercyinterior/scripts.pory"
	playse SE_M_HAZE
# 258 "data/maps/Tidesmercyinterior/scripts.pory"
	waitse
# 259 "data/maps/Tidesmercyinterior/scripts.pory"
	setvar VAR_UNUSED_0x404E, 1
# 260 "data/maps/Tidesmercyinterior/scripts.pory"
	applymovement OBJ_BURST_RANGER, BurstRanger_Enter
# 261 "data/maps/Tidesmercyinterior/scripts.pory"
	waitmovement 0
# 262 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox PostStarter_StormInterrupt_Text_1
# 269 "data/maps/Tidesmercyinterior/scripts.pory"
	waitmessage
# 270 "data/maps/Tidesmercyinterior/scripts.pory"
	applymovement OBJ_CAPT_MARA, PostStarter_StormInterrupt_Movement_0
# 271 "data/maps/Tidesmercyinterior/scripts.pory"
	playse SE_PIN
# 272 "data/maps/Tidesmercyinterior/scripts.pory"
	waitmovement 0
# 273 "data/maps/Tidesmercyinterior/scripts.pory"
	applymovement OBJ_CAPT_MARA, PostStarter_StormInterrupt_Movement_1
# 274 "data/maps/Tidesmercyinterior/scripts.pory"
	waitmovement 0
# 275 "data/maps/Tidesmercyinterior/scripts.pory"
	playse SE_EXIT
# 276 "data/maps/Tidesmercyinterior/scripts.pory"
	waitse
# 277 "data/maps/Tidesmercyinterior/scripts.pory"
	removeobject OBJ_CAPT_MARA
# 278 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox PostStarter_StormInterrupt_Text_2
# 280 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_STORM_STARTED
# 281 "data/maps/Tidesmercyinterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 282 "data/maps/Tidesmercyinterior/scripts.pory"
	warp MAP_SS_TIDES_MERCY, 19, 8
# 283 "data/maps/Tidesmercyinterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
	end

PostStarter_StormInterrupt_2:
	end


# 39 "data/maps/Tidesmercyinterior/scripts.pory"
Should_Read_Note_Movement_0:
# 39 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_up
	step_end

# 270 "data/maps/Tidesmercyinterior/scripts.pory"
PostStarter_StormInterrupt_Movement_0:
# 270 "data/maps/Tidesmercyinterior/scripts.pory"
	emote_exclamation_mark
# 270 "data/maps/Tidesmercyinterior/scripts.pory"
	jump_in_place_down
	step_end

# 273 "data/maps/Tidesmercyinterior/scripts.pory"
PostStarter_StormInterrupt_Movement_1:
# 273 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_in_place_fast_left
# 273 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_down
# 273 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_down
# 273 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_down
	step_end

PlayerRoom_Note_Text_0:
# 8 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "A crisp, professional note from the\n"
	.string "Captain.\p"
	.string "RANGER RECRUIT,\p"
	.string "Congratulations on passing your\n"
	.string "boards. Please acquaint yourself with\l"
	.string "your fellow Rangers, then report to my\l"
	.string "quarters for partner assignment at\l"
	.string "your earliest convenience.\p"
	.string "Professional enthusiasm is encouraged.\p"
	.string "- Captain Mara Kealoha$"

PlayerRoom_Note_Text_1:
# 18 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Report to my quarters for partner\n"
	.string "assignment.\p"
	.string "- Captain Mara Kealoha$"

PlayerRoom_Note_Text_2:
# 29 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "You grabbed your gear and shoes. Time\n"
	.string "to meet the Captain.$"

Should_Read_Note_Text_0:
# 37 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Don't forget to read the note the\n"
	.string "Captain left on your desk!$"

RangerA_Script_Text_0:
# 60 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Tasmin: I'm Ranger Tasmin. Logistics\n"
	.string "and operations coordination.\l"
	.string "I maintain equipment manifests,\l"
	.string "communication protocols, and mission\l"
	.string "schedules.\p"
	.string "Before you ask--yes, some call me\n"
	.string "'quartermaster.' I prefer not to.\l"
	.string "It makes me sound like a pirate.\p"
	.string "When you meet the Captain, I recommend\n"
	.string "selecting Turtwig as your partner.\l"
	.string "Sturdy. Reliable. Excellent weight\l"
	.string "distribution for technical climbing.\p"
	.string "The data supports this choice.$"

RangerB_Script_Text_0:
# 76 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Corin: Hey! I'm Ranger Corin. Ropes,\n"
	.string "rescue, and keeping people from\l"
	.string "becoming permanent fixtures on cliff\l"
	.string "faces. Welcome to Steel Team.\p"
	.string "If you're smart, you'll pick Torchic when\n"
	.string "you see the Captain.\l"
	.string "Fast, fierce, and it'll warm you right up\l"
	.string "when the storms hit.\p"
	.string "Plus, Tasmin keeps saying I need to\n"
	.string "stop 'playing favorites' with the--\p"
	.string "Tasmin: CORIN.\p"
	.string "Corin: --with the starter selection\n"
	.string "process. Very professional concern\l"
	.string "from our\l"
	.string "quarter--I mean, logistics coordinator.$"

RangerSolo_Script_Text_0:
# 94 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Eon: Ranger Eon. Reconnaissance and\n"
	.string "cartography.\l"
	.string "I chart what others miss.\p"
	.string "You passed the boards.\n"
	.string "Congratulations. But Corymbra isn't a\l"
	.string "test.\l"
	.string "It's a graveyard for careless Rangers.\p"
	.string "The Captain will offer you a partner. If\n"
	.string "you value stealth and adaptability,\l"
	.string "choose Froakie. It moves through\l"
	.string "hostile terrain without announcing\l"
	.string "itself.\p"
	.string "Unlike most recruits.$"

CaptainRoom_Talk_Text_0:
# 115 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Captain Mara: Welcome aboard, Ranger.\p"
	.string "I hope you're prepared for\n"
	.string "your first mission.\p"
	.string "We've lost communications with the\n"
	.string "Ranger teams on Corymbra's southern\l"
	.string "shore.\p"
	.string "Our mission is to investigate\n"
	.string "and restore contact.\p"
	.string "Before we depart, you need to choose\n"
	.string "your partner Pokémon.\l"
	.string "You have three choices: Turtwig,\l"
	.string "Torchic, or Froakie.$"

CaptainRoom_Talk_Text_1:
# 125 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "You have your partner.\n"
	.string "Good. Stay flexible.$"

Starter_Turtwig_Text_0:
# 136 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "The case is empty.$"

Starter_Turtwig_Text_1:
# 141 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Take TURTWIG as your\n"
	.string "partner?$"

Starter_Torchic_Text_0:
# 162 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Take TORCHIC as your\n"
	.string "partner?$"

Starter_Froakie_Text_0:
# 183 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Take FROAKIE as your\n"
	.string "partner?$"

Give_Starter0_Text_0:
# 204 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "TURTWIG joined your\n"
	.string "squad.$"

Give_Starter1_Text_0:
# 217 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "TORCHIC joined your\n"
	.string "squad.$"

Give_Starter2_Text_0:
# 230 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "FROAKIE joined your\n"
	.string "squad.$"

PostStarter_StormInterrupt_Text_0:
# 252 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Mara: Now, listen up, I-\p"
	.string "$"

PostStarter_StormInterrupt_Text_1:
# 263 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Sailor: Captain! A massive\n"
	.string "storm appeared out of\n"
	.string "nowhere!\p"
	.string "The barometer's going wild!\n"
	.string "It's almost on top of us!$"

PostStarter_StormInterrupt_Text_2:
# 278 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Captain Mara: Everybody\n"
	.string "move! All hands topside!$"
