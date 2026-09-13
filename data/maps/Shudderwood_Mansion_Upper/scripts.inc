Shudderwood_Mansion_Upper_MapScripts::
	.byte 0


Shudderwood_Mansion_Bedchambers_Guard1::
# 4 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, Shudderwood_Mansion_Bedchambers_Guard1_Text_0, Shudderwood_Mansion_Bedchambers_Guard1_Text_1
# 11 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_Bedchambers_Guard1_Text_2, MSGBOX_AUTOCLOSE
# 14 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 15 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	releaseall
	end


Shudderwood_Mansion_Bedchambers_Guard2::
# 20 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_2, Shudderwood_Mansion_Bedchambers_Guard2_Text_0, Shudderwood_Mansion_Bedchambers_Guard2_Text_1
# 27 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_Bedchambers_Guard2_Text_2, MSGBOX_AUTOCLOSE
# 29 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 30 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	releaseall
	end


Shudderwood_Mansion_Bedchambers_Guard3::
# 35 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_JAGGED_PASS, Shudderwood_Mansion_Bedchambers_Guard3_Text_0, Shudderwood_Mansion_Bedchambers_Guard3_Text_1
# 42 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_Bedchambers_Guard3_Text_2, MSGBOX_AUTOCLOSE
# 45 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 46 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	releaseall
	end


Shudderwood_Mansion_MistressBattleRight::
# 51 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	lockall
# 52 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_MistressBattleRight_Movement_0
# 53 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 54 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	goto Shudderwood_Mansion_MistressBattle
	return


Shudderwood_Mansion_MistressBattleLeft::
# 58 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	lockall
# 59 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_MistressBattleLeft_Movement_0
# 60 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 61 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	goto Shudderwood_Mansion_MistressBattle
	return


Shudderwood_Mansion_MistressBattle::
# 65 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	lock
# 66 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MISTRESS, Shudderwood_Mansion_MistressBattle_Movement_0
# 67 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 68 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_PIN
# 69 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 70 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_MistressBattle_Text_0
# 73 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 74 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_MistressBattle_Movement_1
# 75 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 76 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_PIN
# 77 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 78 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_MistressBattle_Text_1
# 81 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 82 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_JUNE, Shudderwood_Mansion_MistressBattle_Movement_2
# 83 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 84 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_PIN
# 85 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 86 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_MistressBattle_Text_2
# 89 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 90 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MISTRESS, Shudderwood_Mansion_MistressBattle_Movement_3
# 91 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MALAMAR, Shudderwood_Mansion_MistressBattle_Movement_4
# 92 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 93 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_MistressBattle_Text_3
# 99 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 100 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_MistressBattle_Movement_5
# 101 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_JUNE, Shudderwood_Mansion_MistressBattle_Movement_6
# 102 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 103 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_MistressBattle_Text_4
# 104 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	trainerbattle_two_trainers TRAINER_GRUNT_SPACE_CENTER_3, Shudderwood_Mansion_MistressBattle_Text_5, TRAINER_GRUNT_MT_CHIMNEY_1, Shudderwood_Mansion_MistressBattle_Text_6
# 112 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	call Shudderwood_Mansion_AfterSeerBattle
# 113 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	release
	end


