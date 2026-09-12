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
# 120 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Worried_Boy_12
Hazolt_Worried_Boy_11:
# 130 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Worried_Boy_18
# 138 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Worried_Boy_24
# 146 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_7
Hazolt_Worried_Boy_1:
# 158 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	end

Hazolt_Worried_Boy_2:
# 75 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Worried_Boy_7
Hazolt_Worried_Boy_6:
# 84 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Worried_Boy_15
# 95 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Worried_Boy_21
# 105 "data/maps/HAZOLT_VILLAGE/scripts.pory"
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
# 121 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_4
	goto Hazolt_Worried_Boy_1

Hazolt_Worried_Boy_12:
# 120 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Worried_Boy_10
	goto Hazolt_Worried_Boy_11

Hazolt_Worried_Boy_15:
# 85 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_1
	goto Hazolt_Worried_Boy_1

Hazolt_Worried_Boy_18:
# 131 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_5
	goto Hazolt_Worried_Boy_1

Hazolt_Worried_Boy_21:
# 96 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_2
	goto Hazolt_Worried_Boy_1

Hazolt_Worried_Boy_24:
# 139 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Worried_Boy_Text_6
	goto Hazolt_Worried_Boy_1


Hazolt_BeachWarp::
# 163 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	warp MAP_SHUNU_BEACH_WEST, 11, 5
# 164 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	waitstate
	return


Hazolt_Rocky_Road_Sign::
# 168 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 169 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Rocky_Road_Sign_Text_0, MSGBOX_SIGN
# 171 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	return


Hazolt_Village_Sign::
# 175 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 176 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Village_Sign_Text_0, MSGBOX_SIGN
# 178 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	return


Hazolt_Sailor_Scared::
# 182 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	lock
# 183 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	faceplayer
# 184 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Sailor_Scared_4
Hazolt_Sailor_Scared_3:
# 190 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_CLEARED_TIDESMERCYWRECK, Hazolt_Sailor_Scared_7
# 195 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Sailor_Scared_10
# 200 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Sailor_Scared_Text_3
Hazolt_Sailor_Scared_1:
# 205 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	release
	return

Hazolt_Sailor_Scared_2:
# 185 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Sailor_Scared_Text_0
	goto Hazolt_Sailor_Scared_1

Hazolt_Sailor_Scared_4:
# 184 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	goto_if_set FLAG_STATIC_DRONE_FIGHT, Hazolt_Sailor_Scared_2
	goto Hazolt_Sailor_Scared_3

Hazolt_Sailor_Scared_7:
# 191 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Sailor_Scared_Text_1
	goto Hazolt_Sailor_Scared_1

Hazolt_Sailor_Scared_10:
# 196 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	msgbox Hazolt_Sailor_Scared_Text_2
	goto Hazolt_Sailor_Scared_1


Resivoir_Guy_Text_0:
# 7 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The reservoir feels quieter now.\p"
	.string "With the pirates pushed out and those\n"
	.string "Hive Drones at the bridge dealt with,\p"
	.string "Hazolt can finally breathe again.$"

Resivoir_Guy_Text_1:
# 12 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The reservoir is full of clean, fresh\n"
	.string "water.\p"
	.string "Even with the pirates gone, I still don't\n"
	.string "trust the calm.\p"
	.string "If Team Hive is moving at the bridge,\n"
	.string "we're not done yet.$"

Resivoir_Guy_Text_2:
# 17 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The reservoir is full of clean, fresh\n"
	.string "water.\p"
	.string "I heard you tangled with Hive Drones at\n"
	.string "Static Bridge.\p"
	.string "Good. Hazolt needs Rangers who notice\n"
	.string "the threats early.$"

Resivoir_Guy_Text_3:
# 21 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "The reservoir is full of clean, fresh\n"
	.string "water.\p"
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
	.string "My little sister wandered off\n"
	.string "toward the beach.\p"
	.string "You already handled the pirates\n"
	.string "and fought Hive at Static Bridge,\n"
	.string "so I know you're the real deal.\p"
	.string "Please… if anyone can bring her\n"
	.string "back, it's you.$"

