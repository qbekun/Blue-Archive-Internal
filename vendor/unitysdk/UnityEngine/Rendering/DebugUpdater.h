#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Rendering { class DebugUpdater; }
namespace UnityEngine { class ScreenOrientation; }

#define UNITYENGINE_RENDERING_DEBUGUPDATER_ENABLERUNTIME_OFFSET UNITYSDK_OFFSET(0x9FB4110)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_RUNTIMEINIT_OFFSET UNITYSDK_OFFSET(0x9FB42A0)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9FB42B0)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_ENSUREEXACTLYONEEVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x9FB4570)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_CREATEDEBUGEVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x9FB4910)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_HANDLEINTERNALEVENTSYSTEMCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x9FB4460)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_REFRESHRUNTIMEUINEXTFRAME_OFFSET UNITYSDK_OFFSET(0x9FB4510)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9FB4AD0)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_CHECKINPUTMODULEEXISTS_OFFSET UNITYSDK_OFFSET(0x9FB4AE0)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_SETENABLED_OFFSET UNITYSDK_OFFSET(0x9FB4BF0)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_DESTROYDEBUGEVENTSYSTEM_OFFSET UNITYSDK_OFFSET(0x9FB4770)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_DISABLERUNTIME_OFFSET UNITYSDK_OFFSET(0x9FB4C00)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_DOAFTERINPUTMODULEUPDATED_OFFSET UNITYSDK_OFFSET(0x9FB4A40)
#define UNITYENGINE_RENDERING_DEBUGUPDATER_ASSIGNDEFAULTACTIONS_OFFSET UNITYSDK_OFFSET(0x9FB4D80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUpdater_TypeDefinitionIndex = 33979;

	class DebugUpdater : public Il2CppObject
	{
	public:
		::UnityEngine::Rendering::DebugUpdater* s_Instance; // 0x0
		::UnityEngine::ScreenOrientation* m_Orientation; // 0x18
		::System::Boolean m_RuntimeUiWasVisibleLastFrame; // 0x1C

		::System::Void EnableRuntime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_ENABLERUNTIME_OFFSET))(nullptr);
		}

		::System::Void RuntimeInit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_RUNTIMEINIT_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void EnsureExactlyOneEventSystem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_ENSUREEXACTLYONEEVENTSYSTEM_OFFSET))(nullptr);
		}

		::System::Void CreateDebugEventSystem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_CREATEDEBUGEVENTSYSTEM_OFFSET))(nullptr);
		}

		::System::Void HandleInternalEventSystemComponents(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_HANDLEINTERNALEVENTSYSTEMCOMPONENTS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* RefreshRuntimeUINextFrame()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_REFRESHRUNTIMEUINEXTFRAME_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void CheckInputModuleExists()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_CHECKINPUTMODULEEXISTS_OFFSET))(nullptr);
		}

		::System::Void SetEnabled(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_SETENABLED_OFFSET))(arg, nullptr);
		}

		::System::Void DestroyDebugEventSystem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_DESTROYDEBUGEVENTSYSTEM_OFFSET))(nullptr);
		}

		::System::Void DisableRuntime()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_DISABLERUNTIME_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* DoAfterInputModuleUpdated(::System::Action* arg)
		{
			return (return (::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_DOAFTERINPUTMODULEUPDATED_OFFSET))(arg, nullptr);
		}

		::System::Void AssignDefaultActions()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUPDATER_ASSIGNDEFAULTACTIONS_OFFSET))(nullptr);
		}

	};
}

