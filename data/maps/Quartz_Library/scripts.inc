Quartz_Library_MapScripts::
	.byte 0


Quartz_Library_Hive_RunningGuard::
# 6 "data/maps/Quartz_Library/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, Quartz_Library_Hive_RunningGuard_Text_0, Quartz_Library_Hive_RunningGuard_Text_1
# 11 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Hive_RunningGuard_Text_2, MSGBOX_AUTOCLOSE
# 12 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Seer_Fight::
# 16 "data/maps/Quartz_Library/scripts.pory"
	goto_if_unset FLAG_QUARTZITE_HIVE_DEFEATED, Quartz_Seer_Fight_1
	end

Quartz_Seer_Fight_1:
# 17 "data/maps/Quartz_Library/scripts.pory"
	lockall
# 18 "data/maps/Quartz_Library/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 19 "data/maps/Quartz_Library/scripts.pory"
	playse SE_PIN
# 20 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_SEER, Quartz_Seer_Fight_Movement_0
# 21 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 22 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_0
# 25 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_1
# 26 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 27 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_FIRST_GOON, Quartz_Seer_Fight_Movement_1
# 29 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 30 "data/maps/Quartz_Library/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_5, Quartz_Seer_Fight_Text_2
# 31 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_3
# 32 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 33 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_FIRST_GOON, Quartz_Seer_Fight_Movement_2
# 34 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_SEER, Quartz_Seer_Fight_Movement_3
# 35 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 36 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_4
# 39 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 40 "data/maps/Quartz_Library/scripts.pory"
	playse SE_EXIT
# 41 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_SECOND_GOON, Quartz_Seer_Fight_Movement_4
# 43 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 44 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_5
# 45 "data/maps/Quartz_Library/scripts.pory"
	playse SE_EXIT
# 46 "data/maps/Quartz_Library/scripts.pory"
	playbgm MUS_ENCOUNTER_COOL, FALSE
# 47 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_6
# 49 "data/maps/Quartz_Library/scripts.pory"
	addobject LOCALID_CORIN_LIBRARY
# 50 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_LIBRARY, Quartz_Seer_Fight_Movement_5
# 51 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 52 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_7
# 53 "data/maps/Quartz_Library/scripts.pory"
	playse SE_M_ROCK_THROW
# 54 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_ROCK, Quartz_Seer_Fight_Movement_6
# 55 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 56 "data/maps/Quartz_Library/scripts.pory"
	removeobject LOCALID_CORIN_ROCK
# 57 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_LIBRARY, Quartz_Seer_Fight_Movement_7
# 58 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 59 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_8
# 61 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 62 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_SECOND_GOON, Quartz_Seer_Fight_Movement_8
# 63 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 64 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_LIBRARY, Quartz_Seer_Fight_Movement_9
# 65 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_9
# 67 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_LIBRARY, Quartz_Seer_Fight_Movement_10
# 68 "data/maps/Quartz_Library/scripts.pory"
	call QuartzLibrary_PartySelect
	return


QuartzLibrary_PartySelect::
# 75 "data/maps/Quartz_Library/scripts.pory"
	special SavePlayerParty
# 76 "data/maps/Quartz_Library/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/Quartz_Library/scripts.pory"
	special ChooseHalfPartyForBattle
# 78 "data/maps/Quartz_Library/scripts.pory"
	waitstate
# 79 "data/maps/Quartz_Library/scripts.pory"
	goto_if_ne VAR_RESULT, 0, QuartzLibrary_SeerBattle
# 80 "data/maps/Quartz_Library/scripts.pory"
	special LoadPlayerParty
# 81 "data/maps/Quartz_Library/scripts.pory"
	msgbox QuartzLibrary_PartySelect_Text_0
# 82 "data/maps/Quartz_Library/scripts.pory"
	call QuartzLibrary_PartySelect
	return


QuartzLibrary_SeerBattle::
# 86 "data/maps/Quartz_Library/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_14, QuartzLibrary_SeerBattle_Text_0, TRAINER_GRUNT_MAGMA_HIDEOUT_6, QuartzLibrary_SeerBattle_Text_1, PARTNER_CORIN_QUARTZ
# 87 "data/maps/Quartz_Library/scripts.pory"
	switch VAR_RESULT
