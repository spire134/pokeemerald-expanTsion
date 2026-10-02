Quartzsite_MapScripts::
	.byte 0


Quartzite_Upper_Road::
# 4 "data/maps/Quartzsite/scripts.pory"
	lock
# 5 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_TO_BLACK
# 6 "data/maps/Quartzsite/scripts.pory"
	playse SE_DOOR
# 7 "data/maps/Quartzsite/scripts.pory"
	warp MAP_QUARTZ_TUNNELS, 3, 2
# 8 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 9 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartzite_Lower_Road::
# 13 "data/maps/Quartzsite/scripts.pory"
	lock
# 14 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/Quartzsite/scripts.pory"
	playse SE_DOOR
# 16 "data/maps/Quartzsite/scripts.pory"
	warp MAP_QUARTZ_TUNNELS, 17, 7
# 17 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 18 "data/maps/Quartzsite/scripts.pory"
	release
	return


Library_BackEntrance::
# 22 "data/maps/Quartzsite/scripts.pory"
	lock
# 23 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_TO_BLACK
# 24 "data/maps/Quartzsite/scripts.pory"
	playse SE_DOOR
# 25 "data/maps/Quartzsite/scripts.pory"
	warp MAP_QUARTZ_LIBRARY, 12, 4
# 26 "data/maps/Quartzsite/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 27 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartzite_Welcome_Sign::
# 31 "data/maps/Quartzsite/scripts.pory"
	lock
# 32 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartzite_Welcome_Sign_Text_0, MSGBOX_SIGN
# 33 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_BookStreetSign::
# 37 "data/maps/Quartzsite/scripts.pory"
	lock
# 38 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_BookStreetSign_Text_0, MSGBOX_SIGN
# 40 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_ResidenceStreetSign::
# 44 "data/maps/Quartzsite/scripts.pory"
	lock
# 45 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ResidenceStreetSign_Text_0, MSGBOX_SIGN
# 47 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_ScenicQuarryView::
# 51 "data/maps/Quartzsite/scripts.pory"
	lock
# 52 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_0, MSGBOX_SIGN
# 54 "data/maps/Quartzsite/scripts.pory"
	checkitem ITEM_SUPER_ROD
# 55 "data/maps/Quartzsite/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Quartz_ScenicQuarryView_2
# 82 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_5, MSGBOX_SIGN
Quartz_ScenicQuarryView_1:
# 86 "data/maps/Quartzsite/scripts.pory"
	release
	return

Quartz_ScenicQuarryView_2:
# 56 "data/maps/Quartzsite/scripts.pory"
	goto_if_set FLAG_FISHED_QUARRY_VIEW_RELICANTH, Quartz_ScenicQuarryView_7
Quartz_ScenicQuarryView_6:
# 60 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_2, MSGBOX_YESNO
# 63 "data/maps/Quartzsite/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Quartz_ScenicQuarryView_10
# 78 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_4
	goto Quartz_ScenicQuarryView_1

Quartz_ScenicQuarryView_5:
# 57 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_1, MSGBOX_SIGN
	goto Quartz_ScenicQuarryView_1

Quartz_ScenicQuarryView_7:
# 56 "data/maps/Quartzsite/scripts.pory"
	goto_if_set FLAG_FISHED_QUARRY_VIEW_OMANYTE, Quartz_ScenicQuarryView_5
	goto Quartz_ScenicQuarryView_6

Quartz_ScenicQuarryView_10:
# 64 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_ScenicQuarryView_Text_3
# 66 "data/maps/Quartzsite/scripts.pory"
	goto_if_unset FLAG_FISHED_QUARRY_VIEW_RELICANTH, Quartz_ScenicQuarryView_17
Quartz_ScenicQuarryView_16:
# 72 "data/maps/Quartzsite/scripts.pory"
	goto_if_unset FLAG_FISHED_QUARRY_VIEW_RELICANTH, Quartz_ScenicQuarryView_14
# 75 "data/maps/Quartzsite/scripts.pory"
	call Quartz_ScenicQuarryView_EncounterOmanyte
	goto Quartz_ScenicQuarryView_1

Quartz_ScenicQuarryView_13:
# 67 "data/maps/Quartzsite/scripts.pory"
	random 2
# 68 "data/maps/Quartzsite/scripts.pory"
	switch VAR_RESULT
# 69 "data/maps/Quartzsite/scripts.pory"
	case 0, Quartz_ScenicQuarryView_21
# 70 "data/maps/Quartzsite/scripts.pory"
	case 1, Quartz_ScenicQuarryView_22
	goto Quartz_ScenicQuarryView_1

