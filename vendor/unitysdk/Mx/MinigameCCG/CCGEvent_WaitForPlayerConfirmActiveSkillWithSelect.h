#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class SelectionContainer; }
namespace MX::MinigameCCG { class CCGEntity; }

#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMACTIVESKILLWITHSELECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCDE50)
#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMACTIVESKILLWITHSELECT_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0x1DCE050)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_WaitForPlayerConfirmActiveSkillWithSelect_TypeDefinitionIndex = 20563;

	class CCGEvent_WaitForPlayerConfirmActiveSkillWithSelect : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::SelectionContainer* _Selection_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGEntity* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGEntity*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMACTIVESKILLWITHSELECT_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::SelectionContainer* get_Selection()
		{
			return (return (::MX::MinigameCCG::SelectionContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERCONFIRMACTIVESKILLWITHSELECT_GET_SELECTION_OFFSET))(nullptr);
		}

	};
}

