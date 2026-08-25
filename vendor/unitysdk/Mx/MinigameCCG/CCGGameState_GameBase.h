#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGameSetting; }
namespace MX::MinigameCCG { class CCGGame; }

#define MX_MINIGAMECCG_CCGGAMESTATE_GAMEBASE_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1DDD660)
#define MX_MINIGAMECCG_CCGGAMESTATE_GAMEBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD710)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_GameBase_TypeDefinitionIndex = 20645;

	class CCGGameState_GameBase : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGameSetting* _setting; // 0x18

		Il2CppObject* get_Graph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GAMEBASE_GET_GRAPH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::CCGGameSetting* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::CCGGameSetting*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GAMEBASE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

