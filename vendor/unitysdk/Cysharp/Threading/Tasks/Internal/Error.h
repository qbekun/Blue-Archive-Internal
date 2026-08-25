#pragma once
#include "../../../../unitysdk.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWARGUMENTNULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x000000)
#define CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWARGUMENTNULLEXCEPTIONCORE_OFFSET UNITYSDK_OFFSET(0x9DF2420)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int Error_TypeDefinitionIndex = 36129;

	class Error : public Il2CppObject
	{
	public:
		::System::Void ThrowArgumentNullException(Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWARGUMENTNULLEXCEPTION_OFFSET))(arg, str, nullptr);
		}

		::System::Void ThrowArgumentNullExceptionCore(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_ERROR_THROWARGUMENTNULLEXCEPTIONCORE_OFFSET))(str, nullptr);
		}

	};
}

