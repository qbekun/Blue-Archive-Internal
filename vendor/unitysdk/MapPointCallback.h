#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo { class ECEndomorphism; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo { class EndoPreCompInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class PreCompInfo; }

#define MAPPOINTCALLBACK_CHECKEXISTING_OFFSET UNITYSDK_OFFSET(0x561E80)
#define MAPPOINTCALLBACK_PRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x561ED0)
#define MAPPOINTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x561E30)

	inline static constexpr unsigned int MapPointCallback_TypeDefinitionIndex = 21851;

	class MapPointCallback : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* m_point; // 0x18

		::System::Boolean CheckExisting(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::PVOID))((::PBYTE)hIl2Cpp + MAPPOINTCALLBACK_CHECKEXISTING_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MAPPOINTCALLBACK_PRECOMPUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + MAPPOINTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

