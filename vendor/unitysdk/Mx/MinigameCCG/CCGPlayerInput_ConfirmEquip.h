#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMEQUIP_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1DCF5F0)
#define MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMEQUIP_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1DCF600)
#define MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMEQUIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF610)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerInput_ConfirmEquip_TypeDefinitionIndex = 20591;

	class CCGPlayerInput_ConfirmEquip : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEntity* _Entity_k__BackingField; // 0x18
		::MX::MinigameCCG::CCGEntity* _Target_k__BackingField; // 0x20

		::MX::MinigameCCG::CCGEntity* get_Entity()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMEQUIP_GET_ENTITY_OFFSET))(nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_Target()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMEQUIP_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGEntity* arg, ::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMEQUIP_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

