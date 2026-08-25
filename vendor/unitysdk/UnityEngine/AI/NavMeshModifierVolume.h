#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_.CTOR_OFFSET UNITYSDK_OFFSET(0x94464D0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x94465A0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x94465C0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x94465E0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x94465F0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_ACTIVEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x9446730)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9446780)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_AFFECTSAGENTTYPE_OFFSET UNITYSDK_OFFSET(0x9446820)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x94468C0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_AREA_OFFSET UNITYSDK_OFFSET(0x94468D0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94468E0)
#define UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_AREA_OFFSET UNITYSDK_OFFSET(0x9446970)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshModifierVolume_TypeDefinitionIndex = 37902;

	class NavMeshModifierVolume : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Size; // 0x18
		::UnityEngine::Vector3* m_Center; // 0x24
		::System::Int32 m_Area; // 0x30
		Il2CppObject* m_AffectedAgents; // 0x38
		Il2CppObject* s_NavMeshModifiers; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_.CTOR_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_size()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_SIZE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_center()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_CENTER_OFFSET))(nullptr);
		}

		::System::Void set_size(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_SIZE_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_ONENABLE_OFFSET))(nullptr);
		}

		Il2CppObject* get_activeModifiers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_ACTIVEMODIFIERS_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean AffectsAgentType(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_AFFECTSAGENTTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void set_center(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_CENTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_area(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_SET_AREA_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_.CCTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_area()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHMODIFIERVOLUME_GET_AREA_OFFSET))(nullptr);
		}

	};
}

