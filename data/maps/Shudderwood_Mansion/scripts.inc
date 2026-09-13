Shudderwood_Mansion_MapScripts::
	.byte 0


Shudderwood_Mansion_RandomEncounter::
# 5 "data/maps/Shudderwood_Mansion/scripts.pory"
	lock
# 6 "data/maps/Shudderwood_Mansion/scripts.pory"
	playmoncry SPECIES_MISDREAVUS, 0
# 7 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmoncry
# 8 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_RandomEncounter_Text_0
# 9 "data/maps/Shudderwood_Mansion/scripts.pory"
	random 12
# 10 "data/maps/Shudderwood_Mansion/scripts.pory"
	switch VAR_RESULT
# 11 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 0, Shudderwood_Mansion_RandomEncounter_3
# 12 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 1, Shudderwood_Mansion_RandomEncounter_4
# 13 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 2, Shudderwood_Mansion_RandomEncounter_5
# 14 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 3, Shudderwood_Mansion_RandomEncounter_6
# 15 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 4, Shudderwood_Mansion_RandomEncounter_7
# 16 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 5, Shudderwood_Mansion_RandomEncounter_8
# 17 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 6, Shudderwood_Mansion_RandomEncounter_9
# 18 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 7, Shudderwood_Mansion_RandomEncounter_10
# 19 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 8, Shudderwood_Mansion_RandomEncounter_11
# 20 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 9, Shudderwood_Mansion_RandomEncounter_12
# 21 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 10, Shudderwood_Mansion_RandomEncounter_13
# 22 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 11, Shudderwood_Mansion_RandomEncounter_14
Shudderwood_Mansion_RandomEncounter_1:
# 24 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end

Shudderwood_Mansion_RandomEncounter_3:
# 11 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Sinistea
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_4:
# 12 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Litwick
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_5:
# 13 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Gothita
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_6:
# 14 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Minccino
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_7:
# 15 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Duskull_35
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_8:
# 16 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Duskull_36
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_9:
# 17 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Minccino_37
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_10:
# 18 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Gothorita
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_11:
# 19 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Lampent_37
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_12:
# 20 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Dusclops_37
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_13:
# 21 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Lampent_38
	goto Shudderwood_Mansion_RandomEncounter_1

Shudderwood_Mansion_RandomEncounter_14:
# 22 "data/maps/Shudderwood_Mansion/scripts.pory"
	call Shudderwood_Encounter_Dusclops_38
	goto Shudderwood_Mansion_RandomEncounter_1


Shudderwood_Encounter_Sinistea::
# 30 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_SINISTEA, 34
# 31 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return


Shudderwood_Encounter_Litwick::
# 36 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_LITWICK, 34
# 37 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return


Shudderwood_Encounter_Gothita::
# 42 "data/maps/Shudderwood_Mansion/scripts.pory"
	random 3
# 43 "data/maps/Shudderwood_Mansion/scripts.pory"
	switch VAR_RESULT
# 44 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 0, Shudderwood_Encounter_Gothita_3
# 45 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 1, Shudderwood_Encounter_Gothita_4
# 46 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 2, Shudderwood_Encounter_Gothita_5
Shudderwood_Encounter_Gothita_1:
# 48 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return

Shudderwood_Encounter_Gothita_3:
# 44 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_GOTHITA, 33
	goto Shudderwood_Encounter_Gothita_1

Shudderwood_Encounter_Gothita_4:
# 45 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_GOTHITA, 34
	goto Shudderwood_Encounter_Gothita_1

Shudderwood_Encounter_Gothita_5:
# 46 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_GOTHITA, 35
	goto Shudderwood_Encounter_Gothita_1


Shudderwood_Encounter_Minccino::
# 53 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_MINCCINO, 35
# 54 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return


Shudderwood_Encounter_Duskull_35::
# 59 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 35
# 60 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return


Shudderwood_Encounter_Duskull_36::
# 65 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_DUSKULL, 36
# 66 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return


Shudderwood_Encounter_Minccino_37::
# 71 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_MINCCINO, 37
# 72 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return


Shudderwood_Encounter_Gothorita::
# 77 "data/maps/Shudderwood_Mansion/scripts.pory"
	random 2
# 78 "data/maps/Shudderwood_Mansion/scripts.pory"
	switch VAR_RESULT
# 79 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 0, Shudderwood_Encounter_Gothorita_3
# 80 "data/maps/Shudderwood_Mansion/scripts.pory"
	case 1, Shudderwood_Encounter_Gothorita_4
Shudderwood_Encounter_Gothorita_1:
# 82 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return

Shudderwood_Encounter_Gothorita_3:
# 79 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_GOTHORITA, 36
	goto Shudderwood_Encounter_Gothorita_1

