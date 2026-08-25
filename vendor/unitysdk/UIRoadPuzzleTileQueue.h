#pragma once
#include "unitysdk.h"

class UIComponents;

#define UIROADPUZZLETILEQUEUE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x27CB680)
#define UIROADPUZZLETILEQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CB780)
#define UIROADPUZZLETILEQUEUE_ONTILECOUNTCHANGED_OFFSET UNITYSDK_OFFSET(0x27CB790)
#define UIROADPUZZLETILEQUEUE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27C7C10)

	inline static constexpr unsigned int UIRoadPuzzleTileQueue_TypeDefinitionIndex = 7597;

	class UIRoadPuzzleTileQueue : public Il2CppObject
	{
	public:
		UIComponents* StraightTile; // 0x18
		UIComponents* CurveSmallTile; // 0x20
		UIComponents* CurveBigTile; // 0x28
		::System::Boolean isInitialized; // 0x30

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEQUEUE_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEQUEUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnTileCountChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEQUEUE_ONTILECOUNTCHANGED_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIROADPUZZLETILEQUEUE_INITIALIZE_OFFSET))(nullptr);
		}

	};