Quartz_ScenicQuarryView_14:
# 73 "data/maps/Quartzsite/scripts.pory"
	call Quartz_ScenicQuarryView_EncounterRelicanth
	goto Quartz_ScenicQuarryView_1

Quartz_ScenicQuarryView_17:
# 66 "data/maps/Quartzsite/scripts.pory"
	goto_if_unset FLAG_FISHED_QUARRY_VIEW_OMANYTE, Quartz_ScenicQuarryView_13
	goto Quartz_ScenicQuarryView_16

Quartz_ScenicQuarryView_21:
# 69 "data/maps/Quartzsite/scripts.pory"
	call Quartz_ScenicQuarryView_EncounterRelicanth
	goto Quartz_ScenicQuarryView_1

Quartz_ScenicQuarryView_22:
# 70 "data/maps/Quartzsite/scripts.pory"
	call Quartz_ScenicQuarryView_EncounterOmanyte
	goto Quartz_ScenicQuarryView_1


Quartz_ScenicQuarryView_EncounterRelicanth::
# 90 "data/maps/Quartzsite/scripts.pory"
	setflag FLAG_FISHED_QUARRY_VIEW_RELICANTH
# 91 "data/maps/Quartzsite/scripts.pory"
	setwildbattle SPECIES_RELICANTH, 40
# 92 "data/maps/Quartzsite/scripts.pory"
	dowildbattle
	return


Quartz_ScenicQuarryView_EncounterOmanyte::
# 97 "data/maps/Quartzsite/scripts.pory"
	setflag FLAG_FISHED_QUARRY_VIEW_OMANYTE
# 98 "data/maps/Quartzsite/scripts.pory"
	setwildbattle SPECIES_OMANYTE, 20
# 99 "data/maps/Quartzsite/scripts.pory"
	dowildbattle
	return


Quartz_Hive_Blocker::
# 104 "data/maps/Quartzsite/scripts.pory"
	lock
# 105 "data/maps/Quartzsite/scripts.pory"
	faceplayer
# 106 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_Hive_Blocker_Text_0
# 108 "data/maps/Quartzsite/scripts.pory"
	waitmessage
# 109 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_StationSign::
# 113 "data/maps/Quartzsite/scripts.pory"
	lock
# 114 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_StationSign_Text_0
# 116 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_PumpSign::
# 120 "data/maps/Quartzsite/scripts.pory"
	lock
# 121 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_PumpSign_Text_0
# 123 "data/maps/Quartzsite/scripts.pory"
	release
	return


Quartz_Hive_LeftGuard::
# 127 "data/maps/Quartzsite/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_1, Quartz_Hive_LeftGuard_Text_0, Quartz_Hive_LeftGuard_Text_1
# 131 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_Hive_LeftGuard_Text_2, MSGBOX_AUTOCLOSE
# 132 "data/maps/Quartzsite/scripts.pory"
	waitmessage
	return


Quartz_Hive_RightGuard::
# 136 "data/maps/Quartzsite/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, Quartz_Hive_RightGuard_Text_0, Quartz_Hive_RightGuard_Text_1
# 140 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_Hive_RightGuard_Text_2, MSGBOX_AUTOCLOSE
# 141 "data/maps/Quartzsite/scripts.pory"
	waitmessage
	return


Quartz_Hive_RunningGuard::
# 145 "data/maps/Quartzsite/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, Quartz_Hive_RunningGuard_Text_0, Quartz_Hive_RunningGuard_Text_1
# 150 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_Hive_RunningGuard_Text_2, MSGBOX_AUTOCLOSE
# 151 "data/maps/Quartzsite/scripts.pory"
	waitmessage
	return


Quartz_GoodRod_Fisherman::
# 155 "data/maps/Quartzsite/scripts.pory"
	lock
# 156 "data/maps/Quartzsite/scripts.pory"
	faceplayer
# 157 "data/maps/Quartzsite/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, Quartz_GoodRod_Fisherman_2
# 166 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_GoodRod_Fisherman_Text_2
Quartz_GoodRod_Fisherman_1:
# 168 "data/maps/Quartzsite/scripts.pory"
	release
	return

Quartz_GoodRod_Fisherman_2:
# 158 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_GoodRod_Fisherman_Text_0
# 160 "data/maps/Quartzsite/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 161 "data/maps/Quartzsite/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 162 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_GoodRod_Fisherman_Text_1
	goto Quartz_GoodRod_Fisherman_1


Quartz_Fountain_Boy::
# 172 "data/maps/Quartzsite/scripts.pory"
	lock
# 173 "data/maps/Quartzsite/scripts.pory"
	faceplayer
# 174 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_Fountain_Boy_Text_0
# 177 "data/maps/Quartzsite/scripts.pory"
	release
	end