Shudderwood_Encounter_Gothorita_4:
# 80 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_GOTHORITA, 37
	goto Shudderwood_Encounter_Gothorita_1


Shudderwood_Encounter_Lampent_37::
# 87 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_LAMPENT, 37
# 88 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return


Shudderwood_Encounter_Dusclops_37::
# 93 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_DUSCLOPS, 37
# 94 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return


Shudderwood_Encounter_Lampent_38::
# 99 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_LAMPENT, 38
# 100 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return


Shudderwood_Encounter_Dusclops_38::
# 105 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_DUSCLOPS, 38
# 106 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
	return


Shudderwood_Mansion_GateHouseBattle::
# 111 "data/maps/Shudderwood_Mansion/scripts.pory"
	lock
# 112 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_SEER, Shudderwood_Mansion_GateHouseBattle_Movement_0
# 113 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 114 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_GateHouseBattle_Text_0
# 117 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_SEER, Shudderwood_Mansion_GateHouseBattle_Movement_1
# 118 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 119 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_GateHouseBattle_Text_1
# 123 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_1, Shudderwood_Mansion_GateHouseBattle_Movement_2
# 124 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_2, Shudderwood_Mansion_GateHouseBattle_Movement_3
# 125 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_3, Shudderwood_Mansion_GateHouseBattle_Movement_2
# 126 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_4, Shudderwood_Mansion_GateHouseBattle_Movement_2
# 127 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 128 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_PINSIR, Shudderwood_Mansion_GateHouseBattle_Movement_4
# 129 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 130 "data/maps/Shudderwood_Mansion/scripts.pory"
	playmoncry SPECIES_PINSIR, 0
# 131 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmoncry
# 132 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_GateHouseBattle_Text_2
# 133 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_SEER, Shudderwood_Mansion_GateHouseBattle_Movement_5
# 134 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 135 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_GateHouseBattle_Text_3
# 141 "data/maps/Shudderwood_Mansion/scripts.pory"
	playmoncry SPECIES_PINSIR, 0
# 142 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmoncry
# 143 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_PINSIR, Shudderwood_Mansion_GateHouseBattle_Movement_6
# 144 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 145 "data/maps/Shudderwood_Mansion/scripts.pory"
	setwildbattle SPECIES_PINSIR, 40
# 146 "data/maps/Shudderwood_Mansion/scripts.pory"
	dowildbattle
# 147 "data/maps/Shudderwood_Mansion/scripts.pory"
	fadescreen FADE_TO_BLACK
# 148 "data/maps/Shudderwood_Mansion/scripts.pory"
	removeobject LOCALID_GATEHOUSE_PINSIR
# 149 "data/maps/Shudderwood_Mansion/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 150 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_1, Shudderwood_Mansion_GateHouseBattle_Movement_7
# 151 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_2, Shudderwood_Mansion_GateHouseBattle_Movement_8
# 152 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_3, Shudderwood_Mansion_GateHouseBattle_Movement_9
# 153 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_4, Shudderwood_Mansion_GateHouseBattle_Movement_10
# 154 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_SEER, Shudderwood_Mansion_GateHouseBattle_Movement_11
# 155 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 156 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_GateHouseBattle_Text_4
# 159 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 160 "data/maps/Shudderwood_Mansion/scripts.pory"
	addvar VAR_MANSION_PROGRESSION, 1
# 161 "data/maps/Shudderwood_Mansion/scripts.pory"
	setflag FLAG_SHUDDERWOOD_GATEHOUSE_CLEARED
# 162 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_1, Shudderwood_Mansion_GateHouseBattle_Movement_12
# 163 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_2, Shudderwood_Mansion_GateHouseBattle_Movement_12
# 164 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_SEER, Shudderwood_Mansion_GateHouseBattle_Movement_13
# 165 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 166 "data/maps/Shudderwood_Mansion/scripts.pory"
	removeobject LOCALID_GATEHOUSE_DRONE_1
# 167 "data/maps/Shudderwood_Mansion/scripts.pory"
	removeobject LOCALID_GATEHOUSE_DRONE_2
# 168 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_GateHouseBattle_Text_5
# 171 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 172 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_SEER, Shudderwood_Mansion_GateHouseBattle_Movement_14
# 173 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 174 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_GateHouseBattle_Text_6
# 178 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_SEER, Shudderwood_Mansion_GateHouseBattle_Movement_12
# 179 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_3, Shudderwood_Mansion_GateHouseBattle_Movement_12
# 180 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_GATEHOUSE_DRONE_4, Shudderwood_Mansion_GateHouseBattle_Movement_12
# 181 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 10
# 182 "data/maps/Shudderwood_Mansion/scripts.pory"
	removeobject LOCALID_GATEHOUSE_SEER
