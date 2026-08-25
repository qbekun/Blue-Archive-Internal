#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_INTROSPECTIONEXTENSIONS_GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x923B360)

namespace System::Reflection
{
	inline static constexpr unsigned int IntrospectionExtensions_TypeDefinitionIndex = 24859;

	class IntrospectionExtensions : public Il2CppObject
	{
	public:
		::System::Reflection::TypeInfo* GetTypeInfo(::System::Type* arg)
		{
			return (return (::System::Reflection::TypeInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_INTROSPECTIONEXTENSIONS_GETTYPEINFO_OFFSET))(arg, nullptr);
		}

	};
}

