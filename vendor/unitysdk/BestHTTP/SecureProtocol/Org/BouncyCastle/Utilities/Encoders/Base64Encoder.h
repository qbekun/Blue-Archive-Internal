#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_INITIALISEDECODINGTABLE_OFFSET UNITYSDK_OFFSET(0x934DB0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x934E50)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x934F00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_IGNORE_OFFSET UNITYSDK_OFFSET(0x9352F0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_DECODE_OFFSET UNITYSDK_OFFSET(0x935310)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_NEXTI_OFFSET UNITYSDK_OFFSET(0x935810)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x935AD0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_DECODELASTBLOCK_OFFSET UNITYSDK_OFFSET(0x935880)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_NEXTI_OFFSET UNITYSDK_OFFSET(0x935F60)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	inline static constexpr unsigned int Base64Encoder_TypeDefinitionIndex = 21611;

	class Base64Encoder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* encodingTable; // 0x10
		::System::Byte padding; // 0x18
		::Il2CppArray<::System::Object*>* decodingTable; // 0x20

		::System::Void InitialiseDecodingTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_INITIALISEDECODINGTABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_ENCODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ignore(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_IGNORE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Decode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_DECODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 nextI(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_NEXTI_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 DecodeString(::System::String* str, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_DECODESTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 decodeLastBlock(::System::IO::Stream* arg, ::System::Char arg, ::System::Char arg, ::System::Char arg, ::System::Char arg)
		{
			return (return (::System::Int32(*)(::System::IO::Stream*, ::System::Char, ::System::Char, ::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_DECODELASTBLOCK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 nextI(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_BASE64ENCODER_NEXTI_OFFSET))(str, arg, arg, nullptr);
		}

	};
}

