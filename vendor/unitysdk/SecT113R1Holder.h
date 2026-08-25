#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParametersHolder; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9 { class X9ECParameters; }

#define SECT113R1HOLDER_CREATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x829A40)
#define SECT113R1HOLDER_.CTOR_OFFSET UNITYSDK_OFFSET(0x829C10)
#define SECT113R1HOLDER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x829C20)

	inline static constexpr unsigned int Sect113r1Holder_TypeDefinitionIndex = 23002;

	class Sect113r1Holder : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance; // 0x0
		::System::Int32 m; // 0x0
		::System::Int32 k; // 0x0

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X9::X9ECParameters*(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT113R1HOLDER_CREATEPARAMETERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT113R1HOLDER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT113R1HOLDER_.CCTOR_OFFSET))(nullptr);
		}

	};

