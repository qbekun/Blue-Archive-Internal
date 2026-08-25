#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE`1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StateTuple`1_TypeDefinitionIndex = 36136;

	class StateTuple`1 : public Il2CppObject
	{
	public:
		Il2CppObject* Item1; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_STATETUPLE`1_DISPOSE_OFFSET))(nullptr);
		}

	};
}

