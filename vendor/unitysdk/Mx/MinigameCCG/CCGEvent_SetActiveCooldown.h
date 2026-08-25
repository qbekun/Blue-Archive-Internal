#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGCharacter; }

#define MX_MINIGAMECCG_CCGEVENT_SETACTIVECOOLDOWN_GET_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1DCD710)
#define MX_MINIGAMECCG_CCGEVENT_SETACTIVECOOLDOWN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD720)
#define MX_MINIGAMECCG_CCGEVENT_SETACTIVECOOLDOWN_GET_CHARACTERENTITYID_OFFSET UNITYSDK_OFFSET(0x1DCD760)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_SetActiveCooldown_TypeDefinitionIndex = 20553;

	class CCGEvent_SetActiveCooldown : public Il2CppObject
	{
	public:
		::System::Int32 _CharacterEntityId_k__BackingField; // 0x10
		::System::Int32 _Cooldown_k__BackingField; // 0x14

		::System::Int32 get_Cooldown()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SETACTIVECOOLDOWN_GET_COOLDOWN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGCharacter* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGCharacter*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SETACTIVECOOLDOWN_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_CharacterEntityId()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_SETACTIVECOOLDOWN_GET_CHARACTERENTITYID_OFFSET))(nullptr);
		}

	};
}

