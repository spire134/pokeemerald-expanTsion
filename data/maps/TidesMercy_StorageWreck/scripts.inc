TidesMercy_StorageWreck_MapScripts::
	.byte 0


Wreck_Exposition_Pirate::
# 4 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, Wreck_Exposition_Pirate_Text_0, Wreck_Exposition_Pirate_Text_1
# 8 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Exposition_Pirate_Text_2, MSGBOX_AUTOCLOSE
# 9 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
	return


Wreck_Grab_Pirate::
# 13 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, Wreck_Grab_Pirate_Text_0, Wreck_Grab_Pirate_Text_1
# 16 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Grab_Pirate_Text_2, MSGBOX_AUTOCLOSE
# 17 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
	return


Wreck_GangUp_Pirate::
# 21 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, Wreck_GangUp_Pirate_Text_0, Wreck_GangUp_Pirate_Text_1
# 25 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_GangUp_Pirate_Text_2, MSGBOX_AUTOCLOSE
# 26 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
	return


Wreck_Suprise_Grab::
# 30 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	goto_if_unset FLAG_CLEARED_TIDESMERCYWRECK, Wreck_Suprise_Grab_1
	end

Wreck_Suprise_Grab_1:
# 31 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	lockall
# 32 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	playse SE_PIN
# 33 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_GRAB_PIRATE, Wreck_Suprise_Grab_Movement_0
# 34 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 35 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Suprise_Grab_Text_0
# 36 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
# 37 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_GANGUP_PIRATE, Wreck_Suprise_Grab_Movement_1
# 38 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 39 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Suprise_Grab_Text_1
# 40 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
# 41 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	trainerbattle_two_trainers TRAINER_GRUNT_AQUA_HIDEOUT_2, Wreck_GangUp_Pirate_Text_1, TRAINER_GRUNT_AQUA_HIDEOUT_3, Wreck_Grab_Pirate_Text_1
# 42 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	releaseall
	return


Wreck_Strong_Pirate::
# 50 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, Wreck_Strong_Pirate_Text_0, Wreck_Strong_Pirate_Text_1
# 54 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Strong_Pirate_Text_2, MSGBOX_AUTOCLOSE
# 55 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
	return


Wreck_GarrickLore_Pirate::
# 59 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, Wreck_GarrickLore_Pirate_Text_0, Wreck_GarrickLore_Pirate_Text_1
# 63 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_GarrickLore_Pirate_Text_2, MSGBOX_AUTOCLOSE
# 64 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
	return


GarrickLootsThenRuns::
# 68 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, GarrickLootsThenRuns_2
# 71 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	lockall
# 72 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	playse SE_PIN
# 73 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_GARRICK, GarrickLootsThenRuns_Movement_0
# 74 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_FIRSTMATE, GarrickLootsThenRuns_Movement_1
# 75 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 76 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox GarrickLootsThenRuns_Text_0
# 79 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
# 80 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_GARRICK, GarrickLootsThenRuns_Movement_2
# 81 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 82 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	removeobject LOCALID_WRECK_GARRICK
# 83 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	playse SE_EXIT
# 84 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	call Wreck_Pirate_FirstMate
# 85 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	releaseall
	return

GarrickLootsThenRuns_2:
	end


Wreck_Pirate_FirstMate::
# 89 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	lockall
# 90 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	playse SE_PIN
# 91 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_FIRSTMATE, Wreck_Pirate_FirstMate_Movement_0
# 92 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 93 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Pirate_FirstMate_Text_0
# 94 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
# 95 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_FIRSTMATE, Wreck_Pirate_FirstMate_Movement_1
# 96 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 97 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Pirate_FirstMate_Text_1
# 100 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
# 101 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, Wreck_Pirate_FirstMate_Text_2
# 102 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Pirate_FirstMate_Text_3
# 103 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
# 104 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	setflag FLAG_CLEARED_TIDESMERCYWRECK
# 105 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Pirate_FirstMate_Text_4
# 108 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_FIRSTMATE, Wreck_Pirate_FirstMate_Movement_2
# 111 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 112 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	removeobject LOCALID_WRECK_FIRSTMATE
# 113 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	releaseall
	return


