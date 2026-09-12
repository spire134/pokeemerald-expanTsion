Quartz_City_Interiors_MapScripts::
	.byte 0


StoneEmporium_RedSalesMan::
# 4 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 5 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 6 "data/maps/Quartz_City_Interiors/scripts.pory"
	message StoneEmporium_RedSalesMan_Text_0
# 8 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 9 "data/maps/Quartz_City_Interiors/scripts.pory"
	pokemart Quartz_RedStoneMart
# 10 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox StoneEmporium_RedSalesMan_Text_1
# 11 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 12 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


StoneEmporium_GreenSalesMan::
# 16 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 17 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 18 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox StoneEmporium_GreenSalesMan_Text_0
# 20 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 21 "data/maps/Quartz_City_Interiors/scripts.pory"
	pokemart Quartz_GreenStoneMart
# 22 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox StoneEmporium_GreenSalesMan_Text_1
# 23 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 24 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


	.align 2
# 27 "data/maps/Quartz_City_Interiors/scripts.pory"
Quartz_RedStoneMart:
# 28 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 29 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_WATER_STONE
# 30 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 31 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 32 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_ICE_STONE
# 33 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_MOON_STONE
# 34 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_SUN_STONE
	.2byte ITEM_NONE

	.align 2
# 37 "data/maps/Quartz_City_Interiors/scripts.pory"
Quartz_GreenStoneMart:
# 38 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 39 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 40 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 41 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 42 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 43 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_PROTECTIVE_PADS
# 44 "data/maps/Quartz_City_Interiors/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
	.2byte ITEM_NONE

Quartz_GemstoneNerd::
# 48 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 49 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 50 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_GemstoneNerd_Text_0
# 52 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 53 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_ForlornStoneWoman::
# 57 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 58 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 59 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_ForlornStoneWoman_Text_0
# 61 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 62 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_RichJerkman::
# 66 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 67 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 68 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_RichJerkman_Text_0
# 70 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 71 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_GoldDigger::
# 75 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 76 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 77 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_GoldDigger_Text_0
# 79 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 80 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_StoneWeirdo::
# 84 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 85 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 86 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_StoneWeirdo_Text_0
# 88 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 89 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_StoneWeirdo_Text_1
# 91 "data/maps/Quartz_City_Interiors/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 92 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_StoneWeirdo_Text_2
# 93 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 94 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_Fat_Lazy_Husband::
# 98 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 99 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 100 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Fat_Lazy_Husband_Text_0
# 101 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 102 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_Bored_Wife_Murkrow::
# 106 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 107 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 108 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, Quartz_Bored_Wife_Murkrow_End
# 109 "data/maps/Quartz_City_Interiors/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HONEDGE
# 110 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 111 "data/maps/Quartz_City_Interiors/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 112 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 113 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Bored_Wife_Murkrow_Text_0, MSGBOX_YESNO
# 119 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MurkrowTrade_DeclineTrade
# 120 "data/maps/Quartz_City_Interiors/scripts.pory"
	special ChoosePartyMon
# 121 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitstate
# 122 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 123 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, MurkrowTrade_DeclineTrade
# 124 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 125 "data/maps/Quartz_City_Interiors/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 126 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 127 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, MurkrowTrade_NotRequestedMon
# 128 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 129 "data/maps/Quartz_City_Interiors/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 130 "data/maps/Quartz_City_Interiors/scripts.pory"
	special CreateInGameTradePokemon
# 131 "data/maps/Quartz_City_Interiors/scripts.pory"
	special DoInGameTradeScene
# 132 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitstate
# 133 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Bored_Wife_Murkrow_Text_1
# 136 "data/maps/Quartz_City_Interiors/scripts.pory"
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
# 137 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


MurkrowTrade_DeclineTrade::
# 141 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox MurkrowTrade_DeclineTrade_Text_0
# 145 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


MurkrowTrade_NotRequestedMon::
# 149 "data/maps/Quartz_City_Interiors/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 150 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox MurkrowTrade_NotRequestedMon_Text_0
# 154 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_Bored_Wife_Murkrow_End::
# 158 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Bored_Wife_Murkrow_End_Text_0
# 161 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_BoardGame_Boy::
# 165 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 166 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 167 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_BoardGame_Boy_Text_0
# 169 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 170 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_BoardGame_Girl::
# 174 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 175 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 176 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_BoardGame_Girl_Text_0
# 178 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 179 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_TooCoolForGames_Kid::
# 183 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 184 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 185 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_TooCoolForGames_Kid_Text_0
# 187 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 188 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_BoardGame_Mom::
# 192 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 193 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 194 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_BoardGame_Mom_Text_0
# 196 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 197 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_OldMan_TyGifts::
# 201 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 202 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 203 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldMan_TyGifts_Text_0
# 205 "data/maps/Quartz_City_Interiors/scripts.pory"
	giveitem ITEM_POKE_DOLL
