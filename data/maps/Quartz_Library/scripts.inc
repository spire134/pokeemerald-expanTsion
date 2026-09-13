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
	playse SE_PIN
# 19 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_SEER, Quartz_Seer_Fight_Movement_0
# 20 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 21 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_0
# 24 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 25 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_FIRST_GOON, Quartz_Seer_Fight_Movement_1
# 27 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 28 "data/maps/Quartz_Library/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_5, Quartz_Seer_Fight_Text_1
# 29 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_2
# 30 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 31 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_FIRST_GOON, Quartz_Seer_Fight_Movement_2
# 32 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_SEER, Quartz_Seer_Fight_Movement_3
# 33 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 34 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_3
# 37 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 38 "data/maps/Quartz_Library/scripts.pory"
	playse SE_EXIT
# 39 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_SECOND_GOON, Quartz_Seer_Fight_Movement_1
# 41 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 42 "data/maps/Quartz_Library/scripts.pory"
	playse SE_EXIT
# 43 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_4
# 45 "data/maps/Quartz_Library/scripts.pory"
	addobject LOCALID_CORIN_LIBRARY
# 46 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_LIBRARY, Quartz_Seer_Fight_Movement_4
# 47 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 48 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_5
# 49 "data/maps/Quartz_Library/scripts.pory"
	playse SE_M_ROCK_THROW
# 50 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_ROCK, Quartz_Seer_Fight_Movement_5
# 51 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 52 "data/maps/Quartz_Library/scripts.pory"
	removeobject LOCALID_CORIN_ROCK
# 53 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_LIBRARY, Quartz_Seer_Fight_Movement_6
# 54 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 55 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_6
# 57 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 58 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_SECOND_GOON, Quartz_Seer_Fight_Movement_7
# 59 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 60 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Seer_Fight_Text_7
# 62 "data/maps/Quartz_Library/scripts.pory"
	call QuartzLibrary_PartySelect
	return


QuartzLibrary_PartySelect::
# 69 "data/maps/Quartz_Library/scripts.pory"
	special SavePlayerParty
# 70 "data/maps/Quartz_Library/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/Quartz_Library/scripts.pory"
	special ChooseHalfPartyForBattle
# 72 "data/maps/Quartz_Library/scripts.pory"
	waitstate
# 73 "data/maps/Quartz_Library/scripts.pory"
	goto_if_ne VAR_RESULT, 0, QuartzLibrary_SeerBattle
# 74 "data/maps/Quartz_Library/scripts.pory"
	special LoadPlayerParty
# 75 "data/maps/Quartz_Library/scripts.pory"
	msgbox QuartzLibrary_PartySelect_Text_0
# 76 "data/maps/Quartz_Library/scripts.pory"
	call QuartzLibrary_PartySelect
	return


QuartzLibrary_SeerBattle::
# 80 "data/maps/Quartz_Library/scripts.pory"
	multi_2_vs_2 TRAINER_GRUNT_MAGMA_HIDEOUT_14, QuartzLibrary_SeerBattle_Text_0, TRAINER_GRUNT_MAGMA_HIDEOUT_6, QuartzLibrary_SeerBattle_Text_1, PARTNER_CORIN_QUARTZ
# 81 "data/maps/Quartz_Library/scripts.pory"
	msgbox QuartzLibrary_SeerBattle_Text_2
# 83 "data/maps/Quartz_Library/scripts.pory"
	setflag FLAG_QUARTZITE_HIVE_DEFEATED
# 84 "data/maps/Quartz_Library/scripts.pory"
	clearflag FLAG_HIDE_CONTEST_POKE_BALL
# 85 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_SEER, QuartzLibrary_SeerBattle_Movement_0
# 86 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 87 "data/maps/Quartz_Library/scripts.pory"
	msgbox QuartzLibrary_SeerBattle_Text_3
# 88 "data/maps/Quartz_Library/scripts.pory"
	playse SE_M_EXPLOSION
# 89 "data/maps/Quartz_Library/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/Quartz_Library/scripts.pory"
	waitse
# 91 "data/maps/Quartz_Library/scripts.pory"
	msgbox QuartzLibrary_SeerBattle_Text_4
