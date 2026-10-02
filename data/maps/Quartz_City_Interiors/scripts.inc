Quartz_City_Interiors_MapScripts::
	.byte 0


StoneEmporium_RedSalesMan::
# 4 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 5 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 6 "data/maps/Quartz_City_Interiors/scripts.pory"
	message StoneEmporium_RedSalesMan_Text_0
# 7 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 8 "data/maps/Quartz_City_Interiors/scripts.pory"
	pokemart Quartz_RedStoneMart
# 9 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox StoneEmporium_RedSalesMan_Text_1
# 10 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 11 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


StoneEmporium_GreenSalesMan::
# 15 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 16 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 17 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox StoneEmporium_GreenSalesMan_Text_0
# 18 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 19 "data/maps/Quartz_City_Interiors/scripts.pory"
	pokemart Quartz_GreenStoneMart
# 20 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox StoneEmporium_GreenSalesMan_Text_1
# 21 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 22 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


	.align 2
# 25 "data/maps/Quartz_City_Interiors/scripts.pory"
Quartz_RedStoneMart:
# 26 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 27 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_WATER_STONE
# 28 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 29 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 30 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_ICE_STONE
# 31 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_MOON_STONE
# 32 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 35 "data/maps/Quartz_City_Interiors/scripts.pory"
Quartz_GreenStoneMart:
# 36 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 37 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 38 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 39 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 40 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 41 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 42 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_NONE

Quartz_GemstoneNerd::
# 46 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 47 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 48 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_GemstoneNerd_Text_0
# 50 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 51 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_ForlornStoneWoman::
# 55 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 56 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 57 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_ForlornStoneWoman_Text_0
# 59 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 60 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_RichJerkman::
# 64 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 65 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 66 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_RichJerkman_Text_0
# 68 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 69 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_GoldDigger::
# 73 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 74 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 75 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_GoldDigger_Text_0
# 77 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 78 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_StoneWeirdo::
# 82 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 83 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 84 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_StoneWeirdo_Text_0
# 86 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 87 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_StoneWeirdo_Text_1
# 89 "data/maps/Quartz_City_Interiors/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 90 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_StoneWeirdo_Text_2
# 91 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 92 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_Fat_Lazy_Husband::
# 96 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 97 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 98 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, Quartz_Fat_Lazy_Husband_2
# 103 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Fat_Lazy_Husband_Text_1
Quartz_Fat_Lazy_Husband_1:
# 108 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 109 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return

Quartz_Fat_Lazy_Husband_2:
# 99 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Fat_Lazy_Husband_Text_0
	goto Quartz_Fat_Lazy_Husband_1


Quartz_Bored_Wife_Murkrow::
# 113 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 114 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 115 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, Quartz_Bored_Wife_Murkrow_End
# 116 "data/maps/Quartz_City_Interiors/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HONEDGE
# 117 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 118 "data/maps/Quartz_City_Interiors/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 119 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 120 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Bored_Wife_Murkrow_Text_0, MSGBOX_YESNO
# 126 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MurkrowTrade_DeclineTrade
# 127 "data/maps/Quartz_City_Interiors/scripts.pory"
	special ChoosePartyMon
# 128 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitstate
# 129 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 130 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MurkrowTrade_DeclineTrade
# 131 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 132 "data/maps/Quartz_City_Interiors/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 133 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 134 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, MurkrowTrade_NotRequestedMon
# 135 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 136 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 137 "data/maps/Quartz_City_Interiors/scripts.pory"
	special CreateInGameTradePokemon
# 138 "data/maps/Quartz_City_Interiors/scripts.pory"
	special DoInGameTradeScene
# 139 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitstate
# 140 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Bored_Wife_Murkrow_Text_1
# 143 "data/maps/Quartz_City_Interiors/scripts.pory"
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
# 144 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


MurkrowTrade_DeclineTrade::
# 148 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox MurkrowTrade_DeclineTrade_Text_0
# 152 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


MurkrowTrade_NotRequestedMon::
# 156 "data/maps/Quartz_City_Interiors/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 157 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox MurkrowTrade_NotRequestedMon_Text_0
# 161 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_Bored_Wife_Murkrow_End::
# 165 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Bored_Wife_Murkrow_End_Text_0
# 169 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_BoardGame_Boy::
# 173 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 174 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 175 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_BoardGame_Boy_Text_0
# 177 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 178 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_BoardGame_Girl::
# 182 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 183 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 184 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_BoardGame_Girl_Text_0
# 186 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 187 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_TooCoolForGames_Kid::
# 191 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 192 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 193 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_TooCoolForGames_Kid_Text_0
# 195 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 196 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_BoardGame_Mom::
# 200 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 201 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 202 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_BoardGame_Mom_Text_0
# 204 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 205 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_OldMan_TyGifts::
# 209 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 210 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 211 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldMan_TyGifts_Text_0
# 214 "data/maps/Quartz_City_Interiors/scripts.pory"
	giveitem ITEM_POKE_DOLL
