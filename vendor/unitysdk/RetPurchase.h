#pragma once
#include "unitysdk.h"

#define RETPURCHASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x211D980)

	inline static constexpr unsigned int RetPurchase_TypeDefinitionIndex = 3876;

	class RetPurchase : public Il2CppObject
	{
	public:
		::System::Int32 RESULT_CODE; // 0x10
		::System::String* RESULT_DESCRIPTION; // 0x18
		::System::Int64 NPSN; // 0x20
		::System::Int64 SHOPCASH_ID; // 0x28
		::System::String* PRODUCT_ID; // 0x30
		::System::String* STAMP_TOKEN; // 0x38
		::System::Boolean SUBSCRIPTION_TYPE; // 0x40
		::System::Int64 PRICE_MICRO; // 0x48
		::System::String* PRICE_CURRENCY_CODE; // 0x50
		::System::Boolean IS_TEENAGE; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETPURCHASE_.CTOR_OFFSET))(nullptr);
		}

	};

