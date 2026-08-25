#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_ChangePlayerFrontStriker; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEPLAYERFRONTSTRIKER__RUN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E5C800)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEPLAYERFRONTSTRIKER_RUN_OFFSET UNITYSDK_OFFSET(0x1E5C830)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEPLAYERFRONTSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C9B0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionChangePlayerFrontStriker_TypeDefinitionIndex = 21074;

	class VisualActionChangePlayerFrontStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_ChangePlayerFrontStriker* eventInput; // 0x28

		::System::Boolean _Run_b__2_0(CCGVisualStriker* arg)
		{
			return (return (::System::Boolean(*)(CCGVisualStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEPLAYERFRONTSTRIKER__RUN_B__2_0_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEPLAYERFRONTSTRIKER_RUN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_ChangePlayerFrontStriker* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_ChangePlayerFrontStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGEPLAYERFRONTSTRIKER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

