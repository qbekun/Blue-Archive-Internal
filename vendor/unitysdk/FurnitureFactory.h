#pragma once
#include "unitysdk.h"

class CafeTerrain;
class FurnitureObject;

#define FURNITUREFACTORY_CREATEWALLPAPER_OFFSET UNITYSDK_OFFSET(0x1AC4770)
#define FURNITUREFACTORY_CREATEFURNITUREVISUAL_OFFSET UNITYSDK_OFFSET(0x1AC4FE0)
#define FURNITUREFACTORY_CREATEFLOOR_OFFSET UNITYSDK_OFFSET(0x1AC51D0)
#define FURNITUREFACTORY_CREATEBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1AC5540)

	inline static constexpr unsigned int FurnitureFactory_TypeDefinitionIndex = 1400;

	class FurnitureFactory : public Il2CppObject
	{
	public:
		::System::Void CreateWallpaper(CafeTerrain* arg, FurnitureObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(CafeTerrain*, FurnitureObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREFACTORY_CREATEWALLPAPER_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CreateFurnitureVisual(CafeTerrain* arg, FurnitureObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(CafeTerrain*, FurnitureObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREFACTORY_CREATEFURNITUREVISUAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CreateFloor(CafeTerrain* arg, FurnitureObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(CafeTerrain*, FurnitureObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREFACTORY_CREATEFLOOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void CreateBackground(CafeTerrain* arg, FurnitureObject* arg2, Il2CppObject* arg3)
		{
			((::System::Void(*)(CafeTerrain*, FurnitureObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + FURNITUREFACTORY_CREATEBACKGROUND_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};

