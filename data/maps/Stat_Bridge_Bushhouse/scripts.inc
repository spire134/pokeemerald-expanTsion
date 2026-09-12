Stat_Bridge_Bushhouse_MapScripts::
	.byte 0


Fish_Award::
# 3 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	lock
# 4 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	msgbox Fish_Award_Text_0
# 5 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	release
	return


Wood_Bed_Nap::
# 9 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	lock
# 10 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	msgbox Wood_Bed_Nap_Text_0
# 11 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	closemessage
# 12 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 13 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	msgbox Wood_Bed_Nap_Text_1
# 14 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	release
	return


Fish_Award_Text_0:
# 4 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	.string "It's an award for a fishing competition!$"

Wood_Bed_Nap_Text_0:
# 10 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	.string "You take a short nap on the wood bed.$"

Wood_Bed_Nap_Text_1:
# 13 "data/maps/Stat_Bridge_Bushhouse/scripts.pory"
	.string "You feel refreshed!$"
