#pragma once
#include "unitysdk.h"

class UILobbyBannerIndicatorToggle;
class UIGrid;
class UISprite;

#define UILOBBYBANNERINDICATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x266B040)
#define UILOBBYBANNERINDICATOR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x266B0C0)
#define UILOBBYBANNERINDICATOR_SETTOGGLE_OFFSET UNITYSDK_OFFSET(0x266B3E0)
#define UILOBBYBANNERINDICATOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x266B4A0)

	inline static constexpr unsigned int UILobbyBannerIndicator_TypeDefinitionIndex = 6685;

	class UILobbyBannerIndicator : public Il2CppObject
	{
	public:
		UILobbyBannerIndicatorToggle* togglePrefab; // 0x18
		UIGrid* toggleGrid; // 0x20
		UISprite* bgSprite; // 0x28
		::System::Single bgSpriteMargin; // 0x30
		Il2CppObject* toggleList; // 0x38
		::System::Int32 toggleSize; // 0x40

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBANNERINDICATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Initialize(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBANNERINDICATOR_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SetToggle(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBANNERINDICATOR_SETTOGGLE_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UILOBBYBANNERINDICATOR_AWAKE_OFFSET))(nullptr);
		}

	};

