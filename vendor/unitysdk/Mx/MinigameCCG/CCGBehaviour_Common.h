#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGEvent; }

#define MX_MINIGAMECCG_CCGBEHAVIOUR_COMMON_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DB47F0)
#define MX_MINIGAMECCG_CCGBEHAVIOUR_COMMON_PLAYINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x1DB4840)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGBehaviour_Common_TypeDefinitionIndex = 20442;

	class CCGBehaviour_Common : public Il2CppObject
	{
	public:
		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_COMMON_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* PlayInputEvent(::MX::MinigameCCG::CCGEvent* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::CCGEvent*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGBEHAVIOUR_COMMON_PLAYINPUTEVENT_OFFSET))(arg, nullptr);
		}

	};
}