# 93 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 94 "data/maps/Quartz_Library/scripts.pory"
	playmoncry SPECIES_MORELULL, 0
# 95 "data/maps/Quartz_Library/scripts.pory"
	waitse
# 96 "data/maps/Quartz_Library/scripts.pory"
	msgbox QuartzLibrary_SeerBattle_Text_5
# 97 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 98 "data/maps/Quartz_Library/scripts.pory"
	warp MAP_QUARTZSITE, 11, 20
# 99 "data/maps/Quartz_Library/scripts.pory"
	waitstate
	return


Corin_Quartz_PostBattles::
# 103 "data/maps/Quartz_Library/scripts.pory"
	lock
# 104 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 105 "data/maps/Quartz_Library/scripts.pory"
	goto_if_set FLAG_CRUSTED_QUARRY_DEFEATED, Corin_Quartz_PostBattles_1
# 118 "data/maps/Quartz_Library/scripts.pory"
	msgbox Corin_Quartz_PostBattles_Text_2
# 122 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 123 "data/maps/Quartz_Library/scripts.pory"
	msgbox Corin_Quartz_PostBattles_Text_3
# 125 "data/maps/Quartz_Library/scripts.pory"
	release
	return

Corin_Quartz_PostBattles_1:
# 106 "data/maps/Quartz_Library/scripts.pory"
	msgbox Corin_Quartz_PostBattles_Text_0
# 109 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 110 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_CORIN_LIBRARY, Quartz_Seer_Fight_Movement_3
# 111 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 112 "data/maps/Quartz_Library/scripts.pory"
	msgbox Corin_Quartz_PostBattles_Text_1
# 114 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 115 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_HealNurse::
# 130 "data/maps/Quartz_Library/scripts.pory"
	lock
# 131 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 132 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_HealNurse_Text_0, MSGBOX_YESNO
# 134 "data/maps/Quartz_Library/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Quartz_Library_HealNurse_1
# 139 "data/maps/Quartz_Library/scripts.pory"
	special HealPlayerParty
# 140 "data/maps/Quartz_Library/scripts.pory"
	playse MUS_HEAL
# 141 "data/maps/Quartz_Library/scripts.pory"
	waitse
# 142 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_HealNurse_Text_2
# 143 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 144 "data/maps/Quartz_Library/scripts.pory"
	release
	return

Quartz_Library_HealNurse_1:
# 135 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_HealNurse_Text_1
# 136 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 137 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_QuarryLoreWoman::
# 149 "data/maps/Quartz_Library/scripts.pory"
	lock
# 150 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 151 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_QuarryLoreWoman_Text_0
# 154 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 155 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_QuarryNerd::
# 159 "data/maps/Quartz_Library/scripts.pory"
	lock
# 160 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 161 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_QuarryNerd_Text_0
# 163 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 164 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_ManicReader::
# 168 "data/maps/Quartz_Library/scripts.pory"
	lock
# 169 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 170 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_ManicReader_Text_0
# 172 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 173 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_Libarian_Nerd::
# 177 "data/maps/Quartz_Library/scripts.pory"
	lock
# 178 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 179 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Libarian_Nerd_Text_0
# 181 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 182 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_PictureBookChild::
# 186 "data/maps/Quartz_Library/scripts.pory"
	lock
# 187 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 188 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_PictureBookChild_Text_0
# 190 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 191 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_InternetFiend::
# 195 "data/maps/Quartz_Library/scripts.pory"
	lock
# 196 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 197 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_InternetFiend_Text_0
# 199 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 200 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_AnythingButRocksWoman::
# 204 "data/maps/Quartz_Library/scripts.pory"
	lock
# 205 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 206 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_AnythingButRocksWoman_Text_0
# 208 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 209 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_Libarian::
# 213 "data/maps/Quartz_Library/scripts.pory"
	lock
# 214 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 215 "data/maps/Quartz_Library/scripts.pory"
	goto_if_set FLAG_CRUSTED_QUARRY_DEFEATED, Quartz_Library_Libarian_2
# 231 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Libarian_Text_3
# 232 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
Quartz_Library_Libarian_1:
# 234 "data/maps/Quartz_Library/scripts.pory"
	release
	return

