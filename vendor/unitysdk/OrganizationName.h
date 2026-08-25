#pragma once
#include "unitysdk.h"

#define ORGANIZATIONNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FE140)

	inline static constexpr unsigned int OrganizationName_TypeDefinitionIndex = 35764;

	class OrganizationName : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORGANIZATIONNAME_.CTOR_OFFSET))(nullptr);
		}

	};

