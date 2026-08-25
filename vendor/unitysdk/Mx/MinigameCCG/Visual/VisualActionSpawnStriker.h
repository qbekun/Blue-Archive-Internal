#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_SpawnStriker; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace UnityEngine { class Texture; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER__RUN_B__2_3_OFFSET UNITYSDK_OFFSET(0x1E7BEA0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER__RUN_B__2_2_OFFSET UNITYSDK_OFFSET(0x1E7BEB0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER__RUN_B__2_1_OFFSET UNITYSDK_OFFSET(0x1E7BEC0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BED0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER_RUN_OFFSET UNITYSDK_OFFSET(0x1E7BF00)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER__RUN_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E7C080)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionSpawnStriker_TypeDefinitionIndex = 21137;

	class VisualActionSpawnStriker : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_SpawnStriker* eventInput; // 0x28

		::System::Boolean _Run_b__2_3()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER__RUN_B__2_3_OFFSET))(nullptr);
		}

		::System::Void _Run_b__2_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER__RUN_B__2_2_OFFSET))(nullptr);
		}

		::System::Boolean _Run_b__2_1()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER__RUN_B__2_1_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_SpawnStriker* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_SpawnStriker*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER_RUN_OFFSET))(nullptr);
		}

		::System::Void _Run_b__2_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONSPAWNSTRIKER__RUN_B__2_0_OFFSET))(arg, nullptr);
		}

	};
}

