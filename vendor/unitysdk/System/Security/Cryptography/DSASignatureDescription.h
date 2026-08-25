#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDESCRIPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x91AC6F0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DSASignatureDescription_TypeDefinitionIndex = 24382;

	class DSASignatureDescription : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DSASIGNATUREDESCRIPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

