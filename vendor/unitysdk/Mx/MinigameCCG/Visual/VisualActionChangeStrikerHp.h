#pragma once
#include "../../../unitysdk.h"

namespace MX::MinigameCCG { class CCGEvent_ChangeStrikerHp; }
namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace MX::MinigameCCG { class EventHealthChange; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGESTRIKERHP__CHECKCHANGESTRIKERHP_B__3_0_OFFSET UNITYSDK_OFFSET(0x1E5D7B0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGESTRIKERHP_RUN_OFFSET UNITYSDK_OFFSET(0x1E5D7C0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGESTRIKERHP__CHECKCHANGESTRIKERHP_B__3_1_OFFSET UNITYSDK_OFFSET(0x1E5D940)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGESTRIKERHP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D950)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGESTRIKERHP_CHECKCHANGESTRIKERHP_OFFSET UNITYSDK_OFFSET(0x1E5D980)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionChangeStrikerHp_TypeDefinitionIndex = 21077;

	class VisualActionChangeStrikerHp : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::CCGEvent_ChangeStrikerHp* eventInput; // 0x28

		::System::Void _CheckChangeStrikerHp_b__3_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGESTRIKERHP__CHECKCHANGESTRIKERHP_B__3_0_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGESTRIKERHP_RUN_OFFSET))(nullptr);
		}

		::System::Boolean _CheckChangeStrikerHp_b__3_1()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGESTRIKERHP__CHECKCHANGESTRIKERHP_B__3_1_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::CCGEvent_ChangeStrikerHp* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::CCGEvent_ChangeStrikerHp*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGESTRIKERHP_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTask* CheckChangeStrikerHp(::MX::MinigameCCG::EventHealthChange* arg)
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::MX::MinigameCCG::EventHealthChange*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONCHANGESTRIKERHP_CHECKCHANGESTRIKERHP_OFFSET))(arg, nullptr);
		}

	};
}

