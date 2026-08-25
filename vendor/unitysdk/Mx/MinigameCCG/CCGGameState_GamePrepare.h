#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }

#define MX_MINIGAMECCG_CCGGAMESTATE_GAMEPREPARE_TRYDEQUEUEINPUT_OFFSET UNITYSDK_OFFSET(0x1DDE2A0)
#define MX_MINIGAMECCG_CCGGAMESTATE_GAMEPREPARE_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1DDE350)
#define MX_MINIGAMECCG_CCGGAMESTATE_GAMEPREPARE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD9D0)
#define MX_MINIGAMECCG_CCGGAMESTATE_GAMEPREPARE_GET_ALLPLAYERREADY_OFFSET UNITYSDK_OFFSET(0x1DDE400)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGGameState_GamePrepare_TypeDefinitionIndex = 20652;

	class CCGGameState_GamePrepare : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _playerMulliganCheck; // 0x18

		Il2CppObject* TryDequeueInput()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GAMEPREPARE_TRYDEQUEUEINPUT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Graph()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GAMEPREPARE_GET_GRAPH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GAMEPREPARE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AllPlayerReady()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGGAMESTATE_GAMEPREPARE_GET_ALLPLAYERREADY_OFFSET))(nullptr);
		}

	};
}