Shudderwood_Mansion_AfterSeerBattle::
# 118 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_AfterSeerBattle_Movement_0
# 119 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_JUNE, Shudderwood_Mansion_AfterSeerBattle_Movement_0
# 120 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 10
# 121 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_AfterSeerBattle_Movement_1
# 122 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 10
# 123 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_AfterSeerBattle_Text_0
# 126 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 127 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MISTRESS, Shudderwood_Mansion_AfterSeerBattle_Movement_2
# 128 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MALAMAR, Shudderwood_Mansion_AfterSeerBattle_Movement_3
# 129 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 10
# 130 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_M_PSYBEAM
# 131 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 132 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_AfterSeerBattle_Text_1
# 133 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 134 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, 0
# 135 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmoncry
# 136 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_BRAINWASHED_MASTER_DUSKNOIR, Shudderwood_Mansion_AfterSeerBattle_Movement_4
# 137 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 10
# 138 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_JUNE, Shudderwood_Mansion_AfterSeerBattle_Movement_5
# 139 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 140 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_AfterSeerBattle_Text_2
# 143 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 144 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_M_HAZE
# 145 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 146 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MISTRESS, Shudderwood_Mansion_AfterSeerBattle_Movement_6
# 147 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MALAMAR, Shudderwood_Mansion_AfterSeerBattle_Movement_6
# 148 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_BRAINWASHED_MASTER_DUSKNOIR, Shudderwood_Mansion_AfterSeerBattle_Movement_7
# 149 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 150 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, 0
# 151 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmoncry
# 152 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	fadescreen FADE_TO_BLACK
# 153 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	removeobject LOCALID_MANSION_SEER_JUNE
# 154 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_AfterSeerBattle_Text_3, MSGBOX_AUTOCLOSE
# 155 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_ORB
# 156 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 157 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 158 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_AfterSeerBattle_Movement_8
# 159 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 10
# 160 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_AfterSeerBattle_Text_4
# 163 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 164 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_AfterSeerBattle_Movement_9
# 165 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 166 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_PIN
# 167 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 168 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_AfterSeerBattle_Text_5
# 171 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 172 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	call Shudderwood_Mansion_HelpLysaYesNo
# 173 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	call Shudderwood_Mansion_DelphineDefeat
	return


Shudderwood_Mansion_DelphineDefeat::
# 178 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DelphineDefeat_Text_0
# 186 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	fadescreen FADE_TO_BLACK
# 187 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	removeobject LOCALID_MANSION_MALAMAR
# 188 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 189 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 190 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MISTRESS, Shudderwood_Mansion_DelphineDefeat_Movement_0
# 191 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_PIN
# 192 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 193 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_BRAINWASHED_MASTER_DUSKNOIR, Shudderwood_Mansion_DelphineDefeat_Movement_1
# 194 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 195 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, 0
# 196 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmoncry
# 197 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MISTRESS, Shudderwood_Mansion_DelphineDefeat_Movement_2
# 198 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DelphineDefeat_Text_1
# 201 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 202 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_BRAINWASHED_MASTER_DUSKNOIR, Shudderwood_Mansion_DelphineDefeat_Movement_3
# 203 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 204 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_PIN
# 205 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 206 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_DelphineDefeat_Movement_4
# 207 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_PIN
# 208 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 209 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DelphineDefeat_Text_2
# 212 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 213 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DelphineDefeat_Text_3
# 216 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 217 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_BRAINWASHED_MASTER_DUSKNOIR, Shudderwood_Mansion_DelphineDefeat_Movement_5
# 218 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 219 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, 0
# 220 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmoncry
# 221 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DelphineDefeat_Text_4
# 224 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_M_HAZE
# 225 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 226 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	fadescreen FADE_TO_BLACK
# 227 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	removeobject LOCALID_MANSION_MISTRESS
# 228 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	removeobject LOCALID_MANSION_SEER_LYSA
# 229 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DelphineDefeat_Text_5, MSGBOX_AUTOCLOSE
# 230 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_ORB
# 231 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 232 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DelphineDefeat_Text_6
# 234 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	goto_if_set FLAG_HELPED_SEER_LYSA, Shudderwood_Mansion_DelphineDefeat_2
Shudderwood_Mansion_DelphineDefeat_1:
# 239 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_EXIT
# 240 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 241 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 242 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_BRAINWASHED_MASTER_DUSKNOIR, Shudderwood_Mansion_DelphineDefeat_Movement_6
# 243 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 244 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, 0
# 245 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmoncry
# 246 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DelphineDefeat_Text_8
# 248 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 249 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	setflag FLAG_SHUDDERWOOD_MANSION_CLEARED
# 250 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	addvar VAR_MANSION_PROGRESSION, 1
# 251 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	setflag FLAG_BADGE04_GET
# 252 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, 0
# 253 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmoncry
# 254 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DelphineDefeat_Text_9
# 257 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 258 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	warp MAP_SHUDDERWOOD_SECOND, 13, 15
	return

Shudderwood_Mansion_DelphineDefeat_2:
# 235 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DelphineDefeat_Text_7
# 237 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
	goto Shudderwood_Mansion_DelphineDefeat_1


