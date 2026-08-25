#pragma once
#include "unitysdk.h"

class RoadPuzzleMapTileVisual;
class RoadPuzzleTileMap;

#define SWAPRAILHANDLER_SETSWAPSOURCEMAPTILE_OFFSET UNITYSDK_OFFSET(0x27C1FE0)
#define SWAPRAILHANDLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27C1FF0)
#define SWAPRAILHANDLER_SWAPRAILWITHMAP_OFFSET UNITYSDK_OFFSET(0x27C2000)
#define SWAPRAILHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x27BDFC0)
#define SWAPRAILHANDLER_SWAPRAILWITHRAIL_OFFSET UNITYSDK_OFFSET(0x27C2230)
#define SWAPRAILHANDLER__SWAP_G__ISSAMETILE|7_0_OFFSET UNITYSDK_OFFSET(0x27C2540)
#define SWAPRAILHANDLER_GET_SWAPSOURCEMAPTILE_OFFSET UNITYSDK_OFFSET(0x27C25A0)
#define SWAPRAILHANDLER_SWAP_OFFSET UNITYSDK_OFFSET(0x27C1200)

	inline static constexpr unsigned int SwapRailHandler_TypeDefinitionIndex = 7567;

	class SwapRailHandler : public Il2CppObject
	{
	public:
		RoadPuzzleMapTileVisual* swapSourceMapTile; // 0x10
		RoadPuzzleMapTileVisual* swapTargetMapTile; // 0x18
		RoadPuzzleTileMap* tileMap; // 0x20

		::System::Void SetSwapSourceMapTile(RoadPuzzleMapTileVisual* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SWAPRAILHANDLER_SETSWAPSOURCEMAPTILE_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(RoadPuzzleTileMap* arg)
		{
			((::System::Void(*)(RoadPuzzleTileMap*, ::PVOID))((::PBYTE)hIl2Cpp + SWAPRAILHANDLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SwapRailWithMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPRAILHANDLER_SWAPRAILWITHMAP_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPRAILHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SwapRailWithRail()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPRAILHANDLER_SWAPRAILWITHRAIL_OFFSET))(nullptr);
		}

		::System::Boolean _Swap_g__IsSameTile|7_0(<>c__DisplayClass7_0&* arg)
		{
			return ((::System::Boolean(*)(<>c__DisplayClass7_0&*, ::PVOID))((::PBYTE)hIl2Cpp + SWAPRAILHANDLER__SWAP_G__ISSAMETILE|7_0_OFFSET))(arg, nullptr);
		}

		RoadPuzzleMapTileVisual* get_SwapSourceMapTile()
		{
			return ((RoadPuzzleMapTileVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + SWAPRAILHANDLER_GET_SWAPSOURCEMAPTILE_OFFSET))(nullptr);
		}

		::System::Void Swap(RoadPuzzleMapTileVisual* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + SWAPRAILHANDLER_SWAP_OFFSET))(arg, nullptr);
		}

	};

