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


GarrickLootsThenRuns::
# 50 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, GarrickLootsThenRuns_2
# 53 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	lockall
# 54 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	playse SE_PIN
# 55 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_GARRICK, GarrickLootsThenRuns_Movement_0
# 56 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_FIRSTMATE, GarrickLootsThenRuns_Movement_1
# 57 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 58 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox GarrickLootsThenRuns_Text_0
# 61 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
# 62 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_GARRICK, GarrickLootsThenRuns_Movement_2
# 63 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 64 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	removeobject LOCALID_WRECK_GARRICK
# 65 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	playse SE_EXIT
# 66 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	call Wreck_Pirate_FirstMate
# 67 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	releaseall
	return

GarrickLootsThenRuns_2:
	end


Wreck_Pirate_FirstMate::
# 71 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	lockall
# 72 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	playse SE_PIN
# 73 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_FIRSTMATE, Wreck_Pirate_FirstMate_Movement_0
# 74 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 75 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Pirate_FirstMate_Text_0
# 76 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
# 77 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_FIRSTMATE, Wreck_Pirate_FirstMate_Movement_1
# 78 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 79 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Pirate_FirstMate_Text_1
# 82 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
# 83 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, Wreck_Pirate_FirstMate_Text_2
# 84 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Pirate_FirstMate_Text_3
# 85 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmessage
# 86 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	setflag FLAG_CLEARED_TIDESMERCYWRECK
# 87 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox Wreck_Pirate_FirstMate_Text_4
# 90 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	applymovement LOCALID_WRECK_FIRSTMATE, Wreck_Pirate_FirstMate_Movement_2
# 93 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	waitmovement 0
# 94 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	removeobject LOCALID_WRECK_FIRSTMATE
# 95 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	releaseall
	return


StorageWreck_Empty_Item_Ball::
# 99 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	lock
# 100 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	msgbox StorageWreck_Empty_Item_Ball_Text_0
# 102 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	setflag FLAG_TEMP_1
# 103 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	removeobject LOCALID_EMPTY_ITEM_BALL
# 104 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	release
	return


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

# 55 "data/maps/TidesMercy_StorageWreck/scripts.pory"
GarrickLootsThenRuns_Movement_0:
# 55 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	emote_exclamation_mark
# 55 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_in_place_fast_left
	step_end

# 56 "data/maps/TidesMercy_StorageWreck/scripts.pory"
GarrickLootsThenRuns_Movement_1:
# 56 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	emote_exclamation_mark
# 56 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	face_left
# 56 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	face_right
	step_end

# 62 "data/maps/TidesMercy_StorageWreck/scripts.pory"
GarrickLootsThenRuns_Movement_2:
# 62 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_up
# 62 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_up
	step_end

# 73 "data/maps/TidesMercy_StorageWreck/scripts.pory"
Wreck_Pirate_FirstMate_Movement_0:
# 73 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	emote_exclamation_mark
# 73 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	face_left
	step_end

# 77 "data/maps/TidesMercy_StorageWreck/scripts.pory"
Wreck_Pirate_FirstMate_Movement_1:
# 77 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_left
# 77 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_left
# 77 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_fast_left
	step_end

# 90 "data/maps/TidesMercy_StorageWreck/scripts.pory"
Wreck_Pirate_FirstMate_Movement_2:
# 91 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_right
# 91 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_right
# 91 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_right
# 92 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_right
# 92 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_right
# 92 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_up
# 92 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	walk_faster_up
	step_end

Wreck_Exposition_Pirate_Text_0:
# 5 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "You're too late, Ranger! This ship's\n"
	.string "treasures belong to us now!$"

Wreck_Exposition_Pirate_Text_1:
# 7 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "You'll never stop us, Ranger!$"

Wreck_Exposition_Pirate_Text_2:
# 8 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Heh heh heh... This ship is ours now!$"

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
	.string "now that's a Ranger! Prepare to be\l"
	.string "boarded!$"

Wreck_GangUp_Pirate_Text_1:
# 24 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: This is the end for me!$"

Wreck_GangUp_Pirate_Text_2:
# 25 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: You'll never escape us now!$"

Wreck_Suprise_Grab_Text_0:
# 35 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: Thought you could sneak past\n"
	.string "us, did you?$"

Wreck_Suprise_Grab_Text_1:
# 39 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Pirate: You're outnumbered now, Ranger!\p"
	.string "Prepare to be boarded!$"

GarrickLootsThenRuns_Text_0:
# 59 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Garrick: Rangers here already? Must be\n"
	.string "a new batch at the old HQ.\p"
	.string "Callie, you clean up here while I haul\n"
	.string "this back to base.$"

Wreck_Pirate_FirstMate_Text_0:
# 75 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Callie: Captain's orders, I'm going to\n"
	.string "throw you overboard!\p"
	.string "$"

Wreck_Pirate_FirstMate_Text_1:
# 80 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Callie: You Rangers don't realize the\n"
	.string "new laws of this island!\p"
	.string "This ship and all its contents belong to\n"
	.string "us now!$"

Wreck_Pirate_FirstMate_Text_2:
# 83 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Callie: Gah, but you're too late!$"

Wreck_Pirate_FirstMate_Text_3:
# 84 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "Callie: How could I lose to a Ranger…$"

Wreck_Pirate_FirstMate_Text_4:
# 88 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "The Captain already got the best\n"
	.string "treasure! You'll never beat us at the\l"
	.string "hideout!$"

StorageWreck_Empty_Item_Ball_Text_0:
# 100 "data/maps/TidesMercy_StorageWreck/scripts.pory"
	.string "There is nothing left here. Those darn\n"
	.string "pirates already took everything of\l"
	.string "value!$"