StorageWreck_Empty_Item_Ball::
# 117 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	lock
# 118 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox StorageWreck_Empty_Item_Ball_Text_0
# 120 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	setflag FLAG_TEMP_1
# 121 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	removeobject LOCALID_EMPTY_ITEM_BALL
# 122 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	release
	return


Wreck_Tasmin_Entrance::
# 126 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	lock
# 127 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	faceplayer
# 128 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Wreck_Tasmin_Entrance_2
Wreck_Tasmin_Entrance_1:
# 130 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	goto_if_unset FLAG_MET_TASMIN_STORAGE_WRECK, Wreck_Tasmin_Entrance_5
Wreck_Tasmin_Entrance_4:
# 140 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Tasmin_Entrance_Text_1, MSGBOX_YESNO
# 142 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Wreck_Tasmin_Entrance_8
# 149 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Tasmin_Entrance_Text_3
# 150 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
Wreck_Tasmin_Entrance_7:
# 152 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	release
	return

Wreck_Tasmin_Entrance_2:
	goto Wreck_Tasmin_Entrance_1

Wreck_Tasmin_Entrance_5:
# 131 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	setflag FLAG_MET_TASMIN_STORAGE_WRECK
# 132 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Tasmin_Entrance_Text_0
# 138 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
	goto Wreck_Tasmin_Entrance_4

Wreck_Tasmin_Entrance_8:
# 143 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	special HealPlayerParty
# 144 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	playse MUS_HEAL
# 145 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitse
# 146 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Tasmin_Entrance_Text_2
# 147 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
	goto Wreck_Tasmin_Entrance_7


# 33 "data/maps/TidesMercy_StorageWreck/scripts.pory"
Wreck_Suprise_Grab_Movement_0:
# 33 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	face_player
# 33 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	emote_exclamation_mark
	step_end

# 37 "data/maps/TidesMercy_StorageWreck/scripts.pory"
Wreck_Suprise_Grab_Movement_1:
# 37 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_left
# 37 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_left
# 37 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_left
# 37 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_down
# 37 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	face_left
	step_end

# 73 "data/maps/TidesMercy_StorageWreck/scripts.pory"
GarrickLootsThenRuns_Movement_0:
# 73 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	emote_exclamation_mark
# 73 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_in_place_fast_left
	step_end

# 74 "data/maps/TidesMercy_StorageWreck/scripts.pory"
GarrickLootsThenRuns_Movement_1:
# 74 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	emote_exclamation_mark
# 74 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	face_left
# 74 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	face_right
	step_end

# 80 "data/maps/TidesMercy_StorageWreck/scripts.pory"
GarrickLootsThenRuns_Movement_2:
# 80 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_up
# 80 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_up
	step_end

# 91 "data/maps/TidesMercy_StorageWreck/scripts.pory"
Wreck_Pirate_FirstMate_Movement_0:
# 91 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	emote_exclamation_mark
# 91 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	face_left
	step_end

# 95 "data/maps/TidesMercy_StorageWreck/scripts.pory"
Wreck_Pirate_FirstMate_Movement_1:
# 95 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_left
# 95 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_left
# 95 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_left
	step_end

# 108 "data/maps/TidesMercy_StorageWreck/scripts.pory"
Wreck_Pirate_FirstMate_Movement_2:
# 109 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_right
# 109 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_right
# 109 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_right
# 110 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_right
# 110 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_right
# 110 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_up
# 110 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_up
	step_end

Wreck_Exposition_Pirate_Text_0:
# 5 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "You be too late, Ranger!\p"
	.string "This ship's treasures belong to us now!$"

Wreck_Exposition_Pirate_Text_1:
# 7 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "You'll never stop us, Ranger!$"

Wreck_Exposition_Pirate_Text_2:
# 8 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Yar har har! This ship is ours now!$"

Wreck_Grab_Pirate_Text_0:
# 14 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: At least you're not sneaking\n"
	.string "past us!$"

