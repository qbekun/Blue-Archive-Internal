#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_ChangeActiveCooldown; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEACTIVECOOLDOWN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E40170)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEACTIVECOOLDOWN_RUN_OFFSET UNITYSDK_OFFSET(0x1E401A0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionChangeActiveCooldown_TypeDefinitionIndex = 21066;

	class VisualActionChangeActiveCooldown : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_ChangeActiveCooldown* eventInput; // 0x28

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_ChangeActiveCooldown* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_ChangeActiveCooldown*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEACTIVECOOLDOWN_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEACTIVECOOLDOWN_RUN_OFFSET))(nullptr);
		}

	};
}

