#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x936BE0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_DECODE_OFFSET UNITYSDK_OFFSET(0x936F10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_INITIALISEDECODINGTABLE_OFFSET UNITYSDK_OFFSET(0x9379D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_.CTOR_OFFSET UNITYSDK_OFFSET(0x937910)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x937220)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_DECODESTRICT_OFFSET UNITYSDK_OFFSET(0x937530)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_IGNORE_OFFSET UNITYSDK_OFFSET(0x9379B0)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	inline static constexpr unsigned int HexEncoder_TypeDefinitionIndex = 21615;

	class HexEncoder : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* encodingTable; // 0x10
		::Il2CppArray<::System::Object*>* decodingTable; // 0x18

		::System::Int32 Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_ENCODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Decode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_DECODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void InitialiseDecodingTable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_INITIALISEDECODINGTABLE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 DecodeString(::System::String* str, ::System::IO::Stream* arg)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_DECODESTRING_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* DecodeStrict(::System::String* str, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::String*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_DECODESTRICT_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean Ignore(::System::Char arg)
		{
			return (return (::System::Boolean(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXENCODER_IGNORE_OFFSET))(arg, nullptr);
		}

	};
}

