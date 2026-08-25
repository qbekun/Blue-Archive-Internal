#pragma once
#include "unitysdk.h"

class UISprite;
class RoadPuzzleMapTileVisual;

#define ROADPUZZLETRANSITMARK_INIT_OFFSET UNITYSDK_OFFSET(0x208B920)
#define ROADPUZZLETRANSITMARK_GET_TRANSITTILE_OFFSET UNITYSDK_OFFSET(0x208B930)
#define ROADPUZZLETRANSITMARK_.CTOR_OFFSET UNITYSDK_OFFSET(0x208B940)
#define ROADPUZZLETRANSITMARK_UPDATEMARK_OFFSET UNITYSDK_OFFSET(0x208B950)

	inline static constexpr unsigned int RoadPuzzleTransitMark_TypeDefinitionIndex = 3465;

	class RoadPuzzleTransitMark : public Il2CppObject
	{
	public:
		::System::String* NotConnectedSprite; // 0x0
		::System::String* ConnectedSprite; // 0x0
		UISprite* markImage; // 0x18
		RoadPuzzleMapTileVisual* transitTile; // 0x20

		::System::Void Init(RoadPuzzleMapTileVisual* arg)
		{
			((::System::Void(*)(RoadPuzzleMapTileVisual*, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRANSITMARK_INIT_OFFSET))(arg, nullptr);
		}

		RoadPuzzleMapTileVisual* get_TransitTile()
		{
			return ((RoadPuzzleMapTileVisual*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRANSITMARK_GET_TRANSITTILE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRANSITMARK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UpdateMark(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + ROADPUZZLETRANSITMARK_UPDATEMARK_OFFSET))(arg, nullptr);
		}

	};

