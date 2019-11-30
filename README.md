The RSF Configurations mod is licensed under the APL-SA License:
https://www.bohemia.net/community/licenses/arma-public-license-share-alike

# RSF Configuration Files
Custom configs for Raven Security Forces

## CaliberConvert
A collection of alternative configurations for the Arma 3 unit Raven Security Forces

### What it does
Makes changes to various weapons in terms of weight and caliber to fall in line with RSF standards. 

## Current Weapons
 	KH-2002
	MG5
	MSBS-5.56B
	QBU-88
	RFB
	Stoner 99

## cTab Fix
### What it does
Adds the Bamse cTab fix from Steam to the configuration files.

## Weapon Reskins
### What it does
Adds a few Reskins of existing Weapons. Will most likely expanded to include more Weapons and other gear

## Faucon Bleu
### What it does
Adds a new Faction: Faucon Bleu, a Serbian-French themed Paramilitary and Security Force.

## FirefightModules
### What it does
Adds two new sets of modules to the 3DEN editor; Firefight and Shop modules. 

### How it works
Drop a FF Core module somewhere on the map, sync it to a unit, object, or whatever to create an addaction on that synced object(s) to open a skirmish display. Drop one or more FF Location modules in urban-ish areas and sync those to the FF Core module.

You can set custom location names in the location module options, otherwise will default to the nearest named locations name. The UI provides some options as far as opponents, how much opposition there will be, and how big the area enemy spawns will be. Some garrisoned groups will leave their garrison when you get too close, and patrols will actively seek you out if spotted. A simple task will be created, once the area is controlled by you (i.e. few to no enemies remaining) the task will be completed. 

You can clear the active skirmish from within the skirmish UI.

The shop module is similar; sync the module to a unit/laptop/whatevr to define the storefront, and then sync a box of some kind to the module to designate where the shop dumps what you buy. Do not tick the 'init wallet' option in the module settings for right now, that is only useful if ACE is disabled. 

Add/Lose money EH modules are synced to units/vehicles/objects to define a reward for the killer when the object is destroyed. Due to how ACE changes the way 'killed' eventhandlers work, these are also not useful unless ACE is disabled.

## Have a bug to report?
Submit an [issue by clicking on this link](https://github.com/SpartanD39/CaliberConvert/issues/new)
#### What we need:
Copy/screencap of error message, you can use a service like [Lightshot](https://prnt.sc/) to upload images and get a link to it.
Replication steps (if any beyond just starting the game)

## Have a feature request?
Submit an [issue by clicking on this link](https://github.com/SpartanD39/CaliberConvert/issues/new)
#### What we need:
Description of what you're looking for.
Examples of what you're looking for already implemented (if available)

## Want to contribute?
[Fork the repository](https://help.github.com/en/articles/fork-a-repo), make your changes, test them in-game, and then submit a [pull request](https://help.github.com/en/articles/creating-a-pull-request) to have the changes merged into the main repo. 