# 183 "data/maps/Shudderwood_Mansion/scripts.pory"
	removeobject LOCALID_GATEHOUSE_DRONE_3
# 184 "data/maps/Shudderwood_Mansion/scripts.pory"
	removeobject LOCALID_GATEHOUSE_DRONE_4
# 185 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_GateHouseBattle_Text_7
# 188 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end


Shudderwood_Mansion_StairWebandKeyCheck::
# 193 "data/maps/Shudderwood_Mansion/scripts.pory"
	lock
# 194 "data/maps/Shudderwood_Mansion/scripts.pory"
	compare VAR_MANSION_PROGRESSION, 4
	goto_if_ge Shudderwood_Mansion_StairWebandKeyCheck_2
# 198 "data/maps/Shudderwood_Mansion/scripts.pory"
	checkitem ITEM_MANSION_KEY
# 199 "data/maps/Shudderwood_Mansion/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shudderwood_Mansion_StairWebandKeyCheck_5
# 208 "data/maps/Shudderwood_Mansion/scripts.pory"
	compare VAR_MANSION_PROGRESSION, 3
	goto_if_lt Shudderwood_Mansion_StairWebandKeyCheck_8
# 220 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_StairWebandKeyCheck_Text_2
# 223 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_StairWebandKeyCheck_Text_3
# 226 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_StairWebandKeyCheck_Text_4, MSGBOX_YESNO
# 230 "data/maps/Shudderwood_Mansion/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shudderwood_Mansion_StairWebandKeyCheck_11
# 237 "data/maps/Shudderwood_Mansion/scripts.pory"
	checkpartymove MOVE_CUT
# 238 "data/maps/Shudderwood_Mansion/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Shudderwood_Mansion_StairWebandKeyCheck_14
# 245 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_StairWebandKeyCheck_Text_7
# 248 "data/maps/Shudderwood_Mansion/scripts.pory"
	playse SE_M_CUT
# 249 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitse
# 250 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_StairWebandKeyCheck_Text_8
# 252 "data/maps/Shudderwood_Mansion/scripts.pory"
	playse SE_UNLOCK
# 253 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitse
# 254 "data/maps/Shudderwood_Mansion/scripts.pory"
	addvar VAR_MANSION_PROGRESSION, 1
# 255 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end

Shudderwood_Mansion_StairWebandKeyCheck_2:
# 195 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end

Shudderwood_Mansion_StairWebandKeyCheck_5:
# 200 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_StairWebandKeyCheck_Text_0
# 204 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_StairWebandKeyCheck_Movement_0
# 205 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end

Shudderwood_Mansion_StairWebandKeyCheck_8:
# 209 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_StairWebandKeyCheck_Text_1
# 216 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_StairWebandKeyCheck_Movement_0
# 217 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end

Shudderwood_Mansion_StairWebandKeyCheck_11:
# 231 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_StairWebandKeyCheck_Text_5
# 233 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_StairWebandKeyCheck_Movement_0
# 234 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end

Shudderwood_Mansion_StairWebandKeyCheck_14:
# 239 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_StairWebandKeyCheck_Text_6
# 241 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_StairWebandKeyCheck_Movement_0
# 242 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end


Shudderwood_Mansion_Brainwashed_Experts::
# 260 "data/maps/Shudderwood_Mansion/scripts.pory"
	lockall
# 261 "data/maps/Shudderwood_Mansion/scripts.pory"
	goto_if_unset FLAG_SHUDDERWOOD_MANSION_BRAINWASHED_EXPERTS_FREED, Shudderwood_Mansion_Brainwashed_Experts_2
# 331 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Experts_Text_11
# 337 "data/maps/Shudderwood_Mansion/scripts.pory"
	releaseall
Shudderwood_Mansion_Brainwashed_Experts_1:
	end

Shudderwood_Mansion_Brainwashed_Experts_2:
# 262 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Experts_Text_0
# 268 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_MAID, Shudderwood_Mansion_GateHouseBattle_Movement_9
# 269 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 270 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Experts_Text_1
# 273 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_SCIENTIST, Shudderwood_Mansion_GateHouseBattle_Movement_10
# 274 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 275 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Experts_Text_2
# 279 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_MAID, Shudderwood_Mansion_Brainwashed_Experts_Movement_0
# 280 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_SCIENTIST, Shudderwood_Mansion_Brainwashed_Experts_Movement_0
# 281 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 282 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Experts_Text_3
# 286 "data/maps/Shudderwood_Mansion/scripts.pory"
	trainerbattle_two_trainers TRAINER_STEVE_1, Shudderwood_Mansion_Brainwashed_Experts_Text_4, TRAINER_ANDREA, Shudderwood_Mansion_Brainwashed_Experts_Text_5
