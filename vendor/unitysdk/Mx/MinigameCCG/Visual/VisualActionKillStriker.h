#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_KillStriker; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONKILLSTRIKER_DIRECTING_OFFSET UNITYSDK_OFFSET(0x1E6D7B0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONKILLSTRIKER_RUN_OFFSET UNITYSDK_OFFSET(0x1E6D950)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONKILLSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DAD0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionKillStriker_TypeDefinitionIndex = 21112;

	class VisualActionKillStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_KillStriker* eventInput; // 0x28

		::Cysharp::Threading::Tasks::UniTask* Directing(CCGVisualStriker* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(CCGVisualStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONKILLSTRIKER_DIRECTING_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONKILLSTRIKER_RUN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_KillStriker* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_KillStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONKILLSTRIKER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

