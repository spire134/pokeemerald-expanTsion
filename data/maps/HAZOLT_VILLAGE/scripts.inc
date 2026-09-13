HAZOLT_VILLAGE_MapScripts::
	.byte 0


Resivoir_Guy::
# 4 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 5 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	faceplayer
# 6 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Resivoir_Guy_4
Resivoir_Guy_3:
# 11 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Resivoir_Guy_7
# 16 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Resivoir_Guy_10
# 21 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Resivoir_Guy_Text_3
Resivoir_Guy_1:
# 26 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	end

Resivoir_Guy_2:
# 7 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Resivoir_Guy_Text_0
	goto Resivoir_Guy_1

Resivoir_Guy_4:
# 6 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Resivoir_Guy_2
	goto Resivoir_Guy_3

Resivoir_Guy_7:
# 12 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Resivoir_Guy_Text_1
	goto Resivoir_Guy_1

Resivoir_Guy_10:
# 17 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Resivoir_Guy_Text_2
	goto Resivoir_Guy_1


Hazolt_Fisherman::
# 31 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 32 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	faceplayer
# 33 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Fisherman_4
Hazolt_Fisherman_3:
# 38 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Fisherman_7
# 42 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Fisherman_10
# 46 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Fisherman_Text_3
Hazolt_Fisherman_1:
# 51 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	end

Hazolt_Fisherman_2:
# 34 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Fisherman_Text_0
	goto Hazolt_Fisherman_1

Hazolt_Fisherman_4:
# 33 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Fisherman_2
	goto Hazolt_Fisherman_3

Hazolt_Fisherman_7:
# 39 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Fisherman_Text_1
	goto Hazolt_Fisherman_1

Hazolt_Fisherman_10:
# 43 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Fisherman_Text_2
	goto Hazolt_Fisherman_1


Restless_Boy::
# 57 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 58 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	faceplayer
# 59 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Restless_Boy_2
# 59 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Restless_Boy_2
# 64 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Restless_Boy_Text_1
Restless_Boy_1:
# 67 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	end

Restless_Boy_2:
# 60 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Restless_Boy_Text_0
	goto Restless_Boy_1


Hazolt_Worried_Boy::
# 72 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 73 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	faceplayer
# 74 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_unset FLAG_SHUNU_LOST_GIRL_SAVED, Hazolt_Worried_Boy_2
# 97 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Worried_Boy_12
Hazolt_Worried_Boy_11:
# 102 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Worried_Boy_18
# 106 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Worried_Boy_24
# 110 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_7
Hazolt_Worried_Boy_1:
# 117 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	end

Hazolt_Worried_Boy_2:
# 75 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Worried_Boy_7
Hazolt_Worried_Boy_6:
# 80 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Worried_Boy_15
# 85 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Worried_Boy_21
# 90 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_3
	goto Hazolt_Worried_Boy_1

Hazolt_Worried_Boy_5:
# 76 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_0
	goto Hazolt_Worried_Boy_1

Hazolt_Worried_Boy_7:
# 75 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Worried_Boy_5
	goto Hazolt_Worried_Boy_6

Hazolt_Worried_Boy_10:
# 98 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_4
	goto Hazolt_Worried_Boy_1

Hazolt_Worried_Boy_12:
# 97 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Worried_Boy_10
	goto Hazolt_Worried_Boy_11

Hazolt_Worried_Boy_15:
# 81 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_1
	goto Hazolt_Worried_Boy_1

Hazolt_Worried_Boy_18:
# 103 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_5
	goto Hazolt_Worried_Boy_1

Hazolt_Worried_Boy_21:
# 86 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_2
	goto Hazolt_Worried_Boy_1

Hazolt_Worried_Boy_24:
# 107 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_6
	goto Hazolt_Worried_Boy_1


Hazolt_BeachWarp::
# 122 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	warp MAP_SHUNU_BEACH_WEST, 11, 5
# 123 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	waitstate
	return


Hazolt_Rocky_Road_Sign::
# 127 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 128 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Rocky_Road_Sign_Text_0, MSGBOX_SIGN
# 130 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	return


Hazolt_Village_Sign::
# 134 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 135 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Village_Sign_Text_0, MSGBOX_SIGN
# 137 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	return


