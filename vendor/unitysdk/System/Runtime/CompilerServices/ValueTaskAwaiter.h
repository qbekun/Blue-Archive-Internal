#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92283F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9228400)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x9228550)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x92286A0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9228840)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ValueTaskAwaiter_TypeDefinitionIndex = 24769;

	class ValueTaskAwaiter : public Il2CppObject
	{
	public:
		Il2CppObject* s_invokeActionDelegate; // 0x0
		::System::Threading::Tasks::ValueTask* _value; // 0x10

		::System::Void .ctor(::System::Threading::Tasks::ValueTask* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::ValueTask*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void GetResult()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_GETRESULT_OFFSET))(nullptr);
		}

		::System::Void UnsafeOnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_UNSAFEONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

