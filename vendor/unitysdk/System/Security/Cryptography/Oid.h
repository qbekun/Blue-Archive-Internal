#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B05B60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B05B70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B05BF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B05C40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_FROMOIDVALUE_OFFSET UNITYSDK_OFFSET(0x9B05CE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9B05E90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9B05EA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_FRIENDLYNAME_OFFSET UNITYSDK_OFFSET(0x9B05EB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_OID_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B05E40)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Oid_TypeDefinitionIndex = 29269;

	class Oid : public Il2CppObject
	{
	public:
		::System::String* _value; // 0x10
		::System::String* _friendlyName; // 0x18
		::System::Security::Cryptography::OidGroup* _group; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Security::Cryptography::Oid* arg)
		{
			((::System::Void(*)(::System::Security::Cryptography::Oid*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Security::Cryptography::Oid* FromOidValue(::System::String* str, ::System::Security::Cryptography::OidGroup* arg)
		{
			return (return (::System::Security::Cryptography::Oid*(*)(::System::String*, ::System::Security::Cryptography::OidGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_FROMOIDVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::String* get_FriendlyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_GET_FRIENDLYNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Security::Cryptography::OidGroup* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Security::Cryptography::OidGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_OID_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

	};
}

