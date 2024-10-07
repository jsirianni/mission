void main()
{
	Hive ce = CreateHive();

	if (ce) {
		ce.InitOffline();
	};

	// Uncomment following 2 lines ONLY when you want to export (it will mess your loot up otherwise!!)
	//GetCEApi().ExportProxyData( "7500 0 7500", 100000000 );    // standard map groups (buildings) export, terrain center and radius needs to be specified
	//GetCEApi().ExportClusterData();                     // cluster-type map groups export (fruit, trees, etc.)

	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;

	GetGame().GetWorld().GetDate(year, month, day, hour, minute);

	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			};
		};
	};
};

class CustomMission : MissionServer
{

	override void OnInit()
	{
		super.OnInit();

		// Hashima Events
		if ( m_EventManager )
		{
			// min time between events, max time between events, max number of events at the same time (LEAVE IT AT 1).
		 	//m_EventManager.Run( 120, 180, 1 );
		 	m_EventManager.Run( 400, 650, 1 );
			// registering events and their probability
		 	m_EventManager.RegisterEvent( LXDTropicalStorm, 0.15 );
		 	m_EventManager.RegisterEvent( LXDRainShower, 0.17 );
		 	m_EventManager.RegisterEvent( LXDCloudySkies, 0.25 );
		 	m_EventManager.RegisterEvent( LXDHeavyFog, 0.18 );
		 	m_EventManager.RegisterEvent( LXDClearSkies, 0.65 );
		 	m_EventManager.RegisterEvent( LXDTremors, 0.35 );
		}
	}

	void SetRandomHealth(EntityAI itemEnt)
	{
		if (itemEnt)
		{
			float rndHlt = Math.RandomFloat(0.50, 0.73);
			itemEnt.SetHealth01("", "", rndHlt);
		};
	};

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");
		Class.CastTo(m_player, playerEnt);

		GetGame().SelectPlayer(identity, m_player);

