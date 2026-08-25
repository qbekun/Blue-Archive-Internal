#pragma once
#include "../../unitysdk.h"

class UIPopup_SNS;

#define MXFIELD_ACTIONS_PLAYFIELDSNSACTION_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xEF2230)
#define MXFIELD_ACTIONS_PLAYFIELDSNSACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF2260)
#define MXFIELD_ACTIONS_PLAYFIELDSNSACTION_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEF22F0)
#define MXFIELD_ACTIONS_PLAYFIELDSNSACTION__COEXECUTE_B__8_0_OFFSET UNITYSDK_OFFSET(0xEF2300)
#define MXFIELD_ACTIONS_PLAYFIELDSNSACTION__COEXECUTE_B__8_1_OFFSET UNITYSDK_OFFSET(0xEF2390)
#define MXFIELD_ACTIONS_PLAYFIELDSNSACTION_SET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEF23A0)
#define MXFIELD_ACTIONS_PLAYFIELDSNSACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF23B0)

namespace MXField::Actions
{
	inline static constexpr unsigned int PlayFieldSNSAction_TypeDefinitionIndex = 11103;

	class PlayFieldSNSAction : public Il2CppObject
	{
	public:
		::System::Int64 InteractionGroupId; // 0x40
		::System::Boolean _isPlaying; // 0x48
		::System::Boolean _Block_k__BackingField; // 0x49

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYFIELDSNSACTION_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYFIELDSNSACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYFIELDSNSACTION_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::Void _CoExecute_b__8_0(UIPopup_SNS* arg)
		{
			((::System::Void(*)(UIPopup_SNS*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYFIELDSNSACTION__COEXECUTE_B__8_0_OFFSET))(arg, nullptr);
		}

		::System::Void _CoExecute_b__8_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYFIELDSNSACTION__COEXECUTE_B__8_1_OFFSET))(nullptr);
		}

		::System::Void set_Block(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYFIELDSNSACTION_SET_BLOCK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYFIELDSNSACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

