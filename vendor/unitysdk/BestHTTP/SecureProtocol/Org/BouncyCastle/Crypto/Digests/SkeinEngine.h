#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { class ThreefishEngine; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests { class SkeinEngine; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { class IMemoable; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters { class SkeinParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x772D20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_INITIALSTATE_OFFSET UNITYSDK_OFFSET(0x773010)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_VARIANTIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x773130)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x772180)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_.CTOR_OFFSET UNITYSDK_OFFSET(0x7723E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_COPYIN_OFFSET UNITYSDK_OFFSET(0x773280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_CLONE_OFFSET UNITYSDK_OFFSET(0x7735E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_COPY_OFFSET UNITYSDK_OFFSET(0x773670)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x7724C0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_GET_OUTPUTSIZE_OFFSET UNITYSDK_OFFSET(0x773700)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x772710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_INIT_OFFSET UNITYSDK_OFFSET(0x7727A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_INITPARAMS_OFFSET UNITYSDK_OFFSET(0x773710)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_CREATEINITIALSTATE_OFFSET UNITYSDK_OFFSET(0x773E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_RESET_OFFSET UNITYSDK_OFFSET(0x772900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_UBICOMPLETE_OFFSET UNITYSDK_OFFSET(0x774350)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_UBIINIT_OFFSET UNITYSDK_OFFSET(0x7742A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_UBIFINAL_OFFSET UNITYSDK_OFFSET(0x774620)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_CHECKINITIALISED_OFFSET UNITYSDK_OFFSET(0x774730)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x7729F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x772A50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_DOFINAL_OFFSET UNITYSDK_OFFSET(0x772AF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_OUTPUT_OFFSET UNITYSDK_OFFSET(0x7747A0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	inline static constexpr unsigned int SkeinEngine_TypeDefinitionIndex = 22616;

	class SkeinEngine : public Il2CppObject
	{
	public:
		::System::Int32 SKEIN_256; // 0x0
		::System::Int32 SKEIN_512; // 0x0
		::System::Int32 SKEIN_1024; // 0x0
		::System::Int32 PARAM_TYPE_KEY; // 0x0
		::System::Int32 PARAM_TYPE_CONFIG; // 0x0
		::System::Int32 PARAM_TYPE_MESSAGE; // 0x0
		::System::Int32 PARAM_TYPE_OUTPUT; // 0x0
		::System::Collections::IDictionary* INITIAL_STATES; // 0x0
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* threefish; // 0x10
		::System::Int32 outputSizeBytes; // 0x18
		::Il2CppArray<::System::Object*>* chain; // 0x20
		::Il2CppArray<::System::Object*>* initialState; // 0x28
		::Il2CppArray<::System::Object*>* key; // 0x30
		::Il2CppArray<::System::Object*>* preMessageParameters; // 0x38
		::Il2CppArray<::System::Object*>* postMessageParameters; // 0x40
		UBI* ubi; // 0x48
		::Il2CppArray<::System::Object*>* singleByte; // 0x50

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void InitialState(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_INITIALSTATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 VariantIdentifier(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_VARIANTIDENTIFIER_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CopyIn(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SkeinEngine*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_COPYIN_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Clone(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_CLONE_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy()
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_COPY_OFFSET))(nullptr);
		}

		::System::Void Reset(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_RESET_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_OutputSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_GET_OUTPUTSIZE_OFFSET))(nullptr);
		}

		::System::Int32 get_BlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_GET_BLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void Init(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_INIT_OFFSET))(arg, nullptr);
		}

		::System::Void InitParams(::System::Collections::IDictionary* arg)
		{
			((::System::Void(*)(::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_INITPARAMS_OFFSET))(arg, nullptr);
		}

		::System::Void CreateInitialState()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_CREATEINITIALSTATE_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_RESET_OFFSET))(nullptr);
		}

		::System::Void UbiComplete(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_UBICOMPLETE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UbiInit(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_UBIINIT_OFFSET))(arg, nullptr);
		}

		::System::Void UbiFinal()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_UBIFINAL_OFFSET))(nullptr);
		}

		::System::Void CheckInitialised()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_CHECKINITIALISED_OFFSET))(nullptr);
		}

		::System::Void Update(::System::Byte arg)
		{
			((::System::Void(*)(::System::Byte, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_UPDATE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DoFinal(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_DOFINAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Output(::System::UInt64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::UInt64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_DIGESTS_SKEINENGINE_OUTPUT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

