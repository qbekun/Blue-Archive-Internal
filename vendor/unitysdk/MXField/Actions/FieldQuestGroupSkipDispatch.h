#pragma once
#include "../../unitysdk.h"

#define MXFIELD_ACTIONS_FIELDQUESTGROUPSKIPDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF5E00)

namespace MXField::Actions
{
	inline static constexpr unsigned int FieldQuestGroupSkipDispatch_TypeDefinitionIndex = 11130;

	class FieldQuestGroupSkipDispatch : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_FIELDQUESTGROUPSKIPDISPATCH_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

