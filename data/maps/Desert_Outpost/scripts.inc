Desert_Outpost_MapScripts::
	.byte 0


Rocky_Road_Rest_Lady::
# 4 "data/maps/Desert_Outpost/scripts.pory"
	lock
# 5 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Rocky_Road_Rest_Lady_Text_0, MSGBOX_YESNO
# 7 "data/maps/Desert_Outpost/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Rocky_Road_Rest_Lady_1
# 12 "data/maps/Desert_Outpost/scripts.pory"
	special HealPlayerParty
# 13 "data/maps/Desert_Outpost/scripts.pory"
	playse MUS_HEAL
# 14 "data/maps/Desert_Outpost/scripts.pory"
	waitse
# 15 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Rocky_Road_Rest_Lady_Text_2
# 16 "data/maps/Desert_Outpost/scripts.pory"
	waitmessage
# 17 "data/maps/Desert_Outpost/scripts.pory"
	release
	return

Rocky_Road_Rest_Lady_1:
# 8 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Rocky_Road_Rest_Lady_Text_1
# 9 "data/maps/Desert_Outpost/scripts.pory"
	waitmessage
# 10 "data/maps/Desert_Outpost/scripts.pory"
	release
	return


Rocky_Road_Trader::
# 22 "data/maps/Desert_Outpost/scripts.pory"
	lock
# 23 "data/maps/Desert_Outpost/scripts.pory"
	faceplayer
# 24 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Rocky_Road_Trader_Text_0
# 27 "data/maps/Desert_Outpost/scripts.pory"
	waitmessage
# 28 "data/maps/Desert_Outpost/scripts.pory"
	pokemart POKEMART_TRADER_JOE
# 29 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Rocky_Road_Trader_Text_1
# 30 "data/maps/Desert_Outpost/scripts.pory"
	waitmessage
# 31 "data/maps/Desert_Outpost/scripts.pory"
	release
	return


	.align 2
# 34 "data/maps/Desert_Outpost/scripts.pory"
POKEMART_TRADER_JOE:
# 35 "data/maps/Desert_Outpost/scripts.pory"
	.2byte ITEM_RARE_BONE
# 36 "data/maps/Desert_Outpost/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 37 "data/maps/Desert_Outpost/scripts.pory"
	.2byte ITEM_BIG_MUSHROOM
# 38 "data/maps/Desert_Outpost/scripts.pory"
	.2byte ITEM_PEARL
# 39 "data/maps/Desert_Outpost/scripts.pory"
	.2byte ITEM_NUGGET
# 40 "data/maps/Desert_Outpost/scripts.pory"
	.2byte ITEM_OVAL_STONE
	.2byte ITEM_NONE

Rocky_Road_Extremist::
# 44 "data/maps/Desert_Outpost/scripts.pory"
	lock
# 45 "data/maps/Desert_Outpost/scripts.pory"
	faceplayer
# 46 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Rocky_Road_Extremist_Text_0
# 48 "data/maps/Desert_Outpost/scripts.pory"
	waitmessage
# 49 "data/maps/Desert_Outpost/scripts.pory"
	release
	return


Rocky_Road_Thirsty_Lileep_Trade::
# 53 "data/maps/Desert_Outpost/scripts.pory"
	lock
# 54 "data/maps/Desert_Outpost/scripts.pory"
	faceplayer
# 55 "data/maps/Desert_Outpost/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, Lileep_Trade_Completed
# 56 "data/maps/Desert_Outpost/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_LILEEP
# 57 "data/maps/Desert_Outpost/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 58 "data/maps/Desert_Outpost/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 59 "data/maps/Desert_Outpost/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 60 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Rocky_Road_Thirsty_Lileep_Trade_Text_0, MSGBOX_YESNO
# 64 "data/maps/Desert_Outpost/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Lileep_Trade_DeclineTrade
# 65 "data/maps/Desert_Outpost/scripts.pory"
	special ChoosePartyMon
# 66 "data/maps/Desert_Outpost/scripts.pory"
	waitstate
# 67 "data/maps/Desert_Outpost/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 68 "data/maps/Desert_Outpost/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Lileep_Trade_DeclineTrade
# 69 "data/maps/Desert_Outpost/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 70 "data/maps/Desert_Outpost/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 71 "data/maps/Desert_Outpost/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 72 "data/maps/Desert_Outpost/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Lileep_Trade_NotRequestedMon
# 73 "data/maps/Desert_Outpost/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 74 "data/maps/Desert_Outpost/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 75 "data/maps/Desert_Outpost/scripts.pory"
	special CreateInGameTradePokemon
