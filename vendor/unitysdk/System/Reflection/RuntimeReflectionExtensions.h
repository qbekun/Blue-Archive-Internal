#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEMETHODS_OFFSET UNITYSDK_OFFSET(0x9242830)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9242900)
#define SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEBASEDEFINITION_OFFSET UNITYSDK_OFFSET(0x92429D0)

namespace System::Reflection
{
	inline static constexpr unsigned int RuntimeReflectionExtensions_TypeDefinitionIndex = 24894;

	class RuntimeReflectionExtensions : public Il2CppObject
	{
	public:
		Il2CppObject* GetRuntimeMethods(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEMETHODS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetRuntimeProperties(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Reflection::MethodInfo* GetRuntimeBaseDefinition(::System::Reflection::MethodInfo* arg)
		{
			return (return (::System::Reflection::MethodInfo*(*)(::System::Reflection::MethodInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_RUNTIMEREFLECTIONEXTENSIONS_GETRUNTIMEBASEDEFINITION_OFFSET))(arg, nullptr);
		}

	};
}

