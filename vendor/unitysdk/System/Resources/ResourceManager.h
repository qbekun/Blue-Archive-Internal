#pragma once
#include "../../unitysdk.h"

#define SYSTEM_RESOURCES_RESOURCEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x9232570)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x92326D0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9232870)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x9232E30)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x9232E80)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x92330D0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_COMMONASSEMBLYINIT_OFFSET UNITYSDK_OFFSET(0x9232C80)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GET_BASENAME_OFFSET UNITYSDK_OFFSET(0x9233150)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GET_IGNORECASE_OFFSET UNITYSDK_OFFSET(0x9233160)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GET_FALLBACKLOCATION_OFFSET UNITYSDK_OFFSET(0x9233170)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCEFILENAME_OFFSET UNITYSDK_OFFSET(0x9233180)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCESET_OFFSET UNITYSDK_OFFSET(0x92332B0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_OFFSET UNITYSDK_OFFSET(0x92338B0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_OFFSET UNITYSDK_OFFSET(0x92338E0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_ADDRESOURCESET_OFFSET UNITYSDK_OFFSET(0x92336F0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETSATELLITECONTRACTVERSION_OFFSET UNITYSDK_OFFSET(0x92343C0)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_GETNEUTRALRESOURCESLANGUAGE_OFFSET UNITYSDK_OFFSET(0x9234B90)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_COMPARENAMES_OFFSET UNITYSDK_OFFSET(0x9232070)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_SETAPPXCONFIGURATION_OFFSET UNITYSDK_OFFSET(0x9232C70)
#define SYSTEM_RESOURCES_RESOURCEMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9234BB0)

namespace System::Resources
{
	inline static constexpr unsigned int ResourceManager_TypeDefinitionIndex = 24822;

	class ResourceManager : public Il2CppObject
	{
	public:
		::System::String* BaseNameField; // 0x10
		::System::Collections::Hashtable* ResourceSets; // 0x18
		Il2CppObject* _resourceSets; // 0x20
		::System::String* moduleDir; // 0x28
		::System::Reflection::Assembly* MainAssembly; // 0x30
		::System::Type* _locationInfo; // 0x38
		::System::Type* _userResourceSet; // 0x40
		::System::Globalization::CultureInfo* _neutralResourcesCulture; // 0x48
		CultureNameResourceSetPair* _lastUsedResourceCache; // 0x50
		::System::Boolean _ignoreCase; // 0x58
		::System::Boolean UseManifest; // 0x59
		::System::Boolean UseSatelliteAssem; // 0x5A
		::System::Resources::UltimateResourceFallbackLocation* _fallbackLoc; // 0x5C
		::System::Version* _satelliteContractVersion; // 0x60
		::System::Boolean _lookedForSatelliteContractVersion; // 0x68
		::System::Reflection::Assembly* _callingAssembly; // 0x70
		::System::Reflection::RuntimeAssembly* m_callingAssembly; // 0x78
		::System::Resources::IResourceGroveler* resourceGroveler; // 0x80
		::System::Int32 MagicNumber; // 0x0
		::System::Int32 HeaderVersionNumber; // 0x4
		::System::Type* _minResourceSet; // 0x8
		::System::String* ResReaderTypeName; // 0x10
		::System::String* ResSetTypeName; // 0x18
		::System::String* MscorlibName; // 0x20
		::System::Int32 DEBUG; // 0x28

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INIT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserializing(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZING_OFFSET))(arg, nullptr);
		}

		::System::Void OnDeserialized(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONDESERIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Void OnSerializing(::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ONSERIALIZING_OFFSET))(arg, nullptr);
		}

		::System::Void CommonAssemblyInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_COMMONASSEMBLYINIT_OFFSET))(nullptr);
		}

		::System::String* get_BaseName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GET_BASENAME_OFFSET))(nullptr);
		}

		::System::Boolean get_IgnoreCase()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GET_IGNORECASE_OFFSET))(nullptr);
		}

		::System::Resources::UltimateResourceFallbackLocation* get_FallbackLocation()
		{
			return (return (::System::Resources::UltimateResourceFallbackLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GET_FALLBACKLOCATION_OFFSET))(nullptr);
		}

		::System::String* GetResourceFileName(::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::String*(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCEFILENAME_OFFSET))(arg, nullptr);
		}

		::System::Resources::ResourceSet* GetResourceSet(::System::Globalization::CultureInfo* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Resources::ResourceSet*(*)(::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETRESOURCESET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Resources::ResourceSet* InternalGetResourceSet(::System::Globalization::CultureInfo* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Resources::ResourceSet*(*)(::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Resources::ResourceSet* InternalGetResourceSet(::System::Globalization::CultureInfo* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Threading::StackCrawlMark&* arg)
		{
			return (return (::System::Resources::ResourceSet*(*)(::System::Globalization::CultureInfo*, ::System::Boolean, ::System::Boolean, ::System::Threading::StackCrawlMark&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_INTERNALGETRESOURCESET_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddResourceSet(Il2CppObject* arg, ::System::String* str, ::System::Resources::ResourceSet&* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::String*, ::System::Resources::ResourceSet&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_ADDRESOURCESET_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Version* GetSatelliteContractVersion(::System::Reflection::Assembly* arg)
		{
			return (return (::System::Version*(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETSATELLITECONTRACTVERSION_OFFSET))(arg, nullptr);
		}

		::System::Globalization::CultureInfo* GetNeutralResourcesLanguage(::System::Reflection::Assembly* arg)
		{
			return (return (::System::Globalization::CultureInfo*(*)(::System::Reflection::Assembly*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_GETNEUTRALRESOURCESLANGUAGE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CompareNames(::System::String* str, ::System::String* str, ::System::Reflection::AssemblyName* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Reflection::AssemblyName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_COMPARENAMES_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void SetAppXConfiguration()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_SETAPPXCONFIGURATION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_RESOURCEMANAGER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

