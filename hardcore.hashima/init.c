void main()
{
	Hive ce = CreateHive();

	if (ce) {
		ce.InitOffline();
	};

	// Comment/remove following 2 lines when not exporting (can cause further issues if you do this each time you start a mission!)
	// GetCEApi().ExportProxyData("2560 0 2560", 5120);    // standard map groups (buildings) export, terrain center and radius needs to be specified
	// GetCEApi().ExportClusterData();                     // cluster-type map groups export (fruit, trees, etc.)

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

			// Tool

			player.GetInventory().CreateInInventory("Chemlight_Red");
			itemBs = ItemBase.Cast(itemEnt);

			break;
		};

		// Tourist Map

		// itemEnt = player.GetInventory().CreateInInventory("ChernarusMap");
		// itemBs = ItemBase.Cast(itemEnt);
		// itemBs.SetQuantity(1);
	};
};

Mission CreateCustomMission(string path)
{
	return new CustomMission();
};