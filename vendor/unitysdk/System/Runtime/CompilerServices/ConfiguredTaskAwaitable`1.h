#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE`1_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredTaskAwaitable`1_TypeDefinitionIndex = 24777;

	class ConfiguredTaskAwaitable`1 : public Il2CppObject
	{
	public:
		Il2CppObject* m_configuredTaskAwaiter; // 0x0

		::System::Void .ctor(Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE`1_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* GetAwaiter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE`1_GETAWAITER_OFFSET))(nullptr);
		}

	};
}

