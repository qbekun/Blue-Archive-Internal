#pragma once
#include "../../unitysdk.h"

#define INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_TOFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x9AC7F80)
#define INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_TOOID_OFFSET UNITYSDK_OFFSET(0x9AC8450)
#define INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_SHOULDUSECACHE_OFFSET UNITYSDK_OFFSET(0x9AC81B0)
#define INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_NATIVEOIDTOFRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x9AC81C0)
#define INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_NATIVEFRIENDLYNAMETOOID_OFFSET UNITYSDK_OFFSET(0x9AC8640)
#define INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9AC88D0)

namespace Internal::Cryptography
{
	inline static constexpr unsigned int OidLookup_TypeDefinitionIndex = 29156;

	class OidLookup : public Il2CppObject
	{
	public:
		Il2CppObject* s_lateBoundOidToFriendlyName; // 0x0
		Il2CppObject* s_lateBoundFriendlyNameToOid; // 0x8
		Il2CppObject* s_friendlyNameToOid; // 0x10
		Il2CppObject* s_oidToFriendlyName; // 0x18
		Il2CppObject* s_compatOids; // 0x20

		::System::String* ToFriendlyName(::System::String* str, ::System::Security::Cryptography::OidGroup* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_TOFRIENDLYNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* ToOid(::System::String* str, ::System::Security::Cryptography::OidGroup* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_TOOID_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Boolean ShouldUseCache(::System::Security::Cryptography::OidGroup* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::Cryptography::OidGroup*, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_SHOULDUSECACHE_OFFSET))(arg, nullptr);
		}

		::System::String* NativeOidToFriendlyName(::System::String* str, ::System::Security::Cryptography::OidGroup* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_NATIVEOIDTOFRIENDLYNAME_OFFSET))(str, arg, arg, nullptr);
		}

		::System::String* NativeFriendlyNameToOid(::System::String* str, ::System::Security::Cryptography::OidGroup* arg, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Security::Cryptography::OidGroup*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_NATIVEFRIENDLYNAMETOOID_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERNAL_CRYPTOGRAPHY_OIDLOOKUP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

