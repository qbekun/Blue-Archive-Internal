#pragma once
#include "../../unitysdk.h"

namespace MXField::Shared::Condition { class ConditionElement; }
namespace FlatData { class FieldConditionType; }

#define MXFIELD_DISPATCH_FIELDCONDITIONCHANGEDDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEBFA80)

namespace MXField::Dispatch
{
	inline static constexpr unsigned int FieldConditionChangedDispatch_TypeDefinitionIndex = 10893;

	class FieldConditionChangedDispatch : public Il2CppObject
	{
	public:
		::MXField::Shared::Condition::ConditionElement* Condition; // 0x18

		::System::Void .ctor(::System::Object* arg, ::FlatData::FieldConditionType* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(::System::Object*, ::FlatData::FieldConditionType*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_DISPATCH_FIELDCONDITIONCHANGEDDISPATCH_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

	};
}

