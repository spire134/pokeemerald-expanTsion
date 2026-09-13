SHOREFALL_STRAND_MapScripts::
# 2 "data/maps/SHOREFALL_STRAND/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SHOREFALL_STRAND_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SHOREFALL_STRAND_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SHOREFALL_STRAND/scripts.pory"
	map_script_2 VAR_UNUSED_0x404E, 2, Shorefall_OnEnter
	.2byte 0


Shorefall_OnEnter::
# 8 "data/maps/SHOREFALL_STRAND/scripts.pory"
	lockall
# 9 "data/maps/SHOREFALL_STRAND/scripts.pory"
	playbgm MUS_ABNORMAL_WEATHER, 0
# 10 "data/maps/SHOREFALL_STRAND/scripts.pory"
	msgbox Shorefall_OnEnter_Text_0
# 16 "data/maps/SHOREFALL_STRAND/scripts.pory"
	call Shorefall_PartnerMoment
# 17 "data/maps/SHOREFALL_STRAND/scripts.pory"
	setrespawn HEAL_LOCATION_SHOREFALL_STRAND
# 18 "data/maps/SHOREFALL_STRAND/scripts.pory"
	setvar VAR_UNUSED_0x404E, 3
# 19 "data/maps/SHOREFALL_STRAND/scripts.pory"
	setwildbattle SPECIES_WATTREL, 2
# 20 "data/maps/SHOREFALL_STRAND/scripts.pory"
	dowildbattle
# 21 "data/maps/SHOREFALL_STRAND/scripts.pory"
	msgbox Shorefall_OnEnter_Text_1
# 26 "data/maps/SHOREFALL_STRAND/scripts.pory"
	special HealPlayerParty
# 27 "data/maps/SHOREFALL_STRAND/scripts.pory"
	releaseall
	end


Shorefall_PartnerMoment:
# 32 "data/maps/SHOREFALL_STRAND/scripts.pory"
	switch VAR_STARTER_MON
# 33 "data/maps/SHOREFALL_STRAND/scripts.pory"
	case 0, Shorefall_PartnerMoment_3
# 37 "data/maps/SHOREFALL_STRAND/scripts.pory"
	case 1, Shorefall_PartnerMoment_4
# 41 "data/maps/SHOREFALL_STRAND/scripts.pory"
	case 2, Shorefall_PartnerMoment_5
Shorefall_PartnerMoment_1:
	return

Shorefall_PartnerMoment_3:
# 34 "data/maps/SHOREFALL_STRAND/scripts.pory"
	playmoncry SPECIES_TURTWIG, 0
# 35 "data/maps/SHOREFALL_STRAND/scripts.pory"
	waitmoncry
# 36 "data/maps/SHOREFALL_STRAND/scripts.pory"
	msgbox Shorefall_PartnerMoment_Text_0
	goto Shorefall_PartnerMoment_1

Shorefall_PartnerMoment_4:
# 38 "data/maps/SHOREFALL_STRAND/scripts.pory"
	playmoncry SPECIES_TORCHIC, 0
# 39 "data/maps/SHOREFALL_STRAND/scripts.pory"
	waitmoncry
# 40 "data/maps/SHOREFALL_STRAND/scripts.pory"
	msgbox Shorefall_PartnerMoment_Text_1
	goto Shorefall_PartnerMoment_1

Shorefall_PartnerMoment_5:
# 42 "data/maps/SHOREFALL_STRAND/scripts.pory"
	playmoncry SPECIES_FROAKIE, 0
# 43 "data/maps/SHOREFALL_STRAND/scripts.pory"
	waitmoncry
# 44 "data/maps/SHOREFALL_STRAND/scripts.pory"
	msgbox Shorefall_PartnerMoment_Text_2
	goto Shorefall_PartnerMoment_1


CrashedShipLock::
# 50 "data/maps/SHOREFALL_STRAND/scripts.pory"
	lock
# 51 "data/maps/SHOREFALL_STRAND/scripts.pory"
	msgbox CrashedShipLock_Text_0
# 52 "data/maps/SHOREFALL_STRAND/scripts.pory"
	checkitem ITEM_STORAGE_KEY
# 53 "data/maps/SHOREFALL_STRAND/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CrashedShipLock_2
# 58 "data/maps/SHOREFALL_STRAND/scripts.pory"
	msgbox CrashedShipLock_Text_2
CrashedShipLock_1:
# 60 "data/maps/SHOREFALL_STRAND/scripts.pory"
	release
	end

CrashedShipLock_2:
# 54 "data/maps/SHOREFALL_STRAND/scripts.pory"
	msgbox CrashedShipLock_Text_1
# 55 "data/maps/SHOREFALL_STRAND/scripts.pory"
	warp MAP_TIDES_MERCY_STORAGE_WRECK, 1, 24
# 56 "data/maps/SHOREFALL_STRAND/scripts.pory"
	waitstate
	goto CrashedShipLock_1


Shorefall_OnEnter_Text_0:
# 11 "data/maps/SHOREFALL_STRAND/scripts.pory"
	.string "…\p"
	.string "You wake to your partner poking your\n"
	.string "shoulder.\n"
	.string "Waves pound against a grounded hull.\p"
	.string "You are suddenly attacked by a\n"
	.string "Pokémon!$"

Shorefall_OnEnter_Text_1:
# 22 "data/maps/SHOREFALL_STRAND/scripts.pory"
	.string "You steady your partner as the rain\n"
	.string "finally eases. A cold breeze rolls in.\p"
	.string "Ranger Fieldbook, page 1:\p"
	.string "Find your team. Reach shelter. Stay\n"
	.string "alive.$"

Shorefall_PartnerMoment_Text_0:
# 36 "data/maps/SHOREFALL_STRAND/scripts.pory"
	.string "TURTWIG plants itself between you and\n"
	.string "the surf, steady and unshaken.$"

Shorefall_PartnerMoment_Text_1:
# 40 "data/maps/SHOREFALL_STRAND/scripts.pory"
	.string "TORCHIC hops in front of you, feathers\n"
	.string "bristling with defiant energy.$"

Shorefall_PartnerMoment_Text_2:
# 44 "data/maps/SHOREFALL_STRAND/scripts.pory"
	.string "FROAKIE lands lightly by your side,\n"
	.string "alert eyes tracking every movement.$"

CrashedShipLock_Text_0:
# 51 "data/maps/SHOREFALL_STRAND/scripts.pory"
	.string "The hull is damaged and waterlogged. It\n"
	.string "washed ashore in the storm.$"

CrashedShipLock_Text_1:
# 54 "data/maps/SHOREFALL_STRAND/scripts.pory"
	.string "You use the Old Key to unlock a small\n"
	.string "compartment.$"

CrashedShipLock_Text_2:
# 58 "data/maps/SHOREFALL_STRAND/scripts.pory"
	.string "The compartment is locked tight. You\n"
	.string "need a key to open it.$"
