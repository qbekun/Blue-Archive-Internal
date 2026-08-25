#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA1SIGNATUREDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AC5B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SHA1SignatureDescription_TypeDefinitionIndex = 24378;

	class RSAPKCS1SHA1SignatureDescription : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA1SIGNATUREDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

