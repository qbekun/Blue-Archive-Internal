#pragma once
#include "../../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ADLER32_.CTOR_OFFSET UNITYSDK_OFFSET(0x8CC440)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ADLER32_ADLER32_OFFSET UNITYSDK_OFFSET(0x8CC450)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Zlib
{
	inline static constexpr unsigned int Adler32_TypeDefinitionIndex = 21576;

	class Adler32 : public Il2CppObject
	{
	public:
		::System::Int32 BASE; // 0x0
		::System::Int32 NMAX; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ADLER32_.CTOR_OFFSET))(nullptr);
		}

		::System::Int64 adler32(::System::Int64 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int64(*)(::System::Int64, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_ZLIB_ADLER32_ADLER32_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

