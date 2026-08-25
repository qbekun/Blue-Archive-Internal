#pragma once
#include "../../../unitysdk.h"

namespace MXField::Directing { class FieldPlayerLocation; }

#define MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_SET_PLAYERLOCATION_OFFSET UNITYSDK_OFFSET(0xECDB00)
#define MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xECDB10)
#define MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_GET_PLAYERLOCATION_OFFSET UNITYSDK_OFFSET(0xECDB20)
#define MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xECDB30)
#define MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xECDC40)
#define MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xECDBA0)
#define MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xECDC70)

namespace MXField::Directing::Transition
{
	inline static constexpr unsigned int MoveTransition_TypeDefinitionIndex = 10920;

	class MoveTransition : public Il2CppObject
	{
	public:
		::MXField::Directing::FieldPlayerLocation* _PlayerLocation_k__BackingField; // 0x10
		::System::String* _InputBlockPredicate_k__BackingField; // 0x18
		::System::Boolean _Block_k__BackingField; // 0x20

		::System::Void set_PlayerLocation(::MXField::Directing::FieldPlayerLocation* arg)
		{
			((::System::Void(*)(::MXField::Directing::FieldPlayerLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_SET_PLAYERLOCATION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_.CTOR_OFFSET))(nullptr);
		}

		::MXField::Directing::FieldPlayerLocation* get_PlayerLocation()
		{
			return ((::MXField::Directing::FieldPlayerLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_GET_PLAYERLOCATION_OFFSET))(nullptr);
		}

		::System::Void Execute(::System::Action* arg, ::System::Action* arg2)
		{
			((::System::Void(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_EXECUTE_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute(::System::Action* arg, ::System::Action* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_COEXECUTE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DIRECTING_TRANSITION_MOVETRANSITION_GET_BLOCK_OFFSET))(nullptr);
		}

	};
}