# 290 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_MAID, Shudderwood_Mansion_Brainwashed_Experts_Movement_1
# 291 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_SCIENTIST, Shudderwood_Mansion_Brainwashed_Experts_Movement_2
# 292 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 293 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Experts_Text_6
# 297 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Experts_Text_7
# 303 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 304 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_SCIENTIST, Shudderwood_Mansion_Brainwashed_Experts_Movement_3
# 305 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 306 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Experts_Text_8
# 314 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 315 "data/maps/Shudderwood_Mansion/scripts.pory"
	addvar VAR_MANSION_PROGRESSION, 1
# 316 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Experts_Text_9
# 321 "data/maps/Shudderwood_Mansion/scripts.pory"
	giveitem ITEM_SILK_SCARF, 1
# 322 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 323 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Experts_Text_10
# 328 "data/maps/Shudderwood_Mansion/scripts.pory"
	setflag FLAG_SHUDDERWOOD_MANSION_BRAINWASHED_EXPERTS_FREED
# 329 "data/maps/Shudderwood_Mansion/scripts.pory"
	releaseall
	goto Shudderwood_Mansion_Brainwashed_Experts_1


Shudderwood_Mansion_Brainwashed_Gardener::
# 343 "data/maps/Shudderwood_Mansion/scripts.pory"
	lock
# 344 "data/maps/Shudderwood_Mansion/scripts.pory"
	goto_if_unset FLAG_SHUDDERWOOD_MANSION_BRAINWASHED_GARDENER_FREED, Shudderwood_Mansion_Brainwashed_Gardener_2
# 380 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Gardener_Text_5
Shudderwood_Mansion_Brainwashed_Gardener_1:
# 383 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end

Shudderwood_Mansion_Brainwashed_Gardener_2:
# 345 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Gardener_Text_0
# 349 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_GARDENER, Shudderwood_Mansion_Brainwashed_Gardener_Movement_0
# 350 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 351 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Gardener_Text_1
# 355 "data/maps/Shudderwood_Mansion/scripts.pory"
	trainerbattle_no_intro TRAINER_CELINA, Shudderwood_Mansion_Brainwashed_Gardener_Text_2
# 361 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Gardener_Text_3
# 369 "data/maps/Shudderwood_Mansion/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 370 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 371 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Gardener_Text_4
# 377 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 378 "data/maps/Shudderwood_Mansion/scripts.pory"
	setflag FLAG_SHUDDERWOOD_MANSION_BRAINWASHED_GARDENER_FREED
	goto Shudderwood_Mansion_Brainwashed_Gardener_1


Shudderwood_Mansion_RunningGuard_1::
# 388 "data/maps/Shudderwood_Mansion/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_12, Shudderwood_Mansion_RunningGuard_1_Text_0, Shudderwood_Mansion_RunningGuard_1_Text_1
# 395 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_RunningGuard_1_Text_2, MSGBOX_AUTOCLOSE
# 398 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 399 "data/maps/Shudderwood_Mansion/scripts.pory"
	releaseall
	end


Shudderwood_Mansion_RunningGuard_2::
# 404 "data/maps/Shudderwood_Mansion/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_13, Shudderwood_Mansion_RunningGuard_2_Text_0, Shudderwood_Mansion_RunningGuard_2_Text_1
# 411 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_RunningGuard_2_Text_2, MSGBOX_AUTOCLOSE
# 414 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 415 "data/maps/Shudderwood_Mansion/scripts.pory"
	releaseall
	end


Shudderwood_Mansion_PoolGuard::
# 420 "data/maps/Shudderwood_Mansion/scripts.pory"
	lock
# 421 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_PoolGuard_Text_0
# 424 "data/maps/Shudderwood_Mansion/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_MT_CHIMNEY_2, Shudderwood_Mansion_PoolGuard_Text_1
# 429 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_PoolGuard_Text_2
# 432 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 433 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_PoolGuard_Text_3
# 436 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 437 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_POOL_DRONE, Shudderwood_Mansion_PoolGuard_Movement_0
# 438 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 439 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_PoolGuard_Text_4
# 443 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 444 "data/maps/Shudderwood_Mansion/scripts.pory"
	playse SE_M_NIGHTMARE
# 445 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitse
# 446 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_POOL_DRONE, Shudderwood_Mansion_PoolGuard_Movement_1
# 447 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 448 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_PoolGuard_Text_5
# 449 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 450 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_PLAYER, Shudderwood_Mansion_PoolGuard_Movement_2
# 451 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_MANSION_POOL_DRONE, Shudderwood_Mansion_PoolGuard_Movement_3
# 453 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 454 "data/maps/Shudderwood_Mansion/scripts.pory"
	removeobject LOCALID_SHUDDERWOOD_MANSION_POOL_DRONE
