#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER`1_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER`1_GETRESULT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER`1_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ValueTaskAwaiter`1_TypeDefinitionIndex = 24770;

	class ValueTaskAwaiter`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _value; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER`1_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsCompleted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER`1_GET_ISCOMPLETED_OFFSET))(nullptr);
		}

		Il2CppObject* GetResult()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER`1_GETRESULT_OFFSET))(nullptr);
		}

		::System::Void UnsafeOnCompleted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_VALUETASKAWAITER`1_UNSAFEONCOMPLETED_OFFSET))(arg, nullptr);
		}

	};
}

