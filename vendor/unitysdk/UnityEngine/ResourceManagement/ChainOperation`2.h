#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::ResourceManagement::AsyncOperations { class DownloadStatus; }

#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_INIT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_DESTROY_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_GETDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_REFRESHDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_ONWRAPPEDCOMPLETED_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_RELEASEDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::ResourceManagement
{
	inline static constexpr unsigned int ChainOperation`2_TypeDefinitionIndex = 36347;

	class ChainOperation`2 : public ::FlatData::GroundGridFlat
	{
	public:
		Il2CppObject* m_DepOp; // 0x0
		Il2CppObject* m_WrappedOp; // 0x0
		::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus* m_depStatus; // 0x0
		::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus* m_wrapStatus; // 0x0
		Il2CppObject* m_Callback; // 0x0
		Il2CppObject* m_CachedOnWrappedCompleted; // 0x0
		::System::Boolean m_ReleaseDependenciesOnFailure; // 0x0

		::System::Void Init(Il2CppObject* arg, Il2CppObject* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_INIT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_DESTROY_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus* GetDownloadStatus(Il2CppObject* arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_GETDOWNLOADSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void RefreshDownloadStatus(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_REFRESHDOWNLOADSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_EXECUTE_OFFSET))(nullptr);
		}

		::System::String* get_DebugName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_GET_DEBUGNAME_OFFSET))(nullptr);
		}

		::System::Void OnWrappedCompleted(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_ONWRAPPEDCOMPLETED_OFFSET))(arg, nullptr);
		}

		::System::Single get_Progress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_GET_PROGRESS_OFFSET))(nullptr);
		}

		::System::Void ReleaseDependencies()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_RELEASEDEPENDENCIES_OFFSET))(nullptr);
		}

		::System::Void GetDependencies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_CHAINOPERATION`2_GETDEPENDENCIES_OFFSET))(arg, nullptr);
		}

	};
}

