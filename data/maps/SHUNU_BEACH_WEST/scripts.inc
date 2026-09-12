SHUNU_BEACH_WEST_MapScripts::
	.byte 0


ShunuBeach_Beauty_Fight::
# 4 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	trainerbattle_single TRAINER_THALIA_2, ShunuBeach_Beauty_Fight_Text_0, ShunuBeach_Beauty_Fight_Text_1
# 10 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	msgbox ShunuBeach_Beauty_Fight_Text_2, MSGBOX_AUTOCLOSE
# 13 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	waitmessage
	return


ShunuBeach_Fisherman_Fight::
# 17 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, ShunuBeach_Fisherman_Fight_Text_0, ShunuBeach_Fisherman_Fight_Text_1
# 23 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	msgbox ShunuBeach_Fisherman_Fight_Text_2, MSGBOX_AUTOCLOSE
# 26 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	waitmessage
	return


Hazolt_Sign::
# 30 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	lock
# 31 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	goto_if_unset FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Sign_2
# 38 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	msgbox Hazolt_Sign_Text_1
Hazolt_Sign_1:
# 41 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	release
	end

Hazolt_Sign_2:
# 32 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	msgbox Hazolt_Sign_Text_0
	goto Hazolt_Sign_1


ShunuBeach_LostGirl::
# 46 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	lock
# 47 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	faceplayer
# 48 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	goto_if_set FLAG_SHUNU_LOST_GIRL_SAVED, ShunuBeach_LostGirl_2
# 55 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	checkpartymove MOVE_SURF
# 56 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ShunuBeach_LostGirl_5
# 65 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	msgbox ShunuBeach_LostGirl_Text_2
# 68 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	waitmessage
# 69 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	playse SE_PIN
# 70 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	waitse
# 71 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	msgbox ShunuBeach_LostGirl_Text_3
# 75 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	waitmessage
# 76 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	giveitem ITEM_NUGGET
# 77 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	msgbox ShunuBeach_LostGirl_Text_4
# 80 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	setflag FLAG_SHUNU_LOST_GIRL_SAVED
# 81 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	removeobject LOCALID_LOST_GIRL
# 82 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	release
	end

ShunuBeach_LostGirl_2:
# 49 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	msgbox ShunuBeach_LostGirl_Text_0
# 52 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	release
	end

ShunuBeach_LostGirl_5:
# 57 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	msgbox ShunuBeach_LostGirl_Text_1
# 62 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	release
	end


ShunuBeach_Beauty_Fight_Text_0:
# 5 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Beauty: Pearls are the\n"
	.string "only treasure worth\n"
	.string "chasing.$"

ShunuBeach_Beauty_Fight_Text_1:
# 8 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Beauty: Hmph. Then I'll\n"
	.string "simply find a finer one.$"

ShunuBeach_Beauty_Fight_Text_2:
# 10 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Beauty: When the tide is\n"
	.string "right, the sea gives up\n"
	.string "its prettiest gems.$"

ShunuBeach_Fisherman_Fight_Text_0:
# 18 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Fisherman: I cast for fish,\n"
	.string "not for another busted\n"
	.string "crate!$"

ShunuBeach_Fisherman_Fight_Text_1:
# 21 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Fisherman: The sea can\n"
	.string "keep its junk. I'm done.$"

ShunuBeach_Fisherman_Fight_Text_2:
# 23 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Fisherman: If I hook one\n"
	.string "more piece of flotsam, I'm\n"
	.string "throwing this rod in!$"

Hazolt_Sign_Text_0:
# 32 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "North: Hazolt Village\n"
	.string "Fresh water available!\p"
	.string "Pirate graffiti:\n"
	.string "Keep moving. We own\n"
	.string "the shore!$"

Hazolt_Sign_Text_1:
# 38 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "North: Hazolt Village\n"
	.string "Fresh water available!$"

ShunuBeach_LostGirl_Text_0:
# 49 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Lost Girl: Thank you again\n"
	.string "for helping me, Ranger.\n"
	.string "I made it back safely.$"

ShunuBeach_LostGirl_Text_1:
# 57 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Lost Girl: I can't get\n"
	.string "back to shore without\n"
	.string "SURF… Please come back\n"
	.string "when you can cross the\n"
	.string "water.$"

ShunuBeach_LostGirl_Text_2:
# 65 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Lost Girl: You can use\n"
	.string "SURF? Please, take me\n"
	.string "back to the mainland!$"

ShunuBeach_LostGirl_Text_3:
# 71 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Lost Girl: I was trying\n"
	.string "to follow the current and\n"
	.string "got turned around out\n"
	.string "here… I'm so relieved!$"

ShunuBeach_LostGirl_Text_4:
# 77 "data/maps/SHUNU_BEACH_WEST/scripts.pory"
	.string "Lost Girl: Please take this\n"
	.string "Nugget. You saved me more\n"
	.string "than once today!$"
