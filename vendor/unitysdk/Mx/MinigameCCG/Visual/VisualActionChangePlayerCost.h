#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_ChangePlayerCost; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEPLAYERCOST_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E422E0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEPLAYERCOST_RUN_OFFSET UNITYSDK_OFFSET(0x1E42370)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionChangePlayerCost_TypeDefinitionIndex = 21072;

	class VisualActionChangePlayerCost : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_ChangePlayerCost* eventInput; // 0x28

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_ChangePlayerCost* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_ChangePlayerCost*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEPLAYERCOST_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEPLAYERCOST_RUN_OFFSET))(nullptr);
		}

	};
}

