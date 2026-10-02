Quartz_Tunnels_MapScripts::
	.byte 0


Quartz_TunnelCutscene::
# 6 "data/maps/Quartz_Tunnels/scripts.pory"
	goto_if_unset FLAG_TALKED_TO_CORIN, Quartz_TunnelCutscene_1
	end

Quartz_TunnelCutscene_1:
# 7 "data/maps/Quartz_Tunnels/scripts.pory"
	lock
# 8 "data/maps/Quartz_Tunnels/scripts.pory"
	setflag FLAG_TALKED_TO_CORIN
# 9 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_HIVEDRONE, Quartz_TunnelCutscene_Movement_0
# 10 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 11 "data/maps/Quartz_Tunnels/scripts.pory"
	msgbox Quartz_TunnelCutscene_Text_0
# 12 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_CORIN, Quartz_TunnelCutscene_Movement_1
# 13 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 14 "data/maps/Quartz_Tunnels/scripts.pory"
	msgbox Quartz_TunnelCutscene_Text_1
# 15 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_CORIN, Quartz_TunnelCutscene_Movement_2
# 16 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 17 "data/maps/Quartz_Tunnels/scripts.pory"
	msgbox Quartz_TunnelCutscene_Text_2
# 18 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_GULPIN, Quartz_TunnelCutscene_Movement_3
# 19 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 20 "data/maps/Quartz_Tunnels/scripts.pory"
	playse SE_M_DIZZY_PUNCH
# 21 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_WHIRLIPEDE, Quartz_TunnelCutscene_Movement_4
# 22 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 23 "data/maps/Quartz_Tunnels/scripts.pory"
	playse SE_M_MEGA_KICK2
# 24 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_HIVEDRONE, Quartz_TunnelCutscene_Movement_5
# 25 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_WHIRLIPEDE, Quartz_TunnelCutscene_Movement_6
# 26 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 27 "data/maps/Quartz_Tunnels/scripts.pory"
	playse SE_M_STRENGTH
# 28 "data/maps/Quartz_Tunnels/scripts.pory"
	waitse
# 29 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_CORIN, Quartz_TunnelCutscene_Movement_7
# 30 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_GULPIN, Quartz_TunnelCutscene_Movement_7
# 31 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 32 "data/maps/Quartz_Tunnels/scripts.pory"
	playse SE_M_SELF_DESTRUCT
# 33 "data/maps/Quartz_Tunnels/scripts.pory"
	waitse
# 34 "data/maps/Quartz_Tunnels/scripts.pory"
	removeobject LOCALID_TUNNEL_HIVEDRONE
# 35 "data/maps/Quartz_Tunnels/scripts.pory"
	removeobject LOCALID_TUNNEL_WHIRLIPEDE
# 36 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_CORIN, Quartz_TunnelCutscene_Movement_8
# 37 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_GULPIN, Quartz_TunnelCutscene_Movement_7
# 38 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 39 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_CORIN, Quartz_TunnelCutscene_Movement_9
# 40 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 41 "data/maps/Quartz_Tunnels/scripts.pory"
	msgbox Quartz_TunnelCutscene_Text_3
# 42 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_CORIN, Quartz_TunnelCutscene_Movement_10
# 43 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 44 "data/maps/Quartz_Tunnels/scripts.pory"
	msgbox Quartz_TunnelCutscene_Text_4
# 45 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_CORIN, Quartz_TunnelCutscene_Movement_11
# 46 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 47 "data/maps/Quartz_Tunnels/scripts.pory"
	msgbox Quartz_TunnelCutscene_Text_5
# 48 "data/maps/Quartz_Tunnels/scripts.pory"
	fadescreen FADE_TO_BLACK
# 49 "data/maps/Quartz_Tunnels/scripts.pory"
	removeobject LOCALID_TUNNEL_GULPIN
# 50 "data/maps/Quartz_Tunnels/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 51 "data/maps/Quartz_Tunnels/scripts.pory"
	applymovement LOCALID_TUNNEL_CORIN, Quartz_TunnelCutscene_Movement_9
# 52 "data/maps/Quartz_Tunnels/scripts.pory"
	waitmovement 0
# 53 "data/maps/Quartz_Tunnels/scripts.pory"
	msgbox Quartz_TunnelCutscene_Text_6
# 54 "data/maps/Quartz_Tunnels/scripts.pory"
	release
	return


Corin_Tunnels::
# 62 "data/maps/Quartz_Tunnels/scripts.pory"
	lock
# 63 "data/maps/Quartz_Tunnels/scripts.pory"
	faceplayer
