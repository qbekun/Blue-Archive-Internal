#pragma once
#include "unitysdk.h"

class UIWorldRaidAniPlayer;
class UIWidget;
class UIWorldRaidLobby;

#define UIWORLDRAIDSEASONOPTION_CHECKOPENEDBOSSISSPECIFICBOSS_OFFSET UNITYSDK_OFFSET(0xC09F30)
#define UIWORLDRAIDSEASONOPTION_APPLYOPTIONS_OFFSET UNITYSDK_OFFSET(0xC00200)
#define UIWORLDRAIDSEASONOPTION_APPLYFIXSCROLLOPTION_OFFSET UNITYSDK_OFFSET(0xC0A050)
#define UIWORLDRAIDSEASONOPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xC0A1F0)

	inline static constexpr unsigned int UIWorldRaidSeasonOption_TypeDefinitionIndex = 8805;

	class UIWorldRaidSeasonOption : public Il2CppObject
	{
	public:
		UIWorldRaidAniPlayer* AnimationPlayer; // 0x18
		::System::Boolean FixLocationXScroll; // 0x20
		::System::Boolean FixLocationYScroll; // 0x21
		UIWidget* LocationWidget; // 0x28
		::System::Int64 OpenEventBossGroupID; // 0x30
		::System::Boolean LobbyBGGradient; // 0x38

		::System::Void CheckOpenedBossIsSpecificBoss(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSEASONOPTION_CHECKOPENEDBOSSISSPECIFICBOSS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyOptions(UIWorldRaidLobby* arg)
		{
			((::System::Void(*)(UIWorldRaidLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSEASONOPTION_APPLYOPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void ApplyFixScrollOption(UIWorldRaidLobby* arg)
		{
			((::System::Void(*)(UIWorldRaidLobby*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSEASONOPTION_APPLYFIXSCROLLOPTION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDSEASONOPTION_.CTOR_OFFSET))(nullptr);
		}

	};

