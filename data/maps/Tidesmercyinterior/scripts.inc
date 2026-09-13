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
# 123 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox CaptainRoom_Talk_Text_1
CaptainRoom_Talk_1:
# 126 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

CaptainRoom_Talk_2:
# 114 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox CaptainRoom_Talk_Text_0
	goto CaptainRoom_Talk_1


Starter_Turtwig::
# 132 "data/maps/Tidesmercyinterior/scripts.pory"
	lockall
# 133 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_set FLAG_GOT_STARTER, Starter_Turtwig_2
# 138 "data/maps/Tidesmercyinterior/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 139 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Turtwig_Text_1, MSGBOX_YESNO
# 141 "data/maps/Tidesmercyinterior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Starter_Turtwig_5
# 146 "data/maps/Tidesmercyinterior/scripts.pory"
	call Give_Starter0
# 147 "data/maps/Tidesmercyinterior/scripts.pory"
	call PostStarter_StormInterrupt
# 148 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Turtwig_2:
# 134 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Turtwig_Text_0
# 135 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Turtwig_5:
# 142 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 143 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end


Starter_Torchic::
# 153 "data/maps/Tidesmercyinterior/scripts.pory"
	lockall
# 154 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_set FLAG_GOT_STARTER, Starter_Torchic_2
# 159 "data/maps/Tidesmercyinterior/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 160 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Torchic_Text_0, MSGBOX_YESNO
# 162 "data/maps/Tidesmercyinterior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Starter_Torchic_5
# 167 "data/maps/Tidesmercyinterior/scripts.pory"
	call Give_Starter1
# 168 "data/maps/Tidesmercyinterior/scripts.pory"
	call PostStarter_StormInterrupt
# 169 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Torchic_2:
# 155 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Turtwig_Text_0
# 156 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Torchic_5:
# 163 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 164 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end


Starter_Froakie::
# 174 "data/maps/Tidesmercyinterior/scripts.pory"
	lockall
# 175 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_set FLAG_GOT_STARTER, Starter_Froakie_2
# 180 "data/maps/Tidesmercyinterior/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 181 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Froakie_Text_0, MSGBOX_YESNO
# 183 "data/maps/Tidesmercyinterior/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Starter_Froakie_5
# 188 "data/maps/Tidesmercyinterior/scripts.pory"
	call Give_Starter2
# 189 "data/maps/Tidesmercyinterior/scripts.pory"
	call PostStarter_StormInterrupt
# 190 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Froakie_2:
# 176 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Starter_Turtwig_Text_0
# 177 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end

Starter_Froakie_5:
# 184 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 185 "data/maps/Tidesmercyinterior/scripts.pory"
	releaseall
	end


Give_Starter0:
# 195 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 196 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 197 "data/maps/Tidesmercyinterior/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 198 "data/maps/Tidesmercyinterior/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 199 "data/maps/Tidesmercyinterior/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 200 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_GOT_STARTER
# 201 "data/maps/Tidesmercyinterior/scripts.pory"
	playfanfare FANFARE_RG_OBTAIN_KEY_ITEM
# 202 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Give_Starter0_Text_0
	return


Give_Starter1:
# 208 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 209 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 210 "data/maps/Tidesmercyinterior/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 211 "data/maps/Tidesmercyinterior/scripts.pory"
	givemon SPECIES_TORCHIC, 5
# 212 "data/maps/Tidesmercyinterior/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 213 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_GOT_STARTER
# 214 "data/maps/Tidesmercyinterior/scripts.pory"
	playfanfare FANFARE_RG_OBTAIN_KEY_ITEM
# 215 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Give_Starter1_Text_0
	return


Give_Starter2:
# 221 "data/maps/Tidesmercyinterior/scripts.pory"
	hidemonpic
# 222 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 223 "data/maps/Tidesmercyinterior/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 224 "data/maps/Tidesmercyinterior/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 225 "data/maps/Tidesmercyinterior/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 226 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_GOT_STARTER
# 227 "data/maps/Tidesmercyinterior/scripts.pory"
	playfanfare FANFARE_RG_OBTAIN_KEY_ITEM
# 228 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox Give_Starter2_Text_0
	return


# 238 "data/maps/Tidesmercyinterior/scripts.pory"
BurstRanger_Enter:
# 239 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_up
# 240 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_up
# 241 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_up
# 242 "data/maps/Tidesmercyinterior/scripts.pory"
	emote_exclamation_mark
# 243 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_left
# 244 "data/maps/Tidesmercyinterior/scripts.pory"
	face_right
	step_end

PostStarter_StormInterrupt::
# 248 "data/maps/Tidesmercyinterior/scripts.pory"
	goto_if_set FLAG_STORM_STARTED, PostStarter_StormInterrupt_2
# 250 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox PostStarter_StormInterrupt_Text_0
# 251 "data/maps/Tidesmercyinterior/scripts.pory"
	addobject OBJ_BURST_RANGER
# 252 "data/maps/Tidesmercyinterior/scripts.pory"
	showobjectat OBJ_BURST_RANGER, MAP_TIDESMERCYINTERIOR
