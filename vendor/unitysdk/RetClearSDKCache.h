#pragma once
#include "unitysdk.h"

#define RETCLEARSDKCACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x211D930)

	inline static constexpr unsigned int RetClearSDKCache_TypeDefinitionIndex = 3871;

	class RetClearSDKCache : public Il2CppObject
	{
	public:
		::System::Int32 RESULT_CODE; // 0x10
		::System::String* RESULT_DESCRIPTION; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETCLEARSDKCACHE_.CTOR_OFFSET))(nullptr);
		}

	};

