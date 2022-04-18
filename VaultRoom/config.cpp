class CfgPatches
{
	class VaultRoom
	{
		units[]=
		{
			"land_VaultRoom_V1"
		};
		weapons[]={};
		requiredVersion=1.25;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};
class CfgMods 
{
	class VaultRoom 
	{
		dir = "jasonman6001	";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "iTzJboot";
		credits = "iTzJboot";
		author = "iTzJboot";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[]= {"Game","World","Mission"};

		class defs 
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"VaultRoom/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"VaultRoom/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"VaultRoom/Scripts/5_Mission"};
			};
		};
	};
};