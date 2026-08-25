#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREPLAYWINDOW_.CTOR_OFFSET UNITYSDK_OFFSET(0x608800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREPLAYWINDOW_RESET_OFFSET UNITYSDK_OFFSET(0x60C9B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREPLAYWINDOW_SHOULDDISCARD_OFFSET UNITYSDK_OFFSET(0x60A080)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREPLAYWINDOW_REPORTAUTHENTICATED_OFFSET UNITYSDK_OFFSET(0x60A0C0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DtlsReplayWindow_TypeDefinitionIndex = 22125;

	class DtlsReplayWindow : public Il2CppObject
	{
	public:
		::System::Int64 VALID_SEQ_MASK; // 0x0
		::System::Int64 WINDOW_SIZE; // 0x0
		::System::Int64 mLatestConfirmedSeq; // 0x10
		::System::Int64 mBitmap; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREPLAYWINDOW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREPLAYWINDOW_RESET_OFFSET))(nullptr);
		}

		::System::Boolean ShouldDiscard(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREPLAYWINDOW_SHOULDDISCARD_OFFSET))(arg, nullptr);
		}

		::System::Void ReportAuthenticated(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREPLAYWINDOW_REPORTAUTHENTICATED_OFFSET))(arg, nullptr);
		}

	};
}