Shudderwood_Mansion_HelpLysaYesNo::
# 263 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	lockall
# 264 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_HelpLysaYesNo_Text_0, MSGBOX_YESNO
# 265 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shudderwood_Mansion_HelpLysaYesNo_1
# 311 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_HelpLysaYesNo_Text_6
# 315 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_HelpLysaYesNo_Text_7
# 316 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_HelpLysaYesNo_Movement_8
# 317 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MALAMAR, Shudderwood_Mansion_HelpLysaYesNo_Movement_9
# 318 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 319 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_HelpLysaYesNo_Text_8
# 322 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_M_NIGHTMARE
# 323 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 324 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_M_HAZE
# 325 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 326 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_HelpLysaYesNo_Movement_10
# 327 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 328 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_HelpLysaYesNo_Movement_11
# 329 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_HelpLysaYesNo_Text_9
# 330 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 331 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MISTRESS, Shudderwood_Mansion_HelpLysaYesNo_Movement_12
# 332 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 333 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_PIN
# 334 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 335 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_HelpLysaYesNo_Text_10
# 337 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 338 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_2, Shudderwood_Mansion_HelpLysaYesNo_Text_5
# 343 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitstate
	return

Shudderwood_Mansion_HelpLysaYesNo_1:
# 266 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_HelpLysaYesNo_Movement_0
# 267 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 268 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_PIN
# 269 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 270 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_HelpLysaYesNo_Text_1
# 273 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 274 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MISTRESS, Shudderwood_Mansion_HelpLysaYesNo_Movement_1
# 275 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_MALAMAR, Shudderwood_Mansion_HelpLysaYesNo_Movement_2
# 276 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_BRAINWASHED_MASTER_DUSKNOIR, Shudderwood_Mansion_HelpLysaYesNo_Movement_3
# 277 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 278 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_HelpLysaYesNo_Text_2
# 282 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 283 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_HelpLysaYesNo_Movement_4
# 284 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 285 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_AfterSeerBattle_Movement_6
# 286 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_HelpLysaYesNo_Text_3
# 289 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmessage
# 290 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_HelpLysaYesNo_Movement_5
# 291 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 292 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playse SE_USE_ITEM
# 293 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitse
# 294 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	special HealPlayerParty
# 295 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_MANSION_SEER_LYSA, Shudderwood_Mansion_HelpLysaYesNo_Movement_6
# 296 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_HelpLysaYesNo_Movement_7
# 297 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmovement 0
# 298 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_HelpLysaYesNo_Text_4
# 302 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	trainerbattle_no_intro TRAINER_WINONA_1, Shudderwood_Mansion_HelpLysaYesNo_Text_5
# 307 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitstate
# 308 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	setflag FLAG_HELPED_SEER_LYSA
	return


Shudderwood_Mansion_DusknoirChallenge::
# 349 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	lockall
# 350 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DusknoirChallenge_Text_0
# 352 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, 0
# 353 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitmoncry
# 354 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DusknoirChallenge_Text_1, MSGBOX_YESNO
# 355 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shudderwood_Mansion_DusknoirChallenge_1
# 369 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DusknoirChallenge_Text_3
# 371 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	releaseall
	end

Shudderwood_Mansion_DusknoirChallenge_1:
# 356 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	setwildbattle SPECIES_DUSKNOIR, 50, ITEM_REAPER_CLOTH
# 357 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	dowildbattle
# 358 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	waitstate
# 359 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	fadescreen FADE_TO_BLACK
# 360 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	removeobject LOCALID_MANSION_MASTER_DUSKNOIR
# 361 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 362 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	setflag FLAG_MANSION_DUSKNOIR_CLEARED
# 363 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	msgbox Shudderwood_Mansion_DusknoirChallenge_Text_2
# 365 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	giveitem ITEM_HEART_SCALE, 5
# 366 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	releaseall
	end


# 52 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_MistressBattleRight_Movement_0:
# 52 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_left
# 52 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_up
	step_end

# 59 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_MistressBattleLeft_Movement_0:
# 59 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_right
# 59 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_up
	step_end

# 66 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_MistressBattle_Movement_0:
# 66 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_down
# 66 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_slow_down
# 66 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
	step_end

