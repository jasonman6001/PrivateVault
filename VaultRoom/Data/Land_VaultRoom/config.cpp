class CfgPatches
{
	class VaultRoom
	{
		units[]=
		{
			"land_VaultRoom_V1"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};
class CfgVehicles
{
	class HouseNoDestruct;
	class land_VaultRoom_V1: HouseNoDestruct
	{
		scope = 1;
		model = "VaultRoom\Data\Land_VaultRoom\VaultRoom_V1.p3d";
		
		class Doors
		{
			
			class Door1
			{
				displayName = "Twin Doors 1";
				component = "Door1";
				soundPos = "door1_action";
				animPeriod = 6.2;
				initPhase = 0;
				initOpened = 0.0;
				soundOpen = "doorMetalTwinBigOpen";
				soundClose = "doorMetalTwinBigClose";
				soundLocked = "doorMetalTwinBigRattle";
				soundOpenABit = "doorMetalTwinBigOpenABit";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
				};
			};
				
			class GlobalArmor
			{
				class Projectile
				{
				  class Health { damage = 0; };
				  class Blood { damage = 0; };
				  class Shock { damage = 0; };
				};
				class Melee
				{
				  class Health { damage = 0; };
				  class Blood { damage = 0; };
				  class Shock { damage = 0; };
				};
			};
			
			class DamageZones
			{
				class Door1
				{
					class Health
					{
						hitpoints = 1000;
						transferToGlobalCoef = 0;
					};
					
					componentNames[] = {"door1"};
					fatalInjuryCoef = -1;
					
					class ArmorType
					{
						class Projectile
						{
							class Health { damage = 2; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
						class Melee
						{
							class Health { damage = 2.5; };
							class Blood { damage = 0; };
							class Shock { damage = 0; };
						};
					};
				};
			};
		};
	};
};