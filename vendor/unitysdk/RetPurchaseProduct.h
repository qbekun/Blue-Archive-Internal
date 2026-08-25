#pragma once
#include "unitysdk.h"

#define RETPURCHASEPRODUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC72880)

	inline static constexpr unsigned int RetPurchaseProduct_TypeDefinitionIndex = 9010;

	class RetPurchaseProduct : public Il2CppObject
	{
	public:
		::System::String* LOCALIZED_PRICE; // 0x10
		::System::Int64 PRICE_MICRO; // 0x18
		::System::String* PRICE_CURRENCY_CODE; // 0x20
		::System::String* PRODUCT_ID; // 0x28
		::System::Boolean IS_TEENAGE; // 0x30

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETPURCHASEPRODUCT_.CTOR_OFFSET))(nullptr);
		}

	};

