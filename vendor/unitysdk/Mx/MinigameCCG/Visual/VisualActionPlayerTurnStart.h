#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_PlayerTurnStart; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONPLAYERTURNSTART_RUN_OFFSET UNITYSDK_OFFSET(0x1E72F60)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONPLAYERTURNSTART_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E730E0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionPlayerTurnStart_TypeDefinitionIndex = 21121;

	class VisualActionPlayerTurnStart : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_PlayerTurnStart* eventInput; // 0x28

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONPLAYERTURNSTART_RUN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_PlayerTurnStart* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_PlayerTurnStart*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONPLAYERTURNSTART_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

