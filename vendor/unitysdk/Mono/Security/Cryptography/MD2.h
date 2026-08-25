#pragma once
#include "../../../unitysdk.h"

namespace Mono::Security::Cryptography { class MD2; }

#define MONO_SECURITY_CRYPTOGRAPHY_MD2_.CTOR_OFFSET UNITYSDK_OFFSET(0x910D1C0)
#define MONO_SECURITY_CRYPTOGRAPHY_MD2_CREATE_OFFSET UNITYSDK_OFFSET(0x910D1E0)

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int MD2_TypeDefinitionIndex = 35805;

	class MD2 : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_.CTOR_OFFSET))(nullptr);
		}

		::Mono::Security::Cryptography::MD2* Create()
		{
			return (return (::Mono::Security::Cryptography::MD2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_CRYPTOGRAPHY_MD2_CREATE_OFFSET))(nullptr);
		}

	};
}