Quartz_Bored_Mom_Reading::
# 182 "data/maps/Quartzsite/scripts.pory"
	lock
# 183 "data/maps/Quartzsite/scripts.pory"
	faceplayer
# 184 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_Bored_Mom_Reading_Text_0
# 187 "data/maps/Quartzsite/scripts.pory"
	release
	end


Quartz_FatStoneFan::
# 192 "data/maps/Quartzsite/scripts.pory"
	lock
# 193 "data/maps/Quartzsite/scripts.pory"
	faceplayer
# 194 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_FatStoneFan_Text_0
# 196 "data/maps/Quartzsite/scripts.pory"
	release
	end


Quartz_DeepQuarryLore::
# 201 "data/maps/Quartzsite/scripts.pory"
	lock
# 202 "data/maps/Quartzsite/scripts.pory"
	faceplayer
# 203 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_DeepQuarryLore_Text_0
# 207 "data/maps/Quartzsite/scripts.pory"
	release
	end


Quartz_WhereStoneBoy::
# 212 "data/maps/Quartzsite/scripts.pory"
	lock
# 213 "data/maps/Quartzsite/scripts.pory"
	faceplayer
# 214 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_WhereStoneBoy_Text_0
# 217 "data/maps/Quartzsite/scripts.pory"
	release
	end


Quartz_PumpHouseWorker::
# 222 "data/maps/Quartzsite/scripts.pory"
	lock
# 223 "data/maps/Quartzsite/scripts.pory"
	faceplayer
# 224 "data/maps/Quartzsite/scripts.pory"
	msgbox Quartz_PumpHouseWorker_Text_0
# 228 "data/maps/Quartzsite/scripts.pory"
	release
	end


Quartzite_Welcome_Sign_Text_0:
# 32 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzsite: The Bedrock of Society!$"

Quartz_BookStreetSign_Text_0:
# 38 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzite Book Street\n"
	.string "Home to the Quartzite Library$"

Quartz_ResidenceStreetSign_Text_0:
# 45 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzite Slate Street\n"
	.string "Peaceful homes for hardworking\l"
	.string "citizens$"

Quartz_ScenicQuarryView_Text_0:
# 52 "data/maps/Quartzsite/scripts.pory"
	.string "You gaze out over the vast quarry.\n"
	.string "Water cascades down the rocky walls,$"

Quartz_ScenicQuarryView_Text_1:
# 57 "data/maps/Quartzsite/scripts.pory"
	.string "and you notice the pond below.\p"
	.string "The water is calm and still. It seems\n"
	.string "whatever was biting has moved on.$"

Quartz_ScenicQuarryView_Text_2:
# 60 "data/maps/Quartzsite/scripts.pory"
	.string "and you notice a glimmering pond below.\p"
	.string "It looks like a great spot to fish!\p"
	.string "Cast your Super Rod here to see what\n"
	.string "you can catch!$"

Quartz_ScenicQuarryView_Text_3:
# 64 "data/maps/Quartzsite/scripts.pory"
	.string "You cast your Super Rod into the pond\n"
	.string "and wait patiently.\n"
	.string "After a few moments, you feel a tug on\l"
	.string "the line!$"

Quartz_ScenicQuarryView_Text_4:
# 78 "data/maps/Quartzsite/scripts.pory"
	.string "You decide not to fish here right now.$"

Quartz_ScenicQuarryView_Text_5:
# 82 "data/maps/Quartzsite/scripts.pory"
	.string "You notice a glimmering pond below.\p"
	.string "It looks like a great spot to fish!\p"
	.string "If you had a Super Rod, you could cast\n"
	.string "it here to see what you can catch!$"

Quartz_Hive_Blocker_Text_0:
# 106 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: Buzz off, Ranger! You won't\n"
	.string "be getting through here today!\p"
	.string "The Seer runs this city now!$"

Quartz_StationSign_Text_0:
# 114 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzite Station\n"
	.string "Senior Ranger: Captain Rojan$"

Quartz_PumpSign_Text_0:
# 121 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzsite Pump House\n"
	.string "Keeping the Quarry Clear!$"

Quartz_Hive_LeftGuard_Text_0:
# 128 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: You think you can just walk\n"
	.string "around here?\n"
	.string "$"

Quartz_Hive_LeftGuard_Text_1:
# 129 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: Ugh… You got lucky this\n"
	.string "time, Ranger.$"

Quartz_Hive_LeftGuard_Text_2:
# 131 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: The Seer won't be pleased…$"

Quartz_Hive_RightGuard_Text_0:
# 137 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: This area is off-limits to\n"
	.string "Rangers!\n"
	.string "$"

