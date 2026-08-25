#pragma once
#include "unitysdk.h"

#define PRIVATEKEYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x910FAB0)
#define PRIVATEKEYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x910FB30)
#define PRIVATEKEYINFO_GET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x910FE50)
#define PRIVATEKEYINFO_SET_ALGORITHM_OFFSET UNITYSDK_OFFSET(0x910FE60)
#define PRIVATEKEYINFO_GET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x910FE70)
#define PRIVATEKEYINFO_SET_PRIVATEKEY_OFFSET UNITYSDK_OFFSET(0x910FEF0)
#define PRIVATEKEYINFO_DECODE_OFFSET UNITYSDK_OFFSET(0x910FBB0)
#define PRIVATEKEYINFO_GETBYTES_OFFSET UNITYSDK_OFFSET(0x910FFF0)
#define PRIVATEKEYINFO_REMOVELEADINGZERO_OFFSET UNITYSDK_OFFSET(0x91104F0)
#define PRIVATEKEYINFO_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x9110580)
#define PRIVATEKEYINFO_DECODERSA_OFFSET UNITYSDK_OFFSET(0x9110680)
#define PRIVATEKEYINFO_ENCODE_OFFSET UNITYSDK_OFFSET(0x9110D50)
#define PRIVATEKEYINFO_DECODEDSA_OFFSET UNITYSDK_OFFSET(0x9110F50)
#define PRIVATEKEYINFO_ENCODE_OFFSET UNITYSDK_OFFSET(0x9111080)
#define PRIVATEKEYINFO_ENCODE_OFFSET UNITYSDK_OFFSET(0x91110E0)

	inline static constexpr unsigned int PrivateKeyInfo_TypeDefinitionIndex = 35810;

	class PrivateKeyInfo : public Il2CppObject
	{
	public:
		::System::Int32 _version; // 0x10
		::System::String* _algorithm; // 0x18
		::Il2CppArray<::System::Object*>* _key; // 0x20
		::System::Collections::ArrayList* _list; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Algorithm()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_GET_ALGORITHM_OFFSET))(nullptr);
		}

		::System::Void set_Algorithm(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_SET_ALGORITHM_OFFSET))(str, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_PrivateKey()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_GET_PRIVATEKEY_OFFSET))(nullptr);
		}

		::System::Void set_PrivateKey(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_SET_PRIVATEKEY_OFFSET))(arg, nullptr);
		}

		::System::Void Decode(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_DECODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBytes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_GETBYTES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* RemoveLeadingZero(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_REMOVELEADINGZERO_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Normalize(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_NORMALIZE_OFFSET))(arg, arg, nullptr);
		}

		::System::Security::Cryptography::RSA* DecodeRSA(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_DECODERSA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode(::System::Security::Cryptography::RSA* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Security::Cryptography::RSA*, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::DSA* DecodeDSA(::Il2CppArray<::System::Object*>* arg, ::System::Security::Cryptography::DSAParameters* arg)
		{
			return (return (::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Object*>*, ::System::Security::Cryptography::DSAParameters*, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_DECODEDSA_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode(::System::Security::Cryptography::DSA* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Security::Cryptography::DSA*, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_ENCODE_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Encode(::System::Security::Cryptography::AsymmetricAlgorithm* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Security::Cryptography::AsymmetricAlgorithm*, ::PVOID))((::PBYTE)hIl2Cpp + PRIVATEKEYINFO_ENCODE_OFFSET))(arg, nullptr);
		}

	};

