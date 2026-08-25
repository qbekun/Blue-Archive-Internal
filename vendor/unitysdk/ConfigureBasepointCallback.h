#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier { class PreCompInfo; }

#define CONFIGUREBASEPOINTCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x55E1C0)
#define CONFIGUREBASEPOINTCALLBACK_PRECOMPUTE_OFFSET UNITYSDK_OFFSET(0x55F580)

	inline static constexpr unsigned int ConfigureBasepointCallback_TypeDefinitionIndex = 21839;

	class ConfigureBasepointCallback : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* m_curve; // 0x10
		::System::Int32 m_confWidth; // 0x18

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECCurve*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + CONFIGUREBASEPOINTCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*, ::PVOID))((::PBYTE)hIl2Cpp + CONFIGUREBASEPOINTCALLBACK_PRECOMPUTE_OFFSET))(arg, nullptr);
		}

	};

