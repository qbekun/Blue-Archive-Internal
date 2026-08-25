#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Cryptography { class MD4; }

#define MONO_SECURITY_CRYPTOGRAPHY_MD4_.CTOR_OFFSET UNITYSDK_OFFSET(0x910D9E0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD4_CREATE_OFFSET UNITYSDK_OFFSET(0x910DA00)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD4_TypeDefinitionIndex = 35807;

	class MD4 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_.CTOR_OFFSET))(nullptr);
		}

		::Mono::Security::Cryptography::MD4* Create()
		{
			return (return (::Mono::Security::Cryptography::MD4*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD4_CREATE_OFFSET))(nullptr);
		}

	};
}