# 88 "data/maps/Quartz_Library/scripts.pory"
	case B_OUTCOME_WON, QuartzLibrary_SeerBattle_2
# 121 "data/maps/Quartz_Library/scripts.pory"
	case B_OUTCOME_LOST, QuartzLibrary_SeerBattle_3
# 127 "data/maps/Quartz_Library/scripts.pory"
	fadescreen FADE_TO_BLACK
# 128 "data/maps/Quartz_Library/scripts.pory"
	special SetCB2WhiteOut
# 129 "data/maps/Quartz_Library/scripts.pory"
	clearflag FLAG_QUARTZITE_HIVE_DEFEATED
# 130 "data/maps/Quartz_Library/scripts.pory"
	waitstate
	return

QuartzLibrary_SeerBattle_2:
# 89 "data/maps/Quartz_Library/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 90 "data/maps/Quartz_Library/scripts.pory"
	msgbox QuartzLibrary_SeerBattle_Text_2
# 92 "data/maps/Quartz_Library/scripts.pory"
	setflag FLAG_QUARTZITE_HIVE_DEFEATED
# 93 "data/maps/Quartz_Library/scripts.pory"
	clearflag FLAG_HIDE_CONTEST_POKE_BALL
# 94 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_SEER, QuartzLibrary_SeerBattle_Movement_0
# 95 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 96 "data/maps/Quartz_Library/scripts.pory"
	addobject LIBRARY_PINECO
# 97 "data/maps/Quartz_Library/scripts.pory"
	showobjectat LIBRARY_PINECO, MAP_QUARTZ_LIBRARY
# 98 "data/maps/Quartz_Library/scripts.pory"
	applymovement LIBRARY_PINECO, QuartzLibrary_SeerBattle_Movement_1
# 99 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 100 "data/maps/Quartz_Library/scripts.pory"
	playmoncry SPECIES_PINECO, 0
# 101 "data/maps/Quartz_Library/scripts.pory"
	waitse
# 102 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_LIBRARY, QuartzLibrary_SeerBattle_Movement_2
# 103 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 104 "data/maps/Quartz_Library/scripts.pory"
	msgbox QuartzLibrary_SeerBattle_Text_3
# 105 "data/maps/Quartz_Library/scripts.pory"
	playse SE_M_EXPLOSION
# 106 "data/maps/Quartz_Library/scripts.pory"
	fadescreen FADE_TO_BLACK
# 107 "data/maps/Quartz_Library/scripts.pory"
	removeobject LIBRARY_PINECO
# 108 "data/maps/Quartz_Library/scripts.pory"
	waitse
# 109 "data/maps/Quartz_Library/scripts.pory"
	msgbox QuartzLibrary_SeerBattle_Text_4
# 111 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 112 "data/maps/Quartz_Library/scripts.pory"
	playmoncry SPECIES_MORELULL, 0
# 113 "data/maps/Quartz_Library/scripts.pory"
	waitse
# 114 "data/maps/Quartz_Library/scripts.pory"
	msgbox QuartzLibrary_SeerBattle_Text_5
# 115 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 116 "data/maps/Quartz_Library/scripts.pory"
	playmoncry SPECIES_MORELULL, 0
# 117 "data/maps/Quartz_Library/scripts.pory"
	waitse
# 118 "data/maps/Quartz_Library/scripts.pory"
	playse SE_DOOR
# 119 "data/maps/Quartz_Library/scripts.pory"
	warp MAP_QUARTZSITE, 11, 20
# 120 "data/maps/Quartz_Library/scripts.pory"
	waitstate
	return

QuartzLibrary_SeerBattle_3:
# 122 "data/maps/Quartz_Library/scripts.pory"
	fadescreen FADE_TO_BLACK
# 123 "data/maps/Quartz_Library/scripts.pory"
	special SetCB2WhiteOut
# 124 "data/maps/Quartz_Library/scripts.pory"
	clearflag FLAG_QUARTZITE_HIVE_DEFEATED
# 125 "data/maps/Quartz_Library/scripts.pory"
	waitstate
	return


