#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INTSECURITY_UNSAFEGETFULLPATH_OFFSET UNITYSDK_OFFSET(0x9B52190)

namespace System::ComponentModel
{
	inline static constexpr unsigned int IntSecurity_TypeDefinitionIndex = 29500;

	class IntSecurity : public Il2CppObject
	{
	public:
		::System::String* UnsafeGetFullPath(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INTSECURITY_UNSAFEGETFULLPATH_OFFSET))(str, nullptr);
		}

	};
}

