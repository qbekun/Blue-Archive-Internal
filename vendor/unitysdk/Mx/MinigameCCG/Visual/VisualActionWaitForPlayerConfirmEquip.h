#pragma once
#include "../../../unitysdk.h"

namespace Cysharp::Threading::Tasks { class UniTask; }
namespace MX::MinigameCCG { class CCGGame; }
namespace MX::MinigameCCG::Visual { class CCGFlowProcessor; }
namespace MX::MinigameCCG { class SelectionContainer; }

#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERCONFIRMEQUIP_RUN_OFFSET UNITYSDK_OFFSET(0x1E7EE50)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERCONFIRMEQUIP_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EFD0)
#define MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERCONFIRMEQUIP_SETINPUTENTITIES_OFFSET UNITYSDK_OFFSET(0x1E7F010)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int VisualActionWaitForPlayerConfirmEquip_TypeDefinitionIndex = 21145;

	class VisualActionWaitForPlayerConfirmEquip : public Il2CppObject
	{
	public:
		::Cysharp::Threading::Tasks::UniTask* Run()
		{
			return (return (::Cysharp::Threading::Tasks::UniTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERCONFIRMEQUIP_RUN_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::MinigameCCG::CCGGame* arg, ::MX::MinigameCCG::Visual::CCGFlowProcessor* arg, ::MX::MinigameCCG::SelectionContainer* arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGGame*, ::MX::MinigameCCG::Visual::CCGFlowProcessor*, ::MX::MinigameCCG::SelectionContainer*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERCONFIRMEQUIP_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetInputEntities()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_VISUALACTIONWAITFORPLAYERCONFIRMEQUIP_SETINPUTENTITIES_OFFSET))(nullptr);
		}

	};
}

