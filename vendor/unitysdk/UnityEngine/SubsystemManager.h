#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class IntegratedSubsystem; }

#define UNITYENGINE_SUBSYSTEMMANAGER_RELOADSUBSYSTEMSSTARTED_OFFSET UNITYSDK_OFFSET(0xA2A6A00)
#define UNITYENGINE_SUBSYSTEMMANAGER_RELOADSUBSYSTEMSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA2A6B50)
#define UNITYENGINE_SUBSYSTEMMANAGER_INITIALIZEINTEGRATEDSUBSYSTEM_OFFSET UNITYSDK_OFFSET(0xA2A6CA0)
#define UNITYENGINE_SUBSYSTEMMANAGER_CLEARSUBSYSTEMS_OFFSET UNITYSDK_OFFSET(0xA2A6DB0)
#define UNITYENGINE_SUBSYSTEMMANAGER_STATICCONSTRUCTSCRIPTINGCLASSMAP_OFFSET UNITYSDK_OFFSET(0xA2A7040)
#define UNITYENGINE_SUBSYSTEMMANAGER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2A7080)
#define UNITYENGINE_SUBSYSTEMMANAGER_GETSUBSYSTEMS_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_SUBSYSTEMMANAGER_ADDSUBSYSTEMSUBSET_OFFSET UNITYSDK_OFFSET(0x000000)
#define UNITYENGINE_SUBSYSTEMMANAGER_GETINTEGRATEDSUBSYSTEMBYPTR_OFFSET UNITYSDK_OFFSET(0xA2A7200)
#define UNITYENGINE_SUBSYSTEMMANAGER_GETINSTANCES_OFFSET UNITYSDK_OFFSET(0x000000)

namespace UnityEngine
{
	inline static constexpr unsigned int SubsystemManager_TypeDefinitionIndex = 37954;

	class SubsystemManager : public Il2CppObject
	{
	public:
		::System::Action* beforeReloadSubsystems; // 0x0
		::System::Action* afterReloadSubsystems; // 0x8
		Il2CppObject* s_IntegratedSubsystems; // 0x10
		Il2CppObject* s_StandaloneSubsystems; // 0x18
		Il2CppObject* s_DeprecatedSubsystems; // 0x20
		::System::Action* reloadSubsytemsStarted; // 0x28
		::System::Action* reloadSubsytemsCompleted; // 0x30

		::System::Void ReloadSubsystemsStarted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_RELOADSUBSYSTEMSSTARTED_OFFSET))(nullptr);
		}

		::System::Void ReloadSubsystemsCompleted()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_RELOADSUBSYSTEMSCOMPLETED_OFFSET))(nullptr);
		}

		::System::Void InitializeIntegratedSubsystem(::System::Int32 arg, ::UnityEngine::IntegratedSubsystem* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::IntegratedSubsystem*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_INITIALIZEINTEGRATEDSUBSYSTEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearSubsystems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_CLEARSUBSYSTEMS_OFFSET))(nullptr);
		}

		::System::Void StaticConstructScriptingClassMap()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_STATICCONSTRUCTSCRIPTINGCLASSMAP_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void GetSubsystems(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_GETSUBSYSTEMS_OFFSET))(arg, nullptr);
		}

		::System::Void AddSubsystemSubset(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_ADDSUBSYSTEMSUBSET_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::IntegratedSubsystem* GetIntegratedSubsystemByPtr(::System::Int32 arg)
		{
			return (return (::UnityEngine::IntegratedSubsystem*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_GETINTEGRATEDSUBSYSTEMBYPTR_OFFSET))(arg, nullptr);
		}

		::System::Void GetInstances(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_GETINSTANCES_OFFSET))(arg, nullptr);
		}

	};
}

