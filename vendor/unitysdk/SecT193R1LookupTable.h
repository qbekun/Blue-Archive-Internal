#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec { class SecT193R1Curve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }

#define SECT193R1LOOKUPTABLE_LOOKUPVAR_OFFSET UNITYSDK_OFFSET(0x5B1660)
#define SECT193R1LOOKUPTABLE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x5B1970)
#define SECT193R1LOOKUPTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5B14F0)
#define SECT193R1LOOKUPTABLE_CREATEPOINT_OFFSET UNITYSDK_OFFSET(0x5B1860)
#define SECT193R1LOOKUPTABLE_LOOKUP_OFFSET UNITYSDK_OFFSET(0x5B1980)

	inline static constexpr unsigned int SecT193R1LookupTable_TypeDefinitionIndex = 21946;

	class SecT193R1LookupTable : public ::Mono::Security::Interface::MonoTlsSettings
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve* m_outer; // 0x10
		::Il2CppArray<::System::Object*>* m_table; // 0x18
		::System::Int32 m_size; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECT193R1LOOKUPTABLE_LOOKUPVAR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT193R1LOOKUPTABLE_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECT193R1LOOKUPTABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SECT193R1LOOKUPTABLE_CREATEPOINT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Lookup(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECT193R1LOOKUPTABLE_LOOKUP_OFFSET))(arg, nullptr);
		}

	};

