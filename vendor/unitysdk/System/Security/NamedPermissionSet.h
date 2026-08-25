#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x917CB90)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x917CCC0)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x917CE70)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_GET_NAME_OFFSET UNITYSDK_OFFSET(0x917CED0)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_SET_NAME_OFFSET UNITYSDK_OFFSET(0x917CDA0)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_TOXML_OFFSET UNITYSDK_OFFSET(0x917CEE0)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x917D3D0)
#define SYSTEM_SECURITY_NAMEDPERMISSIONSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x917D5D0)

namespace System::Security
{
	inline static constexpr unsigned int NamedPermissionSet_TypeDefinitionIndex = 24276;

	class NamedPermissionSet : public Il2CppObject
	{
	public:
		::System::String* name; // 0x30
		::System::String* description; // 0x38

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Security::Permissions::PermissionState* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Security::Permissions::PermissionState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_GET_NAME_OFFSET))(nullptr);
		}

		::System::Void set_Name(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_SET_NAME_OFFSET))(str, nullptr);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return (return (::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_TOXML_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_NAMEDPERMISSIONSET_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

