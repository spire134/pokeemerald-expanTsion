SS_Tides_Mercy_MapScripts::
# 2 "data/maps/SS_Tides_Mercy/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SS_Tides_Mercy_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SS_Tides_Mercy_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/SS_Tides_Mercy/scripts.pory"
	map_script_2 VAR_UNUSED_0x404E, 1, DeckStormCutscene
	.2byte 0


Sailor_DeckTalk::
# 8 "data/maps/SS_Tides_Mercy/scripts.pory"
	lock
# 9 "data/maps/SS_Tides_Mercy/scripts.pory"
	faceplayer
# 10 "data/maps/SS_Tides_Mercy/scripts.pory"
	goto_if_unset FLAG_STORM_STARTED, Sailor_DeckTalk_2
# 13 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox Sailor_DeckTalk_Text_1
Sailor_DeckTalk_1:
# 15 "data/maps/SS_Tides_Mercy/scripts.pory"
	release
	end

Sailor_DeckTalk_2:
# 11 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox Sailor_DeckTalk_Text_0
	goto Sailor_DeckTalk_1


# 19 "data/maps/SS_Tides_Mercy/scripts.pory"
Corin_RunInLate:
# 20 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_faster_up
# 21 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_faster_up
# 22 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_faster_up
# 23 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_faster_up
# 24 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_faster_up
# 25 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_fast_up
# 26 "data/maps/SS_Tides_Mercy/scripts.pory"
	face_right
	step_end

DeckStormCutscene::
# 30 "data/maps/SS_Tides_Mercy/scripts.pory"
	lockall
# 31 "data/maps/SS_Tides_Mercy/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 32 "data/maps/SS_Tides_Mercy/scripts.pory"
	doweather
# 33 "data/maps/SS_Tides_Mercy/scripts.pory"
	addobject LOCALID_CAPT_MARA
# 34 "data/maps/SS_Tides_Mercy/scripts.pory"
	addobject LOCALID_SAILOR
# 35 "data/maps/SS_Tides_Mercy/scripts.pory"
	addobject LOCALID_EON_DECK
# 36 "data/maps/SS_Tides_Mercy/scripts.pory"
	addobject LOCALID_RUNNING_CORRIN
# 37 "data/maps/SS_Tides_Mercy/scripts.pory"
	showobjectat LOCALID_CAPT_MARA, MAP_SS_TIDES_MERCY
# 38 "data/maps/SS_Tides_Mercy/scripts.pory"
	showobjectat LOCALID_SAILOR, MAP_SS_TIDES_MERCY
# 39 "data/maps/SS_Tides_Mercy/scripts.pory"
	showobjectat LOCALID_EON_DECK, MAP_SS_TIDES_MERCY
# 40 "data/maps/SS_Tides_Mercy/scripts.pory"
	showobjectat LOCALID_RUNNING_CORRIN, MAP_SS_TIDES_MERCY
# 41 "data/maps/SS_Tides_Mercy/scripts.pory"
	playse SE_EXIT
# 42 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitse
# 43 "data/maps/SS_Tides_Mercy/scripts.pory"
	playse SE_M_HAZE
# 44 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitse
# 45 "data/maps/SS_Tides_Mercy/scripts.pory"
	setvar VAR_UNUSED_0x404E, 2
# 46 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox DeckStormCutscene_Text_0
# 47 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_CAPT_MARA, DeckStormCutscene_Movement_0
# 48 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmovement 0
# 49 "data/maps/SS_Tides_Mercy/scripts.pory"
	playse SE_PIN
# 50 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitse
# 51 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_RUNNING_CORRIN, Corin_RunInLate
# 52 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmovement 0
# 53 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_EON_DECK, DeckStormCutscene_Movement_1
# 54 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmovement 0
# 55 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox DeckStormCutscene_Text_1
# 56 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmessage
# 57 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox DeckStormCutscene_Text_2
# 59 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_PLAYER, DeckStormCutscene_Movement_2
# 60 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_CAPT_MARA, DeckStormCutscene_Movement_2
# 61 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_SAILOR, DeckStormCutscene_Movement_2
# 62 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_EON_DECK, DeckStormCutscene_Movement_2
# 63 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_RUNNING_CORRIN, DeckStormCutscene_Movement_2
# 64 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmovement 0
# 65 "data/maps/SS_Tides_Mercy/scripts.pory"
	playse SE_THUNDER2
# 66 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitse
# 67 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox DeckStormCutscene_Text_3
# 69 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmessage
# 70 "data/maps/SS_Tides_Mercy/scripts.pory"
	playse SE_THUNDER
# 71 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitse
# 72 "data/maps/SS_Tides_Mercy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 74 "data/maps/SS_Tides_Mercy/scripts.pory"
	warp MAP_SHOREFALL_STRAND, 10, 20
# 75 "data/maps/SS_Tides_Mercy/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 76 "data/maps/SS_Tides_Mercy/scripts.pory"
	releaseall
	end


StartGameFlags::
# 81 "data/maps/SS_Tides_Mercy/scripts.pory"
	setflag FLAG_BEGINNING_TRAINERS
	end


# 47 "data/maps/SS_Tides_Mercy/scripts.pory"
DeckStormCutscene_Movement_0:
# 47 "data/maps/SS_Tides_Mercy/scripts.pory"
	emote_exclamation_mark
# 47 "data/maps/SS_Tides_Mercy/scripts.pory"
	face_player
	step_end

# 53 "data/maps/SS_Tides_Mercy/scripts.pory"
DeckStormCutscene_Movement_1:
# 53 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_in_place_down
# 53 "data/maps/SS_Tides_Mercy/scripts.pory"
	emote_exclamation_mark
	step_end

# 59 "data/maps/SS_Tides_Mercy/scripts.pory"
DeckStormCutscene_Movement_2:
# 59 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_in_place_fast_right
# 59 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_in_place_fast_left
# 59 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_in_place_fast_right
# 59 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_in_place_down
	step_end

Sailor_DeckTalk_Text_0:
# 11 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "Sailor: Skies looked calm an hour ago.\n"
	.string "Now this air feels wrong. I'll go check\l"
	.string "the barometer soon.$"

Sailor_DeckTalk_Text_1:
# 13 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "Sailor: Keep moving! We've got no time\n"
	.string "to stand around!$"

DeckStormCutscene_Text_0:
# 46 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "CAPTAIN MARA: That storm's building too\n"
	.string "fast! Positions, now!$"

DeckStormCutscene_Text_1:
# 55 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "CORIN: Captain! Wind shear just spiked!\n"
	.string "We're taking water aft!$"

DeckStormCutscene_Text_2:
# 57 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "RANGER EON: That's no normal storm\n"
	.string "pattern… something's forcing it!$"

DeckStormCutscene_Text_3:
# 67 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "CAPTAIN MARA: No debate!\n"
	.string "Abandon ship order! Move!$"