# 253 "data/maps/Tidesmercyinterior/scripts.pory"
	playse SE_EXIT
# 254 "data/maps/Tidesmercyinterior/scripts.pory"
	waitse
# 255 "data/maps/Tidesmercyinterior/scripts.pory"
	playse SE_M_HAZE
# 256 "data/maps/Tidesmercyinterior/scripts.pory"
	waitse
# 257 "data/maps/Tidesmercyinterior/scripts.pory"
	setvar VAR_UNUSED_0x404E, 1
# 258 "data/maps/Tidesmercyinterior/scripts.pory"
	applymovement OBJ_BURST_RANGER, BurstRanger_Enter
# 259 "data/maps/Tidesmercyinterior/scripts.pory"
	waitmovement 0
# 260 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox PostStarter_StormInterrupt_Text_1
# 264 "data/maps/Tidesmercyinterior/scripts.pory"
	waitmessage
# 265 "data/maps/Tidesmercyinterior/scripts.pory"
	applymovement OBJ_CAPT_MARA, PostStarter_StormInterrupt_Movement_0
# 266 "data/maps/Tidesmercyinterior/scripts.pory"
	playse SE_PIN
# 267 "data/maps/Tidesmercyinterior/scripts.pory"
	waitmovement 0
# 268 "data/maps/Tidesmercyinterior/scripts.pory"
	applymovement OBJ_CAPT_MARA, PostStarter_StormInterrupt_Movement_1
# 269 "data/maps/Tidesmercyinterior/scripts.pory"
	waitmovement 0
# 270 "data/maps/Tidesmercyinterior/scripts.pory"
	playse SE_EXIT
# 271 "data/maps/Tidesmercyinterior/scripts.pory"
	waitse
# 272 "data/maps/Tidesmercyinterior/scripts.pory"
	removeobject OBJ_CAPT_MARA
# 273 "data/maps/Tidesmercyinterior/scripts.pory"
	msgbox PostStarter_StormInterrupt_Text_2
# 275 "data/maps/Tidesmercyinterior/scripts.pory"
	setflag FLAG_STORM_STARTED
# 276 "data/maps/Tidesmercyinterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 277 "data/maps/Tidesmercyinterior/scripts.pory"
	warp MAP_SS_TIDES_MERCY, 19, 8
# 278 "data/maps/Tidesmercyinterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
	end

PostStarter_StormInterrupt_2:
	end


# 39 "data/maps/Tidesmercyinterior/scripts.pory"
Should_Read_Note_Movement_0:
# 39 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_up
	step_end

# 265 "data/maps/Tidesmercyinterior/scripts.pory"
PostStarter_StormInterrupt_Movement_0:
# 265 "data/maps/Tidesmercyinterior/scripts.pory"
	emote_exclamation_mark
# 265 "data/maps/Tidesmercyinterior/scripts.pory"
	jump_in_place_down
	step_end

# 268 "data/maps/Tidesmercyinterior/scripts.pory"
PostStarter_StormInterrupt_Movement_1:
# 268 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_in_place_fast_left
# 268 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_down
# 268 "data/maps/Tidesmercyinterior/scripts.pory"
	walk_fast_down
# 268 "data/maps/Tidesmercyinterior/scripts.pory"
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
	.string "I hope you're prepared for your first\n"
	.string "mission.\p"
	.string "We've lost communications with the\n"
	.string "Ranger teams on Corymbra's southern\l"
	.string "shore.\p"
	.string "Our mission is to investigate and\n"
	.string "restore contact.\p"
	.string "Before we depart, you need to choose\n"
	.string "your partner Pokémon.\l"
	.string "You have three choices: Turtwig,\l"
	.string "Torchic, or Froakie.$"

CaptainRoom_Talk_Text_1:
# 123 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "You have your partner.\n"
	.string "Good. Stay flexible.$"

Starter_Turtwig_Text_0:
# 134 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "The case is empty.$"

Starter_Turtwig_Text_1:
# 139 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Take TURTWIG as your\n"
	.string "partner?$"

Starter_Torchic_Text_0:
# 160 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Take TORCHIC as your\n"
	.string "partner?$"

Starter_Froakie_Text_0:
# 181 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Take FROAKIE as your\n"
	.string "partner?$"

Give_Starter0_Text_0:
# 202 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "TURTWIG joined your\n"
	.string "squad.$"

Give_Starter1_Text_0:
# 215 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "TORCHIC joined your\n"
	.string "squad.$"

Give_Starter2_Text_0:
# 228 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "FROAKIE joined your\n"
	.string "squad.$"

PostStarter_StormInterrupt_Text_0:
# 250 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Mara: Now, listen up, I-\p"
	.string "$"

PostStarter_StormInterrupt_Text_1:
# 261 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Sailor: Captain! A massive storm\n"
	.string "appeared out of nowhere!\p"
	.string "The barometer's going wild! It's almost\n"
	.string "on top of us!$"

PostStarter_StormInterrupt_Text_2:
# 273 "data/maps/Tidesmercyinterior/scripts.pory"
	.string "Captain Mara: Everybody\n"
	.string "move! All hands topside!$"
