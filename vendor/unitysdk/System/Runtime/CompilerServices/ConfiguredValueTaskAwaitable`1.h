#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE`1_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredValueTaskAwaitable`1_TypeDefinitionIndex = 24743;

	class ConfiguredValueTaskAwaitable`1 : public Il2CppObject
	{
	public:
		Il2CppObject* _value; // 0x0

		::System::Void .ctor(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE`1_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAwaiter()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDVALUETASKAWAITABLE`1_GETAWAITER_OFFSET))(nullptr);
		}

	};
}

