#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_SetActiveCooldown; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSETACTIVECOOLDOWN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E73EC0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSETACTIVECOOLDOWN_RUN_OFFSET UNITYSDK_OFFSET(0x1E73EF0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionSetActiveCooldown_TypeDefinitionIndex = 21123;

	class VisualActionSetActiveCooldown : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_SetActiveCooldown* eventInput; // 0x28

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_SetActiveCooldown* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_SetActiveCooldown*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSETACTIVECOOLDOWN_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSETACTIVECOOLDOWN_RUN_OFFSET))(nullptr);
		}

	};
}

