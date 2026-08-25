#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class PreCompInfo; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class WNafPreCompInfo; }

#define PRECOMPUTECALLBACK_PRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x55FB80)
#define PRECOMPUTECALLBACK_CHECKTABLE_OFFSET UNITYSDK_OFFSET(0x560770)
#define PRECOMPUTECALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x55F1C0)
#define PRECOMPUTECALLBACK_CHECKEXISTING_OFFSET UNITYSDK_OFFSET(0x560670)

	inline static constexpr unsigned int PrecomputeCallback_TypeDefinitionIndex = 21841;

	class PrecomputeCallback : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* m_p; // 0x10
		::System::Int32 m_minWidth; // 0x18
		::System::Boolean m_includeNegated; // 0x1C

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, ::PVOID))((::PBYTE)hIl2Cpp + PRECOMPUTECALLBACK_PRECOMPUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CheckTable(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PRECOMPUTECALLBACK_CHECKTABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PRECOMPUTECALLBACK_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CheckExisting(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::WNafPreCompInfo*, ::System::Int32, ::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + PRECOMPUTECALLBACK_CHECKEXISTING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};