# 206 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldMan_TyGifts_Text_1
# 208 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 209 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


Quartz_OldWoman_Dollmaker::
# 213 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 214 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 215 "data/maps/Quartz_City_Interiors/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Quartz_OldWoman_Dollmaker_1
# 239 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_6
# 241 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 242 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return

Quartz_OldWoman_Dollmaker_1:
# 216 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_0, MSGBOX_YESNO
# 219 "data/maps/Quartz_City_Interiors/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_OldWoman_Dollmaker_4
# 235 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_5
# 236 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
	return

Quartz_OldWoman_Dollmaker_4:
# 220 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_1
# 221 "data/maps/Quartz_City_Interiors/scripts.pory"
	trainerbattle_no_intro TRAINER_MOLLIE, Quartz_OldWoman_Dollmaker_Text_2
# 224 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 225 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_3
# 228 "data/maps/Quartz_City_Interiors/scripts.pory"
	setflag FLAG_RECEIVED_DOLLMAKER_WORKSHOP_ACCESS
# 229 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
# 230 "data/maps/Quartz_City_Interiors/scripts.pory"
	applymovement LOCALID_QUARTZ_OLDMANGIFTS, Quartz_OldWoman_Dollmaker_Movement_0
# 231 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmovement 0
# 232 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_OldWoman_Dollmaker_Text_4
# 233 "data/maps/Quartz_City_Interiors/scripts.pory"
	waitmessage
	return


Quartz_Garganacl_Guard::
# 247 "data/maps/Quartz_City_Interiors/scripts.pory"
	lock
# 248 "data/maps/Quartz_City_Interiors/scripts.pory"
	faceplayer
# 249 "data/maps/Quartz_City_Interiors/scripts.pory"
	playmoncry SPECIES_GARGANACL, 0
# 250 "data/maps/Quartz_City_Interiors/scripts.pory"
	msgbox Quartz_Garganacl_Guard_Text_0, MSGBOX_AUTOCLOSE
# 251 "data/maps/Quartz_City_Interiors/scripts.pory"
	release
	return


# 230 "data/maps/Quartz_City_Interiors/scripts.pory"
Quartz_OldWoman_Dollmaker_Movement_0:
# 230 "data/maps/Quartz_City_Interiors/scripts.pory"
	walk_left
# 230 "data/maps/Quartz_City_Interiors/scripts.pory"
	face_down
	step_end

StoneEmporium_RedSalesMan_Text_0:
# 6 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Welcome to the Stone Emporium! We have\n"
	.string "the finest selection of elemental\l"
	.string "stones on the whole island!$"

StoneEmporium_RedSalesMan_Text_1:
# 10 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Keep it Rock Solid!$"

StoneEmporium_GreenSalesMan_Text_0:
# 18 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Hi there! Looking for a special stone to\n"
	.string "evolve your POKéMON?\p"
	.string "You've come to the right place!$"

StoneEmporium_GreenSalesMan_Text_1:
# 22 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Have a Rock Solid day!$"

Quartz_GemstoneNerd_Text_0:
# 50 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Gemstones are the lifeblood of\n"
	.string "Quartzite City!\p"
	.string "Without them, our city would crumble to\n"
	.string "dust!$"

Quartz_ForlornStoneWoman_Text_0:
# 59 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I used to be a jeweler here in\n"
	.string "Quartzite.\p"
	.string "But ever since Team Hive took over,\n"
	.string "business has been slow…\n"
	.string "$"

Quartz_RichJerkman_Text_0:
# 68 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I don't care about Team Hive or their\n"
	.string "petty schemes.\p"
	.string "As long as my gem collection is safe, I'm\n"
	.string "happy!$"

Quartz_GoldDigger_Text_0:
# 77 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I've been digging for gems all day!\p"
	.string "Maybe if I find enough, I can buy my way\n"
	.string "out of this mess with Team Hive…\n"
	.string "$"

Quartz_StoneWeirdo_Text_0:
# 86 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Rocks are the ultimate form of life!\p"
	.string "They've been around for millions of\n"
	.string "years, witnessing the rise and fall of\l"
	.string "civilizations!\n"
	.string "$"