# 215 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldMan_TyGifts_Text_1
# 217 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 218 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_OldWoman_Dollmaker::
# 222 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 223 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 224 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Quartz_OldWoman_Dollmaker_1
# 248 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_6
# 251 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 252 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return

Quartz_OldWoman_Dollmaker_1:
# 225 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_0, MSGBOX_YESNO
# 228 "data/maps/Quartz_City_Interiors/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_OldWoman_Dollmaker_4
# 244 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_5
# 245 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
	return

Quartz_OldWoman_Dollmaker_4:
# 229 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_1
# 230 "data/maps/Quartz_City_Interiors/scripts.pory"
	trainerbattle_no_intro TRAINER_MOLLIE, Quartz_OldWoman_Dollmaker_Text_2
# 233 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 234 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_3
# 237 "data/maps/Quartz_City_Interiors/scripts.pory"
	setflag FLAG_RECEIVED_DOLLMAKER_WORKSHOP_ACCESS
# 238 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 239 "data/maps/Quartz_City_Interiors/scripts.pory"
	applymovement LOCALID_QUARTZ_OLDMANGIFTS, Quartz_OldWoman_Dollmaker_Movement_0
# 240 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmovement 0
# 241 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_4
# 242 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
	return


Quartz_Garganacl_Guard::
# 257 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 258 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 259 "data/maps/Quartz_City_Interiors/scripts.pory"
	playmoncry SPECIES_GARGANACL, 0
# 260 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Garganacl_Guard_Text_0, MSGBOX_AUTOCLOSE
# 261 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


# 239 "data/maps/Quartz_City_Interiors/scripts.pory"
Quartz_OldWoman_Dollmaker_Movement_0:
# 239 "data/maps/Quartz_City_Interiors/scripts.pory"
	walk_left
# 239 "data/maps/Quartz_City_Interiors/scripts.pory"
	face_down
	step_end

StoneEmporium_RedSalesMan_Text_0:
# 6 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Welcome to the Stone Emporium! Take a\n"
	.string "look at our elemental stones!$"

StoneEmporium_RedSalesMan_Text_1:
# 9 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Keep it Rock Solid!$"

StoneEmporium_GreenSalesMan_Text_0:
# 17 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Looking for a special stone to evolve\n"
	.string "your Pokémon? Take a look!$"

StoneEmporium_GreenSalesMan_Text_1:
# 20 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Have a Rock Solid day!$"

Quartz_GemstoneNerd_Text_0:
# 48 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Gemstones are the lifeblood of\n"
	.string "Quartzite City!\p"
	.string "If we can't drain the quarry soon, our\n"
	.string "entire economy will crumble to dust!$"

Quartz_ForlornStoneWoman_Text_0:
# 57 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I used to be a jeweler here in\n"
	.string "Quartzite.\p"
	.string "But ever since Team Hive blocked the\n"
	.string "upstream flow and flooded the quarry,\l"
	.string "business has been entirely washed out.$"

Quartz_RichJerkman_Text_0:
# 66 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I don't care about Team Hive or their\n"
	.string "petty schemes up at the Mansion.\p"
	.string "As long as my private gem collection is\n"
	.string "safe from the water damage, I'm happy!$"

Quartz_GoldDigger_Text_0:
# 75 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I've been digging for gems in the\n"
	.string "shallows all day!\p"
	.string "Maybe if I find enough, I can buy my way\n"
	.string "out of this mess before the whole town\l"
	.string "goes under!$"

Quartz_StoneWeirdo_Text_0:
# 84 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Rocks are the ultimate form of life!\n"
	.string "Water cannot defeat them!\p"
	.string "They've been around for millions of\n"
	.string "years, witnessing the rise and fall of\l"
	.string "civilizations!$"

Quartz_StoneWeirdo_Text_1:
# 87 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I want you to have this special rock I\n"
	.string "found before the flood.\p"
	.string "It's said to bring good luck to those\n"
	.string "who carry it!$"

Quartz_StoneWeirdo_Text_2:
# 90 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "{PLAYER} received a Lucky Rock!$"

Quartz_Fat_Lazy_Husband_Text_0:
# 99 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Okay, she traded away the haunted\n"
	.string "sword… but now she has a Murkrow.\p"
	.string "Do you know what a group of them is\n"
	.string "called? A murder!\p"
	.string "I'm locking myself in the bathroom until\n"
	.string "the quarry drains.$"

