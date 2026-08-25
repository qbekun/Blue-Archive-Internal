#pragma once
#include "../../unitysdk.h"

#define MXFIELD_TASK_FIELDBATTLEENTERDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB4AA0)

namespace MXField::Task
{
	inline static constexpr unsigned int FieldBattleEnterDispatch_TypeDefinitionIndex = 10811;

	class FieldBattleEnterDispatch : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENTERDISPATCH_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

