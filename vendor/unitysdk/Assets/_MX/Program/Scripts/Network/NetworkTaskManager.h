#pragma once
#include "../../../../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace UnityEngine { class Coroutine; }
namespace Assets::_MX::Program::Scripts::Network { class AbstractNetworkTask; }
class CommonNetworkTask;
namespace UnityEngine { class GameObject; }

#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_HANDLETASKFINISHEDMESSAGE_OFFSET UNITYSDK_OFFSET(0xE257A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_REQUESTCOMMONASYNC_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_WAITONEFRAMEREQUEST_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_REQUEST_OFFSET UNITYSDK_OFFSET(0xE258B0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_CREATETASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_SCHEDULETASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_COREQUEST_OFFSET UNITYSDK_OFFSET(0xE259A0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xE25A50)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_REQUESTCOMMON_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_CO_WAITONEFRAME_OFFSET UNITYSDK_OFFSET(0xE25BE0)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_TRYADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x000000)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE25C70)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE25E60)
#define ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_START_OFFSET UNITYSDK_OFFSET(0xE25EC0)

namespace Assets::_MX::Program::Scripts::Network
{
	inline static constexpr unsigned int NetworkTaskManager_TypeDefinitionIndex = 10391;

	class NetworkTaskManager : public ::ToyWebViewShared::Messages::ReplyExecuteJavaScript
	{
	public:
		::System::Boolean HandleTaskFinishedMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_HANDLETASKFINISHEDMESSAGE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* RequestCommonAsync(Il2CppObject* arg, Il2CppObject* arg2)
		{
			return ((Il2CppObject*(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_REQUESTCOMMONASYNC_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void WaitOneFrameRequest(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_WAITONEFRAMEREQUEST_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Coroutine* Request(::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask* arg, Il2CppObject* arg2)
		{
			return ((::UnityEngine::Coroutine*(*)(::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_REQUEST_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* CreateTask()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_CREATETASK_OFFSET))(nullptr);
		}

		Il2CppObject* ScheduleTask(::System::DateTime* arg)
		{
			return ((Il2CppObject*(*)(::System::DateTime*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_SCHEDULETASK_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoRequest(::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask* arg, Il2CppObject* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::Assets::_MX::Program::Scripts::Network::AbstractNetworkTask*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_COREQUEST_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Init()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_INIT_OFFSET))(nullptr);
		}

		CommonNetworkTask* RequestCommon(Il2CppObject* arg, Il2CppObject* arg2, Il2CppObject* arg3)
		{
			return ((CommonNetworkTask*(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_REQUESTCOMMON_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Collections::IEnumerator* co_WaitOneFrame(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_CO_WAITONEFRAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* TryAddComponent(::UnityEngine::GameObject* arg)
		{
			return ((Il2CppObject*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_TRYADDCOMPONENT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASSETS__MX_PROGRAM_SCRIPTS_NETWORK_NETWORKTASKMANAGER_START_OFFSET))(nullptr);
		}

	};
}

