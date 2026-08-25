#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B333C0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GET_CURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B333D0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_SET_CURRENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B33600)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GET_USAGEMODE_OFFSET UNITYSDK_OFFSET(0x9B337D0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CACHEPROVIDER_OFFSET UNITYSDK_OFFSET(0x9B33880)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CREATEWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B33AE0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CREATEWITHCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B33BB0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDNOLICENSEPROVIDER_OFFSET UNITYSDK_OFFSET(0x9B340D0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDPROVIDER_OFFSET UNITYSDK_OFFSET(0x9B34190)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDPROVIDERINSTANCE_OFFSET UNITYSDK_OFFSET(0x9B34250)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISLICENSED_OFFSET UNITYSDK_OFFSET(0x9B34310)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9B344D0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9B34610)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LOCKCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B33F00)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_UNLOCKCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B34700)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x9B34450)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATEINTERNALRECURSIVE_OFFSET UNITYSDK_OFFSET(0x9B348D0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATE_OFFSET UNITYSDK_OFFSET(0x9B34D40)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATE_OFFSET UNITYSDK_OFFSET(0x9B34EC0)
#define SYSTEM_COMPONENTMODEL_LICENSEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B35030)

namespace System::ComponentModel
{
	inline static constexpr unsigned int LicenseManager_TypeDefinitionIndex = 29421;

	class LicenseManager : public Il2CppObject
	{
	public:
		::System::Object* s_selfLock; // 0x0
		::System::ComponentModel::LicenseContext* s_context; // 0x8
		::System::Object* s_contextLockHolder; // 0x10
		::System::Collections::Hashtable* s_providers; // 0x18
		::System::Collections::Hashtable* s_providerInstances; // 0x20
		::System::Object* s_internalSyncObject; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::ComponentModel::LicenseContext* get_CurrentContext()
		{
			return (return (::System::ComponentModel::LicenseContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GET_CURRENTCONTEXT_OFFSET))(nullptr);
		}

		::System::Void set_CurrentContext(::System::ComponentModel::LicenseContext* arg)
		{
			((::System::Void(*)(::System::ComponentModel::LicenseContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_SET_CURRENTCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::LicenseUsageMode* get_UsageMode()
		{
			return (return (::System::ComponentModel::LicenseUsageMode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GET_USAGEMODE_OFFSET))(nullptr);
		}

		::System::Void CacheProvider(::System::Type* arg, ::System::ComponentModel::LicenseProvider* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::ComponentModel::LicenseProvider*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CACHEPROVIDER_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* CreateWithContext(::System::Type* arg, ::System::ComponentModel::LicenseContext* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::ComponentModel::LicenseContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CREATEWITHCONTEXT_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* CreateWithContext(::System::Type* arg, ::System::ComponentModel::LicenseContext* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::System::ComponentModel::LicenseContext*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_CREATEWITHCONTEXT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetCachedNoLicenseProvider(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDNOLICENSEPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::LicenseProvider* GetCachedProvider(::System::Type* arg)
		{
			return (return (::System::ComponentModel::LicenseProvider*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::LicenseProvider* GetCachedProviderInstance(::System::Type* arg)
		{
			return (return (::System::ComponentModel::LicenseProvider*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_GETCACHEDPROVIDERINSTANCE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsLicensed(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISLICENSED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISVALID_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(::System::Type* arg, ::System::Object* arg, ::System::ComponentModel::License&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object*, ::System::ComponentModel::License&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_ISVALID_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void LockContext(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_LOCKCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void UnlockContext(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_UNLOCKCONTEXT_OFFSET))(arg, nullptr);
		}

		::System::Boolean ValidateInternal(::System::Type* arg, ::System::Object* arg, ::System::Boolean arg, ::System::ComponentModel::License&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::Object*, ::System::Boolean, ::System::ComponentModel::License&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATEINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean ValidateInternalRecursive(::System::ComponentModel::LicenseContext* arg, ::System::Type* arg, ::System::Object* arg, ::System::Boolean arg, ::System::ComponentModel::License&* arg, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::LicenseContext*, ::System::Type*, ::System::Object*, ::System::Boolean, ::System::ComponentModel::License&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATEINTERNALRECURSIVE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Validate(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATE_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::License* Validate(::System::Type* arg, ::System::Object* arg)
		{
			return (return (::System::ComponentModel::License*(*)(::System::Type*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_VALIDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_LICENSEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

