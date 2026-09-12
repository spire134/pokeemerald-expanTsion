Hazolt_TradeHouse_MapScripts::
	.byte 0


NumelTrade::
# 4 "data/maps/Hazolt_TradeHouse/scripts.pory"
	lock
# 5 "data/maps/Hazolt_TradeHouse/scripts.pory"
	faceplayer
# 6 "data/maps/Hazolt_TradeHouse/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, NumelTrade_TradeCompleted
# 7 "data/maps/Hazolt_TradeHouse/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_NUMEL
# 8 "data/maps/Hazolt_TradeHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 9 "data/maps/Hazolt_TradeHouse/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 10 "data/maps/Hazolt_TradeHouse/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 11 "data/maps/Hazolt_TradeHouse/scripts.pory"
	msgbox NumelTrade_Text_0, MSGBOX_YESNO
# 16 "data/maps/Hazolt_TradeHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, NumelTrade_DeclineTrade
# 17 "data/maps/Hazolt_TradeHouse/scripts.pory"
	special ChoosePartyMon
# 18 "data/maps/Hazolt_TradeHouse/scripts.pory"
	waitstate
# 19 "data/maps/Hazolt_TradeHouse/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 20 "data/maps/Hazolt_TradeHouse/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, NumelTrade_DeclineTrade
# 21 "data/maps/Hazolt_TradeHouse/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 22 "data/maps/Hazolt_TradeHouse/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 23 "data/maps/Hazolt_TradeHouse/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 24 "data/maps/Hazolt_TradeHouse/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, NumelTrade_NotRequestedMon
# 25 "data/maps/Hazolt_TradeHouse/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 26 "data/maps/Hazolt_TradeHouse/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 27 "data/maps/Hazolt_TradeHouse/scripts.pory"
	special CreateInGameTradePokemon
# 28 "data/maps/Hazolt_TradeHouse/scripts.pory"
	special DoInGameTradeScene
# 29 "data/maps/Hazolt_TradeHouse/scripts.pory"
	waitstate
# 30 "data/maps/Hazolt_TradeHouse/scripts.pory"
	msgbox NumelTrade_Text_1
# 33 "data/maps/Hazolt_TradeHouse/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 34 "data/maps/Hazolt_TradeHouse/scripts.pory"
	release
	return


NumelTrade_DeclineTrade::
# 38 "data/maps/Hazolt_TradeHouse/scripts.pory"
	msgbox NumelTrade_DeclineTrade_Text_0
# 42 "data/maps/Hazolt_TradeHouse/scripts.pory"
	release
	return


NumelTrade_NotRequestedMon::
# 46 "data/maps/Hazolt_TradeHouse/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 47 "data/maps/Hazolt_TradeHouse/scripts.pory"
	msgbox NumelTrade_NotRequestedMon_Text_0
# 51 "data/maps/Hazolt_TradeHouse/scripts.pory"
	release
	return


NumelTrade_TradeCompleted::
# 55 "data/maps/Hazolt_TradeHouse/scripts.pory"
	msgbox NumelTrade_TradeCompleted_Text_0
# 58 "data/maps/Hazolt_TradeHouse/scripts.pory"
	release
	return


NumelTrade_Text_0:
# 12 "data/maps/Hazolt_TradeHouse/scripts.pory"
	.string "I've always wanted a Doduo, but they\n"
	.string "are too darn fast.\p"
	.string "If you bring me a {STR_VAR_1}, I'll\n"
	.string "trade you my {STR_VAR_2}.\l"
	.string "I brought him from my home town,\l"
	.string "Fallarbor.$"

NumelTrade_Text_1:
# 31 "data/maps/Hazolt_TradeHouse/scripts.pory"
	.string "Wow, two heads. That's awesome!\p"
	.string "I wonder if they like different foods…$"

NumelTrade_DeclineTrade_Text_0:
# 39 "data/maps/Hazolt_TradeHouse/scripts.pory"
	.string "All right then.\n"
	.string "Don't blow up on me.$"

NumelTrade_NotRequestedMon_Text_0:
# 48 "data/maps/Hazolt_TradeHouse/scripts.pory"
	.string "I haven't gotten that close, but that\n"
	.string "ain't no {STR_VAR_1}.\p"
	.string "Bring a {STR_VAR_1} if you want to\n"
	.string "trade.$"

NumelTrade_TradeCompleted_Text_0:
# 56 "data/maps/Hazolt_TradeHouse/scripts.pory"
	.string "The Doduo you traded me is doing great!$"
