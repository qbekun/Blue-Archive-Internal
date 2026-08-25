#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine::AddressableAssets::ResourceLocators { class ContentCatalogData; }
namespace UnityEngine::ResourceManagement { class WebRequestQueueOperation; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define BUNDLEDCATALOG_ADD_ONLOADED_OFFSET UNITYSDK_OFFSET(0x9E146C0)
#define BUNDLEDCATALOG_REMOVE_ONLOADED_OFFSET UNITYSDK_OFFSET(0x9E16250)
#define BUNDLEDCATALOG_GET_OPINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E162F0)
#define BUNDLEDCATALOG_LOADCATALOGFROMBUNDLEASYNC_OFFSET UNITYSDK_OFFSET(0x9E14760)
#define BUNDLEDCATALOG_LOADTEXTASSETREQUESTCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9E16550)
#define BUNDLEDCATALOG_UNLOAD_OFFSET UNITYSDK_OFFSET(0x9E166F0)
#define BUNDLEDCATALOG__LOADCATALOGFROMBUNDLEASYNC_B__19_0_OFFSET UNITYSDK_OFFSET(0x9E16730)
#define BUNDLEDCATALOG_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x9E12230)
#define BUNDLEDCATALOG__LOADCATALOGFROMBUNDLEASYNC_B__19_1_OFFSET UNITYSDK_OFFSET(0x9E16910)
#define BUNDLEDCATALOG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x9E169B0)
#define BUNDLEDCATALOG_GET_OPISSUCCESS_OFFSET UNITYSDK_OFFSET(0x9E16AA0)
#define BUNDLEDCATALOG_WEBREQUESTOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x9E16300)
#define BUNDLEDCATALOG_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E145A0)

	inline static constexpr unsigned int BundledCatalog_TypeDefinitionIndex = 36216;

	class BundledCatalog : public Il2CppObject
	{
	public:
		::System::String* m_BundlePath; // 0x10
		::System::Boolean m_OpInProgress; // 0x18
		::UnityEngine::AssetBundleCreateRequest* m_LoadBundleRequest; // 0x20
		::UnityEngine::AssetBundle* m_CatalogAssetBundle; // 0x28
		::UnityEngine::AssetBundleRequest* m_LoadTextAssetRequest; // 0x30
		::UnityEngine::AddressableAssets::ResourceLocators::ContentCatalogData* m_CatalogData; // 0x38
		::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_WebRequestQueueOperation; // 0x40
		::UnityEngine::AsyncOperation* m_RequestOperation; // 0x48
		::System::Int32 m_WebRequestTimeout; // 0x50
		Il2CppObject* OnLoaded; // 0x58

		::System::Void add_OnLoaded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_ADD_ONLOADED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_OnLoaded(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_REMOVE_ONLOADED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_OpInProgress()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_GET_OPINPROGRESS_OFFSET))(nullptr);
		}

		::System::Void LoadCatalogFromBundleAsync()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_LOADCATALOGFROMBUNDLEASYNC_OFFSET))(nullptr);
		}

		::System::Void LoadTextAssetRequestComplete(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_LOADTEXTASSETREQUESTCOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void _LoadCatalogFromBundleAsync_b__19_0(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG__LOADCATALOGFROMBUNDLEASYNC_B__19_0_OFFSET))(arg, nullptr);
		}

		::System::Boolean WaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_WAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void _LoadCatalogFromBundleAsync_b__19_1(::UnityEngine::Networking::UnityWebRequestAsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG__LOADCATALOGFROMBUNDLEASYNC_B__19_1_OFFSET))(arg, nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_FINALIZE_OFFSET))(nullptr);
		}

		::System::Boolean get_OpIsSuccess()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_GET_OPISSUCCESS_OFFSET))(nullptr);
		}

		::System::Void WebRequestOperationCompleted(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_WEBREQUESTOPERATIONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUNDLEDCATALOG_.CTOR_OFFSET))(str, arg, nullptr);
		}

	};

