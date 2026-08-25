#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec { class SecT113R2Curve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }

#define SECT113R2LOOKUPTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x59CE20)
#define SECT113R2LOOKUPTABLE_LOOKUP_OFFSET UNITYSDK_OFFSET(0x59CF90)
#define SECT113R2LOOKUPTABLE_LOOKUPVAR_OFFSET UNITYSDK_OFFSET(0x59D200)
#define SECT113R2LOOKUPTABLE_CREATEPOINT_OFFSET UNITYSDK_OFFSET(0x59D110)
#define SECT113R2LOOKUPTABLE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x59D340)

	inline static constexpr unsigned int SecT113R2LookupTable_TypeDefinitionIndex = 21922;

	class SecT113R2LookupTable : public ::Mono::Security::Interface::MonoTlsSettings
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* m_outer; // 0x10
		::Il2CppArray<::System::Object*>* m_table; // 0x18
		::System::Int32 m_size; // 0x20

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECT113R2LOOKUPTABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Lookup(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECT113R2LOOKUPTABLE_LOOKUP_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECT113R2LOOKUPTABLE_LOOKUPVAR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SECT113R2LOOKUPTABLE_CREATEPOINT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT113R2LOOKUPTABLE_GET_SIZE_OFFSET))(nullptr);
		}

	};

