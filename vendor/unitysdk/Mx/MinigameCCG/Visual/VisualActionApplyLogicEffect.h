#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_ApplyLogicEffect; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYLOGICEFFECT__RUN_B__4_1_OFFSET UNITYSDK_OFFSET(0x1E3D100)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYLOGICEFFECT__RUN_B__4_2_OFFSET UNITYSDK_OFFSET(0x1E3D110)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYLOGICEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x1E3D120)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYLOGICEFFECT__RUN_B__4_0_OFFSET UNITYSDK_OFFSET(0x1E3D2B0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYLOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D2C0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionApplyLogicEffect_TypeDefinitionIndex = 21061;

	class VisualActionApplyLogicEffect : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_ApplyLogicEffect* eventInput; // 0x28
		Il2CppObject* dic_handCards; // 0x30
		::System::Int32 targetCounter; // 0x38

		::System::Void _Run_b__4_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYLOGICEFFECT__RUN_B__4_1_OFFSET))(nullptr);
		}

		::System::Void _Run_b__4_2()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYLOGICEFFECT__RUN_B__4_2_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYLOGICEFFECT_RUN_OFFSET))(nullptr);
		}

		::System::Boolean _Run_b__4_0()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYLOGICEFFECT__RUN_B__4_0_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_ApplyLogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_ApplyLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONAPPLYLOGICEFFECT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

