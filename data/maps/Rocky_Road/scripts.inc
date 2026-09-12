Rocky_Road_MapScripts::
	.byte 0


Rocky_Road_Fast_Runner::
# 4 "data/maps/Rocky_Road/scripts.pory"
	trainerbattle_single TRAINER_MARIA_1, Rocky_Road_Fast_Runner_Text_0, Rocky_Road_Fast_Runner_Text_1
# 8 "data/maps/Rocky_Road/scripts.pory"
	msgbox Rocky_Road_Fast_Runner_Text_2, MSGBOX_AUTOCLOSE
# 9 "data/maps/Rocky_Road/scripts.pory"
	waitmessage
	return


Rocky_Road_Overconfident_CoolTrainer::
# 13 "data/maps/Rocky_Road/scripts.pory"
	trainerbattle_single TRAINER_GERALD, Rocky_Road_Overconfident_CoolTrainer_Text_0, Rocky_Road_Overconfident_CoolTrainer_Text_1
# 17 "data/maps/Rocky_Road/scripts.pory"
	msgbox Rocky_Road_Overconfident_CoolTrainer_Text_2, MSGBOX_AUTOCLOSE
# 18 "data/maps/Rocky_Road/scripts.pory"
	waitmessage
	return


Rocky_Road_Cowgirl::
# 22 "data/maps/Rocky_Road/scripts.pory"
	trainerbattle_single TRAINER_MAY_RUSTBORO_TREECKO, Rocky_Road_Cowgirl_Text_0, Rocky_Road_Cowgirl_Text_1
# 26 "data/maps/Rocky_Road/scripts.pory"
	msgbox Rocky_Road_Cowgirl_Text_2, MSGBOX_AUTOCLOSE
# 27 "data/maps/Rocky_Road/scripts.pory"
	waitmessage
	return


Rocky_Road_Hiker::
# 31 "data/maps/Rocky_Road/scripts.pory"
	trainerbattle_single TRAINER_SAWYER_2, Rocky_Road_Hiker_Text_0, Rocky_Road_Hiker_Text_1
# 35 "data/maps/Rocky_Road/scripts.pory"
	msgbox Rocky_Road_Hiker_Text_2, MSGBOX_AUTOCLOSE
# 36 "data/maps/Rocky_Road/scripts.pory"
	waitmessage
	return


Rocky_Road_Rest_House_Sign::
# 40 "data/maps/Rocky_Road/scripts.pory"
	lock
# 41 "data/maps/Rocky_Road/scripts.pory"
	msgbox Rocky_Road_Rest_House_Sign_Text_0
# 43 "data/maps/Rocky_Road/scripts.pory"
	waitmessage
# 44 "data/maps/Rocky_Road/scripts.pory"
	release
	return


Rocky_Road_Fast_Runner_Text_0:
# 5 "data/maps/Rocky_Road/scripts.pory"
	.string "You look pretty swift! Let's see how\n"
	.string "you handle my speed!$"

Rocky_Road_Fast_Runner_Text_1:
# 6 "data/maps/Rocky_Road/scripts.pory"
	.string "You're pretty fast yourself!$"

Rocky_Road_Fast_Runner_Text_2:
# 8 "data/maps/Rocky_Road/scripts.pory"
	.string "Phew! That was a great run! You gotta\n"
	.string "stay fast around here to avoid those\l"
	.string "pirates!$"

Rocky_Road_Overconfident_CoolTrainer_Text_0:
# 14 "data/maps/Rocky_Road/scripts.pory"
	.string "I'm the coolest trainer around here!\n"
	.string "Prepare to be dazzled by my skills!$"

Rocky_Road_Overconfident_CoolTrainer_Text_1:
# 15 "data/maps/Rocky_Road/scripts.pory"
	.string "Not bad, but I'm still the coolest!$"

Rocky_Road_Overconfident_CoolTrainer_Text_2:
# 17 "data/maps/Rocky_Road/scripts.pory"
	.string "Why won't the pirates let me through?\n"
	.string "I'm cool!$"

Rocky_Road_Cowgirl_Text_0:
# 23 "data/maps/Rocky_Road/scripts.pory"
	.string "Yeehaw! Let's see if you can handle a\n"
	.string "real cowgirl's skills!$"

Rocky_Road_Cowgirl_Text_1:
# 24 "data/maps/Rocky_Road/scripts.pory"
	.string "Well, you're not too shabby!$"

Rocky_Road_Cowgirl_Text_2:
# 26 "data/maps/Rocky_Road/scripts.pory"
	.string "That was as much fun as tossing a\n"
	.string "lasso!$"

Rocky_Road_Hiker_Text_0:
# 32 "data/maps/Rocky_Road/scripts.pory"
	.string "The rocky terrain here is perfect for a\n"
	.string "hiker like me! Let's see how you fare!$"

Rocky_Road_Hiker_Text_1:
# 33 "data/maps/Rocky_Road/scripts.pory"
	.string "You're quite the hiker yourself!$"

Rocky_Road_Hiker_Text_2:
# 35 "data/maps/Rocky_Road/scripts.pory"
	.string "To get the blood pumping, there's\n"
	.string "nothing like a good hike and a battle!$"

Rocky_Road_Rest_House_Sign_Text_0:
# 41 "data/maps/Rocky_Road/scripts.pory"
	.string "Welcome to the Rocky Road Rest House!\p"
	.string "No pirates allowed!$"
