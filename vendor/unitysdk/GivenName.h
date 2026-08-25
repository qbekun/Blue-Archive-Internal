#pragma once
#include "unitysdk.h"

#define GIVENNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FE560)

	inline static constexpr unsigned int GivenName_TypeDefinitionIndex = 35774;

	class GivenName : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIVENNAME_.CTOR_OFFSET))(nullptr);
		}

	};