# 455 "data/maps/Shudderwood_Mansion/scripts.pory"
	setflag FLAG_SHUDDERWOOD_MANSION_POOL_DRONE_DEFEATED
# 456 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end


Shudderwood_Captive_Maid::
# 461 "data/maps/Shudderwood_Mansion/scripts.pory"
	lock
# 462 "data/maps/Shudderwood_Mansion/scripts.pory"
	goto_if_unset FLAG_ITEM_SHUDDERWOOD_MANSION_KEY, Shudderwood_Captive_Maid_2
# 478 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Captive_Maid_Text_2
Shudderwood_Captive_Maid_1:
# 483 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end

Shudderwood_Captive_Maid_2:
# 463 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Captive_Maid_Text_0
# 466 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 467 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_SHUDDERWOOD_CAPTIVE_MAID, Shudderwood_Captive_Maid_Movement_0
# 468 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 469 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Captive_Maid_Text_1
# 474 "data/maps/Shudderwood_Mansion/scripts.pory"
	giveitem ITEM_MANSION_KEY
# 475 "data/maps/Shudderwood_Mansion/scripts.pory"
	setflag FLAG_ITEM_SHUDDERWOOD_MANSION_KEY
# 476 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
	goto Shudderwood_Captive_Maid_1


Shudderwood_Mansion_Brainwashed_Butler::
# 488 "data/maps/Shudderwood_Mansion/scripts.pory"
	trainerbattle_single TRAINER_CLIFFORD, Shudderwood_Mansion_Brainwashed_Butler_Text_0, Shudderwood_Mansion_Brainwashed_Butler_Text_1
# 495 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Shudderwood_Mansion_Brainwashed_Butler_Text_2, MSGBOX_AUTOCLOSE
# 501 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 502 "data/maps/Shudderwood_Mansion/scripts.pory"
	releaseall
	end


Mansion_Master_Floor_Skip::
# 507 "data/maps/Shudderwood_Mansion/scripts.pory"
	goto_if_unset FLAG_MANSION_DUSKNOIR_CLEARED, Mansion_Master_Floor_Skip_3
Mansion_Master_Floor_Skip_2:
	end

Mansion_Master_Floor_Skip_1:
# 508 "data/maps/Shudderwood_Mansion/scripts.pory"
	lock
# 509 "data/maps/Shudderwood_Mansion/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, 0
# 510 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmoncry
# 511 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Mansion_Master_Floor_Skip_Text_0, MSGBOX_YESNO
# 516 "data/maps/Shudderwood_Mansion/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Mansion_Master_Floor_Skip_6
# 523 "data/maps/Shudderwood_Mansion/scripts.pory"
	msgbox Mansion_Master_Floor_Skip_Text_1
# 524 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmessage
# 525 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end

Mansion_Master_Floor_Skip_3:
# 507 "data/maps/Shudderwood_Mansion/scripts.pory"
	goto_if_set FLAG_SHUDDERWOOD_MANSION_CLEARED, Mansion_Master_Floor_Skip_1
	goto Mansion_Master_Floor_Skip_2

Mansion_Master_Floor_Skip_6:
# 517 "data/maps/Shudderwood_Mansion/scripts.pory"
	warp MAP_SHUDDERWOOD_MANSION_UPPER, 3
# 518 "data/maps/Shudderwood_Mansion/scripts.pory"
	applymovement LOCALID_PLAYER, Mansion_Master_Floor_Skip_Movement_0
# 519 "data/maps/Shudderwood_Mansion/scripts.pory"
	waitmovement 0
# 520 "data/maps/Shudderwood_Mansion/scripts.pory"
	release
	end


# 112 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_0:
# 112 "data/maps/Shudderwood_Mansion/scripts.pory"
	jump_in_place_down
# 112 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_exclamation_mark
	step_end

# 117 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_1:
# 117 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_fast_down
	step_end

# 123 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_2:
# 123 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_exclamation_mark
# 123 "data/maps/Shudderwood_Mansion/scripts.pory"
	jump_in_place_down
	step_end

# 124 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_3:
# 124 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_question_mark
# 124 "data/maps/Shudderwood_Mansion/scripts.pory"
	jump_in_place_down
	step_end

# 128 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_4:
# 128 "data/maps/Shudderwood_Mansion/scripts.pory"
	jump_in_place_down
# 128 "data/maps/Shudderwood_Mansion/scripts.pory"
	jump_in_place_down
	step_end