Quartz_Library_Libarian_2:
# 216 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Libarian_Text_0
# 221 "data/maps/Quartz_Library/scripts.pory"
	goto_if_unset FLAG_LIBRARY_EEVEE_GIVEN, Quartz_Library_Libarian_6
Quartz_Library_Libarian_5:
# 228 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
	goto Quartz_Library_Libarian_1

Quartz_Library_Libarian_6:
# 222 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Libarian_Text_1
# 224 "data/maps/Quartz_Library/scripts.pory"
	givemon SPECIES_EEVEE, 20
# 225 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_Libarian_Text_2
# 226 "data/maps/Quartz_Library/scripts.pory"
	setflag FLAG_LIBRARY_EEVEE_GIVEN
	goto Quartz_Library_Libarian_5


Quartz_BackofLine::
# 238 "data/maps/Quartz_Library/scripts.pory"
	lock
# 239 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 240 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_BackofLine_Text_0
# 241 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 242 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_BackofLine_Text_1, MSGBOX_YESNO
# 243 "data/maps/Quartz_Library/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Quartz_BackofLine_1
# 247 "data/maps/Quartz_Library/scripts.pory"
	goto Quartz_WaitInLine
	return

Quartz_BackofLine_1:
# 244 "data/maps/Quartz_Library/scripts.pory"
	release
	end


Quartz_Library_MiddleOfLine::
# 252 "data/maps/Quartz_Library/scripts.pory"
	lock
# 253 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 254 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_MiddleOfLine_Text_0
# 255 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 256 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_Library_FrontOfLine::
# 260 "data/maps/Quartz_Library/scripts.pory"
	lock
# 261 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
# 262 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_Library_FrontOfLine_Text_0
# 263 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 264 "data/maps/Quartz_Library/scripts.pory"
	release
	return


Quartz_WaitInLine::
# 268 "data/maps/Quartz_Library/scripts.pory"
	lockall
# 269 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_BACKMEDIUM, Quartz_WaitInLine_Movement_0
# 270 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_WaitInLine_Text_0
# 271 "data/maps/Quartz_Library/scripts.pory"
	delay 600
# 272 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_BACKMEDIUM, Quartz_WaitInLine_Movement_0
# 273 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_WaitInLine_Text_1, MSGBOX_YESNO
# 274 "data/maps/Quartz_Library/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_WaitInLine_1
# 304 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_WaitInLine_Text_6
# 305 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_BACKMEDIUM, Quartz_WaitInLine_Movement_0
# 306 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 307 "data/maps/Quartz_Library/scripts.pory"
	releaseall
	end

Quartz_WaitInLine_1:
# 275 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_WaitInLine_Text_2
# 276 "data/maps/Quartz_Library/scripts.pory"
	delay 600
# 277 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_MIDDLE_MOM, Quartz_WaitInLine_Movement_0
# 278 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_WaitInLine_Text_1, MSGBOX_YESNO
# 279 "data/maps/Quartz_Library/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Quartz_WaitInLine_4
# 297 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_WaitInLine_Text_6
# 298 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_BACKMEDIUM, Quartz_WaitInLine_Movement_0
# 299 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 300 "data/maps/Quartz_Library/scripts.pory"
	releaseall
	end

Quartz_WaitInLine_4:
# 280 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_WaitInLine_Text_2
# 281 "data/maps/Quartz_Library/scripts.pory"
	delay 600
# 282 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_FRONT_FATMAN, Quartz_WaitInLine_Movement_0
# 283 "data/maps/Quartz_Library/scripts.pory"
	delay 10
# 284 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_BACKMEDIUM, Quartz_WaitInLine_Movement_1
# 285 "data/maps/Quartz_Library/scripts.pory"
	waitmovement 0
# 286 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_WaitInLine_Text_3
# 288 "data/maps/Quartz_Library/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
# 289 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_WaitInLine_Text_4
# 290 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 291 "data/maps/Quartz_Library/scripts.pory"
	msgbox Quartz_WaitInLine_Text_5
# 292 "data/maps/Quartz_Library/scripts.pory"
	waitmessage
# 293 "data/maps/Quartz_Library/scripts.pory"
	applymovement LOCALID_QUARTZ_BACKMEDIUM, Quartz_WaitInLine_Movement_0
