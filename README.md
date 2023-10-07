# Hashima Islands 端島 — Mission Files

Mission files for Hashimna Islands, a DayZ Modded Map inspired by Hashima, commonly called Gunkanjima (meaning Battleship Island), a abandoned island off Nagasaki.

#### [Download Mission Files (.zip)](https://hashima.gg)

Map Version: 0.0.1-alpha-4

---

## File Structure

```
┌───────────────┐
│ > ce.hashima/ │
└───┬───────────┘
    │
    ├───────────┐
    │ > layers/ │
    ├───┬───────┘
    │   └── ...
    │
    ├────────┐
    │ > map/ │
    ├───┬────┘
    │   └─── hashima.map
    │
    ├───────────────────┐
    │ > territoryTypes/ │
    ├───┬───────────────┘
    │   ├── bear_territories.xml
    │   ├── cattle_territories.xml
    │   ├── hen_territories.xml
    │   ├── pig_territories.xml
    │   ├── roe_deer_territories.xml
    │   ├── wild_boar_territories.xml
    │   ├── wolf_territories.xml
    │   └── zombie_territories.xml
    │
    ├── hashima-5120.png
    └── hashima.xml

┌─────────────────────┐
│ > hardcore.hashima/ │
└───┬─────────────────┘
    │
    ├───────┐
    │ > db/ │
    ├───┬───┘
    │   │
    │   ├───────────┐
    │   │ > events/ │
    │   ├───┬───────┘
    │   │   ├── dz_events_animal.xml
    │   │   ├── dz_events_misc.xml
    │   │   └── dz_events_zombie.xml
    │   │
    │   ├────────────────────┐
    │   │ > spawnlabletypes/ │
    │   ├───┬────────────────┘
    │   │   ├── dz_spawnabletypes_ammo.xml
    │   │   ├── dz_spawnabletypes_zombie.xml
    │   │   └── dz_spawnabletypes.xml
    │   │
    │   ├──────────┐
    │   │ > types/ │
    │   └───┬──────┘
    │       │
    │       ├────────┐
    │       │ > ccs/ │
    │       ├───┬────┘
    │       │   ├── ccs_types_ammo.xml
    │       │   ├── ccs_types_bag.xml
    │       │   ├── ccs_types_beer.xml
    │       │   ├── ccs_types_can.xml
    │       │   ├── ccs_types_candy.xml
    │       │   ├── ccs_types_clothing.xml
    │       │   ├── ccs_types_collectable.xml
    │       │   ├── ccs_types_drink.xml
    │       │   ├── ccs_types_jar.xml
    │       │   ├── ccs_types_medical.xml
    │       │   ├── ccs_types_snack.xml
    │       │   ├── ccs_types_tool.xml
    │       │   └── ccs_types_weapon.xml
    │       │
    │       ├───────┐
    │       │ > dz/ │
    │       ├───┬───┘
    │       │   ├── dz_types_animal.xml
    │       │   ├── dz_types_bag.xml
    │       │   ├── dz_types_clothing.xml
    │       │   ├── dz_types_event.xml
    │       │   ├── dz_types_food.xml
    │       │   ├── dz_types_tool.xml
    │       │   ├── dz_types_weapon.xml
    │       │   └── dz_types_zombie.xml
    │       │
    │       ├── economy.xml
    │       ├── events.xml
    │       ├── globals.xml
    │       ├── messages.xml
    │       └── types.xml
    │
    ├────────┐
    │ > env/ │
    ├───┬────┘
    │   ├── bear_territories.xml
    │   ├── cattle_territories.xml
    │   ├── hen_territories.xml
    │   ├── pig_territories.xml
    │   ├── roe_deer_territories.xml
    │   ├── wild_boar_territories.xml
    │   ├── wolf_territories.xml
    │   └── zombie_territories.xml
    │
    ├── areaflags.map
    ├── cfgeconomycore.xml
    ├── cfgeffectarea.json
    ├── cfgenvironment.xml
    ├── cfgeventgroups.xml
    ├── cfgeventspawns.xml
    ├── cfggameplay.json
    ├── cfgignorelist.xml
    ├── cfglimitsdefinition.xml
    ├── cfglimitsdefinitionuser.xml
    ├── cfgplayerspawnpoints.xml
    ├── cfgrandompresets.xml
    ├── cfgspawnabletypes.xml
    ├── cfgundergroundtriggers.json
    ├── cfgweather.xml
    ├── init.c
    ├── mapclusterproto.xml
    ├── mapgroupcluster.xml
    ├── mapgroupdirt.xml
    ├── mapgrouppos.xml
    └── mapgroupproto.xml
```

---

## Server Setup

#### Required Mods

**[Hashima Islands 🡥](https://steamcommunity.com/sharedfiles/filedetails/?id=2781560371)**

**[Hashima Islands Assets 🡥](https://steamcommunity.com/sharedfiles/filedetails/?id=3001202420)**

**[Dab's Framework 🡥](https://steamcommunity.com/sharedfiles/filedetails/?id=2545327648)**

#### Recommended Mods

**[No Force Weapon Raise 🡥](https://steamcommunity.com/sharedfiles/filedetails/?id=2098390861)**

---

## Server Customization Advise

Just wanted to give you a heads-up that Hashima Islands is still in its early development stages. I'm pretty stoked to introduce this new map to the Dayz Community, but it's a work in progress. So, it's a good idea to let you know that things might change as I continue to develop it. These changes could impact any custom stuff or gameplay tweaks you've made on your server.

On another note, if you're thinking about shaking things up and adding new Points of Interest (POIs) to your server, I'd suggest focusing on the ocean. Unlike the land, which might get a facelift during development, the ocean is a pretty stable part of the map. So, building custom content and new POIs in the ocean can keep your server mods compatible with future updates to Hashima Islands.

---

## Contribute

If you want to contribute, feel free by open an **[Issue](https://github.com/hashimagg/mission/issues)** and/or **[Pull Request](https://github.com/hashimagg/mission/pulls)**.

---

## Disclaimer

Hashima Islands is based on real history and real terrains. However, some aspects of the content have been fictionalized for the purposes of gameplay. I do not claim ownership over any copyrighted material that may be present in Hashima Islands. All copyrighted material belongs to their respective owners. This mod is intended for personal and non-commercial use only. I'm not responsible for any damage that may occur to your game while using this mod. Use at your own risk.

---

<small>

**[HASHIMA.GG](https://hashima.gg)** — **[Join the Discord](https://discord.gg/Uap8rwekfA)**
