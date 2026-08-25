#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_CODEACCESSPERMISSION_.CTOR_OFFSET UNITYSDK_OFFSET(0x917C7E0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_DEMAND_OFFSET UNITYSDK_OFFSET(0x917C7F0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_EQUALS_OFFSET UNITYSDK_OFFSET(0x917C950)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x917CA70)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x917CA80)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_CHECKPERMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x917CAC0)
#define SYSTEM_SECURITY_CODEACCESSPERMISSION_SYSTEM.SECURITY.IPERMISSION.DEMAND_OFFSET UNITYSDK_OFFSET(0x917CB80)

namespace System::Security
{
	inline static constexpr unsigned int CodeAccessPermission_TypeDefinitionIndex = 24275;

	class CodeAccessPermission : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Demand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_DEMAND_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* arg)
		{
			return (return (::System::Boolean(*)(::System::Security::IPermission*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_ISSUBSETOF_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return (return (::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_TOXML_OFFSET))(nullptr);
		}

		::System::Security::Permissions::PermissionState* CheckPermissionState(::System::Security::Permissions::PermissionState* arg, ::System::Boolean arg)
		{
			return (return (::System::Security::Permissions::PermissionState*(*)(::System::Security::Permissions::PermissionState*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_CHECKPERMISSIONSTATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Security.IPermission.Demand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CODEACCESSPERMISSION_SYSTEM.SECURITY.IPERMISSION.DEMAND_OFFSET))(nullptr);
		}

	};
}

