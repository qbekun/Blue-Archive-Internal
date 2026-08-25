#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders { class IEncoder; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_ENCODE_OFFSET UNITYSDK_OFFSET(0x937EB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_ENCODE_OFFSET UNITYSDK_OFFSET(0x938120)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_DECODE_OFFSET UNITYSDK_OFFSET(0x938230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_DECODE_OFFSET UNITYSDK_OFFSET(0x9384A0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_DECODE_OFFSET UNITYSDK_OFFSET(0x9385B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_DECODE_OFFSET UNITYSDK_OFFSET(0x938800)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_.CTOR_OFFSET UNITYSDK_OFFSET(0x938900)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_.CCTOR_OFFSET UNITYSDK_OFFSET(0x938910)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	inline static constexpr unsigned int UrlBase64_TypeDefinitionIndex = 21619;

	class UrlBase64 : public Il2CppObject
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders::IEncoder* encoder; // 0x0

		::Il2CppArray<::System::Object*>* Encode(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_ENCODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Encode(::Il2CppArray<::System::Object*>* arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_ENCODE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decode(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_DECODE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Decode(::Il2CppArray<::System::Object*>* arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_DECODE_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* Decode(::System::String* str)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_DECODE_OFFSET))(str, nullptr);
		}

		::System::Int32 Decode(::System::String* str, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_DECODE_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_URLBASE64_.CCTOR_OFFSET))(nullptr);
		}

	};
}

