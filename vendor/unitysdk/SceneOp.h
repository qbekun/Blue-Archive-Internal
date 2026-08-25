#pragma once
#include "unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class SceneInstance; }
namespace UnityEngine::ResourceManagement::ResourceLocations { class IResourceLocation; }
namespace UnityEngine::SceneManagement { class LoadSceneMode; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class DownloadStatus; }
namespace UnityEngine { class AsyncOperation; }

#define SCENEOP_INTERNALLOADSCENE_OFFSET UNITYSDK_OFFSET(0xA0ECAE0)
#define SCENEOP_GETDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0xA0ECCA0)
#define SCENEOP_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xA0ECD50)
#define SCENEOP_INTERNALLOAD_OFFSET UNITYSDK_OFFSET(0xA0ECC30)
#define SCENEOP_UNITYENGINE.RESOURCEMANAGEMENT.IUPDATERECEIVER.UPDATE_OFFSET UNITYSDK_OFFSET(0xA0ECDF0)
#define SCENEOP_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA0ECF30)
#define SCENEOP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0ECFE0)
#define SCENEOP_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0xA0ED680)
#define SCENEOP_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0xA0EDA20)
#define SCENEOP_INIT_OFFSET UNITYSDK_OFFSET(0xA0ECA00)
#define SCENEOP_DESTROY_OFFSET UNITYSDK_OFFSET(0xA0EDB50)
#define SCENEOP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EC9A0)

	inline static constexpr unsigned int SceneOp_TypeDefinitionIndex = 36413;

	class SceneOp : public ::FlatData::LimitedStageRewardExcel
	{
	public:
		::System::Boolean m_ActivateOnLoad; // 0x90
		::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance* m_Inst; // 0x98
		::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* m_Location; // 0xA8
		::UnityEngine::SceneManagement::LoadSceneMode* m_LoadMode; // 0xB0
		::System::Int32 m_Priority; // 0xB4
		Il2CppObject* m_DepOp; // 0xB8
		::UnityEngine::ResourceManagement::ResourceManager* m_ResourceManager; // 0xD8

		::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance* InternalLoadScene(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::System::Boolean arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg)
		{
			return (return (::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance*(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::System::Boolean, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_INTERNALLOADSCENE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus* GetDownloadStatus(Il2CppObject* arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_GETDOWNLOADSTATUS_OFFSET))(arg, nullptr);
		}

		::System::String* get_DebugName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_GET_DEBUGNAME_OFFSET))(nullptr);
		}

		::UnityEngine::AsyncOperation* InternalLoad(::System::String* str, ::System::Boolean arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg)
		{
			return (return (::UnityEngine::AsyncOperation*(*)(::System::String*, ::System::Boolean, ::UnityEngine::SceneManagement::LoadSceneMode*, ::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_INTERNALLOAD_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void UnityEngine.ResourceManagement.IUpdateReceiver.Update(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_UNITYENGINE.RESOURCEMANAGEMENT.IUPDATERECEIVER.UPDATE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Progress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_GET_PROGRESS_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_EXECUTE_OFFSET))(nullptr);
		}

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void GetDependencies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_GETDEPENDENCIES_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* arg, ::UnityEngine::SceneManagement::LoadSceneMode* arg, ::System::Boolean arg, ::System::Int32 arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*, ::UnityEngine::SceneManagement::LoadSceneMode*, ::System::Boolean, ::System::Int32, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_INIT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_DESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor(::UnityEngine::ResourceManagement::ResourceManager* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::PVOID))((::PBYTE)hIl2Cpp + SCENEOP_.CTOR_OFFSET))(arg, nullptr);
		}

	};

