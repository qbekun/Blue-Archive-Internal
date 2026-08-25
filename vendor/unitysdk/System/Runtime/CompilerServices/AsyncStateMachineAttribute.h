#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCSTATEMACHINEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x92274E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncStateMachineAttribute_TypeDefinitionIndex = 24734;

	class AsyncStateMachineAttribute : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCSTATEMACHINEATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

	};
}

