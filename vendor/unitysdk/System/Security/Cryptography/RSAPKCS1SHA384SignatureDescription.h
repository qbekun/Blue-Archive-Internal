#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA384SIGNATUREDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AC650)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSAPKCS1SHA384SignatureDescription_TypeDefinitionIndex = 24380;

	class RSAPKCS1SHA384SignatureDescription : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSAPKCS1SHA384SIGNATUREDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

