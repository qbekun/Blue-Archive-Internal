#pragma once
#include "../unitysdk.h"

#define SYSTEM_TYPENAME_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int TypeName_TypeDefinitionIndex = 23999;

	class TypeName : public Il2CppObject
	{
	public:
		::System::String* get_DisplayName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPENAME_GET_DISPLAYNAME_OFFSET))(nullptr);
		}

	};
}

