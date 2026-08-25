#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_EMPTYACTION_GET_EVENTACTION_OFFSET UNITYSDK_OFFSET(0xEE9DD0)
#define MXFIELD_ACTIONS_EMPTYACTION_SET_EVENTACTION_OFFSET UNITYSDK_OFFSET(0xEE9DE0)
#define MXFIELD_ACTIONS_EMPTYACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEE9DF0)
#define MXFIELD_ACTIONS_EMPTYACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEE9E30)

namespace MXField::Actions
{
	inline static constexpr unsigned int EmptyAction_TypeDefinitionIndex = 11039;

	class EmptyAction : public Il2CppObject
	{
	public:
		::System::Action* _EventAction_k__BackingField; // 0x30

		::System::Action* get_EventAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_EMPTYACTION_GET_EVENTACTION_OFFSET))(nullptr);
		}

		::System::Void set_EventAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_EMPTYACTION_SET_EVENTACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_EMPTYACTION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Action* arg, ::System::Single arg2, ::System::Single arg3)
		{
			((::System::Void(*)(::System::Action*, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_EMPTYACTION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