# 294 "data/maps/Quartz_Library/scripts.pory"
	releaseall
	end


# 19 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_0:
# 19 "data/maps/Quartz_Library/scripts.pory"
	emote_exclamation_mark
# 19 "data/maps/Quartz_Library/scripts.pory"
	walk_slow_down
# 19 "data/maps/Quartz_Library/scripts.pory"
	walk_slow_down
# 19 "data/maps/Quartz_Library/scripts.pory"
	walk_slow_down
	step_end

# 25 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_1:
# 25 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 25 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 25 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 25 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 26 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_left
# 26 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 26 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_down
# 26 "data/maps/Quartz_Library/scripts.pory"
	face_right
# 26 "data/maps/Quartz_Library/scripts.pory"
	emote_exclamation_mark
	step_end

# 31 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_2:
# 31 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_left
# 31 "data/maps/Quartz_Library/scripts.pory"
	face_right
	step_end

# 32 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_3:
# 32 "data/maps/Quartz_Library/scripts.pory"
	emote_question_mark
	step_end

# 46 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_4:
# 46 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_up
# 46 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_up
# 46 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_up
# 46 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_up
	step_end

# 50 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_5:
# 50 "data/maps/Quartz_Library/scripts.pory"
	rock_smash_break
	step_end

# 53 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_6:
# 53 "data/maps/Quartz_Library/scripts.pory"
	walk_fast_up
	step_end

# 58 "data/maps/Quartz_Library/scripts.pory"
Quartz_Seer_Fight_Movement_7:
# 58 "data/maps/Quartz_Library/scripts.pory"
	face_down
	step_end

# 85 "data/maps/Quartz_Library/scripts.pory"
QuartzLibrary_SeerBattle_Movement_0:
# 85 "data/maps/Quartz_Library/scripts.pory"
	walk_in_place_fast_down
	step_end

# 269 "data/maps/Quartz_Library/scripts.pory"
Quartz_WaitInLine_Movement_0:
# 269 "data/maps/Quartz_Library/scripts.pory"
	walk_in_place_fast_up
	step_end

# 284 "data/maps/Quartz_Library/scripts.pory"
Quartz_WaitInLine_Movement_1:
# 284 "data/maps/Quartz_Library/scripts.pory"
	faceplayer
	step_end

Quartz_Library_Hive_RunningGuard_Text_0:
# 7 "data/maps/Quartz_Library/scripts.pory"
	.string "Hive Drone: You can't be here, Ranger!\n"
	.string "The Seer will hear about this!$"

Quartz_Library_Hive_RunningGuard_Text_1:
# 9 "data/maps/Quartz_Library/scripts.pory"
	.string "Hive Drone: Ugh... You got lucky this\n"
	.string "time, Ranger.$"

Quartz_Library_Hive_RunningGuard_Text_2:
# 11 "data/maps/Quartz_Library/scripts.pory"
	.string "Hive Drone: The Seer won't be pleased...$"

Quartz_Seer_Fight_Text_0:
# 21 "data/maps/Quartz_Library/scripts.pory"
	.string "Seer: So… a new Ranger finally arrives.\p"
	.string "How unfortunate for you. My Drones\n"
	.string "have already reported your… diminished\l"
	.string "forces.\p"
	.string "You stand alone against the swarm.\n"
	.string "Guard, eliminate the intruder.$"

Quartz_Seer_Fight_Text_1:
# 28 "data/maps/Quartz_Library/scripts.pory"
	.string "Drone: For the Seer!$"

Quartz_Seer_Fight_Text_2:
# 29 "data/maps/Quartz_Library/scripts.pory"
	.string "Drone: Ugh… How could I lose in front of\n"
	.string "the Seer…$"

Quartz_Seer_Fight_Text_3:
# 34 "data/maps/Quartz_Library/scripts.pory"
	.string "Seer: Pathetic.\p"
	.string "Next guard, NOW.\p"
	.string "It is fruitless. The swarm is endless,\n"
	.string "Ranger. You will fall.$"

Quartz_Seer_Fight_Text_4:
# 43 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Hold it right there, Seer!\p"
	.string "You're not the only ones with allies!$"

Quartz_Seer_Fight_Text_5:
# 48 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: {PLAYER}, let me show you what\n"
	.string "I can do, Rock Smash!$"

