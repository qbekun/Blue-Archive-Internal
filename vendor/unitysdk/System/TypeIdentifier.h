#pragma once
#include "../unitysdk.h"

#define SYSTEM_TYPEIDENTIFIER_GET_INTERNALNAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System
{
	inline static constexpr unsigned int TypeIdentifier_TypeDefinitionIndex = 24000;

	class TypeIdentifier : public Il2CppObject
	{
	public:
		::System::String* get_InternalName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIER_GET_INTERNALNAME_OFFSET))(nullptr);
		}

	};
}

