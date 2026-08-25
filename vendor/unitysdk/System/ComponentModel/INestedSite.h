#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_INESTEDSITE_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::ComponentModel
{
	inline static constexpr unsigned int INestedSite_TypeDefinitionIndex = 29406;

	class INestedSite : public Il2CppObject
	{
	public:
		::System::String* get_FullName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_INESTEDSITE_GET_FULLNAME_OFFSET))(nullptr);
		}

	};
}

