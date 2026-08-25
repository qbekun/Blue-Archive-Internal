#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA512SIGNATUREDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AC6A0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SHA512SignatureDescription_TypeDefinitionIndex = 24381;

	class RSAPKCS1SHA512SignatureDescription : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA512SIGNATUREDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

