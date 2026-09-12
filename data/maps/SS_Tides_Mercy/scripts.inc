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
# 16 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox Sailor_DeckTalk_Text_1
Sailor_DeckTalk_1:
# 20 "data/maps/SS_Tides_Mercy/scripts.pory"
	release
	end

Sailor_DeckTalk_2:
# 11 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox Sailor_DeckTalk_Text_0
	goto Sailor_DeckTalk_1


# 24 "data/maps/SS_Tides_Mercy/scripts.pory"
Corin_RunInLate:
# 25 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_faster_up
# 26 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_faster_up
# 27 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_faster_up
# 28 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_faster_up
# 29 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_faster_up
# 30 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_fast_up
# 31 "data/maps/SS_Tides_Mercy/scripts.pory"
	face_right
	step_end

DeckStormCutscene::
# 35 "data/maps/SS_Tides_Mercy/scripts.pory"
	lockall
# 36 "data/maps/SS_Tides_Mercy/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 37 "data/maps/SS_Tides_Mercy/scripts.pory"
	doweather
# 38 "data/maps/SS_Tides_Mercy/scripts.pory"
	addobject LOCALID_CAPT_MARA
# 39 "data/maps/SS_Tides_Mercy/scripts.pory"
	addobject LOCALID_SAILOR
# 40 "data/maps/SS_Tides_Mercy/scripts.pory"
	addobject LOCALID_EON_DECK
# 41 "data/maps/SS_Tides_Mercy/scripts.pory"
	addobject LOCALID_RUNNING_CORRIN
# 42 "data/maps/SS_Tides_Mercy/scripts.pory"
	showobjectat LOCALID_CAPT_MARA, MAP_SS_TIDES_MERCY
# 43 "data/maps/SS_Tides_Mercy/scripts.pory"
	showobjectat LOCALID_SAILOR, MAP_SS_TIDES_MERCY
# 44 "data/maps/SS_Tides_Mercy/scripts.pory"
	showobjectat LOCALID_EON_DECK, MAP_SS_TIDES_MERCY
# 45 "data/maps/SS_Tides_Mercy/scripts.pory"
	showobjectat LOCALID_RUNNING_CORRIN, MAP_SS_TIDES_MERCY
# 46 "data/maps/SS_Tides_Mercy/scripts.pory"
	playse SE_EXIT
# 47 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitse
# 48 "data/maps/SS_Tides_Mercy/scripts.pory"
	playse SE_M_HAZE
# 49 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitse
# 50 "data/maps/SS_Tides_Mercy/scripts.pory"
	setvar VAR_UNUSED_0x404E, 2
# 51 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox DeckStormCutscene_Text_0
# 54 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_CAPT_MARA, DeckStormCutscene_Movement_0
# 55 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmovement 0
# 56 "data/maps/SS_Tides_Mercy/scripts.pory"
	playse SE_PIN
# 57 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitse
# 58 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_RUNNING_CORRIN, Corin_RunInLate
# 59 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmovement 0
# 60 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_EON_DECK, DeckStormCutscene_Movement_1
# 61 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmovement 0
# 62 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox DeckStormCutscene_Text_1
# 65 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmessage
# 66 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox DeckStormCutscene_Text_2
# 70 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_PLAYER, DeckStormCutscene_Movement_2
# 71 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_CAPT_MARA, DeckStormCutscene_Movement_2
# 72 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_SAILOR, DeckStormCutscene_Movement_2
# 73 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_EON_DECK, DeckStormCutscene_Movement_2
# 74 "data/maps/SS_Tides_Mercy/scripts.pory"
	applymovement LOCALID_RUNNING_CORRIN, DeckStormCutscene_Movement_2
# 75 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmovement 0
# 76 "data/maps/SS_Tides_Mercy/scripts.pory"
	playse SE_THUNDER2
# 77 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitse
# 78 "data/maps/SS_Tides_Mercy/scripts.pory"
	msgbox DeckStormCutscene_Text_3
# 80 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitmessage
# 81 "data/maps/SS_Tides_Mercy/scripts.pory"
	playse SE_THUNDER
# 82 "data/maps/SS_Tides_Mercy/scripts.pory"
	waitse
# 83 "data/maps/SS_Tides_Mercy/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/SS_Tides_Mercy/scripts.pory"
	warp MAP_SHOREFALL_STRAND, 10, 20
# 86 "data/maps/SS_Tides_Mercy/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/SS_Tides_Mercy/scripts.pory"
	releaseall
	end


StartGameFlags::
# 92 "data/maps/SS_Tides_Mercy/scripts.pory"
	setflag FLAG_BEGINNING_TRAINERS
	end


# 54 "data/maps/SS_Tides_Mercy/scripts.pory"
DeckStormCutscene_Movement_0:
# 54 "data/maps/SS_Tides_Mercy/scripts.pory"
	emote_exclamation_mark
# 54 "data/maps/SS_Tides_Mercy/scripts.pory"
	face_player
	step_end

# 60 "data/maps/SS_Tides_Mercy/scripts.pory"
DeckStormCutscene_Movement_1:
# 60 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_in_place_down
# 60 "data/maps/SS_Tides_Mercy/scripts.pory"
	emote_exclamation_mark
	step_end

# 70 "data/maps/SS_Tides_Mercy/scripts.pory"
DeckStormCutscene_Movement_2:
# 70 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_in_place_fast_right
# 70 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_in_place_fast_left
# 70 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_in_place_fast_right
# 70 "data/maps/SS_Tides_Mercy/scripts.pory"
	walk_in_place_down
	step_end

Sailor_DeckTalk_Text_0:
# 11 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "Sailor: Skies looked calm\n"
	.string "an hour ago. Now this air\n"
	.string "feels wrong. I'll go\n"
	.string "check the barometer soon.$"

Sailor_DeckTalk_Text_1:
# 16 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "Sailor: Keep moving!\n"
	.string "We've got no time to stand\n"
	.string "around!$"

DeckStormCutscene_Text_0:
# 51 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "CAPTAIN MARA: That storm's\n"
	.string "building too fast!\n"
	.string "Positions, now!$"

DeckStormCutscene_Text_1:
# 62 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "CORIN: Captain! Wind shear\n"
	.string "just spiked! We're taking\n"
	.string "water aft!$"

DeckStormCutscene_Text_2:
# 66 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "RANGER EON: That's no\n"
	.string "normal storm pattern…\n"
	.string "something's forcing it!$"

DeckStormCutscene_Text_3:
# 78 "data/maps/SS_Tides_Mercy/scripts.pory"
	.string "CAPTAIN MARA: No debate!\n"
	.string "Abandon ship order! Move!$"
