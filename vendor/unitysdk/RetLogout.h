#pragma once
#include "unitysdk.h"

#define RETLOGOUT_.CTOR_OFFSET UNITYSDK_OFFSET(0x211D970)

	inline static constexpr unsigned int RetLogout_TypeDefinitionIndex = 3875;

	class RetLogout : public Il2CppObject
	{
	public:
		::System::Int32 RESULT_CODE; // 0x10
		::System::String* RESULT_DESCRIPTION; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETLOGOUT_.CTOR_OFFSET))(nullptr);
		}

	};

