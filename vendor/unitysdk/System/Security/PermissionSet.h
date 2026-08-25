#pragma once
#include "../../unitysdk.h"

#define SYSTEM_SECURITY_PERMISSIONSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x917CC50)
#define SYSTEM_SECURITY_PERMISSIONSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x917CD20)
#define SYSTEM_SECURITY_PERMISSIONSET_.CTOR_OFFSET UNITYSDK_OFFSET(0x917C830)
#define SYSTEM_SECURITY_PERMISSIONSET_COPYTO_OFFSET UNITYSDK_OFFSET(0x917D690)
#define SYSTEM_SECURITY_PERMISSIONSET_DEMAND_OFFSET UNITYSDK_OFFSET(0x917D810)
#define SYSTEM_SECURITY_PERMISSIONSET_CASONLYDEMAND_OFFSET UNITYSDK_OFFSET(0x917C8D0)
#define SYSTEM_SECURITY_PERMISSIONSET_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x917DE40)
#define SYSTEM_SECURITY_PERMISSIONSET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x917DA60)
#define SYSTEM_SECURITY_PERMISSIONSET_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x917DE30)
#define SYSTEM_SECURITY_PERMISSIONSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x917DE70)
#define SYSTEM_SECURITY_PERMISSIONSET_TOXML_OFFSET UNITYSDK_OFFSET(0x917CF70)
#define SYSTEM_SECURITY_PERMISSIONSET_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x917DEB0)
#define SYSTEM_SECURITY_PERMISSIONSET_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x917DEE0)
#define SYSTEM_SECURITY_PERMISSIONSET_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x917DF10)
#define SYSTEM_SECURITY_PERMISSIONSET_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x917DF20)
#define SYSTEM_SECURITY_PERMISSIONSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x917D440)
#define SYSTEM_SECURITY_PERMISSIONSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x917D640)
#define SYSTEM_SECURITY_PERMISSIONSET_.CCTOR_OFFSET UNITYSDK_OFFSET(0x917DF30)

namespace System::Security
{
	inline static constexpr unsigned int PermissionSet_TypeDefinitionIndex = 24277;

	class PermissionSet : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* psUnrestricted; // 0x0
		::System::Security::Permissions::PermissionState* state; // 0x10
		::System::Collections::ArrayList* list; // 0x18
		::System::Boolean _declsec; // 0x20
		::Il2CppArray<::System::Object*>* _ignored; // 0x28
		::Il2CppArray<::System::Object*>* action; // 0x8

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Security::Permissions::PermissionState* arg)
		{
			((::System::Void(*)(::System::Security::Permissions::PermissionState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Security::IPermission* arg)
		{
			((::System::Void(*)(::System::Security::IPermission*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Demand()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_DEMAND_OFFSET))(nullptr);
		}

		::System::Void CasOnlyDemand(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_CASONLYDEMAND_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean IsEmpty()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_ISEMPTY_OFFSET))(nullptr);
		}

		::System::Boolean IsUnrestricted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_ISUNRESTRICTED_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_TOSTRING_OFFSET))(nullptr);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return (return (::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_TOXML_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_SYSTEM.RUNTIME.SERIALIZATION.IDESERIALIZATIONCALLBACK.ONDESERIALIZATION_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONSET_.CCTOR_OFFSET))(nullptr);
		}

	};
}

