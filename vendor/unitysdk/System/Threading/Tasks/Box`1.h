#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_THREADING_TASKS_BOX`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int Box`1_TypeDefinitionIndex = 24146;

	class Box`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Value; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_BOX`1_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

