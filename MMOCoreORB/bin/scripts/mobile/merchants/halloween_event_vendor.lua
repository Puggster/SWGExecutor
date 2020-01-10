halloweenvendor = Creature:new {
	objectName = "",
	customName = "Hutt Cartel Trader (Halloween Event Vendor)",
	socialGroup = "townsperson",
	pvpFaction = "townsperson",
	faction = "townsperson",
	level = 1,
	chanceHit = 0.25,
	damageMin = 50,
	damageMax = 55,
	baseXp = 113,
	baseHAM = 180,
	baseHAMmax = 220,
	armor = 1,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = NONE,
	optionsBitmask = 264, --for conversation
	diet = HERBIVORE,

	templates = {"object/mobile/borvo.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "HalloweenEventVendorConvoTemplate",
	attacks = {
	}
}

CreatureTemplates:addCreatureTemplate(halloweenvendor, "halloweenvendor")