# 133 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_5:
# 133 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_down
# 133 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_heart
	step_end

# 143 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_6:
# 143 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_fast_down
# 143 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_fast_down
	step_end

# 150 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_7:
# 150 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_x
# 150 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_left
# 150 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_right
# 150 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_up
# 150 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_down
	step_end

# 151 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_8:
# 151 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_x
# 151 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_left
# 151 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_right
# 151 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_down
	step_end

# 152 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_9:
# 152 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_x
# 152 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_left
# 152 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_down
	step_end

# 153 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_10:
# 153 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_x
# 153 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_right
# 153 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_down
	step_end

# 154 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_11:
# 154 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 162 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_12:
# 162 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_up
# 162 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_up
# 162 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_up
	step_end

# 164 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_13:
# 164 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_left
# 164 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_question_mark
	step_end

# 172 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_GateHouseBattle_Movement_14:
# 172 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_right
	step_end

# 204 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_StairWebandKeyCheck_Movement_0:
# 204 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_down
# 204 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_down
	step_end

# 279 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_Brainwashed_Experts_Movement_0:
# 279 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_down
	step_end

# 290 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_Brainwashed_Experts_Movement_1:
# 290 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_fast_left
# 290 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_question_mark
# 290 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_slow_down
	step_end

# 291 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_Brainwashed_Experts_Movement_2:
# 291 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_fast_right
# 291 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_question_mark
# 291 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_slow_down
	step_end

# 304 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_Brainwashed_Experts_Movement_3:
# 304 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_slow_down
	step_end

# 349 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_Brainwashed_Gardener_Movement_0:
# 349 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_fast_left
# 349 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_fast_up
# 349 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_fast_right
# 349 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_player
	step_end

# 437 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_PoolGuard_Movement_0:
# 437 "data/maps/Shudderwood_Mansion/scripts.pory"
	jump_in_place_down
# 437 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 446 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_PoolGuard_Movement_1:
# 446 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_in_place_fast_up
	step_end

# 450 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_PoolGuard_Movement_2:
# 450 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_fast_down
	step_end

# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Mansion_PoolGuard_Movement_3:
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_left
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_left
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_left
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_left
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_left
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_left
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_left
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_down
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_down
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_down
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_down
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_down
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_down
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_down
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_down
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_down
# 452 "data/maps/Shudderwood_Mansion/scripts.pory"
	walk_faster_down
	step_end

# 467 "data/maps/Shudderwood_Mansion/scripts.pory"
Shudderwood_Captive_Maid_Movement_0:
# 467 "data/maps/Shudderwood_Mansion/scripts.pory"
	emote_heart
# 467 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_player
	step_end

# 518 "data/maps/Shudderwood_Mansion/scripts.pory"
Mansion_Master_Floor_Skip_Movement_0:
# 518 "data/maps/Shudderwood_Mansion/scripts.pory"
	face_up
	step_end

Shudderwood_Mansion_RandomEncounter_Text_0:
# 8 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Something is stirring in the shadows!$"

Shudderwood_Mansion_GateHouseBattle_Text_0:
# 114 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Seer June: You again? Ah, I was right to\n"
	.string "be wary of you!$"

Shudderwood_Mansion_GateHouseBattle_Text_1:
# 119 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Seer June: Attention, Drones! Behold\n"
	.string "the mighty guardian the Maven has\l"
	.string "bound to our will!$"

Shudderwood_Mansion_GateHouseBattle_Text_2:
# 132 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Pinsir: Krrrrrrraaarreeeeee!$"

Shudderwood_Mansion_GateHouseBattle_Text_3:
# 135 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Seer June: See how Pokémon like this,\n"
	.string "and even the Master of the Mansion, bow\l"
	.string "to our cause! What hope could you\l"
	.string "possibly have, Ranger?$"

Shudderwood_Mansion_GateHouseBattle_Text_4:
# 156 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Seer June: Impossible… How could a mere\n"
	.string "Ranger bring low such a mighty\l"
	.string "Pokémon?!$"

Shudderwood_Mansion_GateHouseBattle_Text_5:
# 168 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Seer June: What? Where are you going?\n"
	.string "Gah, we're out of defenses here!$"

Shudderwood_Mansion_GateHouseBattle_Text_6:
# 174 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Seer June: Fall back to the mansion!\n"
	.string "May the Maven show us mercy for this\l"
	.string "failure…$"

Shudderwood_Mansion_GateHouseBattle_Text_7:
# 185 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "With the Seer and her drones gone, the\n"
	.string "path into the mansion stands open.$"

