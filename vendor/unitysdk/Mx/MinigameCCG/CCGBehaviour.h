#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGEvent; }

#define MX_MINIGAMECCG_CCGBEHAVIOUR_PLAYINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x1DB32A0)
#define MX_MINIGAMECCG_CCGBEHAVIOUR_GET_GAME_OFFSET UNITYSDK_OFFSET(0x1DB3400)
#define MX_MINIGAMECCG_CCGBEHAVIOUR_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3410)
#define MX_MINIGAMECCG_CCGBEHAVIOUR_GET_PROCESSOR_OFFSET UNITYSDK_OFFSET(0x1DB3460)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGBehaviour_TypeDefinitionIndex = 20436;

	class CCGBehaviour : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGGame* _game_k__BackingField; // 0x10
		::MX::MinigameCCG::Visual::CCGFlowProcessor* _processor_k__BackingField; // 0x18

		::Cysharp::Threading::Tasks::UniTask* PlayInputEvent(::MX::MinigameCCG::CCGEvent* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::CCGEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_PLAYINPUTEVENT_OFFSET))(arg, nullptr);
		}

		::MX::MinigameCCG::CCGGame* get_game()
		{
			return (return (::MX::MinigameCCG::CCGGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_GET_GAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::MX::MinigameCCG::Visual::CCGFlowProcessor* get_processor()
		{
			return (return (::MX::MinigameCCG::Visual::CCGFlowProcessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_GET_PROCESSOR_OFFSET))(nullptr);
		}

	};
}

