#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE`2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StateTuple`2_TypeDefinitionIndex = 36138;

	class StateTuple`2 : public Il2CppObject
	{
	public:
		Il2CppObject* Item1; // 0x0
		Il2CppObject* Item2; // 0x0

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE`2_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE`2_.CTOR_OFFSET))(nullptr);
		}

	};
}