Shudderwood_Mansion_StairWebandKeyCheck_Text_0:
# 200 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "There is a thick web covering an ornate\n"
	.string "keyhole embedded in the stairs. You\l"
	.string "need a key to unlock it.$"

Shudderwood_Mansion_StairWebandKeyCheck_Text_1:
# 209 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "There is a thick web covering an ornate\n"
	.string "keyhole embedded in the stairs.\p"
	.string "This web is too thick to CUT through\n"
	.string "right now. It must have been spun by a\l"
	.string "very powerful Pokémon.$"

Shudderwood_Mansion_StairWebandKeyCheck_Text_2:
# 220 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "There is a thick web covering an ornate\n"
	.string "keyhole embedded in the stairs.$"

Shudderwood_Mansion_StairWebandKeyCheck_Text_3:
# 223 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "You see the web is weaker from the\n"
	.string "efforts of the solvent!$"

Shudderwood_Mansion_StairWebandKeyCheck_Text_4:
# 226 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Would you like to CUT through the web,\n"
	.string "then use the Mansion Key to unlock the\l"
	.string "stairs?$"

Shudderwood_Mansion_StairWebandKeyCheck_Text_5:
# 231 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "You decided not to use the Mansion Key\n"
	.string "right now.$"

Shudderwood_Mansion_StairWebandKeyCheck_Text_6:
# 239 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "You don't have CUT in your party right\n"
	.string "now.$"

Shudderwood_Mansion_StairWebandKeyCheck_Text_7:
# 245 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "You use CUT to slice through the\n"
	.string "webbing covering the keyhole.$"

Shudderwood_Mansion_StairWebandKeyCheck_Text_8:
# 250 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Then you use the Mansion Key to unlock\n"
	.string "the stairs!$"

Shudderwood_Mansion_Brainwashed_Experts_Text_0:
# 262 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "You interrupt two figures working\n"
	.string "diligently at their crafts. One appears\l"
	.string "to be a maid sewing uniforms, while\p"
	.string "the other is a scientist working with\n"
	.string "Spewpa silk.$"

Shudderwood_Mansion_Brainwashed_Experts_Text_1:
# 270 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Brainwashed Lass: Uniform creation\n"
	.string "interrupted… Must repair… Return to\l"
	.string "work…$"

Shudderwood_Mansion_Brainwashed_Experts_Text_2:
# 275 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Brainwashed Maniac: Spewpa silk\n"
	.string "production must be protected…\l"
	.string "Intruder detected… Suppress…$"

Shudderwood_Mansion_Brainwashed_Experts_Text_3:
# 282 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "In Unison: Our purpose is given by the\n"
	.string "Maven… We must serve… We must obey… We\l"
	.string "must not fail…$"

Shudderwood_Mansion_Brainwashed_Experts_Text_4:
# 287 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Steve: What? Where am I?$"

Shudderwood_Mansion_Brainwashed_Experts_Text_5:
# 288 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Andrea: I can't remember\nanything!$"

Shudderwood_Mansion_Brainwashed_Experts_Text_6:
# 293 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Steve: I… I remember now! The mansion…\n"
	.string "the Seer… She did something to my mind!$"

Shudderwood_Mansion_Brainwashed_Experts_Text_7:
# 297 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Andrea: We were brainwashed to serve\n"
	.string "the Maven… Forced to sew those awful\l"
	.string "uniforms day and\p"
	.string "night! But now we're finally free!$"

Shudderwood_Mansion_Brainwashed_Experts_Text_8:
# 306 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Steve: Thank you, Ranger! We owe you\n"
	.string "our lives! I was studying Spewpa silk\l"
	.string "when they captured me.\p"
	.string "Here, take this solvent I developed. It\n"
	.string "should help dissolve the webs blocking\l"
	.string "the mansion stairs!$"

Shudderwood_Mansion_Brainwashed_Experts_Text_9:
# 316 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Andrea: I don't know how many of those\n"
	.string "silly uniforms I made under their\l"
	.string "control,\p"
	.string "but here's a token of my appreciation\n"
	.string "for freeing us!$"

Shudderwood_Mansion_Brainwashed_Experts_Text_10:
# 323 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Steve: Be careful, Ranger. The deeper\n"
	.string "you go, the more servants you'll find\l"
	.string "under the Maven's spell… and the\l"
	.string "stronger that spell feels.$"

Shudderwood_Mansion_Brainwashed_Experts_Text_11:
# 331 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "The two experts you freed earlier are\n"
	.string "hard at work again, this time for their\l"
	.string "own purposes.\p"
	.string "They smile and wave at you gratefully.$"

Shudderwood_Mansion_Brainwashed_Gardener_Text_0:
# 345 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "You approach a figure tending to the\n"
	.string "overgrown plants in the mansion's\l"
	.string "garden.$"