		return m_player;
	};

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		player.RemoveAllItems();

		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

		switch (Math.RandomInt(0, 7))
		{
			case 0:
			// Outfit 1

			// Top
			player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_CupNoodle");
			itemBs = ItemBase.Cast(itemEnt);

			// Bottom
			player.GetInventory().CreateInInventory("Jeans_Black");
			itemBs = ItemBase.Cast(itemEnt);

			// Shoes
			player.GetInventory().CreateInInventory("AthleticShoes_Black");
			itemBs = ItemBase.Cast(itemEnt);

			// Food
			player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_1");
			itemBs = ItemBase.Cast(itemEnt);

			// Medical
			player.GetInventory().CreateInInventory("CCS_Hashima_Medical_Bandage");
			itemBs = ItemBase.Cast(itemEnt);
			player.SetQuickBarEntityShortcut( itemEnt, 0 );

			// Tool
			player.GetInventory().CreateInInventory("Chemlight_Blue");
			itemBs = ItemBase.Cast(itemEnt);

			break;

			case 1:
			// Outfit 2

			// Top
			player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_XXXXXXXOOO");
			itemBs = ItemBase.Cast(itemEnt);

			// Bottom
			player.GetInventory().CreateInInventory("Jeans_Grey");
			itemBs = ItemBase.Cast(itemEnt);

			// Shoes
			player.GetInventory().CreateInInventory("AthleticShoes_Brown");
			itemBs = ItemBase.Cast(itemEnt);

			// Food
			player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_2");
			itemBs = ItemBase.Cast(itemEnt);

			// Medical
			player.GetInventory().CreateInInventory("CCS_Hashima_Medical_Bandage");
			itemBs = ItemBase.Cast(itemEnt);
			player.SetQuickBarEntityShortcut( itemEnt, 0 );

			// Tool
			player.GetInventory().CreateInInventory("Chemlight_Green");
			itemBs = ItemBase.Cast(itemEnt);

			break;

			case 2:
			// Outfit 3

			// Top
			player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_Junji_Ito");
			itemBs = ItemBase.Cast(itemEnt);

			// Bottom
			player.GetInventory().CreateInInventory("Jeans_Grey");
			itemBs = ItemBase.Cast(itemEnt);

			// Shoes
			player.GetInventory().CreateInInventory("Sneakers_Gray");
			itemBs = ItemBase.Cast(itemEnt);

			// Food
			player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_3");
			itemBs = ItemBase.Cast(itemEnt);

			// Medical
			player.GetInventory().CreateInInventory("CCS_Hashima_Medical_Bandage");
			itemBs = ItemBase.Cast(itemEnt);
			player.SetQuickBarEntityShortcut( itemEnt, 0 );

			// Tool
			player.GetInventory().CreateInInventory("Chemlight_White");
			itemBs = ItemBase.Cast(itemEnt);

			break;

			case 3:
			// Outfit 4

			// Top
			player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_Nintendo");
			itemBs = ItemBase.Cast(itemEnt);

			// Bottom
			player.GetInventory().CreateInInventory("Jeans_Blue");
			itemBs = ItemBase.Cast(itemEnt);

			// Shoes
			player.GetInventory().CreateInInventory("AthleticShoes_Black");
			itemBs = ItemBase.Cast(itemEnt);

			// Food
			player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_3");
			itemBs = ItemBase.Cast(itemEnt);

			// Medical
			player.GetInventory().CreateInInventory("CCS_Hashima_Medical_Bandage");
			itemBs = ItemBase.Cast(itemEnt);
			player.SetQuickBarEntityShortcut( itemEnt, 0 );

			// Tool
			player.GetInventory().CreateInInventory("Chemlight_Red");
			itemBs = ItemBase.Cast(itemEnt);

			break;

			case 4:
			// Outfit 5

			// Top
			player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_PlayStation");
			itemBs = ItemBase.Cast(itemEnt);

			// Bottom
			player.GetInventory().CreateInInventory("Jeans_BlueDark");
			itemBs = ItemBase.Cast(itemEnt);

			// Shoes
			player.GetInventory().CreateInInventory("Sneakers_Black");
			itemBs = ItemBase.Cast(itemEnt);

			// Food
			player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Doritos");
			itemBs = ItemBase.Cast(itemEnt);

			// Medical
			player.GetInventory().CreateInInventory("CCS_Hashima_Medical_Bandage");
			itemBs = ItemBase.Cast(itemEnt);
			player.SetQuickBarEntityShortcut( itemEnt, 0 );

			// Tool
			player.GetInventory().CreateInInventory("Chemlight_Yellow");
			itemBs = ItemBase.Cast(itemEnt);

			break;

			case 5:
			// Outfit 6

			// Top
			player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_Casio");
			itemBs = ItemBase.Cast(itemEnt);

			// Bottom
			player.GetInventory().CreateInInventory("Jeans_Black");
			itemBs = ItemBase.Cast(itemEnt);

			// Shoes
			player.GetInventory().CreateInInventory("AthleticShoes_Black");
			itemBs = ItemBase.Cast(itemEnt);

			// Food
			player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Doritos");
			itemBs = ItemBase.Cast(itemEnt);

			// Medical
			player.GetInventory().CreateInInventory("CCS_Hashima_Medical_Bandage");
			itemBs = ItemBase.Cast(itemEnt);
			player.SetQuickBarEntityShortcut( itemEnt, 0 );

			// Tool
			player.GetInventory().CreateInInventory("Chemlight_Red");
			itemBs = ItemBase.Cast(itemEnt);

			break;

			case 6:
			// Outfit 7

			// Top
			player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_TShirt_CreepyCrappyShirt");
			itemBs = ItemBase.Cast(itemEnt);

			// Bottom
			player.GetInventory().CreateInInventory("Jeans_Black");
			itemBs = ItemBase.Cast(itemEnt);

			// Shoes
			player.GetInventory().CreateInInventory("Sneakers_Black");
			itemBs = ItemBase.Cast(itemEnt);

			// Food
			player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Kurakon");
			itemBs = ItemBase.Cast(itemEnt);

			// Medical
			player.GetInventory().CreateInInventory("CCS_Hashima_Medical_Bandage");
			itemBs = ItemBase.Cast(itemEnt);
			player.SetQuickBarEntityShortcut( itemEnt, 0 );

			// Tool
			player.GetInventory().CreateInInventory("Chemlight_Red");
			itemBs = ItemBase.Cast(itemEnt);

			break;
		};

		// Tourist Map - NO MAKE THEM SUFFER

		// itemEnt = player.GetInventory().CreateInInventory("ChernarusMap");
		// itemBs = ItemBase.Cast(itemEnt);
		// itemBs.SetQuantity(1);
	};
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
};