#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_ChangeLogicEffect; }
namespace MX::MinigameCCG::Visual { class VFX; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace Cysharp::Threading::Tasks { class UniTask; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_B__3_3_OFFSET UNITYSDK_OFFSET(0x1E40C10)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_B__3_0_OFFSET UNITYSDK_OFFSET(0x1E40C20)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_B__3_4_OFFSET UNITYSDK_OFFSET(0x1E40C30)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_B__3_2_OFFSET UNITYSDK_OFFSET(0x1E40C40)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_G__REFRESHCARD|3_5_OFFSET UNITYSDK_OFFSET(0x1E40C70)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_B__3_1_OFFSET UNITYSDK_OFFSET(0x1E40CD0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E40CE0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x1E40FC0)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionChangeLogicEffect_TypeDefinitionIndex = 21070;

	class VisualActionChangeLogicEffect : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_ChangeLogicEffect* eventInput; // 0x28
		Il2CppObject* dic_handCards; // 0x30

		::System::Void _Run_b__3_3()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_B__3_3_OFFSET))(nullptr);
		}

		::System::Void _Run_b__3_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_B__3_0_OFFSET))(nullptr);
		}

		::System::Boolean _Run_b__3_4()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_B__3_4_OFFSET))(nullptr);
		}

		::System::Boolean _Run_b__3_2(::MX::MinigameCCG::Visual::VFX* arg)
		{
			return (return (::System::Boolean(*)(::MX::MinigameCCG::Visual::VFX*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_B__3_2_OFFSET))(arg, nullptr);
		}

		::System::Void _Run_g__RefreshCard|3_5(<>c__DisplayClass3_0&* arg, <>c__DisplayClass3_1&* arg)
		{
			((::System::Void(*)(<>c__DisplayClass3_0&*, <>c__DisplayClass3_1&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_G__REFRESHCARD|3_5_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean _Run_b__3_1()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT__RUN_B__3_1_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_ChangeLogicEffect* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_ChangeLogicEffect*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGELOGICEFFECT_RUN_OFFSET))(nullptr);
		}

	};
}

