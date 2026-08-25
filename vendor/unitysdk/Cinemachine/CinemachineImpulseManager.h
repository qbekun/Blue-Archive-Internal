#pragma once
#include "../unitysdk.h"

namespace Cinemachine { class CinemachineImpulseManager; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Vector3&; }
namespace UnityEngine { class Quaternion&; }

#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_NEWIMPULSEEVENT_OFFSET UNITYSDK_OFFSET(0x286AEE0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x286A380)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x286AFB0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_EVALUATEDISSIPATIONSCALE_OFFSET UNITYSDK_OFFSET(0x286AFC0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x286B0A0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x286B0F0)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ADDIMPULSEEVENT_OFFSET UNITYSDK_OFFSET(0x286B360)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GETIMPULSEAT_OFFSET UNITYSDK_OFFSET(0x286A420)
#define CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x286B4C0)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineImpulseManager_TypeDefinitionIndex = 34369;

	class CinemachineImpulseManager : public Il2CppObject
	{
	public:
		::Cinemachine::CinemachineImpulseManager* sInstance; // 0x0
		::System::Single Epsilon; // 0x0
		Il2CppObject* m_ExpiredEvents; // 0x10
		Il2CppObject* m_ActiveEvents; // 0x18
		::System::Boolean IgnoreTimeScale; // 0x20

		ImpulseEvent* NewImpulseEvent()
		{
			return (return (ImpulseEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_NEWIMPULSEEVENT_OFFSET))(nullptr);
		}

		::Cinemachine::CinemachineImpulseManager* get_Instance()
		{
			return (return (::Cinemachine::CinemachineImpulseManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Single EvaluateDissipationScale(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_EVALUATEDISSIPATIONSCALE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeModule()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_INITIALIZEMODULE_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void AddImpulseEvent(ImpulseEvent* arg)
		{
			((::System::Void(*)(ImpulseEvent*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_ADDIMPULSEEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetImpulseAt(::UnityEngine::Vector3* arg, ::System::Boolean arg, ::System::Int32 arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			return (return (::System::Boolean(*)(::UnityEngine::Vector3*, ::System::Boolean, ::System::Int32, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GETIMPULSEAT_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Single get_CurrentTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEIMPULSEMANAGER_GET_CURRENTTIME_OFFSET))(nullptr);
		}

	};
}

