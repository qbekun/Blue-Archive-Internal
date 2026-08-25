#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class INotification; }
namespace UnityEngine::Playables { class INotificationReceiver; }

#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_SETREFERENCEOBJECT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_SETUSERDATA_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_GETSOURCEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_SETSOURCEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_SETSOURCEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_GETSOURCEOUTPUTPORT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_PUSHNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_ADDNOTIFICATIONRECEIVER_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableOutputExtensions_TypeDefinitionIndex = 31618;

	class PlayableOutputExtensions : public Il2CppObject
	{
	public:
		::System::Void SetReferenceObject(Il2CppObject* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_SETREFERENCEOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetUserData(Il2CppObject* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_SETUSERDATA_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Playables::Playable* GetSourcePlayable(Il2CppObject* arg)
		{
			return (return (::UnityEngine::Playables::Playable*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_GETSOURCEPLAYABLE_OFFSET))(arg, nullptr);
		}

		::System::Void SetSourcePlayable(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_SETSOURCEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSourcePlayable(Il2CppObject* arg, Il2CppObject* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_SETSOURCEPLAYABLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetSourceOutputPort(Il2CppObject* arg)
		{
			return (return (::System::Int32(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_GETSOURCEOUTPUTPORT_OFFSET))(arg, nullptr);
		}

		::System::Void SetWeight(Il2CppObject* arg, ::System::Single arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_SETWEIGHT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PushNotification(Il2CppObject* arg, ::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::INotification* arg, ::System::Object* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::INotification*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_PUSHNOTIFICATION_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddNotificationReceiver(Il2CppObject* arg, ::UnityEngine::Playables::INotificationReceiver* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::UnityEngine::Playables::INotificationReceiver*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTEXTENSIONS_ADDNOTIFICATIONRECEIVER_OFFSET))(arg, arg, nullptr);
		}

	};
}

