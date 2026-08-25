#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_GETENCODEDBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x937B10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_ENCODE_OFFSET UNITYSDK_OFFSET(0x937B20)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_DECODE_OFFSET UNITYSDK_OFFSET(0x937CF0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x937E00)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_GETDECODEDBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x937E10)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x937E20)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Encoders
{
	inline static constexpr unsigned int HexTranslator_TypeDefinitionIndex = 21616;

	class HexTranslator : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* hexTable; // 0x0

		::System::Int32 GetEncodedBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_GETENCODEDBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Int32 Encode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_ENCODE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Int32 Decode(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_DECODE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 GetDecodedBlockSize()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_GETDECODEDBLOCKSIZE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ENCODERS_HEXTRANSLATOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

