#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Playables { class PlayableOutputHandle; }
namespace UnityEngine { class Object; }
namespace UnityEngine::Playables { class PlayableHandle; }
namespace UnityEngine::Playables { class INotification; }
namespace UnityEngine::Playables { class INotificationReceiver; }
namespace UnityEngine::Playables { class PlayableOutputHandle&; }
namespace UnityEngine::Playables { class PlayableHandle&; }

#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GET_NULL_OFFSET UNITYSDK_OFFSET(0xA26CEA0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISPLAYABLEOUTPUTOFTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA26CF00)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xA26CD50)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA26CF70)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA26D060)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_COMPAREVERSION_OFFSET UNITYSDK_OFFSET(0xA26CF30)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0xA26D0E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0xA26D1B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_OFFSET UNITYSDK_OFFSET(0xA26D280)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_OFFSET UNITYSDK_OFFSET(0xA26D350)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA26D420)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA26D4F0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_OFFSET UNITYSDK_OFFSET(0xA26D5E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_OFFSET UNITYSDK_OFFSET(0xA26D6B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xA26D7A0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_OFFSET UNITYSDK_OFFSET(0xA26D890)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA26D960)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26D170)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26D240)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26D310)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26D3E0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26D4B0)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26D590)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26D670)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26D750)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26D840)
#define UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_INJECTED_OFFSET UNITYSDK_OFFSET(0xA26D920)

namespace UnityEngine::Playables
{
	inline static constexpr unsigned int PlayableOutputHandle_TypeDefinitionIndex = 31619;

	class PlayableOutputHandle : public Il2CppObject
	{
	public:
		::System::Int32 m_Handle; // 0x10
		::System::UInt32 m_Version; // 0x18
		::UnityEngine::Playables::PlayableOutputHandle* m_Null; // 0x0

		::UnityEngine::Playables::PlayableOutputHandle* get_Null()
		{
			return (return (::UnityEngine::Playables::PlayableOutputHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GET_NULL_OFFSET))(nullptr);
		}

		::System::Boolean IsPlayableOutputOfType()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISPLAYABLEOUTPUTOFTYPE_OFFSET))(nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::UnityEngine::Playables::PlayableOutputHandle* arg, ::UnityEngine::Playables::PlayableOutputHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle*, ::UnityEngine::Playables::PlayableOutputHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::UnityEngine::Playables::PlayableOutputHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean CompareVersion(::UnityEngine::Playables::PlayableOutputHandle* arg, ::UnityEngine::Playables::PlayableOutputHandle* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle*, ::UnityEngine::Playables::PlayableOutputHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_COMPAREVERSION_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_OFFSET))(nullptr);
		}

		::System::Type* GetPlayableOutputType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_OFFSET))(nullptr);
		}

		::System::Void SetReferenceObject(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void SetUserData(::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Playables::PlayableHandle* GetSourcePlayable()
		{
			return (return (::UnityEngine::Playables::PlayableHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_OFFSET))(nullptr);
		}

		::System::Void SetSourcePlayable(::UnityEngine::Playables::PlayableHandle* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 GetSourceOutputPort()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_OFFSET))(nullptr);
		}

		::System::Void SetWeight(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_OFFSET))(arg, nullptr);
		}

		::System::Void PushNotification(::UnityEngine::Playables::PlayableHandle* arg, ::UnityEngine::Playables::INotification* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableHandle*, ::UnityEngine::Playables::INotification*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void AddNotificationReceiver(::UnityEngine::Playables::INotificationReceiver* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::INotificationReceiver*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsValid_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ISVALID_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Type* GetPlayableOutputType_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg)
		{
			return (return (::System::Type*(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETPLAYABLEOUTPUTTYPE_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetReferenceObject_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETREFERENCEOBJECT_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetUserData_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETUSERDATA_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetSourcePlayable_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::UnityEngine::Playables::PlayableHandle&* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::UnityEngine::Playables::PlayableHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEPLAYABLE_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetSourcePlayable_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::UnityEngine::Playables::PlayableHandle&* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::UnityEngine::Playables::PlayableHandle&*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETSOURCEPLAYABLE_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 GetSourceOutputPort_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg)
		{
			return (return (::System::Int32(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_GETSOURCEOUTPUTPORT_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void SetWeight_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::System::Single arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_SETWEIGHT_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PushNotification_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::UnityEngine::Playables::PlayableHandle&* arg, ::UnityEngine::Playables::INotification* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::UnityEngine::Playables::PlayableHandle&*, ::UnityEngine::Playables::INotification*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_PUSHNOTIFICATION_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void AddNotificationReceiver_Injected(::UnityEngine::Playables::PlayableOutputHandle&* arg, ::UnityEngine::Playables::INotificationReceiver* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableOutputHandle&*, ::UnityEngine::Playables::INotificationReceiver*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PLAYABLES_PLAYABLEOUTPUTHANDLE_ADDNOTIFICATIONRECEIVER_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