# 74 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_MistressBattle_Movement_1:
# 74 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_fast_up
# 74 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 82 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_MistressBattle_Movement_2:
# 82 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_left
# 82 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
# 82 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_left
	step_end

# 90 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_MistressBattle_Movement_3:
# 90 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_down
	step_end

# 91 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_MistressBattle_Movement_4:
# 91 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
# 91 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_slow_left
	step_end

# 100 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_MistressBattle_Movement_5:
# 100 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_down
# 100 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_down
# 100 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_x
	step_end

# 101 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_MistressBattle_Movement_6:
# 101 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_down
# 101 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_down
	step_end

# 118 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_AfterSeerBattle_Movement_0:
# 118 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_faster_up
# 118 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_down
	step_end

# 121 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_AfterSeerBattle_Movement_1:
# 121 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_slow_up
	step_end

# 127 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_AfterSeerBattle_Movement_2:
# 127 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_right
# 127 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_slow_right
	step_end

# 128 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_AfterSeerBattle_Movement_3:
# 128 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_right
# 128 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_slow_right
# 128 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
	step_end

# 136 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_AfterSeerBattle_Movement_4:
# 136 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_left
# 136 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_slow_left
# 136 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_slow_left
	step_end

# 138 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_AfterSeerBattle_Movement_5:
# 138 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_up
# 138 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	jump_in_place_down
	step_end

# 146 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_AfterSeerBattle_Movement_6:
# 146 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_down
	step_end

# 148 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_AfterSeerBattle_Movement_7:
# 148 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_down
# 148 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_slow_down
# 148 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 158 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_AfterSeerBattle_Movement_8:
# 158 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_x
# 158 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_right
# 158 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_down
# 158 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_down
	step_end

# 164 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_AfterSeerBattle_Movement_9:
# 164 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	jump_in_place_down
# 164 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	jump_in_place_down
	step_end

# 190 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_DelphineDefeat_Movement_0:
# 190 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_faster_up
# 190 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
	step_end

# 193 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_DelphineDefeat_Movement_1:
# 193 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_fast_down
# 193 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_down
	step_end

# 197 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_DelphineDefeat_Movement_2:
# 197 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_right
# 197 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_down
# 197 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_slow_down
	step_end

# 202 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_DelphineDefeat_Movement_3:
# 202 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_slow_left
# 202 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_slow_left
# 202 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 206 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_DelphineDefeat_Movement_4:
# 206 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_up
# 206 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
	step_end

# 217 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_DelphineDefeat_Movement_5:
# 217 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_fast_left
# 217 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_fast_left
	step_end

# 242 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_DelphineDefeat_Movement_6:
# 242 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_down
	step_end

# 266 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_0:
# 266 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_fast_up
# 266 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_fast_up
	step_end

# 274 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_1:
# 274 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_slow_down
# 274 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_slow_down
# 274 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
	step_end

# 275 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_2:
# 275 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_left
# 275 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_slow_left
	step_end

# 276 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_3:
# 276 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_faster_right
# 276 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_faster_right
# 276 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_down
	step_end

# 283 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_4:
# 283 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_fast_up
# 283 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_fast_right
# 283 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_fast_up
	step_end

# 290 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_5:
# 290 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_heart
	step_end

# 295 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_6:
# 295 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_fast_down
# 295 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_up
# 295 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_slow_up
	step_end

# 296 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_7:
# 296 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_up
	step_end

# 316 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_8:
# 316 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_fast_up
# 316 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_fast_up
# 316 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_fast_up
# 316 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_fast_up
# 316 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_left
# 316 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
	step_end

# 317 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_9:
# 317 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_fast_down
# 317 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_fast_down
# 317 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_fast_down
# 317 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
	step_end

# 326 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_10:
# 326 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
# 326 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_down
	step_end

# 328 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_11:
# 328 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_down
# 328 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_right
# 328 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	face_up
# 328 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_left
# 328 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_question_mark
	step_end

# 331 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
Shudderwood_Mansion_HelpLysaYesNo_Movement_12:
# 331 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_down
# 331 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	emote_exclamation_mark
# 331 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	walk_in_place_down
	step_end

