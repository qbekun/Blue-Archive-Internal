#pragma once
#include "unitysdk.h"

class UIMiniGameRewardList;

#define UIPOPUP_MINIGAMESTAGEREWARD_INITIALIZECARDGAME_OFFSET UNITYSDK_OFFSET(0x2096A30)
#define UIPOPUP_MINIGAMESTAGEREWARD_INITIALIZESHOOTING_OFFSET UNITYSDK_OFFSET(0x2097840)
#define UIPOPUP_MINIGAMESTAGEREWARD_.CTOR_OFFSET UNITYSDK_OFFSET(0x2097C10)

	inline static constexpr unsigned int UIPopup_MiniGameStageReward_TypeDefinitionIndex = 3511;

	class UIPopup_MiniGameStageReward : public Il2CppObject
	{
	public:
		UIMiniGameRewardList* RewardList; // 0xD8

		::System::Void InitializeCardGame(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESTAGEREWARD_INITIALIZECARDGAME_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeShooting(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESTAGEREWARD_INITIALIZESHOOTING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPOPUP_MINIGAMESTAGEREWARD_.CTOR_OFFSET))(nullptr);
		}

	};

