#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ICRITICALNOTIFYCOMPLETION_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ICriticalNotifyCompletion_TypeDefinitionIndex = 24753;

	class ICriticalNotifyCompletion : public Il2CppObject
	{
	public:
		::System::Void UnsafeOnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ICRITICALNOTIFYCOMPLETION_UNSAFEONCOMPLETED_OFFSET))(arg, nullptr);
		}

	};
}

