#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA256SIGNATUREDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AC600)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SHA256SignatureDescription_TypeDefinitionIndex = 24379;

	class RSAPKCS1SHA256SignatureDescription : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA256SIGNATUREDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

