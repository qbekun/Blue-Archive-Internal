#pragma once
#include "unitysdk.h"

#define COUNTRYNAME_.CTOR_OFFSET UNITYSDK_OFFSET(0x90FE0E0)

	inline static constexpr unsigned int CountryName_TypeDefinitionIndex = 35771;

	class CountryName : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COUNTRYNAME_.CTOR_OFFSET))(nullptr);
		}

	};

