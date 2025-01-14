void main()
{
    Hive ce = CreateHive();

    if (ce) {
        ce.InitOffline();
    };

    // GetCEApi().ExportProxyData("2560 0 2560", 5120);
    // GetCEApi().ExportClusterData();

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

        // LXD Weather System
        if ( m_EventManager )
        {
            // Min time between events, max time between events, max number of events at the same time (LEAVE IT AT 1).
             //m_EventManager.Run( 120, 180, 1 );
             m_EventManager.Run( 400, 650, 1 );

            //m_EventManager.RegisterEvent( LXDStorm, 0.15 );
            m_EventManager.RegisterEvent( LXDRainShower, 0.20 );
            m_EventManager.RegisterEvent( LXDCloudySkies, 0.35 );
            m_EventManager.RegisterEvent( LXDHeavyFog, 0.18 );
            m_EventManager.RegisterEvent( LXDClearSkies, 0.65 );
            m_EventManager.RegisterEvent( LXDTremors, 0.30 );
        }
    };

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
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Black");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_1");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
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
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Gray");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_2");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
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
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_White");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_3");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
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
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Black");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_4");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
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
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Red");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_1");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
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
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_2");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
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
            player.GetInventory().CreateInInventory("CCS_Hashima_Clothing_Sneaker_Green");
            itemBs = ItemBase.Cast(itemEnt);

            // Food
            player.GetInventory().CreateInInventory("CCS_Hashima_Snack_Bar_3");
            itemBs = ItemBase.Cast(itemEnt);

            // Medical
            player.GetInventory().CreateInInventory("CCS_Toilet_Paper");
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

    // ------------------------------------------------------------
    // SPAWNING
    // ------------------------------------------------------------

    static const ref array<vector> SPAWN_POSITIONS =
    {
        "621.717 5.05475 952.71",
        "522.687 4.28336 990.848",
        "750.417 23.8078 1226.03",
        "945.158 94.2327 895.05",
        "729.506 20.751 575.697",
        "655.587 11.0051 1222.99",
        "836.633 89.8329 932.155",
        "738.823 40.7641 948.56",
        "768.184 84.9511 678.734",
        "700.515 43.1604 836.105",
        "730.377 18.7271 1182.48",
        "792.554 16.3638 1221.54"
    };

    override PlayerBase OnClientNewEvent(PlayerIdentity identity, vector pos, ParamsReadContext ctx)
    {
        string characterType;
        vector pos1 = SPAWN_POSITIONS.GetRandomElement();

        SyncRespawnModeInfo(identity);
        // get login data for new character
        if ( ProcessLoginData(ctx) && (m_RespawnMode == GameConstants.RESPAWN_MODE_CUSTOM) && !GetGame().GetMenuDefaultCharacterData(false).IsRandomCharacterForced() )
        {
            if (GetGame().ListAvailableCharacters().Find(GetGame().GetMenuDefaultCharacterData().GetCharacterType()) > -1)
                characterType = GetGame().GetMenuDefaultCharacterData().GetCharacterType();
            else //random type
                characterType = GetGame().CreateRandomPlayer();
        }
        else
        {
            characterType = GetGame().CreateRandomPlayer();
            GetGame().GetMenuDefaultCharacterData().GenerateRandomEquip();
        }

        if (CreateCharacter(identity, pos1, ctx, characterType))
        {
            EquipCharacter(GetGame().GetMenuDefaultCharacterData());
            m_player.SetPosition(pos1);
        }

        return m_player;
    }
};

Mission CreateCustomMission(string path)
{
    return new CustomMission();
};