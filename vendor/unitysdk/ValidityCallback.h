#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class PreCompInfo; }

#define VALIDITYCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x5349B0)
#define VALIDITYCALLBACK_PRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x5353F0)

	inline static constexpr unsigned int ValidityCallback_TypeDefinitionIndex = 21794;

	class ValidityCallback : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* m_outer; // 0x10
		::System::Boolean m_decompressed; // 0x18
		::System::Boolean m_checkOrder; // 0x19

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + VALIDITYCALLBACK_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, ::PVOID))((::PBYTE)hIl2Cpp + VALIDITYCALLBACK_PRECOMPUTE_OFFSET))(arg, nullptr);
		}

	};

