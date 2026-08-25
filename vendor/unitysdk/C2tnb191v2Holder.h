#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define C2TNB191V2HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7E3F40)
#define C2TNB191V2HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E3FC0)
#define C2TNB191V2HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x7E3FD0)

	inline static constexpr unsigned int C2tnb191v2Holder_TypeDefinitionIndex = 22846;

	class C2tnb191v2Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2TNB191V2HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2TNB191V2HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + C2TNB191V2HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

	};

