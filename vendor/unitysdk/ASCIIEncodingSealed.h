#pragma once
#include "unitysdk.h"

#define ASCIIENCODINGSEALED_.CTOR_OFFSET UNITYSDK_OFFSET(0x9158070)

	inline static constexpr unsigned int ASCIIEncodingSealed_TypeDefinitionIndex = 24219;

	class ASCIIEncodingSealed : public ::Mono::Security::Protocol::Ntlm::Type1Message
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASCIIENCODINGSEALED_.CTOR_OFFSET))(nullptr);
		}

	};

