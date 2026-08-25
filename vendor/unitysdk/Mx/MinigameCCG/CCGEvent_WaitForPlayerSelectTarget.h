#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameCCG { class SelectionContainer; }
namespace MX::MinigameCCG { class CCGPlayer; }

#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERSELECTTARGET_.CTOR_OFFSET UNITYSDK_OFFSET(0x1DCD870)
#define MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERSELECTTARGET_GET_SELECTION_OFFSET UNITYSDK_OFFSET(0x1DCDA80)

namespace MX::MinigameCCG
{
	inline static constexpr unsigned int CCGEvent_WaitForPlayerSelectTarget_TypeDefinitionIndex = 20559;

	class CCGEvent_WaitForPlayerSelectTarget : public Il2CppObject
	{
	public:
		::MX::MinigameCCG::SelectionContainer* _Selection_k__BackingField; // 0x18

		::System::Void .ctor(::MX::MinigameCCG::CCGPlayer* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::MX::MinigameCCG::CCGPlayer*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERSELECTTARGET_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::MX::MinigameCCG::SelectionContainer* get_Selection()
		{
			return (return (::MX::MinigameCCG::SelectionContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_CCGEVENT_WAITFORPLAYERSELECTTARGET_GET_SELECTION_OFFSET))(nullptr);
		}

	};
}