Hazolt_Worried_Boy_Text_1:
# 85 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "My little sister wandered\n"
	.string "off toward the beach.\p"
	.string "The pirates are gone, but I\n"
	.string "still hear people whispering\n"
	.string "about Team Hive at Static Bridge.\p"
	.string "The Rangers used to keep\n"
	.string "Hazolt safe… then they just\n"
	.string "vanished. I don't know who to\n"
	.string "trust anymore.$"

Hazolt_Worried_Boy_Text_2:
# 96 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "My little sister wandered\n"
	.string "off toward the beach.\p"
	.string "I heard you fought Hive Drones\n"
	.string "at Static Bridge. That's one\n"
	.string "mystery solved, I guess.\p"
	.string "Now if only someone would tell\n"
	.string "me where the Rangers went when\n"
	.string "the pirates showed up…$"

Hazolt_Worried_Boy_Text_3:
# 105 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "My little sister wandered\n"
	.string "off toward the beach.\p"
	.string "I told her pirates were\n"
	.string "all over the shore, but she\n"
	.string "wanted to look for shells.\p"
	.string "The Rangers used to keep\n"
	.string "Hazolt safe… then they just\n"
	.string "vanished. Now everyone says\n"
	.string "Team Hive is moving behind\n"
	.string "the scenes, and I don't know\n"
	.string "what to believe anymore.$"

Hazolt_Worried_Boy_Text_4:
# 121 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "You found my sister…\n"
	.string "Thank you.\p"
	.string "The pirates are gone and Hive\n"
	.string "got pushed back at Static Bridge.\p"
	.string "Maybe the Rangers really did\n"
	.string "leave for a reason. Maybe\n"
	.string "all those rumors were connected\n"
	.string "after all.$"

Hazolt_Worried_Boy_Text_5:
# 131 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "You found my sister…\n"
	.string "Thank you.\p"
	.string "At least the pirates aren't a\n"
	.string "threat anymore. If Team Hive\n"
	.string "is behind the bridge trouble,\n"
	.string "then Hazolt still has work to do.$"

Hazolt_Worried_Boy_Text_6:
# 139 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "You found my sister…\n"
	.string "Thank you.\p"
	.string "I heard you handled Hive Drones\n"
	.string "at Static Bridge too. That means\n"
	.string "the truth is finally starting to\n"
	.string "come out.$"

Hazolt_Worried_Boy_Text_7:
# 146 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "You found my sister…\n"
	.string "Thank you.\p"
	.string "Maybe the Rangers really did\n"
	.string "leave for a reason. Maybe\n"
	.string "the pirate trouble and Team\n"
	.string "Hive are all connected.\p"
	.string "I just know Hazolt feels a\n"
	.string "little less empty now.$"

Hazolt_Rocky_Road_Sign_Text_0:
# 169 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Rocky Road Ahead!\n"
	.string "Beware of Pirates!$"

Hazolt_Village_Sign_Text_0:
# 176 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Welcome to Hazolt Village!\n"
	.string "A reservoir of fresh water for fresh\l"
	.string "faces.$"

Hazolt_Sailor_Scared_Text_0:
# 185 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Please don't make me fight!\n"
	.string "Well… actually, maybe I can breathe\l"
	.string "again.\p"
	.string "With the pirates pushed out and Hive\n"
	.string "checked at Static Bridge,\p"
	.string "Hazolt finally feels safe.$"

Hazolt_Sailor_Scared_Text_1:
# 191 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Please don't make me fight!\n"
	.string "At least the pirates at the wreck are\l"
	.string "gone.\p"
	.string "Now everyone keeps talking about Team\n"
	.string "Hive at Static Bridge…$"

Hazolt_Sailor_Scared_Text_2:
# 196 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Please don't make me fight!\n"
	.string "Those pirates have been making things\l"
	.string "dangerous around here!\p"
	.string "And if Team Hive is moving at Static\n"
	.string "Bridge, I don't like the sound of that\l"
	.string "either.$"

Hazolt_Sailor_Scared_Text_3:
# 200 "data/maps/HAZOLT_VILLAGE/scripts.pory"
	.string "Please don't make me fight!\n"
	.string "Those pirates have been making things\l"
	.string "dangerous around here!$"