# 64 "data/maps/Quartz_Tunnels/scripts.pory"
	msgbox Corin_Tunnels_Text_0
# 65 "data/maps/Quartz_Tunnels/scripts.pory"
	special HealPlayerParty
# 66 "data/maps/Quartz_Tunnels/scripts.pory"
	playse MUS_HEAL
# 67 "data/maps/Quartz_Tunnels/scripts.pory"
	waitse
# 68 "data/maps/Quartz_Tunnels/scripts.pory"
	msgbox Corin_Tunnels_Text_1
# 69 "data/maps/Quartz_Tunnels/scripts.pory"
	release
	return


# 9 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_0:
# 9 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_in_place_down
# 9 "data/maps/Quartz_Tunnels/scripts.pory"
	emote_question_mark
	step_end

# 12 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_1:
# 12 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_in_place_fast_left
# 12 "data/maps/Quartz_Tunnels/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 15 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_2:
# 15 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_in_place_fast_left
	step_end

# 18 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_3:
# 18 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_in_place_fast_left
# 18 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_in_place_fast_left
	step_end

# 21 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_4:
# 21 "data/maps/Quartz_Tunnels/scripts.pory"
	lock_facing_direction
# 21 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_faster_left
# 21 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_faster_left
# 21 "data/maps/Quartz_Tunnels/scripts.pory"
	unlock_facing_direction
	step_end

# 24 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_5:
# 24 "data/maps/Quartz_Tunnels/scripts.pory"
	emote_double_exclamation_mark
# 24 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_fast_up
# 24 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_fast_up
# 24 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_fast_up
# 24 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_fast_up
	step_end

# 25 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_6:
# 25 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_fast_up
# 25 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_fast_up
# 25 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_fast_up
# 25 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_fast_up
	step_end

# 29 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_7:
# 29 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_in_place_slow_up
	step_end

# 36 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_8:
# 36 "data/maps/Quartz_Tunnels/scripts.pory"
	jump_in_place_up
	step_end

# 39 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_9:
# 39 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_in_place_down
	step_end

# 42 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_10:
# 42 "data/maps/Quartz_Tunnels/scripts.pory"
	face_player
	step_end

# 45 "data/maps/Quartz_Tunnels/scripts.pory"
Quartz_TunnelCutscene_Movement_11:
# 45 "data/maps/Quartz_Tunnels/scripts.pory"
	walk_in_place_up
	step_end

Quartz_TunnelCutscene_Text_0:
# 11 "data/maps/Quartz_Tunnels/scripts.pory"
	.string "Drone: What the bees? There's another\n"
	.string "Ranger here!$"

Quartz_TunnelCutscene_Text_1:
# 14 "data/maps/Quartz_Tunnels/scripts.pory"
	.string "Corin: Haha! Never get distracted in a\n"
	.string "fight, not even for pizza!$"

Quartz_TunnelCutscene_Text_2:
# 17 "data/maps/Quartz_Tunnels/scripts.pory"
	.string "Corin: Now, Gulpin! Use Mega Punch!\p"
	.string "Gulpin: Guuuu!$"

Quartz_TunnelCutscene_Text_3:
# 41 "data/maps/Quartz_Tunnels/scripts.pory"
	.string "Corin: Wow! They rolled all the way out\n"
	.string "of here!\p"
	.string "Gosh, I'd like some rolls right now, but\n"
	.string "we don't have time for that!$"

Quartz_TunnelCutscene_Text_4:
# 44 "data/maps/Quartz_Tunnels/scripts.pory"
	.string "Corin: {PLAYER}, you came at the\n"
	.string "perfect time! I've been really worn out\l"
	.string "by these Hive Drones, and can't push\l"
	.string "through them to get to the leader.$"

Quartz_TunnelCutscene_Text_5:
# 47 "data/maps/Quartz_Tunnels/scripts.pory"
	.string "Corin: Return, Gulpin. We get to take a\n"
	.string "small rest.$"

Quartz_TunnelCutscene_Text_6:
# 53 "data/maps/Quartz_Tunnels/scripts.pory"
	.string "Corin: {PLAYER}, I'm going to count on\n"
	.string "you to handle things up ahead for a bit.\l"
	.string "I'll rest up and join you soon!$"

Corin_Tunnels_Text_0:
# 64 "data/maps/Quartz_Tunnels/scripts.pory"
	.string "I'm still holding things down here. Now\n"
	.string "go on ahead, {PLAYER}. I believe in\l"
	.string "you!$"

Corin_Tunnels_Text_1:
# 68 "data/maps/Quartz_Tunnels/scripts.pory"
	.string "Now go serve them up on a platter!$"
