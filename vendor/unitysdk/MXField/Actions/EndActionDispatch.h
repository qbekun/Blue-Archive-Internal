#pragma once
#include "../../unitysdk.h"

namespace MXField::Actions { class FieldAction; }

#define MXFIELD_ACTIONS_ENDACTIONDISPATCH_GET_BLOCK_OFFSET UNITYSDK_OFFSET(0xEEC4B0)
#define MXFIELD_ACTIONS_ENDACTIONDISPATCH_GET_INPUTBLOCKPREDICATE_OFFSET UNITYSDK_OFFSET(0xEEC4C0)
#define MXFIELD_ACTIONS_ENDACTIONDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEEBE70)

namespace MXField::Actions
{
	inline static constexpr unsigned int EndActionDispatch_TypeDefinitionIndex = 11057;

	class EndActionDispatch : public Il2CppObject
	{
	public:
		::System::String* _InputBlockPredicate_k__BackingField; // 0x18

		::System::Boolean get_Block()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDACTIONDISPATCH_GET_BLOCK_OFFSET))(nullptr);
		}

		::System::String* get_InputBlockPredicate()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDACTIONDISPATCH_GET_INPUTBLOCKPREDICATE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Object* arg, ::MXField::Actions::FieldAction* arg2)
		{
			((::System::Void(*)(::System::Object*, ::MXField::Actions::FieldAction*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_ENDACTIONDISPATCH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

