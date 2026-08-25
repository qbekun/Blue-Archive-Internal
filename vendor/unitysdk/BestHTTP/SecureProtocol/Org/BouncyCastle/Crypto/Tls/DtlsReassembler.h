#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREASSEMBLER_GET_MSGTYPE_OFFSET UNITYSDK_OFFSET(0x608AE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREASSEMBLER_RESET_OFFSET UNITYSDK_OFFSET(0x608AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREASSEMBLER_CONTRIBUTEFRAGMENT_OFFSET UNITYSDK_OFFSET(0x608C70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREASSEMBLER_GETBODYIFCOMPLETE_OFFSET UNITYSDK_OFFSET(0x609160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREASSEMBLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x609200)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int DtlsReassembler_TypeDefinitionIndex = 22119;

	class DtlsReassembler : public Il2CppObject
	{
	public:
		::System::Byte mMsgType; // 0x10
		::Il2CppArray<::System::Object*>* mBody; // 0x18
		::System::Collections::IList* mMissing; // 0x20

		::System::Byte get_MsgType()
		{
			return (return (::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREASSEMBLER_GET_MSGTYPE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREASSEMBLER_RESET_OFFSET))(nullptr);
		}

		::System::Void ContributeFragment(::System::Byte arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREASSEMBLER_CONTRIBUTEFRAGMENT_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBodyIfComplete()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREASSEMBLER_GETBODYIFCOMPLETE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Byte arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Byte, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_DTLSREASSEMBLER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

