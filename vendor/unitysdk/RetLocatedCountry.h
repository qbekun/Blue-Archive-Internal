#pragma once
#include "unitysdk.h"

#define RETLOCATEDCOUNTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xC72850)

	inline static constexpr unsigned int RetLocatedCountry_TypeDefinitionIndex = 9007;

	class RetLocatedCountry : public Il2CppObject
	{
	public:
		::System::String* LOCATEDCOUNTRY; // 0x10
		::System::Int32 LOCATEDCOUNTRYCODE; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETLOCATEDCOUNTRY_.CTOR_OFFSET))(nullptr);
		}

	};