Corin_Quartz_PostBattles::
# 135 "data/maps/Quartz_Library/scripts.pory"
	lock
# 136 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 137 "data/maps/Quartz_Library/scripts.pory"
	goto_if_set FLAG_CRUSTED_QUARRY_DEFEATED, Corin_Quartz_PostBattles_1
# 150 "data/maps/Quartz_Library/scripts.pory"
	msgbox Corin_Quartz_PostBattles_Text_2
# 154 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 155 "data/maps/Quartz_Library/scripts.pory"
	msgbox Corin_Quartz_PostBattles_Text_3
# 157 "data/maps/Quartz_Library/scripts.pory"
	release
	return

Corin_Quartz_PostBattles_1:
# 138 "data/maps/Quartz_Library/scripts.pory"
	msgbox Corin_Quartz_PostBattles_Text_0
# 141 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 142 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_LIBRARY, Quartz_Seer_Fight_Movement_3
# 143 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 144 "data/maps/Quartz_Library/scripts.pory"
	msgbox Corin_Quartz_PostBattles_Text_1
# 146 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 147 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_HealNurse::
# 162 "data/maps/Quartz_Library/scripts.pory"
	lock
# 163 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 164 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_HealNurse_Text_0, MSGBOX_YESNO
# 166 "data/maps/Quartz_Library/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Quartz_Library_HealNurse_1
# 171 "data/maps/Quartz_Library/scripts.pory"
	special HealPlayerParty
# 172 "data/maps/Quartz_Library/scripts.pory"
	playse MUS_HEAL
# 173 "data/maps/Quartz_Library/scripts.pory"
	waitse
# 174 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_HealNurse_Text_2
# 175 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 176 "data/maps/Quartz_Library/scripts.pory"
	release
	return

Quartz_Library_HealNurse_1:
# 167 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_HealNurse_Text_1
# 168 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 169 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_QuarryLoreWoman::
# 181 "data/maps/Quartz_Library/scripts.pory"
	lock
# 182 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 183 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_QuarryLoreWoman_Text_0
# 186 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 187 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_QuarryNerd::
# 191 "data/maps/Quartz_Library/scripts.pory"
	lock
# 192 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 193 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_QuarryNerd_Text_0
# 195 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 196 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_ManicReader::
# 200 "data/maps/Quartz_Library/scripts.pory"
	lock
# 201 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 202 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_ManicReader_Text_0
# 204 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 205 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_Libarian_Nerd::
# 209 "data/maps/Quartz_Library/scripts.pory"
	lock
# 210 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 211 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Libarian_Nerd_Text_0
# 213 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 214 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_PictureBookChild::
# 218 "data/maps/Quartz_Library/scripts.pory"
	lock
# 219 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 220 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_PictureBookChild_Text_0
# 222 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 223 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_InternetFiend::
# 227 "data/maps/Quartz_Library/scripts.pory"
	lock
# 228 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 229 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_InternetFiend_Text_0
# 231 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 232 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_AnythingButRocksWoman::
# 236 "data/maps/Quartz_Library/scripts.pory"
	lock
# 237 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 238 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_AnythingButRocksWoman_Text_0
# 240 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 241 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_Libarian::
# 245 "data/maps/Quartz_Library/scripts.pory"
	lock
# 246 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 247 "data/maps/Quartz_Library/scripts.pory"
	goto_if_set FLAG_CRUSTED_QUARRY_DEFEATED, Quartz_Library_Libarian_2
# 263 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Libarian_Text_3
# 264 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
Quartz_Library_Libarian_1:
# 266 "data/maps/Quartz_Library/scripts.pory"
	release
	return

Quartz_Library_Libarian_2:
# 248 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Libarian_Text_0
# 253 "data/maps/Quartz_Library/scripts.pory"
	goto_if_unset FLAG_LIBRARY_EEVEE_GIVEN, Quartz_Library_Libarian_6
Quartz_Library_Libarian_5:
# 260 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
	goto Quartz_Library_Libarian_1

Quartz_Library_Libarian_6:
# 254 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Libarian_Text_1
# 256 "data/maps/Quartz_Library/scripts.pory"
	givemon SPECIES_EEVEE, 20
