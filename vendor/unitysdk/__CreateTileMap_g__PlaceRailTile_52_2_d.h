#pragma once
#include "unitysdk.h"

class UIRoadPuzzle;
class RoadPuzzleRailTileData;
class RoadPuzzleMapTileVisual;

#define <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x27C8420)
#define <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27C8440)
#define <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27C8450)
#define <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27C85B0)
#define <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27C85C0)
#define <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27C8610)

	inline static constexpr unsigned int <<CreateTileMap>g__PlaceRailTile|52_2>d_TypeDefinitionIndex = 7578;

	class <<CreateTileMap>g__PlaceRailTile|52_2>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIRoadPuzzle* __4__this; // 0x20
		RoadPuzzleRailTileData* railTileData; // 0x28
		RoadPuzzleMapTileVisual* _mapTile_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CREATETILEMAP>G__PLACERAILTILE|52_2>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

