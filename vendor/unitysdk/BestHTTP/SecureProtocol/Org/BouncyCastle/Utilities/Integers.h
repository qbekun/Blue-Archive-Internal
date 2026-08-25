#pragma once
#include "../../../../../unitysdk.h"

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_NUMBEROFLEADINGZEROS_OFFSET UNITYSDK_OFFSET(0x8CB190)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0x8CB210)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0x8CB230)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0x8CB250)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_ROTATERIGHT_OFFSET UNITYSDK_OFFSET(0x8CB270)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_.CTOR_OFFSET UNITYSDK_OFFSET(0x8CB290)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities
{
	inline static constexpr unsigned int Integers_TypeDefinitionIndex = 21571;

	class Integers : public Il2CppObject
	{
	public:
		::System::Int32 NumberOfLeadingZeros(::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_NUMBEROFLEADINGZEROS_OFFSET))(arg, nullptr);
		}

		::System::Int32 RotateLeft(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_ROTATELEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 RotateLeft(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_ROTATELEFT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 RotateRight(::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_ROTATERIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::UInt32 RotateRight(::System::UInt32 arg, ::System::Int32 arg)
		{
			return (return (::System::UInt32(*)(::System::UInt32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_ROTATERIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_UTILITIES_INTEGERS_.CTOR_OFFSET))(nullptr);
		}

	};
}