# 257 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Libarian_Text_2
# 258 "data/maps/Quartz_Library/scripts.pory"
	setflag FLAG_LIBRARY_EEVEE_GIVEN
	goto Quartz_Library_Libarian_5


# 20 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_0:
# 20 "data/maps/Quartz_Library/scripts.pory"
	emote_exclamation_mark
# 20 "data/maps/Quartz_Library/scripts.pory"
	walk_slow_down
# 20 "data/maps/Quartz_Library/scripts.pory"
	walk_slow_down
# 20 "data/maps/Quartz_Library/scripts.pory"
	walk_in_place_down
	step_end

# 27 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_1:
# 27 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 27 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 27 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 27 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 28 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_left
# 28 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 28 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 28 "data/maps/Quartz_Library/scripts.pory"
	face_right
# 28 "data/maps/Quartz_Library/scripts.pory"
	emote_exclamation_mark
	step_end

# 33 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_2:
# 33 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_left
# 33 "data/maps/Quartz_Library/scripts.pory"
	face_right
	step_end

# 34 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_3:
# 34 "data/maps/Quartz_Library/scripts.pory"
	emote_question_mark
	step_end

# 41 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_4:
# 41 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 41 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 41 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 41 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_left
# 41 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 42 "data/maps/Quartz_Library/scripts.pory"
	walk_down
# 42 "data/maps/Quartz_Library/scripts.pory"
	walk_down
# 42 "data/maps/Quartz_Library/scripts.pory"
	face_right
# 42 "data/maps/Quartz_Library/scripts.pory"
	jump_in_place_right
	step_end

# 50 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_5:
# 50 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_up
# 50 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_up
# 50 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_up
# 50 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_up
	step_end

# 54 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_6:
# 54 "data/maps/Quartz_Library/scripts.pory"
	rock_smash_break
	step_end

# 57 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_7:
# 57 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_up
	step_end

# 62 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_8:
# 62 "data/maps/Quartz_Library/scripts.pory"
	face_down
	step_end

# 64 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_9:
# 64 "data/maps/Quartz_Library/scripts.pory"
	face_right
# 64 "data/maps/Quartz_Library/scripts.pory"
	walk_in_place_right
	step_end

# 67 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_10:
# 67 "data/maps/Quartz_Library/scripts.pory"
	face_up
# 67 "data/maps/Quartz_Library/scripts.pory"
	jump_in_place_up
	step_end

# 94 "data/maps/Quartz_Library/scripts.pory"
QuartzLibrary_SeerBattle_Movement_0:
# 94 "data/maps/Quartz_Library/scripts.pory"
	walk_up
# 94 "data/maps/Quartz_Library/scripts.pory"
	face_down
# 94 "data/maps/Quartz_Library/scripts.pory"
	walk_in_place_fast_down
	step_end

# 98 "data/maps/Quartz_Library/scripts.pory"
QuartzLibrary_SeerBattle_Movement_1:
# 98 "data/maps/Quartz_Library/scripts.pory"
	jump_in_place_down
# 98 "data/maps/Quartz_Library/scripts.pory"
	jump_in_place_down
	step_end

# 102 "data/maps/Quartz_Library/scripts.pory"
QuartzLibrary_SeerBattle_Movement_2:
# 102 "data/maps/Quartz_Library/scripts.pory"
	emote_exclamation_mark
	step_end

Quartz_Library_Hive_RunningGuard_Text_0:
# 7 "data/maps/Quartz_Library/scripts.pory"
	.string "Hive Drone: You can't be here, Ranger!\n"
	.string "The Seer will hear about this!$"

Quartz_Library_Hive_RunningGuard_Text_1:
# 9 "data/maps/Quartz_Library/scripts.pory"
	.string "Hive Drone: Ugh… You got lucky this\n"
	.string "time, Ranger.$"

Quartz_Library_Hive_RunningGuard_Text_2:
# 11 "data/maps/Quartz_Library/scripts.pory"
	.string "Hive Drone: The Seer won't be pleased…$"

