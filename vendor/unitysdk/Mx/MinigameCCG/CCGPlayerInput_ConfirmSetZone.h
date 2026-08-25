#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMSETZONE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF680)
#define MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMSETZONE_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x1DCF6D0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerInput_ConfirmSetZone_TypeDefinitionIndex = 20592;

	class CCGPlayerInput_ConfirmSetZone : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEntity* _Entity_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGEntity* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMSETZONE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGEntity* get_Entity()
		{
			return (return (::MX::MinigameCCG::CCGEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_CONFIRMSETZONE_GET_ENTITY_OFFSET))(nullptr);
		}

	};
}

