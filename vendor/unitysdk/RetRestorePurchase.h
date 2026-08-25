#pragma once
#include "unitysdk.h"

#define RETRESTOREPURCHASE_.CTOR_OFFSET UNITYSDK_OFFSET(0xC72870)

	inline static constexpr unsigned int RetRestorePurchase_TypeDefinitionIndex = 9009;

	class RetRestorePurchase : public Il2CppObject
	{
	public:
		::System::Int32 RESULT_CODE; // 0x10
		::System::String* RESULT_DESCRIPTION; // 0x18
		Il2CppObject* PRODUCTS; // 0x20
		::System::Boolean IS_TEENAGE; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETRESTOREPURCHASE_.CTOR_OFFSET))(nullptr);
		}

	};