Quartz_StoneWeirdo_Text_1:
# 89 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I want you to have this special special\n"
	.string "rock I found.\p"
	.string "It's said to bring good luck to those\n"
	.string "who carry it!$"

Quartz_StoneWeirdo_Text_2:
# 92 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "{PLAYER} received a Lucky Rock!$"

Quartz_Fat_Lazy_Husband_Text_0:
# 100 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Ugh... do I really have to go to work\n"
	.string "today?\p"
	.string "I'm too comfortable at home to move.$"

Quartz_Bored_Wife_Murkrow_Text_0:
# 113 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "My husband is so lazy! He never wants\n"
	.string "to go out and explore the city with me.\p"
	.string "I wish I could find a {STR_VAR_1} to\n"
	.string "keep me company instead… The only\l"
	.string "friend I've had lately is the knife that\l"
	.string "follows him around!\l"
	.string "It keeps looking at me like it's waiting.\l"
	.string "I would trade the knife for a\l"
	.string "{STR_VAR_1}, I've always fancied a\l"
	.string "murder!$"

Quartz_Bored_Wife_Murkrow_Text_1:
# 134 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Finally, something intelligent to keep\n"
	.string "me company!$"

MurkrowTrade_DeclineTrade_Text_0:
# 142 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "All right then.\n"
	.string "Maybe Honedge can help with my\l"
	.string "husband.$"

MurkrowTrade_NotRequestedMon_Text_0:
# 151 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I would really prefer a {STR_VAR_1}.\p"
	.string "Bring a {STR_VAR_1} if you want my\n"
	.string "knife.$"

Quartz_Bored_Wife_Murkrow_End_Text_0:
# 159 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I love my new Murkrow. I hope Honedge\n"
	.string "got to do whatever it wanted with you!$"

Quartz_BoardGame_Boy_Text_0:
# 167 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Hey! Want to play a board game with me?\p"
	.string "It's a lot of fun and can help pass the\n"
	.string "time while Team Hive is around!$"

Quartz_BoardGame_Girl_Text_0:
# 176 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "I love playing board games!\p"
	.string "It's a great way to spend time with\n"
	.string "friends while we wait for Team Hive to\l"
	.string "leave!$"

Quartz_TooCoolForGames_Kid_Text_0:
# 185 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Board games are for kids.\p"
	.string "I'd rather be outside helping the\n"
	.string "Rangers!$"

Quartz_BoardGame_Mom_Text_0:
# 194 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Playing board games is a great way for\n"
	.string "families to bond!\p"
	.string "Even with Team Hive around, we can still\n"
	.string "have fun together at home!$"

Quartz_OldMan_TyGifts_Text_0:
# 203 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Thank you for helping us with the Team\n"
	.string "Hive problem!\p"
	.string "Please accept this gift as a token of\n"
	.string "our gratitude.$"

Quartz_OldMan_TyGifts_Text_1:
# 206 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "We couldn't have done it without you! If\n"
	.string "you ever need another doll, just let me\l"
	.string "know!\l"
	.string "$"

Quartz_OldWoman_Dollmaker_Text_0:
# 216 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Dollmaker Mollie: You certainly prove\n"
	.string "yourself a strong trainer.\p"
	.string "Perhaps you can be the one with the\n"
	.string "skill to test my designs. But I will first\l"
	.string "evaluate your abilities in battle. Do\l"
	.string "you accept?$"

Quartz_OldWoman_Dollmaker_Text_1:
# 220 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Excellent! Show me your skills!$"

Quartz_OldWoman_Dollmaker_Text_2:
# 222 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Impressive!$"

Quartz_OldWoman_Dollmaker_Text_3:
# 225 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Dollmaker Mollie: You've proven your\n"
	.string "skill once again!\p"
	.string "As a reward, I shall give you access to\n"
	.string "my secret workshop! Please step aside,\l"
	.string "dear!$"

Quartz_OldWoman_Dollmaker_Text_4:
# 232 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Dollmaker Mollie: Say hi to my assistant\n"
	.string "while you're down there!\p"
	.string "$"

Quartz_OldWoman_Dollmaker_Text_5:
# 235 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Take your time to prepare!$"

Quartz_OldWoman_Dollmaker_Text_6:
# 239 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Dollmaker Mollie: I've heard about your\n"
	.string "adventures around Quartzite City.\p"
	.string "Come back when you have the clearance\n"
	.string "to use Surf in the field.$"

Quartz_Garganacl_Guard_Text_0:
# 250 "data/maps/Quartz_City_Interiors/scripts.pory"
	.string "Garganacl: Grgege… Grgegegrg!\p"
	.string "$"
