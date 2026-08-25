#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::Util { class ObjectInitializationData; }
namespace UnityEngine::AddressableAssets::ResourceLocators { class ContentCatalogData; }
namespace UnityEngine::AddressableAssets::ResourceLocators { class ResourceLocationMap; }

#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_BINREADBYTES_OFFSET UNITYSDK_OFFSET(0x9E16CF0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_SET_PROVIDERID_OFFSET UNITYSDK_OFFSET(0x9E16DD0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_SCENEPROVIDERDATA_OFFSET UNITYSDK_OFFSET(0x9E16DE0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_SET_RESOURCEPROVIDERDATA_OFFSET UNITYSDK_OFFSET(0x9E16E00)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_SET_INSTANCEPROVIDERDATA_OFFSET UNITYSDK_OFFSET(0x9E16E20)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_EXPANDINTERNALID_OFFSET UNITYSDK_OFFSET(0x9E16E50)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9E15740)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_PROVIDERIDS_OFFSET UNITYSDK_OFFSET(0x9E170A0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_BINWRITEBYTES_OFFSET UNITYSDK_OFFSET(0x9E170B0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_INSTANCEPROVIDERDATA_OFFSET UNITYSDK_OFFSET(0x9E17200)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_BINREADSTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x9E16F80)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_CREATELOCATOR_OFFSET UNITYSDK_OFFSET(0x9E17220)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_RESOURCEPROVIDERDATA_OFFSET UNITYSDK_OFFSET(0x9E184C0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E16F00)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_CREATECUSTOMLOCATOR_OFFSET UNITYSDK_OFFSET(0x9E0D7F0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_PROVIDERID_OFFSET UNITYSDK_OFFSET(0x9E184D0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_FROMBINARYSTREAM_OFFSET UNITYSDK_OFFSET(0x9E13B90)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_BINWRITESTRINGARRAY_OFFSET UNITYSDK_OFFSET(0x9E184E0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_CLEANDATA_OFFSET UNITYSDK_OFFSET(0x9E14B20)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_SET_SCENEPROVIDERDATA_OFFSET UNITYSDK_OFFSET(0x9E185B0)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_TOBINARY_OFFSET UNITYSDK_OFFSET(0x9E14D50)
#define UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_INTERNALIDS_OFFSET UNITYSDK_OFFSET(0x9E185E0)

namespace UnityEngine::AddressableAssets::ResourceLocators
{
	inline static constexpr unsigned int ContentCatalogData_TypeDefinitionIndex = 36222;

	class ContentCatalogData : public Il2CppObject
	{
	public:
		::System::String* localHash; // 0x10
		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location; // 0x18
		::System::String* m_LocatorId; // 0x20
		::UnityEngine::ResourceManagement::Util::ObjectInitializationData* m_InstanceProviderData; // 0x28
		::UnityEngine::ResourceManagement::Util::ObjectInitializationData* m_SceneProviderData; // 0x58
		Il2CppObject* m_ResourceProviderData; // 0x88
		::Il2CppArray<::System::Object*>* m_ProviderIds; // 0x90
		::Il2CppArray<::System::Object*>* m_InternalIds; // 0x98
		::System::String* m_KeyDataString; // 0xA0
		::System::String* m_BucketDataString; // 0xA8
		::System::String* m_EntryDataString; // 0xB0
		::System::Int32 kBytesPerInt32; // 0x0
		::System::Int32 k_EntryDataItemPerEntry; // 0x0
		::System::String* m_ExtraDataString; // 0xB8
		::Il2CppArray<::System::Object*>* m_KeyData; // 0xC0
		::Il2CppArray<::System::Object*>* m_BucketData; // 0xC8
		::Il2CppArray<::System::Object*>* m_EntryData; // 0xD0
		::Il2CppArray<::System::Object*>* m_ExtraData; // 0xD8
		::Il2CppArray<::System::Object*>* m_resourceTypes; // 0xE0
		::Il2CppArray<::System::Object*>* m_InternalIdPrefixes; // 0xE8
		::System::UInt32 k_BinaryMagic; // 0x0
		::System::Byte k_BinaryVersion; // 0x0

		::Il2CppArray<::System::Object*>* BinReadBytes(::System::IO::BinaryReader* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::BinaryReader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_BINREADBYTES_OFFSET))(arg, nullptr);
		}

		::System::Void set_ProviderId(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_SET_PROVIDERID_OFFSET))(str, nullptr);
		}

		::UnityEngine::ResourceManagement::Util::ObjectInitializationData* get_SceneProviderData()
		{
			return (return (::UnityEngine::ResourceManagement::Util::ObjectInitializationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_SCENEPROVIDERDATA_OFFSET))(nullptr);
		}

		::System::Void set_ResourceProviderData(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_SET_RESOURCEPROVIDERDATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_InstanceProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::Util::ObjectInitializationData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_SET_INSTANCEPROVIDERDATA_OFFSET))(arg, nullptr);
		}

		::System::String* ExpandInternalId(::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_EXPANDINTERNALID_OFFSET))(arg, str, nullptr);
		}

		::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* FromBinary(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_FROMBINARY_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ProviderIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_PROVIDERIDS_OFFSET))(nullptr);
		}

		::System::Void BinWriteBytes(::System::IO::BinaryWriter* arg, ::Il2CppArray<::System::Object*>* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::Il2CppArray<::System::Object*>*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_BINWRITEBYTES_OFFSET))(arg, arg, str, nullptr);
		}

		::UnityEngine::ResourceManagement::Util::ObjectInitializationData* get_InstanceProviderData()
		{
			return (return (::UnityEngine::ResourceManagement::Util::ObjectInitializationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_INSTANCEPROVIDERDATA_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* BinReadStringArray(::System::IO::BinaryReader* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::IO::BinaryReader*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_BINREADSTRINGARRAY_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateLocator(::System::String* str)
		{
			return (return (::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_CREATELOCATOR_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_ResourceProviderData()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_RESOURCEPROVIDERDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* CreateCustomLocator(::System::String* str, ::System::String* str)
		{
			return (return (::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_CREATECUSTOMLOCATOR_OFFSET))(str, str, nullptr);
		}

		::System::String* get_ProviderId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_PROVIDERID_OFFSET))(nullptr);
		}

		::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* FromBinaryStream(::System::String* str)
		{
			return (return (::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_FROMBINARYSTREAM_OFFSET))(str, nullptr);
		}

		::System::Void BinWriteStringArray(::System::IO::BinaryWriter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_BINWRITESTRINGARRAY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CleanData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_CLEANDATA_OFFSET))(nullptr);
		}

		::System::Void set_SceneProviderData(::UnityEngine::ResourceManagement::Util::ObjectInitializationData* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::Util::ObjectInitializationData*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_SET_SCENEPROVIDERDATA_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* ToBinary()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_TOBINARY_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_InternalIds()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_RESOURCELOCATORS_CONTENTCATALOGDATA_GET_INTERNALIDS_OFFSET))(nullptr);
		}

	};
}

