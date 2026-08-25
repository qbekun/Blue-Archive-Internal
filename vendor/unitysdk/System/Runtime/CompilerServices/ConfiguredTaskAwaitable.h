#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9229180)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x9229210)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredTaskAwaitable_TypeDefinitionIndex = 24775;

	class ConfiguredTaskAwaitable : public Il2CppObject
	{
	public:
		ConfiguredTaskAwaiter* m_configuredTaskAwaiter; // 0x10

		::System::Void .ctor(::System::Threading::Tasks::Task* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Threading::Tasks::Task*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		ConfiguredTaskAwaiter* GetAwaiter()
		{
			return (return (ConfiguredTaskAwaiter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_GETAWAITER_OFFSET))(nullptr);
		}

	};
}

