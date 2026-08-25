#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECLookupTable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class FixedPointPreCompInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class PreCompInfo; }

#define FIXEDPOINTCALLBACK_CHECKTABLE_OFFSET UNITYSDK_OFFSET(0x55BBF0)
#define FIXEDPOINTCALLBACK_CHECKEXISTING_OFFSET UNITYSDK_OFFSET(0x55BC90)
#define FIXEDPOINTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x55BBC0)
#define FIXEDPOINTCALLBACK_PRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x55BD50)

	inline static constexpr unsigned int FixedPointCallback_TypeDefinitionIndex = 21826;

	class FixedPointCallback : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* m_p; // 0x10

		::System::Boolean CheckTable(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECLookupTable*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDPOINTCALLBACK_CHECKTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CheckExisting(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::FixedPointPreCompInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDPOINTCALLBACK_CHECKEXISTING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDPOINTCALLBACK_.CTOR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, ::PVOID))((::PBYTE)hIl2Cpp + FIXEDPOINTCALLBACK_PRECOMPUTE_OFFSET))(arg, nullptr);
		}

	};

