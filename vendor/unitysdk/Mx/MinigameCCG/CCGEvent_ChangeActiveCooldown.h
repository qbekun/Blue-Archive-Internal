#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCharacter; }

#define MX_MINIGAMECCG_CCGEVENT_CHANGEACTIVECOOLDOWN_GET_CHARACTERENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCD770)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEACTIVECOOLDOWN_GET_AFTERCOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1DCD780)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEACTIVECOOLDOWN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD790)
#define MX_MINIGAMECCG_CCGEVENT_CHANGEACTIVECOOLDOWN_GET_BEFORECOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1DCD7D0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_ChangeActiveCooldown_TypeDefinitionIndex = 20554;

	class CCGEvent_ChangeActiveCooldown : public Il2CppObject
	{
	public:
		::System::Int32 _CharacterEntityId_k__BackingField; // 0x10
		::System::Int32 _BeforeCooldown_k__BackingField; // 0x14
		::System::Int32 _AfterCooldown_k__BackingField; // 0x18

		::System::Int32 get_CharacterEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEACTIVECOOLDOWN_GET_CHARACTERENTITYID_OFFSET))(nullptr);
		}

		::System::Int32 get_AfterCooldown()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEACTIVECOOLDOWN_GET_AFTERCOOLDOWN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGCharacter* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacter*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEACTIVECOOLDOWN_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_BeforeCooldown()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_CHANGEACTIVECOOLDOWN_GET_BEFORECOOLDOWN_OFFSET))(nullptr);
		}

	};
}

