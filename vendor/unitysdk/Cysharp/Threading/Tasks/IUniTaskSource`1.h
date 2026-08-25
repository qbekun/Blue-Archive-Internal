#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_IUNITASKSOURCE`1_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int IUniTaskSource`1_TypeDefinitionIndex = 35852;

	class IUniTaskSource`1 : public Il2CppObject
	{
	public:
		Il2CppObject* GetResult(::System::Int16 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int16, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_IUNITASKSOURCE`1_GETRESULT_OFFSET))(arg, nullptr);
		}

	};
}

