#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPALGORITHMS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9438D0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPALGORITHMS_.CTOR_OFFSET UNITYSDK_OFFSET(0x944280)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Tsp
{
	inline static constexpr unsigned int TspAlgorithms_TypeDefinitionIndex = 21647;

	class TspAlgorithms : public Il2CppObject
	{
	public:
		::System::String* MD5; // 0x0
		::System::String* Sha1; // 0x8
		::System::String* Sha224; // 0x10
		::System::String* Sha256; // 0x18
		::System::String* Sha384; // 0x20
		::System::String* Sha512; // 0x28
		::System::String* RipeMD128; // 0x30
		::System::String* RipeMD160; // 0x38
		::System::String* RipeMD256; // 0x40
		::System::String* Gost3411; // 0x48
		::System::String* Gost3411_2012_256; // 0x50
		::System::String* Gost3411_2012_512; // 0x58
		::System::String* SM3; // 0x60
		::System::Collections::IList* Allowed; // 0x68

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPALGORITHMS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_TSP_TSPALGORITHMS_.CTOR_OFFSET))(nullptr);
		}

	};
}

