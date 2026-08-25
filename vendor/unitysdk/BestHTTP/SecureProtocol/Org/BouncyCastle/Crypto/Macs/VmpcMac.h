#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_RESET_OFFSET UNITYSDK_OFFSET(0x6C0170)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_INIT_OFFSET UNITYSDK_OFFSET(0x6C0750)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_.CTOR_OFFSET UNITYSDK_OFFSET(0x6C0950)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6C0960)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_GETMACSIZE_OFFSET UNITYSDK_OFFSET(0x6C0990)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6C09A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_INITKEY_OFFSET UNITYSDK_OFFSET(0x6C0500)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_UPDATE_OFFSET UNITYSDK_OFFSET(0x6C0E40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_BLOCKUPDATE_OFFSET UNITYSDK_OFFSET(0x6C1050)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Macs
{
	inline static constexpr unsigned int VmpcMac_TypeDefinitionIndex = 22442;

	class VmpcMac : public Il2CppObject
	{
	public:
		::System::Byte g; // 0x10
		::System::Byte n; // 0x11
		::Il2CppArray<::System::Object*>* P; // 0x18
		::System::Byte s; // 0x20
		::Il2CppArray<::System::Object*>* T; // 0x28
		::Il2CppArray<::System::Object*>* workingIV; // 0x30
		::Il2CppArray<::System::Object*>* workingKey; // 0x38
		::System::Byte x1; // 0x40
		::System::Byte x2; // 0x41
		::System::Byte x3; // 0x42
		::System::Byte x4; // 0x43

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_RESET_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_.CTOR_OFFSET))(nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Int32 GetMacSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_GETMACSIZE_OFFSET))(nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void initKey(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_INITKEY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void BlockUpdate(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MACS_VMPCMAC_BLOCKUPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

