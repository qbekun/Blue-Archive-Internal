#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define C2TNB431R1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7E54B0)
#define C2TNB431R1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x7E5540)
#define C2TNB431R1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E5530)

	inline static constexpr unsigned int C2tnb431r1Holder_TypeDefinitionIndex = 22856;

	class C2tnb431r1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2TNB431R1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + C2TNB431R1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2TNB431R1HOLDER_.CTOR_OFFSET))(nullptr);
		}

	};