Hazolt_Sailor_Scared::
# 141 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 142 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	faceplayer
# 143 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Sailor_Scared_4
Hazolt_Sailor_Scared_3:
# 149 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Sailor_Scared_7
# 154 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Sailor_Scared_10
# 159 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Sailor_Scared_Text_3
Hazolt_Sailor_Scared_1:
# 164 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	return

Hazolt_Sailor_Scared_2:
# 144 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Sailor_Scared_Text_0
	goto Hazolt_Sailor_Scared_1

Hazolt_Sailor_Scared_4:
# 143 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Sailor_Scared_2
	goto Hazolt_Sailor_Scared_3

Hazolt_Sailor_Scared_7:
# 150 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Sailor_Scared_Text_1
	goto Hazolt_Sailor_Scared_1

Hazolt_Sailor_Scared_10:
# 155 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Sailor_Scared_Text_2
	goto Hazolt_Sailor_Scared_1


Hazolt_LakeLoreWoman::
# 168 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 169 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	faceplayer
# 170 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_LakeLoreWoman_Text_0
# 172 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	waitmessage
# 173 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	return


Resivoir_Guy_Text_0:
# 7 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The twin reservoirs feel quieter now.\p"
	.string "With the pirates pushed out and those\n"
	.string "Hive Drones at the bridge dealt with,\p"
	.string "Hazolt can finally breathe again.$"

Resivoir_Guy_Text_1:
# 12 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The twin reservoirs are full of clean,\n"
	.string "fresh water.\p"
	.string "Even with the pirates gone, I still don't\n"
	.string "trust the calm.\p"
	.string "If Team Hive is moving at the bridge,\n"
	.string "we're not done yet.$"

Resivoir_Guy_Text_2:
# 17 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The twin reservoirs are full of clean,\n"
	.string "fresh water.\p"
	.string "I heard you tangled with Hive Drones at\n"
	.string "Static Bridge.\p"
	.string "Good. Hazolt needs Rangers who notice\n"
	.string "the threats early.$"

Resivoir_Guy_Text_3:
# 21 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The twin reservoirs are full of clean,\n"
	.string "fresh water.\p"
	.string "Even though we're by the sea, it's\n"
	.string "important to have freshwater sources.$"

Hazolt_Fisherman_Text_0:
# 34 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The fishing here is great again.\p"
	.string "Pirates were scaring off everything,\n"
	.string "and the Hive noise at Static Bridge\l"
	.string "didn't help.\p"
	.string "Now I might actually catch something\n"
	.string "worth bragging about.$"

Hazolt_Fisherman_Text_1:
# 39 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The fishing here is great, but the sea's\n"
	.string "still got a bad memory.\p"
	.string "Those pirates at the wreck stirred up\n"
	.string "trouble all along the shore.$"

Hazolt_Fisherman_Text_2:
# 43 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The fishing here is great, but even I\n"
	.string "heard about the Hive at Static Bridge.\p"
	.string "If they start messing with the water\n"
	.string "next, they'll have me to answer to.$"

Hazolt_Fisherman_Text_3:
# 46 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The fishing here is great!\p"
	.string "The best fishing is east by Zatik\n"
	.string "Bridge!$"

Restless_Boy_Text_0:
# 60 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "I still can't sit still! But now I want to\n"
	.string "find out the truth.\p"
	.string "Were the Rangers scared off by the\n"
	.string "pirates, or did Team Hive push them out?\p"
	.string "Maybe I'll join the Rangers when I grow\n"
	.string "up and figure it all out!$"

Restless_Boy_Text_1:
# 64 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "I can't sit still! I want to explore the\n"
	.string "world!\p"
	.string "Maybe I'll join the Rangers when I grow\n"
	.string "up!$"

Hazolt_Worried_Boy_Text_0:
# 76 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "My little sister wandered off toward\n"
	.string "the beach.\p"
	.string "You already handled the pirates and\n"
	.string "fought Hive at Static Bridge, so I know\l"
	.string "you're the real deal.\p"
	.string "Please… if anyone can bring her back,\n"
	.string "it's you.$"

