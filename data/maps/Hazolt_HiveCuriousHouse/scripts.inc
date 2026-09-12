Hazolt_HiveCuriousHouse_MapScripts::
	.byte 0


Hazolt_HiveCuriousMan::
# 4 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	lock
# 5 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	applymovement LOCALID_HAZOLT_HIVECURIOUSMAN, Hazolt_HiveCuriousMan_Movement_0
# 6 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Hazolt_HiveCuriousMan_2
# 11 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_HiveCuriousMan_5
# 16 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_HiveCuriousMan_Text_2
Hazolt_HiveCuriousMan_1:
# 21 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	release
	end

Hazolt_HiveCuriousMan_2:
# 7 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_HiveCuriousMan_Text_0
	goto Hazolt_HiveCuriousMan_1

Hazolt_HiveCuriousMan_5:
# 12 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_HiveCuriousMan_Text_1
	goto Hazolt_HiveCuriousMan_1


Hazolt_HiveCuriousWoman::
# 26 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	lock
# 27 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	applymovement LOCALID_HAZOLT_HIVECURIOUSWOMAN, Hazolt_HiveCuriousMan_Movement_0
# 28 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Hazolt_HiveCuriousWoman_2
# 33 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_HiveCuriousWoman_5
# 37 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_HiveCuriousWoman_Text_2
Hazolt_HiveCuriousWoman_1:
# 41 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	release
	end

Hazolt_HiveCuriousWoman_2:
# 29 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_HiveCuriousWoman_Text_0
	goto Hazolt_HiveCuriousWoman_1

Hazolt_HiveCuriousWoman_5:
# 34 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_HiveCuriousWoman_Text_1
	goto Hazolt_HiveCuriousWoman_1


Swablu_Noies::
# 46 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	lock
# 47 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	applymovement LOCALID_SWABLU_NOIES, Hazolt_HiveCuriousMan_Movement_0
# 48 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	waitmovement 0
# 49 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	playse SE_M_SING
# 50 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	waitse
# 51 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Swablu_Noies_Text_0
# 52 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	waitmessage
# 53 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	release
	end


Hazolt_Chamber_Pot::
# 58 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	lock
# 59 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_Chamber_Pot_Text_0, MSGBOX_SIGN
# 60 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	release
	return


Hazolt_PirateBoy::
# 64 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	lock
# 65 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	faceplayer
# 66 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_PirateBoy_2
# 71 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_PirateBoy_Text_1
Hazolt_PirateBoy_1:
# 74 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	release
	end

Hazolt_PirateBoy_2:
# 67 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_PirateBoy_Text_0
	goto Hazolt_PirateBoy_1


Hazolt_ConcernedMom::
# 79 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	lock
# 80 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	faceplayer
# 81 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	goto_if_set FLAG_QUARTZITE_HIVE_DEFEATED, Hazolt_ConcernedMom_2
# 86 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_ConcernedMom_5
# 91 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_ConcernedMom_Text_2
Hazolt_ConcernedMom_1:
# 95 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	release
	end

Hazolt_ConcernedMom_2:
# 82 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_ConcernedMom_Text_0
	goto Hazolt_ConcernedMom_1

Hazolt_ConcernedMom_5:
# 87 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	msgbox Hazolt_ConcernedMom_Text_1
	goto Hazolt_ConcernedMom_1


# 5 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
Hazolt_HiveCuriousMan_Movement_0:
# 5 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	face_player
	step_end

Hazolt_HiveCuriousMan_Text_0:
# 7 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "I thought Team Hive sounded organized.\n"
	.string "Efficient. Necessary, even.\p"
	.string "Then Quartzite happened.\p"
	.string "Now I think people who promise order\n"
	.string "too quickly are usually hiding the cost.$"

Hazolt_HiveCuriousMan_Text_1:
# 12 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "I used to talk like Team Hive had\n"
	.string "answers.\p"
	.string "After those Drones showed up at Static\n"
	.string "Bridge, I am less certain.\p"
	.string "Control and care are not the same\n"
	.string "thing.$"

Hazolt_HiveCuriousMan_Text_2:
# 16 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "I keep hearing about Team Hive.\p"
	.string "Some say they can fix what the Rangers\n"
	.string "failed to hold together after the\l"
	.string "storm.\p"
	.string "I am trying to decide whether that is\n"
	.string "hope or fear talking.$"

Hazolt_HiveCuriousWoman_Text_0:
# 29 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "People said Team Hive wanted to change\n"
	.string "the world.\p"
	.string "Maybe they did. Just not for us.\p"
	.string "I am done confusing big promises with\n"
	.string "good intentions.$"

Hazolt_HiveCuriousWoman_Text_1:
# 34 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "Pirates hit us from the shore while Hive\n"
	.string "stirs trouble inland.\p"
	.string "When problems arrive from every\n"
	.string "direction, rumors feel like weather.$"

Hazolt_HiveCuriousWoman_Text_2:
# 37 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "People say Team Hive is trying to\n"
	.string "change the world.\p"
	.string "I wonder if they can, and what they\n"
	.string "would have to break to do it.$"

Swablu_Noies_Text_0:
# 51 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "Swablu sings a beautiful song.$"

Hazolt_Chamber_Pot_Text_0:
# 59 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "A chamber pot. Maybe modeled after an\n"
	.string "ancient relic.$"

Hazolt_PirateBoy_Text_0:
# 67 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "Okay, maybe pirates are not cool.\p"
	.string "They stole from people who were already\n"
	.string "rebuilding.\p"
	.string "I still like the hats, though.$"

Hazolt_PirateBoy_Text_1:
# 71 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "Pirates are so cool! I want to be a\n"
	.string "pirate when I grow up!\p"
	.string "Mom says that means I am grounded.$"

Hazolt_ConcernedMom_Text_0:
# 82 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "My boy is finally done pretending\n"
	.string "pirates are heroes.\p"
	.string "I was hard on the Rangers after the\n"
	.string "storm.\p"
	.string "Seeing what Hive did in Quartzite… I\n"
	.string "understand the pressure they were\l"
	.string "under.$"

Hazolt_ConcernedMom_Text_1:
# 87 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "My boy has been obsessed with pirates\n"
	.string "for weeks.\p"
	.string "I blamed the Rangers when the coast\n"
	.string "got hit.\p"
	.string "Now I am not sure whether blame is\n"
	.string "useful when Team Hive keeps escalating\l"
	.string "things.$"

Hazolt_ConcernedMom_Text_2:
# 91 "data/maps/Hazolt_HiveCuriousHouse/scripts.pory"
	.string "My boy has been so obsessed with\n"
	.string "pirates lately.\p"
	.string "I blame the Rangers! They left us to\n"
	.string "deal with the storm and pirates on our\l"
	.string "own.\p"
	.string "$"
