#pragma once
#include "unitysdk.h"

#define RETGETIDENTIFIERFORVENDER_.CTOR_OFFSET UNITYSDK_OFFSET(0xC72840)

	inline static constexpr unsigned int RetGetIdentifierForVender_TypeDefinitionIndex = 9006;

	class RetGetIdentifierForVender : public Il2CppObject
	{
	public:
		::System::Int32 RESULT_CODE; // 0x10
		::System::String* RESULT_DESCRIPTION; // 0x18
		::System::String* IDFV; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RETGETIDENTIFIERFORVENDER_.CTOR_OFFSET))(nullptr);
		}

	};

