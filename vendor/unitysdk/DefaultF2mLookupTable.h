#pragma once
#include "unitysdk.h"

namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class F2mCurve; }
namespace BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC { class ECPoint; }

#define DEFAULTF2MLOOKUPTABLE_LOOKUPVAR_OFFSET UNITYSDK_OFFSET(0x52E140)
#define DEFAULTF2MLOOKUPTABLE_CREATEPOINT_OFFSET UNITYSDK_OFFSET(0x52E2D0)
#define DEFAULTF2MLOOKUPTABLE_LOOKUP_OFFSET UNITYSDK_OFFSET(0x52E5F0)
#define DEFAULTF2MLOOKUPTABLE_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x52E7D0)
#define DEFAULTF2MLOOKUPTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x52E0F0)

	inline static constexpr unsigned int DefaultF2mLookupTable_TypeDefinitionIndex = 21786;

	class DefaultF2mLookupTable : public ::Mono::Security::Interface::MonoTlsSettings
	{
	public:
		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::F2mCurve* m_outer; // 0x10
		::Il2CppArray<::System::Object*>* m_table; // 0x18
		::System::Int32 m_size; // 0x20

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* LookupVar(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTF2MLOOKUPTABLE_LOOKUPVAR_OFFSET))(arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTF2MLOOKUPTABLE_CREATEPOINT_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint* Lookup(::System::Int32 arg)
		{
			return (return (::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::ECPoint*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTF2MLOOKUPTABLE_LOOKUP_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Size()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFAULTF2MLOOKUPTABLE_GET_SIZE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::F2mCurve* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::F2mCurve*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEFAULTF2MLOOKUPTABLE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