Quartz_Fat_Lazy_Husband_Text_1:
# 103 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Ugh… do I really have to go to work\n"
	.string "today?\p"
	.string "The quarry is flooded anyway, I might as\n"
	.string "well stay home where it's dry!\p"
	.string "Besides, my wife brought home this\n"
	.string "weird sword Pokémon. It just floats\l"
	.string "there… staring at my neck.\p"
	.string "I'm not moving a single muscle.$"

Quartz_Bored_Wife_Murkrow_Text_0:
# 120 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "My husband is utterly useless! He\n"
	.string "claims the flooded quarry means he can\l"
	.string "sleep all day.\p"
	.string "In reality, he's just terrified of work.\p"
	.string "I wish I could find a {STR_VAR_1} to\n"
	.string "keep me company instead.\p"
	.string "The sword just hovers over his pillow.\n"
	.string "It's dreadfully dull watching him sweat.\p"
	.string "I would gladly trade the knife for a\n"
	.string "{STR_VAR_1}. I've always fancied\l"
	.string "starting a murder!$"

Quartz_Bored_Wife_Murkrow_Text_1:
# 141 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Finally, something intelligent to keep\n"
	.string "me company!$"

MurkrowTrade_DeclineTrade_Text_0:
# 149 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "All right then.\n"
	.string "Maybe Honedge will give him a little trim\l"
	.string "while he sleeps.$"

MurkrowTrade_NotRequestedMon_Text_0:
# 158 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I would really prefer a {STR_VAR_1}.\p"
	.string "Bring a {STR_VAR_1} if you want my\n"
	.string "knife.$"

Quartz_Bored_Wife_Murkrow_End_Text_0:
# 166 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I adore my new Murkrow. It brings me\n"
	.string "shiny things from the flooded shallows\l"
	.string "and completely ignores my husband.\p"
	.string "I hope Honedge got to do whatever it\n"
	.string "wanted with you!$"

Quartz_BoardGame_Boy_Text_0:
# 175 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Hey! Want to play a board game with me?\p"
	.string "It's a lot of fun and can help pass the\n"
	.string "time while Team Hive blocks the river!$"

Quartz_BoardGame_Girl_Text_0:
# 184 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I love playing board games!\p"
	.string "It's a great way to spend time with\n"
	.string "friends while we wait for the water to\l"
	.string "drain!$"

Quartz_TooCoolForGames_Kid_Text_0:
# 193 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Board games are for kids.\p"
	.string "I'd rather be outside helping the\n"
	.string "Rangers flush Team Hive out of\l"
	.string "Shudderwood!$"

Quartz_BoardGame_Mom_Text_0:
# 202 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Playing board games is a great way for\n"
	.string "families to bond!\p"
	.string "Even with the quarry closed down, we\n"
	.string "can still have fun together at home!$"

Quartz_OldMan_TyGifts_Text_0:
# 211 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Thank you for helping us with the Team\n"
	.string "Hive problem!\p"
	.string "With Shudderwood Mansion safe, our\n"
	.string "town can finally breathe again.\p"
	.string "Please accept this gift as a token of\n"
	.string "our gratitude.$"

Quartz_OldMan_TyGifts_Text_1:
# 215 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "We couldn't have done it without you!\p"
	.string "If you ever need another doll, just let\n"
	.string "me know!$"

Quartz_OldWoman_Dollmaker_Text_0:
# 225 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Dollmaker Mollie: You certainly prove\n"
	.string "yourself a strong trainer, taking back\l"
	.string "Shudderwood like that.\p"
	.string "Perhaps you can be the one with the\n"
	.string "skill to test my designs.\p"
	.string "But I will first evaluate your abilities\n"
	.string "in battle. Do you accept?$"

Quartz_OldWoman_Dollmaker_Text_1:
# 229 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Excellent! Show me your skills!$"

Quartz_OldWoman_Dollmaker_Text_2:
# 231 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Impressive!$"

Quartz_OldWoman_Dollmaker_Text_3:
# 234 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Dollmaker Mollie: You've proven your\n"
	.string "skill once again!\p"
	.string "As a reward, I shall give you access to\n"
	.string "my secret workshop!\p"
	.string "Please step aside, dear!$"

Quartz_OldWoman_Dollmaker_Text_4:
# 241 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Dollmaker Mollie: Say hi to my assistant\n"
	.string "while you're down there!\p"
	.string "$"

Quartz_OldWoman_Dollmaker_Text_5:
# 244 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Take your time to prepare!$"

Quartz_OldWoman_Dollmaker_Text_6:
# 248 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Dollmaker Mollie: I've heard about your\n"
	.string "adventures around Quartzite City.\p"
	.string "It's a shame about the quarry.\p"
	.string "Come back when you have the clearance\n"
	.string "to use Surf in the field.$"

Quartz_Garganacl_Guard_Text_0:
# 260 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Garganacl: Grgege Grgegegrg!\p"
	.string "$"
