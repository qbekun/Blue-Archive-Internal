#pragma once
#include "../../unitysdk.h"

#define SYSTEM_THREADING_CONTEXTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DCB30)
#define SYSTEM_THREADING_CONTEXTCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x93E05C0)

namespace System::Threading
{
	inline static constexpr unsigned int ContextCallback_TypeDefinitionIndex = 24084;

	class ContextCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CONTEXTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_CONTEXTCALLBACK_INVOKE_OFFSET))(arg, nullptr);
		}

	};
}