Shudderwood_Mansion_Bedchambers_Guard1_Text_0:
# 6 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Drone: Elite defense unit\n"
	.string "engaged!$"

Shudderwood_Mansion_Bedchambers_Guard1_Text_1:
# 8 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Drone: Shameful… your\n"
	.string "mind is worthless!$"

Shudderwood_Mansion_Bedchambers_Guard1_Text_2:
# 11 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Drone: These chambers remain under\n"
	.string "Delphine's control.$"

Shudderwood_Mansion_Bedchambers_Guard2_Text_0:
# 22 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Drone: Intruder detected!\n"
	.string "Attack protocols engaged!$"

Shudderwood_Mansion_Bedchambers_Guard2_Text_1:
# 24 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Drone: Pathetic… your\n"
	.string "mind is worthless!$"

Shudderwood_Mansion_Bedchambers_Guard2_Text_2:
# 27 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Drone: Advance and be subdued.$"

Shudderwood_Mansion_Bedchambers_Guard3_Text_0:
# 37 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Drone: Seer directive\n"
	.string "received. Area secured!$"

Shudderwood_Mansion_Bedchambers_Guard3_Text_1:
# 39 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Drone: No… the statue\n"
	.string "must remain secure!$"

Shudderwood_Mansion_Bedchambers_Guard3_Text_2:
# 42 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Drone: Tampering with protected\n"
	.string "property is prohibited.$"

Shudderwood_Mansion_MistressBattle_Text_0:
# 70 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "???: You two Seers have failed me by\n"
	.string "letting this Ranger come so far!$"

Shudderwood_Mansion_MistressBattle_Text_1:
# 78 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer Lysa: Delphine! Please let me go! I\n"
	.string "beg of you!$"

Shudderwood_Mansion_MistressBattle_Text_2:
# 86 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer June: Silence, Lysa! You were the\n"
	.string "one who led them here!$"

Shudderwood_Mansion_MistressBattle_Text_3:
# 93 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: Enough bickering! You will\n"
	.string "face the Ranger together… or Malamar\l"
	.string "and I will have the 'Master of\p"
	.string "the Mansion' seal you away in darkness\n"
	.string "forever!$"

Shudderwood_Mansion_MistressBattle_Text_4:
# 103 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer Lysa: No… not again…$"

Shudderwood_Mansion_MistressBattle_Text_5:
# 106 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer Lysa: At least it's\n"
	.string "over…$"

Shudderwood_Mansion_MistressBattle_Text_6:
# 109 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer June: No! My power is\n"
	.string "fading!$"

Shudderwood_Mansion_AfterSeerBattle_Text_0:
# 123 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: Hmph… Malamar and I have no\n"
	.string "more use for you two failures. Begone!$"

Shudderwood_Mansion_AfterSeerBattle_Text_1:
# 132 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Dusknoir: Grrrr… Grrrr…$"

Shudderwood_Mansion_AfterSeerBattle_Text_2:
# 140 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer June: No… Please don't seal me in\n"
	.string "the darkness!$"

Shudderwood_Mansion_AfterSeerBattle_Text_3:
# 154 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "June: AAAAAAAH!$"

Shudderwood_Mansion_AfterSeerBattle_Text_4:
# 160 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: And just where do you think\n"
	.string "you're going, Lysa?$"

Shudderwood_Mansion_AfterSeerBattle_Text_5:
# 168 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer Lysa: No… I can't move! Ranger…\n"
	.string "please… help me!$"

Shudderwood_Mansion_DelphineDefeat_Text_0:
# 178 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: Impossible… All my careful\n"
	.string "planning, ruined by a mere Ranger!\p"
	.string "I had only just begun to unlock what\n"
	.string "lies buried on Corymbra…\p"
	.string "Malamar, return. I'll have to carve my\n"
	.string "own escape.$"

Shudderwood_Mansion_DelphineDefeat_Text_1:
# 198 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: Hah… foolish Dusknoir, you\n"
	.string "still belong to me!$"

Shudderwood_Mansion_DelphineDefeat_Text_2:
# 209 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer Lysa: {PLAYER}, her control over\n"
	.string "Dusknoir is weakening!$"

