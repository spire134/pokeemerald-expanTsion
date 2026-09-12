Quartzite_Mart_MapScripts::
	.byte 0


Quartz_MartEmployee::
# 4 "data/maps/Quartzite_Mart/scripts.pory"
	lock
# 5 "data/maps/Quartzite_Mart/scripts.pory"
	faceplayer
# 6 "data/maps/Quartzite_Mart/scripts.pory"
	message Quartz_MartEmployee_Text_0
# 7 "data/maps/Quartzite_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/Quartzite_Mart/scripts.pory"
	pokemart Quartz_MartBase
# 9 "data/maps/Quartzite_Mart/scripts.pory"
	msgbox Quartz_MartEmployee_Text_1
# 10 "data/maps/Quartzite_Mart/scripts.pory"
	applymovement LOCALID_QUARTZ_MART_CLERK, Quartz_MartEmployee_Movement_0
# 11 "data/maps/Quartzite_Mart/scripts.pory"
	release
	return


	.align 2
# 14 "data/maps/Quartzite_Mart/scripts.pory"
Quartz_MartBase:
# 15 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 16 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 17 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_POTION
# 18 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 19 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 20 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 21 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 22 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 23 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 24 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 25 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 26 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 27 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 28 "data/maps/Quartzite_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_NONE

Quartz_MartKid::
# 32 "data/maps/Quartzite_Mart/scripts.pory"
	lock
# 33 "data/maps/Quartzite_Mart/scripts.pory"
	faceplayer
# 34 "data/maps/Quartzite_Mart/scripts.pory"
	msgbox Quartz_MartKid_Text_0
# 35 "data/maps/Quartzite_Mart/scripts.pory"
	release
	return


# 10 "data/maps/Quartzite_Mart/scripts.pory"
Quartz_MartEmployee_Movement_0:
# 10 "data/maps/Quartzite_Mart/scripts.pory"
	face_right
	step_end

Quartz_MartEmployee_Text_0:
# 6 "data/maps/Quartzite_Mart/scripts.pory"
	.string "Welcome to Quartzite! What do ya need?$"

Quartz_MartEmployee_Text_1:
# 9 "data/maps/Quartzite_Mart/scripts.pory"
	.string "Rock Solid!$"

Quartz_MartKid_Text_0:
# 34 "data/maps/Quartzite_Mart/scripts.pory"
	.string "I'm shopping for my mom! What about\n"
	.string "you?$"
