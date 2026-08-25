#pragma once
#include "unitysdk.h"

#define RETDELETEACCOUNT_.CTOR_OFFSET UNITYSDK_OFFSET(0x211D940)

	inline static constexpr unsigned int RetDeleteAccount_TypeDefinitionIndex = 3872;

	class RetDeleteAccount : public Il2CppObject
	{
	public:
		::System::Int32 RESULT_CODE; // 0x10
		::System::String* RESULT_DESCRIPTION; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETDELETEACCOUNT_.CTOR_OFFSET))(nullptr);
		}

	};

