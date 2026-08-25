#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPointMap; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class WNafPreCompInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class PreCompInfo; }

#define PRECOMPUTEWITHPOINTMAPCALLBACK_CHECKEXISTING_OFFSET UNITYSDK_OFFSET(0x560780)
#define PRECOMPUTEWITHPOINTMAPCALLBACK_CHECKTABLE_OFFSET UNITYSDK_OFFSET(0x560810)
#define PRECOMPUTEWITHPOINTMAPCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x55F370)
#define PRECOMPUTEWITHPOINTMAPCALLBACK_PRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x560820)

	inline static constexpr unsigned int PrecomputeWithPointMapCallback_TypeDefinitionIndex = 21842;

	class PrecomputeWithPointMapCallback : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* m_point; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap; // 0x18
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* m_fromWNaf; // 0x20
		::System::Boolean m_includeNegated; // 0x28

		::System::Boolean CheckExisting(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PRECOMPUTEWITHPOINTMAPCALLBACK_CHECKEXISTING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CheckTable(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PRECOMPUTEWITHPOINTMAPCALLBACK_CHECKTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap* arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPointMap*, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PRECOMPUTEWITHPOINTMAPCALLBACK_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, ::PVOID))((::PBYTE)hIl2Cpp + PRECOMPUTEWITHPOINTMAPCALLBACK_PRECOMPUTE_OFFSET))(arg, nullptr);
		}

	};

