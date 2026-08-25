#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class AbstractF2mPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class PreCompInfo; }

#define WTAUNAFCALLBACK_PRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x561690)
#define WTAUNAFCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x561650)

	inline static constexpr unsigned int WTauNafCallback_TypeDefinitionIndex = 21844;

	class WTauNafCallback : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* m_p; // 0x10
		::System::SByte m_a; // 0x18

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, ::PVOID))((::PBYTE)hIl2Cpp + WTAUNAFCALLBACK_PRECOMPUTE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint* arg, ::System::SByte arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::System::SByte, ::PVOID))((::PBYTE)hIl2Cpp + WTAUNAFCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

