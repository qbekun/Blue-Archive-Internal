#pragma once
#include "unitysdk.h"

namespace UnityEngine::ResourceManagement::ResourceProviders { class InstantiationParameters; }
namespace UnityEngine::ResourceManagement::ResourceProviders { class IInstanceProvider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::SceneManagement { class Scene; }
namespace UnityEngine::ResourceManagement::AsyncOperations { class DownloadStatus; }
namespace UnityEngine::ResourceManagement { class ResourceManager; }

#define INSTANCEOPERATION_GETDOWNLOADSTATUS_OFFSET UNITYSDK_OFFSET(0xA0E1070)
#define INSTANCEOPERATION_INIT_OFFSET UNITYSDK_OFFSET(0xA0DFE90)
#define INSTANCEOPERATION_INSTANCESCENE_OFFSET UNITYSDK_OFFSET(0xA0E1120)
#define INSTANCEOPERATION_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xA0E1130)
#define INSTANCEOPERATION_INVOKEWAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0xA0E1180)
#define INSTANCEOPERATION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xA0E1290)
#define INSTANCEOPERATION_GET_DEBUGNAME_OFFSET UNITYSDK_OFFSET(0xA0E14F0)
#define INSTANCEOPERATION_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0E1600)
#define INSTANCEOPERATION_DESTROY_OFFSET UNITYSDK_OFFSET(0xA0E1640)
#define INSTANCEOPERATION_GETDEPENDENCIES_OFFSET UNITYSDK_OFFSET(0xA0E16F0)

	inline static constexpr unsigned int InstanceOperation_TypeDefinitionIndex = 36353;

	class InstanceOperation : public ::FlatData::LimitedStageExcel
	{
	public:
		Il2CppObject* m_dependency; // 0x88
		::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* m_instantiationParams; // 0xA8
		::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* m_instanceProvider; // 0xD8
		::UnityEngine::GameObject* m_instance; // 0xE0
		::UnityEngine::SceneManagement::Scene* m_scene; // 0xE8

		::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus* GetDownloadStatus(Il2CppObject* arg)
		{
			return (return (::UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPERATION_GETDOWNLOADSTATUS_OFFSET))(arg, nullptr);
		}

		::System::Void Init(::UnityEngine::ResourceManagement::ResourceManager* arg, ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* arg, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::ResourceManager*, ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider*, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPERATION_INIT_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::UnityEngine::SceneManagement::Scene* InstanceScene()
		{
			return (return (::UnityEngine::SceneManagement::Scene*(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPERATION_INSTANCESCENE_OFFSET))(nullptr);
		}

		::System::Single get_Progress()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPERATION_GET_PROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean InvokeWaitForCompletion()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPERATION_INVOKEWAITFORCOMPLETION_OFFSET))(nullptr);
		}

		::System::Void Execute()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPERATION_EXECUTE_OFFSET))(nullptr);
		}

		::System::String* get_DebugName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPERATION_GET_DEBUGNAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPERATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Destroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPERATION_DESTROY_OFFSET))(nullptr);
		}

		::System::Void GetDependencies(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + INSTANCEOPERATION_GETDEPENDENCIES_OFFSET))(arg, nullptr);
		}

	};

