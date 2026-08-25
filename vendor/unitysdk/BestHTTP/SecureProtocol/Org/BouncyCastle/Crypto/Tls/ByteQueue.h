#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_NEXTTWOPOW_OFFSET UNITYSDK_OFFSET(0x5F4280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F42B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F4330)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5F43E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_ADDDATA_OFFSET UNITYSDK_OFFSET(0x5F4430)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x5F45E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_COPYTO_OFFSET UNITYSDK_OFFSET(0x5F45F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_READ_OFFSET UNITYSDK_OFFSET(0x5F46F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_READFROM_OFFSET UNITYSDK_OFFSET(0x5F4940)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_REMOVEDATA_OFFSET UNITYSDK_OFFSET(0x5F4A70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_REMOVEDATA_OFFSET UNITYSDK_OFFSET(0x5F4B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_REMOVEDATA_OFFSET UNITYSDK_OFFSET(0x5F4B70)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_SHRINK_OFFSET UNITYSDK_OFFSET(0x5F4C00)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	inline static constexpr unsigned int ByteQueue_TypeDefinitionIndex = 22079;

	class ByteQueue : public Il2CppObject
	{
	public:
		::System::Int32 DefaultCapacity; // 0x0
		::Il2CppArray<::System::Object*>* databuf; // 0x10
		::System::Int32 skipped; // 0x18
		::System::Int32 available; // 0x1C
		::System::Boolean readOnlyBuf; // 0x20

		::System::Int32 NextTwoPow(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_NEXTTWOPOW_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_ADDDATA_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_Available()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_GET_AVAILABLE_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::IO::Stream* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Read(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_READ_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::IO::MemoryStream* ReadFrom(::System::Int32 arg)
		{
			return (return (::System::IO::MemoryStream*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_READFROM_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveData(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_REMOVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_REMOVEDATA_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* RemoveData(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_REMOVEDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Shrink()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_TLS_BYTEQUEUE_SHRINK_OFFSET))(nullptr);
		}

	};
}