Hazolt_Worried_Boy_Text_1:
# 81 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "My little sister wandered off toward\n"
	.string "the beach.\p"
	.string "The pirates are gone, but I still hear\n"
	.string "people whispering about Team Hive at\l"
	.string "Static Bridge.\p"
	.string "The Rangers used to keep Hazolt safe…\n"
	.string "then they just vanished. I don't know\l"
	.string "who to trust anymore.$"

Hazolt_Worried_Boy_Text_2:
# 86 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "My little sister wandered off toward\n"
	.string "the beach.\p"
	.string "I heard you fought Hive Drones at\n"
	.string "Static Bridge. That's one mystery\l"
	.string "solved, I guess.\p"
	.string "Now if only someone would tell me where\n"
	.string "the Rangers went when the pirates\l"
	.string "showed up…$"

Hazolt_Worried_Boy_Text_3:
# 90 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "My little sister wandered off toward\n"
	.string "the beach.\p"
	.string "I told her pirates were all over the\n"
	.string "shore, but she wanted to look for\l"
	.string "shells.\p"
	.string "The Rangers used to keep Hazolt safe…\n"
	.string "then they just vanished. Now everyone\l"
	.string "says Team Hive is moving behind the\l"
	.string "scenes, and I don't know what to\l"
	.string "believe anymore.$"

Hazolt_Worried_Boy_Text_4:
# 98 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "You found my sister… Thank you.\p"
	.string "The pirates are gone and Hive got\n"
	.string "pushed back at Static Bridge.\p"
	.string "Maybe the Rangers really did leave for a\n"
	.string "reason. Maybe all those rumors were\l"
	.string "connected after all.$"

Hazolt_Worried_Boy_Text_5:
# 103 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "You found my sister… Thank you.\p"
	.string "At least the pirates aren't a threat\n"
	.string "anymore. If Team Hive is behind the\l"
	.string "bridge trouble, then Hazolt still has\l"
	.string "work to do.$"

Hazolt_Worried_Boy_Text_6:
# 107 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "You found my sister… Thank you.\p"
	.string "I heard you handled Hive Drones at\n"
	.string "Static Bridge too. That means the truth\l"
	.string "is finally starting to come out.$"

Hazolt_Worried_Boy_Text_7:
# 110 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "You found my sister… Thank you.\p"
	.string "Maybe the Rangers really did leave for a\n"
	.string "reason. Maybe the pirate trouble and\l"
	.string "Team Hive are all connected.\p"
	.string "I just know Hazolt feels a little less\n"
	.string "empty now.$"

Hazolt_Rocky_Road_Sign_Text_0:
# 128 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Rocky Road Ahead!\n"
	.string "Beware of Pirates!$"

Hazolt_Village_Sign_Text_0:
# 135 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Welcome to Hazolt Village!\n"
	.string "A reservoir of fresh water for fresh\l"
	.string "faces.$"

Hazolt_Sailor_Scared_Text_0:
# 144 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Please don't make me fight!\n"
	.string "Well… actually, maybe I can breathe\l"
	.string "again.\p"
	.string "With the pirates pushed out and Hive\n"
	.string "checked at Static Bridge,\p"
	.string "Hazolt finally feels safe.$"

Hazolt_Sailor_Scared_Text_1:
# 150 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Please don't make me fight!\n"
	.string "At least the pirates at the wreck are\l"
	.string "gone.\p"
	.string "Now everyone keeps talking about Team\n"
	.string "Hive at Static Bridge…$"

Hazolt_Sailor_Scared_Text_2:
# 155 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Please don't make me fight!\n"
	.string "Those pirates have been making things\l"
	.string "dangerous around here!\p"
	.string "And if Team Hive is moving at Static\n"
	.string "Bridge, I don't like the sound of that\l"
	.string "either.$"

Hazolt_Sailor_Scared_Text_3:
# 159 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Please don't make me fight!\n"
	.string "Those pirates have been making things\l"
	.string "dangerous around here!$"

Hazolt_LakeLoreWoman_Text_0:
# 170 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Hazolt village got it's name from the\n"
	.string "twin reservoirs, known as the 'hazel\l"
	.string "eyes' of the village.\p"
	.string "They are said to watch over the village,\n"
	.string "keeping it safe and prosperous.$"
