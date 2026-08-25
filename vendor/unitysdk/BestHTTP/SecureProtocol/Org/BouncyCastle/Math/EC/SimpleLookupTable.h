#pragma once
#include "../../../../../../unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }

#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SIMPLELOOKUPTABLE_COPY_OFFSET UNITYSDK_OFFSET(0x542640)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SIMPLELOOKUPTABLE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x542740)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SIMPLELOOKUPTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x542760)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SIMPLELOOKUPTABLE_LOOKUP_OFFSET UNITYSDK_OFFSET(0x5427B0)
#define BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SIMPLELOOKUPTABLE_LOOKUPVAR_OFFSET UNITYSDK_OFFSET(0x542810)

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC
{
	inline static constexpr unsigned int SimpleLookupTable_TypeDefinitionIndex = 21807;

	class SimpleLookupTable : public ::Mono::Security::Interface::MonoTlsSettings
	{
	public:
		::Il2CppArray<::System::Object*>* points; // 0x10

		::Il2CppArray<::System::Object*>* Copy(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SIMPLELOOKUPTABLE_COPY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 get_Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SIMPLELOOKUPTABLE_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SIMPLELOOKUPTABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Lookup(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SIMPLELOOKUPTABLE_LOOKUP_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_SECUREPROTOCOL_ORG_BOUNCYCASTLE_MATH_EC_SIMPLELOOKUPTABLE_LOOKUPVAR_OFFSET))(arg, nullptr);
		}

	};
}