Quartz_Seer_Fight_Text_0:
# 22 "data/maps/Quartz_Library/scripts.pory"
	.string "Seer: So… a new Ranger finally arrives.\p"
	.string "How unfortunate for you. My Drones\n"
	.string "have already reported your… diminished\l"
	.string "forces.\p"
	.string "You stand alone against the swarm.\n"
	.string "Guard, eliminate the intruder.$"

Quartz_Seer_Fight_Text_1:
# 25 "data/maps/Quartz_Library/scripts.pory"
	.string "Drone: Buzz buzz!$"

Quartz_Seer_Fight_Text_2:
# 30 "data/maps/Quartz_Library/scripts.pory"
	.string "Drone: For the Seer!$"

Quartz_Seer_Fight_Text_3:
# 31 "data/maps/Quartz_Library/scripts.pory"
	.string "Drone: Ugh… How could I lose in front of\n"
	.string "the Seer…$"

Quartz_Seer_Fight_Text_4:
# 36 "data/maps/Quartz_Library/scripts.pory"
	.string "Seer: Pathetic.\p"
	.string "Next guard, NOW.\p"
	.string "It is fruitless. The swarm is endless,\n"
	.string "Ranger. You will fall.$"

Quartz_Seer_Fight_Text_5:
# 44 "data/maps/Quartz_Library/scripts.pory"
	.string "Drone: We are endless, we are the swarm!$"

Quartz_Seer_Fight_Text_6:
# 47 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Hold it right there, Seer!\p"
	.string "You're not the only ones with allies!$"

Quartz_Seer_Fight_Text_7:
# 52 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: {PLAYER}, let me show you what\n"
	.string "I can do, Rock Smash!$"

Quartz_Seer_Fight_Text_8:
# 59 "data/maps/Quartz_Library/scripts.pory"
	.string "Seer: Another pest.\p"
	.string "Drone, assist pattern sigma, we'll crush\n"
	.string "them together.$"

Quartz_Seer_Fight_Text_9:
# 65 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Let's do this, {PLAYER}!\p"
	.string "I'll start with Growlithe!$"

QuartzLibrary_PartySelect_Text_0:
# 81 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: We can do this! Ready your\n"
	.string "POKéMON!$"

QuartzLibrary_SeerBattle_Text_0:
# 86 "data/maps/Quartz_Library/scripts.pory"
	.string "Seer: Impossible!$"

QuartzLibrary_SeerBattle_Text_1:
# 86 "data/maps/Quartz_Library/scripts.pory"
	.string "Drone: Where am I?!$"

QuartzLibrary_SeerBattle_Text_2:
# 90 "data/maps/Quartz_Library/scripts.pory"
	.string "Seer: How could I lose to a Ranger…\p"
	.string "All Drones, retreat! We got the books,\n"
	.string "fall back to the quarry!$"

QuartzLibrary_SeerBattle_Text_3:
# 104 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Watch out, {PLAYER}! That\n"
	.string "looks explosive!$"

QuartzLibrary_SeerBattle_Text_4:
# 109 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Phew… That was close!\n"
	.string "Gosh, it's dark. One moment and I'll have\l"
	.string "Morelull light the room up.$"

QuartzLibrary_SeerBattle_Text_5:
# 114 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Get us out of here, Morelull!$"

Corin_Quartz_PostBattles_Text_0:
# 138 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: With the Seer defeated, Team\n"
	.string "Hive's hold on Quartzite City is finally\l"
	.string "broken!\n"
	.string "Thanks for your help back there,\l"
	.string "{PLAYER}.\p"
	.string "Now you can return to Hazolt HQ,\n"
	.string "Captain Mara will want to hear about\l"
	.string "this!$"

Corin_Quartz_PostBattles_Text_1:
# 144 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: You're saying the Seer mentioned\n"
	.string "something about books sent to\l"
	.string "Shudderwood Mansion?\p"
	.string "That sounds important. We should\n"
	.string "investigate that next time we have a\l"
	.string "chance.$"

Corin_Quartz_PostBattles_Text_2:
# 150 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Whew… That was intense!\n"
	.string "Thanks for having my back back there,\l"
	.string "{PLAYER}.\p"
	.string "Those Hive Drones were tougher than I\n"
	.string "expected, but we showed them!\p"
	.string "I think we can take on anything now,\n"
	.string "together as a team!$"