Quartz_Seer_Fight_Text_6:
# 55 "data/maps/Quartz_Library/scripts.pory"
	.string "Seer: Another pest.\p"
	.string "Drone, assist pattern sigma, we'll crush\n"
	.string "them together.$"

Quartz_Seer_Fight_Text_7:
# 60 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Let's do this, {PLAYER}!\p"
	.string "I'll start with Growlithe!$"

QuartzLibrary_PartySelect_Text_0:
# 75 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: We can do this! Ready your\n"
	.string "POKéMON!$"

QuartzLibrary_SeerBattle_Text_0:
# 80 "data/maps/Quartz_Library/scripts.pory"
	.string "Seer: Impossible!$"

QuartzLibrary_SeerBattle_Text_1:
# 80 "data/maps/Quartz_Library/scripts.pory"
	.string "Drone: Where am I?!$"

QuartzLibrary_SeerBattle_Text_2:
# 81 "data/maps/Quartz_Library/scripts.pory"
	.string "Seer: How could I lose to a Ranger…\p"
	.string "All Drones, retreat! We got the books,\n"
	.string "fall back to the quarry!$"

QuartzLibrary_SeerBattle_Text_3:
# 87 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Watch out, {PLAYER}! That\n"
	.string "looks explosive!$"

QuartzLibrary_SeerBattle_Text_4:
# 91 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Phew… That was close!\n"
	.string "Gosh, it's dark. One moment and I'll have\l"
	.string "Morelull light the room up.$"

QuartzLibrary_SeerBattle_Text_5:
# 96 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Get us out of here, Morelull!$"

Corin_Quartz_PostBattles_Text_0:
# 106 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: With the Seer defeated, Team\n"
	.string "Hive's hold on Quartzite City is finally\l"
	.string "broken!\n"
	.string "Thanks for your help back there,\l"
	.string "{PLAYER}.\p"
	.string "Now you can return to Hazolt HQ,\n"
	.string "Captain Mara will want to hear about\l"
	.string "this!$"

Corin_Quartz_PostBattles_Text_1:
# 112 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: You're saying the Seer mentioned\n"
	.string "something about books sent to\l"
	.string "Shudderwood Mansion?\p"
	.string "That sounds important. We should\n"
	.string "investigate that next time we have a\l"
	.string "chance.$"

Corin_Quartz_PostBattles_Text_2:
# 118 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: Whew… That was intense!\n"
	.string "Thanks for having my back back there,\l"
	.string "{PLAYER}.\p"
	.string "Those Hive Drones were tougher than I\n"
	.string "expected, but we showed them!\p"
	.string "I think we can take on anything now,\n"
	.string "together as a team!$"

Corin_Quartz_PostBattles_Text_3:
# 123 "data/maps/Quartz_Library/scripts.pory"
	.string "Corin: I'll report back to Hazolt HQ.\p"
	.string "I bet Mara will want to hear about this!$"

Quartz_Library_HealNurse_Text_0:
# 132 "data/maps/Quartz_Library/scripts.pory"
	.string "Please rest here if your POKéMON need\n"
	.string "healing.\p"
	.string "Would you like me to heal your POKéMON?$"

Quartz_Library_HealNurse_Text_1:
# 135 "data/maps/Quartz_Library/scripts.pory"
	.string "Alright, let me know if you need\n"
	.string "anything.$"

Quartz_Library_HealNurse_Text_2:
# 142 "data/maps/Quartz_Library/scripts.pory"
	.string "Your POKéMON have been healed.$"

Quartz_Library_QuarryLoreWoman_Text_0:
# 151 "data/maps/Quartz_Library/scripts.pory"
	.string "The Quartz Quarry used to be the pride\n"
	.string "of Quartzite Village.\p"
	.string "But since Team Hive took over, it was\n"
	.string "flooded.\p"
	.string "Now I hear the Rangers are trying to\n"
	.string "clear it out again.$"

Quartz_Library_QuarryNerd_Text_0:
# 161 "data/maps/Quartz_Library/scripts.pory"
	.string "Did you know that Quartz is made up of\n"
	.string "silicon and oxygen atoms?\p"
	.string "It's one of the most hard minerals on\n"
	.string "Earth!$"

