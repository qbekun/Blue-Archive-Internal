#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::AsyncOperations { class DownloadStatus; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class IResourceProvider; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::ResourceManagement::Util { class IOperationCacheKey; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }

#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_UNITYENGINE.RESOURCEMANAGEMENT.ASYNCOPERATIONS.ICACHABLE.GET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_UNITYENGINE.RESOURCEMANAGEMENT.ASYNCOPERATIONS.ICACHABLE.SET_KEY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_PROVIDEHANDLEVERSION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_LOCATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_SETDOWNLOADPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_SETWAITFORCOMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GETDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_RELEASEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_REQUESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_DEPENDENCYCOUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GETDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_SETPROGRESSCALLBACK_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_PROVIDERCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_WAITFORCOMPLETIONHANDLER_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement::AsyncOperations
{
	inline static constexpr unsigned int ProviderOperation`1_TypeDefinitionIndex = 36438;

	class ProviderOperation`1 : public ::FlatData::GroundNodeFlat
	{
	public:
		::System::Boolean m_ReleaseDependenciesOnFailure; // 0x0
		Il2CppObject* m_CompletionCallback; // 0x0
		Il2CppObject* m_GetDepCallback; // 0x0
		Il2CppObject* m_GetProgressCallback; // 0x0
		Il2CppObject* m_GetDownloadProgressCallback; // 0x0
		Il2CppObject* m_WaitForCompletionCallback; // 0x0
		::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus* m_DownloadStatus; // 0x0
		::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* m_Provider; // 0x0
		Il2CppObject* m_DepOp; // 0x0
		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* m_Location; // 0x0
		::System::Int32 m_ProvideHandleVersion; // 0x0
		::System::Boolean m_NeedsRelease; // 0x0
		::UnityEngine::ResourceManagement::Util::IOperationCacheKey* _UnityEngine.ResourceManagement.AsyncOperations.ICachable.Key_k__BackingField; // 0x0
		::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager; // 0x0
		::System::Single k_OperationWaitingToCompletePercentComplete; // 0x0
		::System::String* kInvalidHandleMsg; // 0x0

		::UnityEngine::ResourceManagement::Util::IOperationCacheKey* UnityEngine.ResourceManagement.AsyncOperations.ICachable.get_Key()
		{
			return (return (::UnityEngine::ResourceManagement::Util::IOperationCacheKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_UNITYENGINE.RESOURCEMANAGEMENT.ASYNCOPERATIONS.ICACHABLE.GET_KEY_OFFSET))(nullptr);
		}

		::System::Void UnityEngine.ResourceManagement.AsyncOperations.ICachable.set_Key(::UnityEngine::ResourceManagement::Util::IOperationCacheKey* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::Util::IOperationCacheKey*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_UNITYENGINE.RESOURCEMANAGEMENT.ASYNCOPERATIONS.ICACHABLE.SET_KEY_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_ProvideHandleVersion()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_PROVIDEHANDLEVERSION_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* get_Location()
		{
			return (return (::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_LOCATION_OFFSET))(nullptr);
		}

		::System::Void SetDownloadProgressCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_SETDOWNLOADPROGRESSCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void SetWaitForCompletionCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_SETWAITFORCOMPLETIONCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus* GetDownloadStatus(Il2CppObject* arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GETDOWNLOADSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_.CTOR_OFFSET))(nullptr);
		}

		::System::Void GetDependencies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GETDEPENDENCIES_OFFSET))(arg, nullptr);
		}

		::System::Void ReleaseDependencies()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_RELEASEDEPENDENCIES_OFFSET))(nullptr);
		}

		::System::String* get_DebugName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_DEBUGNAME_OFFSET))(nullptr);
		}

		::System::Void GetDependencies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GETDEPENDENCIES_OFFSET))(arg, nullptr);
		}

		::System::Type* get_RequestedType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_REQUESTEDTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_DependencyCount()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_DEPENDENCYCOUNT_OFFSET))(nullptr);
		}

		Il2CppObject* GetDependency(::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GETDEPENDENCY_OFFSET))(arg, nullptr);
		}

		::System::Void SetProgressCallback(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_SETPROGRESSCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void ProviderCompleted(Il2CppObject* arg, ::System::Boolean arg, ::System::Exception* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Boolean, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_PROVIDERCOMPLETED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single get_Progress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_GET_PROGRESS_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void Init(::UnityEngine::ResourceManagement::ResourceManager* arg, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Init(::UnityEngine::ResourceManagement::ResourceManager* arg, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* arg, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_INIT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean WaitForCompletionHandler()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_WAITFORCOMPLETIONHANDLER_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_ASYNCOPERATIONS_PROVIDEROPERATION`1_DESTROY_OFFSET))(nullptr);
		}

	};
}

