Hazolt_LoreHouse_MapScripts::
	.byte 0


Hazolt_OldMan::
# 4 "data/maps/Hazolt_LoreHouse/scripts.pory"
	lockall
# 5 "data/maps/Hazolt_LoreHouse/scripts.pory"
	applymovement LOCALID_HAZOLT_OLDMAN, Hazolt_OldMan_Movement_0
# 6 "data/maps/Hazolt_LoreHouse/scripts.pory"
	msgbox Hazolt_OldMan_Text_0
# 7 "data/maps/Hazolt_LoreHouse/scripts.pory"
	msgbox Hazolt_OldMan_Text_1
# 8 "data/maps/Hazolt_LoreHouse/scripts.pory"
	releaseall
	end


Hazolt_OldWoman::
# 13 "data/maps/Hazolt_LoreHouse/scripts.pory"
	lockall
# 14 "data/maps/Hazolt_LoreHouse/scripts.pory"
	applymovement LOCALID_HAZOLT_OLDWOMAN, Hazolt_OldMan_Movement_0
# 15 "data/maps/Hazolt_LoreHouse/scripts.pory"
	msgbox Hazolt_OldWoman_Text_0
# 16 "data/maps/Hazolt_LoreHouse/scripts.pory"
	msgbox Hazolt_OldWoman_Text_1
# 17 "data/maps/Hazolt_LoreHouse/scripts.pory"
	releaseall
	end


# 5 "data/maps/Hazolt_LoreHouse/scripts.pory"
Hazolt_OldMan_Movement_0:
# 5 "data/maps/Hazolt_LoreHouse/scripts.pory"
	face_player
	step_end

Hazolt_OldMan_Text_0:
# 6 "data/maps/Hazolt_LoreHouse/scripts.pory"
	.string "We first moved here when we were\n"
	.string "children. Our parents wanted us to have\l"
	.string "a fresh start.$"

Hazolt_OldMan_Text_1:
# 7 "data/maps/Hazolt_LoreHouse/scripts.pory"
	.string "We've lived here ever since. It's a quiet\n"
	.string "life, but we like it that way.$"

Hazolt_OldWoman_Text_0:
# 15 "data/maps/Hazolt_LoreHouse/scripts.pory"
	.string "When we first moved here, there were\n"
	.string "only a few houses.$"

Hazolt_OldWoman_Text_1:
# 16 "data/maps/Hazolt_LoreHouse/scripts.pory"
	.string "Now, the town has really grown! It's\n"
	.string "nice to see new faces around.$"
