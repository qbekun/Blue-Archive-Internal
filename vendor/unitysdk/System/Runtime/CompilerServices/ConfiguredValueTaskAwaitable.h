#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227740)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x9227750)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredValueTaskAwaitable_TypeDefinitionIndex = 24741;

	class ConfiguredValueTaskAwaitable : public Il2CppObject
	{
	public:
		::System::Threading::Tasks::ValueTask* _value; // 0x10

		::System::Void .ctor(::System::Threading::Tasks::ValueTask* arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::ValueTask*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		ConfiguredValueTaskAwaiter* GetAwaiter()
		{
			return (return (ConfiguredValueTaskAwaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE_GETAWAITER_OFFSET))(nullptr);
		}

	};
}

