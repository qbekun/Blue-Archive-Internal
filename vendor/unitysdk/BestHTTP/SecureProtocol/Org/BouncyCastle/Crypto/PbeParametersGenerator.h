#pragma once
#include "../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { class ICipherParameters; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x5ECFD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_INIT_OFFSET UNITYSDK_OFFSET(0x5ECFE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x5ED0F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GETPASSWORD_OFFSET UNITYSDK_OFFSET(0x5ED140)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GET_SALT_OFFSET UNITYSDK_OFFSET(0x5ED160)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GETSALT_OFFSET UNITYSDK_OFFSET(0x5ED1B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GET_ITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x5ED1D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GENERATEDERIVEDMACPARAMETERS_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS5PASSWORDTOBYTES_OFFSET UNITYSDK_OFFSET(0x5ED1E0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS5PASSWORDTOBYTES_OFFSET UNITYSDK_OFFSET(0x5ED230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS5PASSWORDTOUTF8BYTES_OFFSET UNITYSDK_OFFSET(0x5ED280)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS5PASSWORDTOUTF8BYTES_OFFSET UNITYSDK_OFFSET(0x5ED2F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS12PASSWORDTOBYTES_OFFSET UNITYSDK_OFFSET(0x5ED360)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS12PASSWORDTOBYTES_OFFSET UNITYSDK_OFFSET(0x5ED370)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto
{
	inline static constexpr unsigned int PbeParametersGenerator_TypeDefinitionIndex = 22056;

	class PbeParametersGenerator : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* mPassword; // 0x10
		::Il2CppArray<::System::Object*>* mSalt; // 0x18
		::System::Int32 mIterationCount; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Init(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Password()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GET_PASSWORD_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetPassword()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GETPASSWORD_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Salt()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GET_SALT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetSalt()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GETSALT_OFFSET))(nullptr);
		}

		::System::Int32 get_IterationCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GET_ITERATIONCOUNT_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::System::String* str, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GENERATEDERIVEDPARAMETERS_OFFSET))(str, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_GENERATEDERIVEDMACPARAMETERS_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Pkcs5PasswordToBytes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS5PASSWORDTOBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Pkcs5PasswordToBytes(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS5PASSWORDTOBYTES_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* Pkcs5PasswordToUtf8Bytes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS5PASSWORDTOUTF8BYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Pkcs5PasswordToUtf8Bytes(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS5PASSWORDTOUTF8BYTES_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* Pkcs12PasswordToBytes(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS12PASSWORDTOBYTES_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Pkcs12PasswordToBytes(::Il2CppArray<::System::Object*>* arg, ::System::Boolean arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_CRYPTO_PBEPARAMETERSGENERATOR_PKCS12PASSWORDTOBYTES_OFFSET))(arg, arg, nullptr);
		}

	};
}

