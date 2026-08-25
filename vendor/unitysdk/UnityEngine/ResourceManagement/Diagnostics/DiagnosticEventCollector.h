#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine::ResourceManagement::Diagnostics { class DiagnosticEventCollector; }
namespace UnityEngine::ResourceManagement::Diagnostics { class DiagnosticEvent; }

#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0F0AB0)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_POSTEVENT_OFFSET UNITYSDK_OFFSET(0xA0F0AC0)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_REGISTEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA0F0B30)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_UNREGISTEREVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xA0F0B40)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_GET_PLAYERCONNECTIONGUID_OFFSET UNITYSDK_OFFSET(0xA0F0B90)
#define UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_FINDORCREATEGLOBALINSTANCE_OFFSET UNITYSDK_OFFSET(0xA0F0BB0)

namespace UnityEngine::ResourceManagement::Diagnostics
{
	inline static constexpr unsigned int DiagnosticEventCollector_TypeDefinitionIndex = 36425;

	class DiagnosticEventCollector : public Il2CppObject
	{
	public:
		::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* s_Collector; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PostEvent(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent* arg)
		{
			((::System::Void(*)(::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_POSTEVENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean RegisterEventHandler(Il2CppObject* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_REGISTEREVENTHANDLER_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void UnregisterEventHandler(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_UNREGISTEREVENTHANDLER_OFFSET))(arg, nullptr);
		}

		::System::Guid* get_PlayerConnectionGuid()
		{
			return (return (::System::Guid*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_GET_PLAYERCONNECTIONGUID_OFFSET))(nullptr);
		}

		::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector* FindOrCreateGlobalInstance()
		{
			return (return (::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEventCollector*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCEMANAGEMENT_DIAGNOSTICS_DIAGNOSTICEVENTCOLLECTOR_FINDORCREATEGLOBALINSTANCE_OFFSET))(nullptr);
		}

	};
}

