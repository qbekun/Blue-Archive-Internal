#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class AssetBundle; }
namespace UnityEngine::Networking { class DownloadHandlerAssetBundle; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::ResourceManagement { class WebRequestQueueOperation; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class ProvideHandle; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class AssetBundleRequestOptions; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class DownloadStatus; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GET_HASTIMEDOUT_OFFSET UNITYSDK_OFFSET(0xA0E7090)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GET_BYTESTODOWNLOAD_OFFSET UNITYSDK_OFFSET(0xA0E70D0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_CREATEWEBREQUEST_OFFSET UNITYSDK_OFFSET(0xA0E71E0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_CREATEWEBREQUEST_OFFSET UNITYSDK_OFFSET(0xA0E7210)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GETASSETPRELOADREQUEST_OFFSET UNITYSDK_OFFSET(0xA0E7410)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_PERCENTCOMPLETE_OFFSET UNITYSDK_OFFSET(0xA0E7640)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GETDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0xA0E7660)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GETASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0xA0E7530)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_START_OFFSET UNITYSDK_OFFSET(0xA0E7840)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_WAITFORCOMPLETIONHANDLER_OFFSET UNITYSDK_OFFSET(0xA0E8160)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_ADDCALLBACKINVOKEIFDONE_OFFSET UNITYSDK_OFFSET(0xA0E8AC0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GETLOADINFO_OFFSET UNITYSDK_OFFSET(0xA0E8B20)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GETLOADINFO_OFFSET UNITYSDK_OFFSET(0xA0E8B50)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_BEGINOPERATION_OFFSET UNITYSDK_OFFSET(0xA0E7CF0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_BEGINWEBREQUESTOPERATION_OFFSET UNITYSDK_OFFSET(0xA0E8D80)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_UPDATE_OFFSET UNITYSDK_OFFSET(0xA0E8EA0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_LOCALREQUESTOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA0E8FC0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_COMPLETEBUNDLELOAD_OFFSET UNITYSDK_OFFSET(0xA0E9040)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_WEBREQUESTOPERATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA0E8390)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_UNLOAD_OFFSET UNITYSDK_OFFSET(0xA0E91D0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E92A0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE__GETASSETPRELOADREQUEST_B__25_0_OFFSET UNITYSDK_OFFSET(0xA0E92B0)
#define UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE__BEGINOPERATION_B__34_0_OFFSET UNITYSDK_OFFSET(0xA0E92C0)

namespace UnityEngine::ResourceManagement::ResourceProviders
{
	inline static constexpr unsigned int AssetBundleResource_TypeDefinitionIndex = 36391;

	class AssetBundleResource : public Il2CppObject
	{
	public:
		::UnityEngine::AssetBundle* m_AssetBundle; // 0x10
		::UnityEngine::Networking::DownloadHandlerAssetBundle* m_downloadHandler; // 0x18
		::UnityEngine::AsyncOperation* m_RequestOperation; // 0x20
		::UnityEngine::ResourceManagement::WebRequestQueueOperation* m_WebRequestQueueOperation; // 0x28
		::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* m_ProvideHandle; // 0x30
		::UnityEngine::ResourceManagement::ResourceProviders::AssetBundleRequestOptions* m_Options; // 0x48
		::System::Boolean m_WebRequestCompletedCallbackCalled; // 0x50
		::System::Int32 m_Retries; // 0x54
		::System::Int64 m_BytesToDownload; // 0x58
		::System::Int64 m_DownloadedBytes; // 0x60
		::System::Boolean m_Completed; // 0x68
		::System::Int32 k_WaitForWebRequestMainThreadSleep; // 0x0
		::System::String* m_TransformedInternalId; // 0x70
		::UnityEngine::AssetBundleRequest* m_PreloadRequest; // 0x78
		::System::Boolean m_PreloadCompleted; // 0x80
		::System::UInt64 m_LastDownloadedByteCount; // 0x88
		::System::Single m_TimeoutTimer; // 0x90
		::System::Int32 m_TimeoutOverFrames; // 0x94

		::System::Boolean get_HasTimedOut()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GET_HASTIMEDOUT_OFFSET))(nullptr);
		}

		::System::Int64 get_BytesToDownload()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GET_BYTESTODOWNLOAD_OFFSET))(nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* CreateWebRequest(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_CREATEWEBREQUEST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Networking::UnityWebRequest* CreateWebRequest(::System::String* str)
		{
			return (return (::UnityEngine::Networking::UnityWebRequest*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_CREATEWEBREQUEST_OFFSET))(str, nullptr);
		}

		::UnityEngine::AssetBundleRequest* GetAssetPreloadRequest()
		{
			return (return (::UnityEngine::AssetBundleRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GETASSETPRELOADREQUEST_OFFSET))(nullptr);
		}

		::System::Single PercentComplete()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_PERCENTCOMPLETE_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus* GetDownloadStatus()
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GETDOWNLOADSTATUS_OFFSET))(nullptr);
		}

		::UnityEngine::AssetBundle* GetAssetBundle()
		{
			return (return (::UnityEngine::AssetBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GETASSETBUNDLE_OFFSET))(nullptr);
		}

		::System::Void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_START_OFFSET))(arg, nullptr);
		}

		::System::Boolean WaitForCompletionHandler()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_WAITFORCOMPLETIONHANDLER_OFFSET))(nullptr);
		}

		::System::Void AddCallbackInvokeIfDone(::UnityEngine::AsyncOperation* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_ADDCALLBACKINVOKEIFDONE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetLoadInfo(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle* arg, LoadType&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle*, LoadType&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GETLOADINFO_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void GetLoadInfo(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::ResourceManagement::ResourceManager* arg, LoadType&* arg, ::System::String&* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::ResourceManagement::ResourceManager*, LoadType&*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_GETLOADINFO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void BeginOperation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_BEGINOPERATION_OFFSET))(nullptr);
		}

		::System::Void BeginWebRequestOperation(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_BEGINWEBREQUESTOPERATION_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void LocalRequestOperationCompleted(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_LOCALREQUESTOPERATIONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void CompleteBundleLoad(::UnityEngine::AssetBundle* arg)
		{
			((::System::Void(*)(::UnityEngine::AssetBundle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_COMPLETEBUNDLELOAD_OFFSET))(arg, nullptr);
		}

		::System::Void WebRequestOperationCompleted(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_WEBREQUESTOPERATIONCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Void Unload()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_UNLOAD_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _GetAssetPreloadRequest_b__25_0(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE__GETASSETPRELOADREQUEST_B__25_0_OFFSET))(arg, nullptr);
		}

		::System::Void _BeginOperation_b__34_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_RESOURCEPROVIDERS_ASSETBUNDLERESOURCE__BEGINOPERATION_B__34_0_OFFSET))(arg, nullptr);
		}

	};
}