Shudderwood_Mansion_DelphineDefeat_Text_3:
# 213 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: Up, Dusknoir! Help me escape!\n"
	.string "You don't want me gone, do you?!$"

Shudderwood_Mansion_DelphineDefeat_Text_4:
# 221 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: You think you can cast me\n"
	.string "into that darkness as well?!$"

Shudderwood_Mansion_DelphineDefeat_Text_5:
# 229 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: KAAAAAAH!$"

Shudderwood_Mansion_DelphineDefeat_Text_6:
# 232 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer Lysa: I'm getting out of here… now.$"

Shudderwood_Mansion_DelphineDefeat_Text_7:
# 235 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer Lysa: Thank you for saving me,\n"
	.string "{PLAYER}.\p"
	.string "I owe you my life.$"

Shudderwood_Mansion_DelphineDefeat_Text_8:
# 246 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Dusknoir: Grrrr… Grrrr…\p"
	.string "The Master of the Mansion, Dusknoir,\n"
	.string "has been freed from Delphine's control!$"

Shudderwood_Mansion_DelphineDefeat_Text_9:
# 254 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Dusknoir: Grrrr… Grrrr…\p"
	.string "Dusknoir seems to wish for you to\n"
	.string "return someday. For a proper challenge.\p"
	.string "For now, the Master of the Mansion will\n"
	.string "show you out and then rest.$"

Shudderwood_Mansion_HelpLysaYesNo_Text_0:
# 264 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Do you want to help Lysa?$"

Shudderwood_Mansion_HelpLysaYesNo_Text_1:
# 270 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: Foolish Ranger! You think you\n"
	.string "can interfere with my design?$"

Shudderwood_Mansion_HelpLysaYesNo_Text_2:
# 278 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: Then I'll break you first!\n"
	.string "Malamar, Lysa can wait until her hope\l"
	.string "has withered!$"

Shudderwood_Mansion_HelpLysaYesNo_Text_3:
# 286 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer Lysa: Thank you, Ranger! Here… let\n"
	.string "me heal your Pokémon!$"

Shudderwood_Mansion_HelpLysaYesNo_Text_4:
# 298 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: Pathetic sentiment! Very\n"
	.string "well… I'll crush this Ranger beneath the\l"
	.string "full weight of the Hive!$"

Shudderwood_Mansion_HelpLysaYesNo_Text_5:
# 304 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: What?! No… how could this\n"
	.string "be?!$"

Shudderwood_Mansion_HelpLysaYesNo_Text_6:
# 311 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: Excellent! Malamar, deal with\n"
	.string "Lysa. I'll pick up the pieces of this\l"
	.string "Ranger myself!$"

Shudderwood_Mansion_HelpLysaYesNo_Text_7:
# 315 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer Lysa: No… I won't yield easily!$"

Shudderwood_Mansion_HelpLysaYesNo_Text_8:
# 319 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: Your feeble resistance will\n"
	.string "wither soon enough.$"

Shudderwood_Mansion_HelpLysaYesNo_Text_9:
# 329 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Seer Lysa: Uhh… no…$"

Shudderwood_Mansion_HelpLysaYesNo_Text_10:
# 335 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Delphine: As for you, Ranger…\p"
	.string "You will soon join the countless others\n"
	.string "who have fallen to the Hive's will!$"

Shudderwood_Mansion_DusknoirChallenge_Text_0:
# 350 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Dusknoir: Grrrr… Grrrr…\p"
	.string "The Master of the Mansion, Dusknoir,\n"
	.string "challenges you to a battle!$"

Shudderwood_Mansion_DusknoirChallenge_Text_1:
# 354 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Would you like to accept the challenge?$"

Shudderwood_Mansion_DusknoirChallenge_Text_2:
# 363 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "You have defeated Dusknoir, the Master\n"
	.string "of the Mansion!\p"
	.string "The souls of those trapped here are\n"
	.string "yours now.$"

Shudderwood_Mansion_DusknoirChallenge_Text_3:
# 369 "data/maps/Shudderwood_Mansion_Upper/scripts.pory"
	.string "Dusknoir: Grrrr… Grrrr…\p"
	.string "The Master of the Mansion, Dusknoir,\n"
	.string "awaits your return.$"