# 76 "data/maps/Desert_Outpost/scripts.pory"
	special DoInGameTradeScene
# 77 "data/maps/Desert_Outpost/scripts.pory"
	waitstate
# 78 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Rocky_Road_Thirsty_Lileep_Trade_Text_1
# 82 "data/maps/Desert_Outpost/scripts.pory"
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 83 "data/maps/Desert_Outpost/scripts.pory"
	release
	return


Lileep_Trade_DeclineTrade::
# 87 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Lileep_Trade_DeclineTrade_Text_0
# 90 "data/maps/Desert_Outpost/scripts.pory"
	release
	return


Lileep_Trade_NotRequestedMon::
# 94 "data/maps/Desert_Outpost/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 95 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Lileep_Trade_NotRequestedMon_Text_0
# 99 "data/maps/Desert_Outpost/scripts.pory"
	release
	return


Lileep_Trade_Completed::
# 103 "data/maps/Desert_Outpost/scripts.pory"
	msgbox Lileep_Trade_Completed_Text_0
# 107 "data/maps/Desert_Outpost/scripts.pory"
	release
	return


Rocky_Road_Rest_Lady_Text_0:
# 5 "data/maps/Desert_Outpost/scripts.pory"
	.string "Resting here in the desert outpost is a\n"
	.string "great way to recover your strength!\p"
	.string "Would you like to take a break and heal\n"
	.string "your POKéMON?$"

Rocky_Road_Rest_Lady_Text_1:
# 8 "data/maps/Desert_Outpost/scripts.pory"
	.string "Alright, let me know if you need\n"
	.string "anything.$"

Rocky_Road_Rest_Lady_Text_2:
# 15 "data/maps/Desert_Outpost/scripts.pory"
	.string "Your POKéMON have been healed.$"

Rocky_Road_Trader_Text_0:
# 24 "data/maps/Desert_Outpost/scripts.pory"
	.string "Trader Joe: Hey there, traveler!\p"
	.string "Looking to trade some items? I've got a\n"
	.string "few rare things you might be interested\l"
	.string "in.\p"
	.string "Take a look and see if anything catches\n"
	.string "your eye!$"

Rocky_Road_Trader_Text_1:
# 29 "data/maps/Desert_Outpost/scripts.pory"
	.string "Trader Joe: Thanks for stopping by!\n"
	.string "Come back anytime if you want to trade\l"
	.string "more items.$"

Rocky_Road_Extremist_Text_0:
# 46 "data/maps/Desert_Outpost/scripts.pory"
	.string "The wastes of Corymbra prove a harsh\n"
	.string "place, but it reveals the true strength\l"
	.string "of one's character!\p"
	.string "Only those who can endure its trials are\n"
	.string "worthy of the title.$"

Rocky_Road_Thirsty_Lileep_Trade_Text_0:
# 60 "data/maps/Desert_Outpost/scripts.pory"
	.string "Ace Chuck: Hey there, ranger! You think\n"
	.string "you can help me out?\p"
	.string "I'm always so bone dry thirsty out here,\n"
	.string "if you could bring me a {STR_VAR_1},\l"
	.string "I'd be forever grateful.\p"
	.string "Why, I'll trade you this here Lileep,\n"
	.string "after all, it keeps draining all the\l"
	.string "water near it!$"

Rocky_Road_Thirsty_Lileep_Trade_Text_1:
# 79 "data/maps/Desert_Outpost/scripts.pory"
	.string "Ace Chuck: Ah, that's the stuff! Thanks\n"
	.string "a ton, ranger!\p"
	.string "Here's your Lileep, take good care of it\n"
	.string "out here in the desert!$"

Lileep_Trade_DeclineTrade_Text_0:
# 88 "data/maps/Desert_Outpost/scripts.pory"
	.string "Ace Chuck: Ah, no worries then. Stay\n"
	.string "hydrated out there!$"

Lileep_Trade_NotRequestedMon_Text_0:
# 96 "data/maps/Desert_Outpost/scripts.pory"
	.string "Ace Chuck: Hmm, this isn't a\n"
	.string "{STR_VAR_1}…\p"
	.string "I really need that to quench my thirst\n"
	.string "out here.$"

Lileep_Trade_Completed_Text_0:
# 104 "data/maps/Desert_Outpost/scripts.pory"
	.string "Ace Chuck: Thanks again for that\n"
	.string "{STR_VAR_1} earlier!\p"
	.string "My Pyukumuku keeps my canteen nice and\n"
	.string "full!$"
