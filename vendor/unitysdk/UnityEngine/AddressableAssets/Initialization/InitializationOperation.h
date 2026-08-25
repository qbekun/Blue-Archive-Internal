#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::AddressableAssets { class AddressablesImpl; }
namespace UnityEngine::AddressableAssets::Utility { class ResourceManagerDiagnostics; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class InitalizationObjectsOperation; }
namespace UnityEngine::ResourceManagement::Util { class ObjectInitializationData; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::AddressableAssets::ResourceLocators { class ResourceLocationMap; }

#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E1B790)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x9E1B850)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x9E1B8C0)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_CREATEINITIALIZATIONOPERATION_OFFSET UNITYSDK_OFFSET(0x9E1B8F0)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9E1BF60)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9E1C100)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_LOADPROVIDER_OFFSET UNITYSDK_OFFSET(0x9E1D2C0)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_ONCATALOGDATALOADED_OFFSET UNITYSDK_OFFSET(0x9E1D780)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_LOADCONTENTCATALOG_OFFSET UNITYSDK_OFFSET(0x9E1DE30)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_LOADCONTENTCATALOG_OFFSET UNITYSDK_OFFSET(0x9E1E610)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_LOADCONTENTCATALOGINTERNAL_OFFSET UNITYSDK_OFFSET(0x9E1D070)
#define UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_LOADOPCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9E1E650)

namespace UnityEngine::AddressableAssets::Initialization
{
	inline static constexpr unsigned int InitializationOperation_TypeDefinitionIndex = 36235;

	class InitializationOperation : public ::FlatData::LimitedStageRewardExcelTable
	{
	public:
		Il2CppObject* m_rtdOp; // 0x88
		Il2CppObject* m_loadCatalogOp; // 0xA8
		::System::String* m_ProviderSuffix; // 0xC8
		::UnityEngine::AddressableAssets::AddressablesImpl* m_Addressables; // 0xD0
		::UnityEngine::AddressableAssets::Utility::ResourceManagerDiagnostics* m_Diagnostics; // 0xD8
		::UnityEngine::ResourceManagement::AsyncOperations::InitalizationObjectsOperation* m_InitGroupOps; // 0xE0

		::System::Void .ctor(::UnityEngine::AddressableAssets::AddressablesImpl* arg)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single get_Progress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_GET_PROGRESS_OFFSET))(nullptr);
		}

		::System::String* get_DebugName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_GET_DEBUGNAME_OFFSET))(nullptr);
		}

		Il2CppObject* CreateInitializationOperation(::UnityEngine::AddressableAssets::AddressablesImpl* arg, ::System::String* str, ::System::String* str)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_CREATEINITIALIZATIONOPERATION_OFFSET))(arg, str, str, nullptr);
		}

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void LoadProvider(::UnityEngine::AddressableAssets::AddressablesImpl* arg, ::UnityEngine::ResourceManagement::Util::ObjectInitializationData* arg, ::System::String* str)
		{
			((::System::Void(*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::UnityEngine::ResourceManagement::Util::ObjectInitializationData*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_LOADPROVIDER_OFFSET))(arg, arg, str, nullptr);
		}

		Il2CppObject* OnCatalogDataLoaded(::UnityEngine::AddressableAssets::AddressablesImpl* arg, Il2CppObject* arg, ::System::String* str, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::AddressableAssets::AddressablesImpl*, Il2CppObject*, ::System::String*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_ONCATALOGDATALOADED_OFFSET))(arg, arg, str, arg, nullptr);
		}

		Il2CppObject* LoadContentCatalog(::UnityEngine::AddressableAssets::AddressablesImpl* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::String* str, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::AddressableAssets::AddressablesImpl*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::String*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_LOADCONTENTCATALOG_OFFSET))(arg, arg, str, arg, nullptr);
		}

		Il2CppObject* LoadContentCatalog(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::String* str, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (Il2CppObject*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::String*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_LOADCONTENTCATALOG_OFFSET))(arg, str, arg, nullptr);
		}

		Il2CppObject* LoadContentCatalogInternal(Il2CppObject* arg, ::System::Int32 arg, ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::System::Int32, ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_LOADCONTENTCATALOGINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void LoadOpComplete(Il2CppObject* arg, Il2CppObject* arg, ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap* arg, ::System::Int32 arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::UnityEngine::AddressableAssets::ResourceLocators::ResourceLocationMap*, ::System::Int32, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ADDRESSABLEASSETS_INITIALIZATION_INITIALIZATIONOPERATION_LOADOPCOMPLETE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