Quartz_Hive_RightGuard_Text_1:
# 138 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: No... How could I lose to a\n"
	.string "Ranger…$"

Quartz_Hive_RightGuard_Text_2:
# 140 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: The Seer punish us for\n"
	.string "this…$"

Quartz_Hive_RunningGuard_Text_0:
# 146 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: You can't be here, Ranger!\n"
	.string "The Seer is set on the mission!$"

Quartz_Hive_RunningGuard_Text_1:
# 148 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: At least I slowed you down,\n"
	.string "haha!$"

Quartz_Hive_RunningGuard_Text_2:
# 150 "data/maps/Quartzsite/scripts.pory"
	.string "Hive Drone: The Seer will be unhappy…$"

Quartz_GoodRod_Fisherman_Text_0:
# 158 "data/maps/Quartzsite/scripts.pory"
	.string "Fisherman: That look in your eyes tells\n"
	.string "me you're itching for a fishing.\p"
	.string "Here, take this Good Rod. It's a great\n"
	.string "way to curb those angling cravings!$"

Quartz_GoodRod_Fisherman_Text_1:
# 162 "data/maps/Quartzsite/scripts.pory"
	.string "Fisherman: With this rod, you'll be\n"
	.string "reeling in Pokémon in no time!\p"
	.string "Just head to any body of water and give\n"
	.string "it a try. Happy fishing!$"

Quartz_GoodRod_Fisherman_Text_2:
# 166 "data/maps/Quartzsite/scripts.pory"
	.string "Fisherman: Remember, fishing is all\n"
	.string "about patience and timing.\p"
	.string "$"

Quartz_Fountain_Boy_Text_0:
# 174 "data/maps/Quartzsite/scripts.pory"
	.string "Halt, cave beast! By the power of the\n"
	.string "First Pick, I claim this vein of pure\l"
	.string "quartz for the guild!\p"
	.string "Hah! Hyah! Take that!\p"
	.string "My granddad says the original miners\n"
	.string "cleared out entire subterranean\l"
	.string "caverns using iron picks and pure grit!!$"

Quartz_Bored_Mom_Reading_Text_0:
# 184 "data/maps/Quartzsite/scripts.pory"
	.string "Mmm-hmm... keep swinging sweetie, just\n"
	.string "watch your balance near the edge.\p"
	.string "I checked out this historical chronicle\n"
	.string "from the library to pass the afternoon.\p"
	.string "The early trade disputes between the\n"
	.string "founding quarry guilds and the coastal\l"
	.string "shipping barons are surprisingly\l"
	.string "scandalous.$"

Quartz_FatStoneFan_Text_0:
# 194 "data/maps/Quartzsite/scripts.pory"
	.string "Those double doors behind me lead right\n"
	.string "into the Stone Emporium!\p"
	.string "If you have a Pokémon primed to evolve,\n"
	.string "they keep elemental stones lined up\l"
	.string "right along the front counter.$"

Quartz_DeepQuarryLore_Text_0:
# 203 "data/maps/Quartzsite/scripts.pory"
	.string "Do you know just how deep the\n"
	.string "Quartzite Quarry plunges?\p"
	.string "The deepest shafts descend over four\n"
	.string "hundred paces straight into the earth!\p"
	.string "Old survey maps show the lowest levels\n"
	.string "breaking directly into ancient\l"
	.string "subterranean caverns.\p"
	.string "With the river flooding the pit, all\n"
	.string "those deep galleries are submerged in\l"
	.string "pitch-black water.$"

Quartz_WhereStoneBoy_Text_0:
# 214 "data/maps/Quartzsite/scripts.pory"
	.string "Quartzite rock gets hauled all across\n"
	.string "Corymbra for major engineering\l"
	.string "projects!\p"
	.string "That colossal watchtower out in the\n"
	.string "Sandistan desert region was\l"
	.string "constructed using blocks cut right\l"
	.string "here.\p"
	.string "Knowing stone from our town is the\n"
	.string "foundation that keeps the entire\l"
	.string "region stable is an amazing feeling!$"

Quartz_PumpHouseWorker_Text_0:
# 224 "data/maps/Quartzsite/scripts.pory"
	.string "Pumping out a flooded quarry requires\n"
	.string "massive machinery and endless\l"
	.string "maintenance.\p"
	.string "River silt, driftwood, and stubborn wild\n"
	.string "Pokémon keep jamming the intake grates\l"
	.string "down in the reservoir.\p"
	.string "Our specialist crew has to DIVE deep\n"
	.string "underwater to clear the turbine blades\l"
	.string "by hand.\p"
	.string "Plunging down into flooded machinery\n"
	.string "takes serious nerve.$"
