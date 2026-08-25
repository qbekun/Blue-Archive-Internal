#pragma once
#include "../../unitysdk.h"

#define MXFIELD_TASK_FIELDBATTLEENDDISPATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0xEB3AE0)
#define MXFIELD_TASK_FIELDBATTLEENDDISPATCH_GET_ISVICTORY_OFFSET UNITYSDK_OFFSET(0xEB3B20)

namespace MXField::Task
{
	inline static constexpr unsigned int FieldBattleEndDispatch_TypeDefinitionIndex = 10807;

	class FieldBattleEndDispatch : public Il2CppObject
	{
	public:
		::System::Boolean _IsVictory_k__BackingField; // 0x18

		::System::Void .ctor(::System::Boolean arg, ::System::Object* arg2)
		{
			((::System::Void(*)(::System::Boolean, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDDISPATCH_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsVictory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_TASK_FIELDBATTLEENDDISPATCH_GET_ISVICTORY_OFFSET))(nullptr);
		}

	};
}

