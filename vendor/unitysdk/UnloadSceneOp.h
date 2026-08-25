#pragma once
#include "unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class SceneInstance; }
namespace UnityEngine::SceneManagement { class UnloadSceneOptions; }
namespace UnityEngine { class AsyncOperation; }

#define UNLOADSCENEOP_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0EDBD0)
#define UNLOADSCENEOP_UNLOADSCENECOMPLETEDNORELEASE_OFFSET UNITYSDK_OFFSET(0xA0EDD40)
#define UNLOADSCENEOP_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA0EDE60)
#define UNLOADSCENEOP_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0xA0EDEB0)
#define UNLOADSCENEOP_INIT_OFFSET UNITYSDK_OFFSET(0xA0EC480)
#define UNLOADSCENEOP_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0EC440)
#define UNLOADSCENEOP_UNLOADSCENECOMPLETED_OFFSET UNITYSDK_OFFSET(0xA0EDDB0)

	inline static constexpr unsigned int UnloadSceneOp_TypeDefinitionIndex = 36414;

	class UnloadSceneOp : public ::FlatData::LimitedStageRewardExcel
	{
	public:
		::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance* m_Instance; // 0x90
		Il2CppObject* m_sceneLoadHandle; // 0xA0
		::UnityEngine::SceneManagement::UnloadSceneOptions* m_UnloadOptions; // 0xC0

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNLOADSCENEOP_EXECUTE_OFFSET))(nullptr);
		}

		::System::Void UnloadSceneCompletedNoRelease(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNLOADSCENEOP_UNLOADSCENECOMPLETEDNORELEASE_OFFSET))(arg, nullptr);
		}

		::System::Single get_Progress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNLOADSCENEOP_GET_PROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNLOADSCENEOP_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void Init(Il2CppObject* arg, ::UnityEngine::SceneManagement::UnloadSceneOptions* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::SceneManagement::UnloadSceneOptions*, ::PVOID))((::PBYTE)hIl2Cpp + UNLOADSCENEOP_INIT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNLOADSCENEOP_.CTOR_OFFSET))(nullptr);
		}

		::System::Void UnloadSceneCompleted(::UnityEngine::AsyncOperation* arg)
		{
			((::System::Void(*)(::UnityEngine::AsyncOperation*, ::PVOID))((::PBYTE)hIl2Cpp + UNLOADSCENEOP_UNLOADSCENECOMPLETED_OFFSET))(arg, nullptr);
		}

	};

