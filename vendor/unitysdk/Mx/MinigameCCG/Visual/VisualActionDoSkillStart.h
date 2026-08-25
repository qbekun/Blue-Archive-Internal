#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_DoSkillStart; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDOSKILLSTART_RUN_OFFSET UNITYSDK_OFFSET(0x1E65F90)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONDOSKILLSTART_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E66110)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionDoSkillStart_TypeDefinitionIndex = 21091;

	class VisualActionDoSkillStart : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_DoSkillStart* eventInput; // 0x90

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDOSKILLSTART_RUN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_DoSkillStart* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_DoSkillStart*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONDOSKILLSTART_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