Corin_Quartz_PostBattles_Text_3:
# 155 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: I'll report back to Hazolt HQ.\p"
	.string "I bet Mara will want to hear about this!$"

Quartz_Library_HealNurse_Text_0:
# 164 "data/maps/Quartz_Library/scripts.pory"
	.string "Please rest here if your POKéMON need\n"
	.string "healing.\p"
	.string "Would you like me to heal your POKéMON?$"

Quartz_Library_HealNurse_Text_1:
# 167 "data/maps/Quartz_Library/scripts.pory"
	.string "Alright, let me know if you need\n"
	.string "anything.$"

Quartz_Library_HealNurse_Text_2:
# 174 "data/maps/Quartz_Library/scripts.pory"
	.string "Your POKéMON have been healed.$"

Quartz_Library_QuarryLoreWoman_Text_0:
# 183 "data/maps/Quartz_Library/scripts.pory"
	.string "The Quartz Quarry used to be the pride\n"
	.string "of Quartzite Village.\p"
	.string "But since Team Hive took over, it was\n"
	.string "flooded.\p"
	.string "Now I hear the Rangers are trying to\n"
	.string "clear it out again.$"

Quartz_Library_QuarryNerd_Text_0:
# 193 "data/maps/Quartz_Library/scripts.pory"
	.string "Did you know that Quartz is made up of\n"
	.string "silicon and oxygen atoms?\p"
	.string "It's one of the most hard minerals on\n"
	.string "Earth!$"

Quartz_Library_ManicReader_Text_0:
# 202 "data/maps/Quartz_Library/scripts.pory"
	.string "I just love reading about the different\n"
	.string "types of minerals found in Quartzite\l"
	.string "City!\p"
	.string "Did you know that Amethyst is a type of\n"
	.string "Quartz?$"

Quartz_Library_Libarian_Nerd_Text_0:
# 211 "data/maps/Quartz_Library/scripts.pory"
	.string "Welcome to the Quartzite Library!\p"
	.string "Feel free to browse our collection of\n"
	.string "books on geology and mineralogy.$"

Quartz_Library_PictureBookChild_Text_0:
# 220 "data/maps/Quartz_Library/scripts.pory"
	.string "Look at this picture book about\n"
	.string "different types of rocks!\p"
	.string "I want to be a geologist when I grow up!$"

Quartz_Library_InternetFiend_Text_0:
# 229 "data/maps/Quartz_Library/scripts.pory"
	.string "I love reading about rare minerals\n"
	.string "online!\p"
	.string "Did you know that Tanzanite is only\n"
	.string "found in one place on Earth?$"

Quartz_Library_AnythingButRocksWoman_Text_0:
# 238 "data/maps/Quartz_Library/scripts.pory"
	.string "Ugh, I can't stand rocks and minerals!\p"
	.string "I'd much rather read about fashion and\n"
	.string "cooking!$"

Quartz_Library_Libarian_Text_0:
# 248 "data/maps/Quartz_Library/scripts.pory"
	.string "Librarian: Hello there, Ranger\n"
	.string "{PLAYER}!\n"
	.string "Thank you and Corin for clearing out\l"
	.string "those Hive Drones from the library!\p"
	.string "You say something about the Seer\n"
	.string "mentioning books sent to Shudderwood\l"
	.string "Mansion?\p"
	.string "Yes, they took our rare books on\n"
	.string "crystal formations found on Corymbra\l"
	.string "Island.\p"
	.string "We'd be grateful if you could retrieve\n"
	.string "them for us!$"

Quartz_Library_Libarian_Text_1:
# 254 "data/maps/Quartz_Library/scripts.pory"
	.string "Librarian: As a token of our gratitude,\n"
	.string "please accept this Eevee.\p"
	.string "It's been trained to read.$"

Quartz_Library_Libarian_Text_2:
# 257 "data/maps/Quartz_Library/scripts.pory"
	.string "{PLAYER} received an Eevee!$"

Quartz_Library_Libarian_Text_3:
# 263 "data/maps/Quartz_Library/scripts.pory"
	.string "Librarian: Feel free to take a look at\n"
	.string "our collection of books on geology and\l"
	.string "mineralogy.$"
