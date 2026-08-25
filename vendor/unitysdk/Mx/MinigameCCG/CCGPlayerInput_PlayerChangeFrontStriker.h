#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGStriker; }

#define MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERCHANGEFRONTSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCF360)
#define MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERCHANGEFRONTSTRIKER_GET_STRIKER_OFFSET UNITYSDK_OFFSET(0x1DCF3B0)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGPlayerInput_PlayerChangeFrontStriker_TypeDefinitionIndex = 20585;

	class CCGPlayerInput_PlayerChangeFrontStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGStriker* _Striker_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGStriker* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERCHANGEFRONTSTRIKER_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGStriker* get_Striker()
		{
			return (return (::MX::MinigameCCG::CCGStriker*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGPLAYERINPUT_PLAYERCHANGEFRONTSTRIKER_GET_STRIKER_OFFSET))(nullptr);
		}

	};
}