Wreck_Grab_Pirate_Text_1:
# 15 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: You'll regret crossing us!$"

Wreck_Grab_Pirate_Text_2:
# 16 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: Ha! You fell right into our trap!$"

Wreck_GangUp_Pirate_Text_0:
# 22 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: Walking right into an ambush,\n"
	.string "now that's a Ranger!\p"
	.string "Prepare to be boarded!$"

Wreck_GangUp_Pirate_Text_1:
# 24 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: This is the end for me!$"

Wreck_GangUp_Pirate_Text_2:
# 25 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: You'll never stop us!$"

Wreck_Suprise_Grab_Text_0:
# 35 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: Got ourselves a sneaky little\n"
	.string "varmit here!$"

Wreck_Suprise_Grab_Text_1:
# 39 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: You're outnumbered now, Ranger!\p"
	.string "Prepare to be boarded!$"

Wreck_Strong_Pirate_Text_0:
# 51 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: You think you can take me on,\n"
	.string "land lubber?\p"
	.string "Prepare to be sunk!$"

Wreck_Strong_Pirate_Text_1:
# 53 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Argh… Right in the pirate pride!$"

Wreck_Strong_Pirate_Text_2:
# 54 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: You'll regret underestimating\n"
	.string "us!$"

Wreck_GarrickLore_Pirate_Text_0:
# 60 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: All these top notch goods are\n"
	.string "ours for the taking!\p"
	.string "You won't be getting any of it!$"

Wreck_GarrickLore_Pirate_Text_1:
# 62 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Oh no! Captaaaaaaain!$"

Wreck_GarrickLore_Pirate_Text_2:
# 63 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: The Captain will make you pay\n"
	.string "for this!$"

GarrickLootsThenRuns_Text_0:
# 77 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Garrick: Rangers here already? Must be\n"
	.string "a new batch at the old HQ.\p"
	.string "Argh. Callie, clean up here while I haul\n"
	.string "this back for the quartermaster.$"

Wreck_Pirate_FirstMate_Text_0:
# 93 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Callie: Captain's orders, I'm going to\n"
	.string "throw you overboard!$"

Wreck_Pirate_FirstMate_Text_1:
# 98 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Callie: You Rangers don't realize the\n"
	.string "new laws of this island!\p"
	.string "This ship and all its contents belong to\n"
	.string "us now!$"

Wreck_Pirate_FirstMate_Text_2:
# 101 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Callie: Gah, but you're too late!$"

Wreck_Pirate_FirstMate_Text_3:
# 102 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Callie: How could I lose to another\n"
	.string "Ranger…$"

Wreck_Pirate_FirstMate_Text_4:
# 106 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Per the quartermaster, I'd already\n"
	.string "logged the best treasure.\p"
	.string "You'll never beat us at the hideout!$"

StorageWreck_Empty_Item_Ball_Text_0:
# 118 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "There is nothing left here.\p"
	.string "Those darn pirates already took\n"
	.string "everything of value!$"

Wreck_Tasmin_Entrance_Text_0:
# 133 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Tasmin: There you are. I'm holding the\n"
	.string "entrance in case anyone needs patching\l"
	.string "up.\p"
	.string "Corrin may have reffered to me as 'the\n"
	.string "quartermaster.' I am not the\l"
	.string "quartermaster.\p"
	.string "I'm a logistics coordinator. The\n"
	.string "difference is I don't answer to 'ahoy,'\l"
	.string "and my inventory sheets are\l"
	.string "alphabetized. Remember, the pirates are\l"
	.string "still around, so stay vigilant. Clear the\l"
	.string "place efficiently and safely!$"

Wreck_Tasmin_Entrance_Text_1:
# 140 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Make sure you report back to Mara with\n"
	.string "me when you're done here.\p"
	.string "Tasmin: Would you like me to patch up\n"
	.string "your POKéMON before you go further?$"

Wreck_Tasmin_Entrance_Text_2:
# 146 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Tasmin: All set. I'm always prepared for\n"
	.string "anything.$"

Wreck_Tasmin_Entrance_Text_3:
# 149 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Tasmin: Suit yourself.$"
