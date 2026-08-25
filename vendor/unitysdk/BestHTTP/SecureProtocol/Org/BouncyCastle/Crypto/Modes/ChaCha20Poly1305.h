#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { class ChaCha7539Engine; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class IMac; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_.CTOR_OFFSET UNITYSDK_OFFSET(0x6A0F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_.CTOR_OFFSET UNITYSDK_OFFSET(0x6A0F60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_GET_ALGORITHMNAME_OFFSET UNITYSDK_OFFSET(0x6A1190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_INIT_OFFSET UNITYSDK_OFFSET(0x6A11C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_GETOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6A1740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_GETUPDATEOUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x6A1820)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PROCESSAADBYTE_OFFSET UNITYSDK_OFFSET(0x6A1900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PROCESSAADBYTES_OFFSET UNITYSDK_OFFSET(0x6A1B40)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PROCESSBYTE_OFFSET UNITYSDK_OFFSET(0x6A1D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PROCESSBYTES_OFFSET UNITYSDK_OFFSET(0x6A21F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_DOFINAL_OFFSET UNITYSDK_OFFSET(0x6A2770)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_GETMAC_OFFSET UNITYSDK_OFFSET(0x6A2D00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_RESET_OFFSET UNITYSDK_OFFSET(0x6A2D50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_CHECKAAD_OFFSET UNITYSDK_OFFSET(0x6A1A10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_CHECKDATA_OFFSET UNITYSDK_OFFSET(0x6A2010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_FINISHAAD_OFFSET UNITYSDK_OFFSET(0x6A2D60)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_FINISHDATA_OFFSET UNITYSDK_OFFSET(0x6A2B80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_INCREMENTCOUNT_OFFSET UNITYSDK_OFFSET(0x6A1AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_INITMAC_OFFSET UNITYSDK_OFFSET(0x6A2E80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PADMAC_OFFSET UNITYSDK_OFFSET(0x6A2D80)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PROCESSDATA_OFFSET UNITYSDK_OFFSET(0x6A20D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_RESET_OFFSET UNITYSDK_OFFSET(0x6A1610)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_.CCTOR_OFFSET UNITYSDK_OFFSET(0x6A30A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes
{
	inline static constexpr unsigned int ChaCha20Poly1305_TypeDefinitionIndex = 22407;

	class ChaCha20Poly1305 : public Il2CppObject
	{
	public:
		::System::Int32 BufSize; // 0x0
		::System::Int32 KeySize; // 0x0
		::System::Int32 NonceSize; // 0x0
		::System::Int32 MacSize; // 0x0
		::Il2CppArray<::System::Object*>* Zeroes; // 0x0
		::System::UInt64 AadLimit; // 0x0
		::System::UInt64 DataLimit; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* mChacha20; // 0x10
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mPoly1305; // 0x18
		::Il2CppArray<::System::Object*>* mKey; // 0x20
		::Il2CppArray<::System::Object*>* mNonce; // 0x28
		::Il2CppArray<::System::Object*>* mBuf; // 0x30
		::Il2CppArray<::System::Object*>* mMac; // 0x38
		::Il2CppArray<::System::Object*>* mInitialAad; // 0x40
		::System::UInt64 mAadCount; // 0x48
		::System::UInt64 mDataCount; // 0x50
		State* mState; // 0x58
		::System::Int32 mBufPos; // 0x5C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_AlgorithmName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_GET_ALGORITHMNAME_OFFSET))(nullptr);
		}

		::System::Void Init(::System::Boolean arg, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* arg)
		{
			((::System::Void(*)(::System::Boolean, ::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_GETOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetUpdateOutputSize(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_GETUPDATEOUTPUTSIZE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAadByte(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PROCESSAADBYTE_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessAadBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PROCESSAADBYTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessByte(::System::Byte arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Byte, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PROCESSBYTE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 ProcessBytes(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PROCESSBYTES_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetMac()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_GETMAC_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_RESET_OFFSET))(nullptr);
		}

		::System::Void CheckAad()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_CHECKAAD_OFFSET))(nullptr);
		}

		::System::Void CheckData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_CHECKDATA_OFFSET))(nullptr);
		}

		::System::Void FinishAad(State* arg)
		{
			((::System::Void(*)(State*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_FINISHAAD_OFFSET))(arg, nullptr);
		}

		::System::Void FinishData(State* arg)
		{
			((::System::Void(*)(State*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_FINISHDATA_OFFSET))(arg, nullptr);
		}

		::System::UInt64 IncrementCount(::System::UInt64 arg, ::System::UInt32 arg, ::System::UInt64 arg)
		{
			return (return (::System::UInt64(*)(::System::UInt64, ::System::UInt32, ::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_INCREMENTCOUNT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void InitMac()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_INITMAC_OFFSET))(nullptr);
		}

		::System::Void PadMac(::System::UInt64 arg)
		{
			((::System::Void(*)(::System::UInt64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PADMAC_OFFSET))(arg, nullptr);
		}

		::System::Void ProcessData(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_PROCESSDATA_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Reset(::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_RESET_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_MODES_CHACHA20POLY1305_.CCTOR_OFFSET))(nullptr);
		}

	};
}