Quartz_Library_ManicReader_Text_0:
# 170 "data/maps/Quartz_Library/scripts.pory"
	.string "I just love reading about the different\n"
	.string "types of minerals found in Quartzite\l"
	.string "City!\p"
	.string "Did you know that Amethyst is a type of\n"
	.string "Quartz?$"

Quartz_Library_Libarian_Nerd_Text_0:
# 179 "data/maps/Quartz_Library/scripts.pory"
	.string "Welcome to the Quartzite Library!\p"
	.string "Feel free to browse our collection of\n"
	.string "books on geology and mineralogy.$"

Quartz_Library_PictureBookChild_Text_0:
# 188 "data/maps/Quartz_Library/scripts.pory"
	.string "Look at this picture book about\n"
	.string "different types of rocks!\p"
	.string "I want to be a geologist when I grow up!$"

Quartz_Library_InternetFiend_Text_0:
# 197 "data/maps/Quartz_Library/scripts.pory"
	.string "I love reading about rare minerals\n"
	.string "online!\p"
	.string "Did you know that Tanzanite is only\n"
	.string "found in one place on Earth?$"

Quartz_Library_AnythingButRocksWoman_Text_0:
# 206 "data/maps/Quartz_Library/scripts.pory"
	.string "Ugh, I can't stand rocks and minerals!\p"
	.string "I'd much rather read about fashion and\n"
	.string "cooking!$"

Quartz_Library_Libarian_Text_0:
# 216 "data/maps/Quartz_Library/scripts.pory"
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
# 222 "data/maps/Quartz_Library/scripts.pory"
	.string "Librarian: As a token of our gratitude,\n"
	.string "please accept this Eevee.\p"
	.string "It's been trained to read.$"

Quartz_Library_Libarian_Text_2:
# 225 "data/maps/Quartz_Library/scripts.pory"
	.string "{PLAYER} received an Eevee!$"

Quartz_Library_Libarian_Text_3:
# 231 "data/maps/Quartz_Library/scripts.pory"
	.string "Librarian: Feel free to take a look at\n"
	.string "our collection of books on geology and\l"
	.string "mineralogy.$"

Quartz_BackofLine_Text_0:
# 240 "data/maps/Quartz_Library/scripts.pory"
	.string "I forsaw I would have to wait in line for\n"
	.string "a long time, but I didn't expect it to be\l"
	.string "this long!$"

Quartz_BackofLine_Text_1:
# 242 "data/maps/Quartz_Library/scripts.pory"
	.string "Do you want to wait in line?$"

Quartz_Library_MiddleOfLine_Text_0:
# 254 "data/maps/Quartz_Library/scripts.pory"
	.string "I hope we don't have to wait too long to\n"
	.string "get a library card!$"

Quartz_Library_FrontOfLine_Text_0:
# 262 "data/maps/Quartz_Library/scripts.pory"
	.string "I can't wait to get my library card!$"

Quartz_WaitInLine_Text_0:
# 270 "data/maps/Quartz_Library/scripts.pory"
	.string "You wait in line for a while, but it seems\n"
	.string "to be moving very slowly.$"

Quartz_WaitInLine_Text_1:
# 273 "data/maps/Quartz_Library/scripts.pory"
	.string "Continue waiting?$"

Quartz_WaitInLine_Text_2:
# 275 "data/maps/Quartz_Library/scripts.pory"
	.string "You continue waiting in line.$"

Quartz_WaitInLine_Text_3:
# 286 "data/maps/Quartz_Library/scripts.pory"
	.string "Wow this really is going slow, you should\n"
	.string "probably just leave.\p"
	.string "Here, let me give you something for\n"
	.string "being here with us for so long.$"

Quartz_WaitInLine_Text_4:
# 289 "data/maps/Quartz_Library/scripts.pory"
	.string "You received a Lucky Egg!$"

Quartz_WaitInLine_Text_5:
# 291 "data/maps/Quartz_Library/scripts.pory"
	.string "There, that should save you some time\n"
	.string "in the future!$"

Quartz_WaitInLine_Text_6:
# 297 "data/maps/Quartz_Library/scripts.pory"
	.string "You decide to leave the line.$"
