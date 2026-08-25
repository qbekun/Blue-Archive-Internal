#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define C2TNB239V1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x7E45A0)
#define C2TNB239V1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x7E45B0)
#define C2TNB239V1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x7E4630)

	inline static constexpr unsigned int C2tnb239v1Holder_TypeDefinitionIndex = 22849;

	class C2tnb239v1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2TNB239V1HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + C2TNB239V1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + C2TNB239V1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

	};

