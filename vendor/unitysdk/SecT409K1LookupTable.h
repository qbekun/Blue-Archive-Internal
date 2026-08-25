#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec { class SecT409K1Curve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }

#define SECT409K1LOOKUPTABLE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x5CBF70)
#define SECT409K1LOOKUPTABLE_CREATEPOINT_OFFSET UNITYSDK_OFFSET(0x5CBF80)
#define SECT409K1LOOKUPTABLE_LOOKUPVAR_OFFSET UNITYSDK_OFFSET(0x5CC090)
#define SECT409K1LOOKUPTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x5CBE00)
#define SECT409K1LOOKUPTABLE_LOOKUP_OFFSET UNITYSDK_OFFSET(0x5CC3A0)

	inline static constexpr unsigned int SecT409K1LookupTable_TypeDefinitionIndex = 21975;

	class SecT409K1LookupTable : public ::Mono::Security::Interface::MonoTlsSettings
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve* m_outer; // 0x10
		::Il2CppArray<::System::Object*>* m_table; // 0x18
		::System::Int32 m_size; // 0x20

		::System::Int32 get_Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SECT409K1LOOKUPTABLE_GET_SIZE_OFFSET))(nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SECT409K1LOOKUPTABLE_CREATEPOINT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECT409K1LOOKUPTABLE_LOOKUPVAR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECT409K1LOOKUPTABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Lookup(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SECT409K1LOOKUPTABLE_LOOKUP_OFFSET))(arg, nullptr);
		}

	};