Shudderwood_Mansion_Brainwashed_Gardener_Text_1:
# 351 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Brainwashed Gardener: The garden must\n"
	.string "be perfect… Berries the perfect color…\l"
	.string "Leaves the perfect shape…$"

Shudderwood_Mansion_Brainwashed_Gardener_Text_2:
# 357 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Celina: I can't believe I\n"
	.string "let them control me like\n"
	.string "that!$"

Shudderwood_Mansion_Brainwashed_Gardener_Text_3:
# 361 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Celina: Thank you, Ranger! They forced\n"
	.string "me to tend these plants against my will.\p"
	.string "Here, take this watering pail. I need a\n"
	.string "little time before I can face gardening\l"
	.string "again.$"

Shudderwood_Mansion_Brainwashed_Gardener_Text_4:
# 371 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Celina: Be careful deeper in the\n"
	.string "mansion. The Maven has even charmed\l"
	.string "the old Master of the Mansion… and\l"
	.string "something worse may be waiting above.$"

Shudderwood_Mansion_Brainwashed_Gardener_Text_5:
# 380 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Celina: Thanks again for freeing me,\n"
	.string "Ranger.$"

Shudderwood_Mansion_RunningGuard_1_Text_0:
# 390 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: Intruder located.\n"
	.string "Engaging!$"

Shudderwood_Mansion_RunningGuard_1_Text_1:
# 392 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: Error. How did you\n"
	.string "bypass my sensors?$"

Shudderwood_Mansion_RunningGuard_1_Text_2:
# 395 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: Remain alert at all times. Those\n"
	.string "are the orders.$"

Shudderwood_Mansion_RunningGuard_2_Text_0:
# 406 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: Passage denied.\n"
	.string "You will proceed no further!$"

Shudderwood_Mansion_RunningGuard_2_Text_1:
# 408 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: System failure… I'm\n"
	.string "bugged out.$"

Shudderwood_Mansion_RunningGuard_2_Text_2:
# 411 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: All personnel here serve the\n"
	.string "Maven. Resistance is futile.$"

Shudderwood_Mansion_PoolGuard_Text_0:
# 421 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: Access denied. I am guarding the\n"
	.string "key. You will not pass.$"

Shudderwood_Mansion_PoolGuard_Text_1:
# 426 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: Critical blunder! I\n"
	.string "really buzzed it up!$"

Shudderwood_Mansion_PoolGuard_Text_2:
# 429 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: Buzz… defeated again, after\n"
	.string "losing the key in the first place!$"

Shudderwood_Mansion_PoolGuard_Text_3:
# 433 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: Perhaps I am not suited for\n"
	.string "drone duty after all…$"

Shudderwood_Mansion_PoolGuard_Text_4:
# 439 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: Wait! The Maven… She's in my\n"
	.string "head! No… I was wrong to doubt you,\l"
	.string "Maven! Please… make it stop!$"

Shudderwood_Mansion_PoolGuard_Text_5:
# 448 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Drone: My head! AAAAAAHHHH! GET AWAY!$"

Shudderwood_Captive_Maid_Text_0:
# 463 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Those drones locked me in here! They\n"
	.string "only let me out to clean the place!$"

Shudderwood_Captive_Maid_Text_1:
# 469 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Thank you for rescuing me, Ranger! I\n"
	.string "found this key while I was cleaning.\p"
	.string "It might help you get deeper into the\n"
	.string "mansion!$"

Shudderwood_Captive_Maid_Text_2:
# 478 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Thank you again for rescuing me,\n"
	.string "Ranger!\p"
	.string "I hope you're able to get through the\n"
	.string "mansion safely.$"

Shudderwood_Mansion_Brainwashed_Butler_Text_0:
# 490 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Butler: I must protect\n"
	.string "the mansion, whatever\n"
	.string "the cost!$"

Shudderwood_Mansion_Brainwashed_Butler_Text_1:
# 493 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Butler: Ugh… I've been defeated!$"

Shudderwood_Mansion_Brainwashed_Butler_Text_2:
# 495 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "Butler: My apologies, Ranger. I serve\n"
	.string "the master of the mansion, but he is\l"
	.string "under a terrible spell at present… and\l"
	.string "the house feels wrong because of it.$"

Mansion_Master_Floor_Skip_Text_0:
# 511 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "A chill runs down your spine. The Master\n"
	.string "of the Mansion lies ahead…\p"
	.string "Something in the dark feels wrong.\n"
	.string "Forge ahead?$"

Mansion_Master_Floor_Skip_Text_1:
# 523 "data/maps/Shudderwood_Mansion/scripts.pory"
	.string "You decide to turn back for now.$"
