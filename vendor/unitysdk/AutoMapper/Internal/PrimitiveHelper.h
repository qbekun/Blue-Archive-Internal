#pragma once
#include "../../unitysdk.h"

#define AUTOMAPPER_INTERNAL_PRIMITIVEHELPER_TRYADD_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_INTERNAL_PRIMITIVEHELPER_TOREADONLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define AUTOMAPPER_INTERNAL_PRIMITIVEHELPER_NULLCHECK_OFFSET UNITYSDK_OFFSET(0x000000)

namespace AutoMapper::Internal
{
	inline static constexpr unsigned int PrimitiveHelper_TypeDefinitionIndex = 37641;

	class PrimitiveHelper : public Il2CppObject
	{
	public:
		::System::Boolean TryAdd(Il2CppObject* arg, Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_PRIMITIVEHELPER_TRYADD_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* ToReadOnly(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_PRIMITIVEHELPER_TOREADONLY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* NullCheck(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + AUTOMAPPER_INTERNAL_PRIMITIVEHELPER_NULLCHECK_OFFSET))(arg, nullptr);
		}

	};
}

