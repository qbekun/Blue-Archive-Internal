#pragma once
#include "../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_UNITASKVOID_FORGET_OFFSET UNITYSDK_OFFSET(0x9DDDC50)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskVoid_TypeDefinitionIndex = 35965;

	class UniTaskVoid : public Il2CppObject
	{
	public:
		::System::Void Forget()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKVOID_FORGET_OFFSET))(nullptr);
		}

	};
}

