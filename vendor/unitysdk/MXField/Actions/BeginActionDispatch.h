#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class FieldAction; }

#define MXFIELD_ACTIONS_BEGINACTIONDISPATCH_GET_MYACTION_OFFSET UNITYSDK_OFFSET(0xEEC480)
#define MXFIELD_ACTIONS_BEGINACTIONDISPATCH_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xEEC490)
#define MXFIELD_ACTIONS_BEGINACTIONDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEBFA0)
#define MXFIELD_ACTIONS_BEGINACTIONDISPATCH_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEEC4A0)

namespace MXField::Actions
{
	inline static constexpr unsigned int BeginActionDispatch_TypeDefinitionIndex = 11056;

	class BeginActionDispatch : public Il2CppObject
	{
	public:
		::MXField::Actions::FieldAction* _MyAction_k__BackingField; // 0x18
		::System::String* _InputBlockPredicate_k__BackingField; // 0x20

		::MXField::Actions::FieldAction* get_MyAction()
		{
			return ((::MXField::Actions::FieldAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_BEGINACTIONDISPATCH_GET_MYACTION_OFFSET))(nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_BEGINACTIONDISPATCH_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::MXField::Actions::FieldAction* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MXField::Actions::FieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_BEGINACTIONDISPATCH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_BEGINACTIONDISPATCH_GET_BLOCK_OFFSET))(nullptr);
		}

	};
}

