#pragma once
#include "unitysdk.h"

#define RETRESTOREPURCHASEPRODUCT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC72860)

	inline static constexpr unsigned int RetRestorePurchaseProduct_TypeDefinitionIndex = 9008;

	class RetRestorePurchaseProduct : public Il2CppObject
	{
	public:
		::System::Int64 NPSN; // 0x10
		::System::Int64 SHOPCASH_ID; // 0x18
		::System::String* STAMP_TOKEN; // 0x20
		::System::Boolean IS_TEENAGE; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETRESTOREPURCHASEPRODUCT_.CTOR_OFFSET))(nullptr);
		}

	};

