#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine::AI { class NavMeshLinkInstance; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine::AI { class NavMeshLink; }

#define UNITYENGINE_AI_NAVMESHLINK_GET_BIDIRECTIONAL_OFFSET UNITYSDK_OFFSET(0x9445210)
#define UNITYENGINE_AI_NAVMESHLINK_ADDLINK_OFFSET UNITYSDK_OFFSET(0x9445220)
#define UNITYENGINE_AI_NAVMESHLINK_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x9445450)
#define UNITYENGINE_AI_NAVMESHLINK_REMOVETRACKING_OFFSET UNITYSDK_OFFSET(0x9445470)
#define UNITYENGINE_AI_NAVMESHLINK_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x9445630)
#define UNITYENGINE_AI_NAVMESHLINK_SETAUTOUPDATE_OFFSET UNITYSDK_OFFSET(0x9445650)
#define UNITYENGINE_AI_NAVMESHLINK_SET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x9445920)
#define UNITYENGINE_AI_NAVMESHLINK_GET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x9445970)
#define UNITYENGINE_AI_NAVMESHLINK_GET_AUTOUPDATE_OFFSET UNITYSDK_OFFSET(0x9445980)
#define UNITYENGINE_AI_NAVMESHLINK_SET_AREA_OFFSET UNITYSDK_OFFSET(0x9445990)
#define UNITYENGINE_AI_NAVMESHLINK_ADDTRACKING_OFFSET UNITYSDK_OFFSET(0x94456D0)
#define UNITYENGINE_AI_NAVMESHLINK_SET_COSTMODIFIER_OFFSET UNITYSDK_OFFSET(0x94459C0)
#define UNITYENGINE_AI_NAVMESHLINK_SET_AUTOUPDATE_OFFSET UNITYSDK_OFFSET(0x94459F0)
#define UNITYENGINE_AI_NAVMESHLINK_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x9445A70)
#define UNITYENGINE_AI_NAVMESHLINK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9445AA0)
#define UNITYENGINE_AI_NAVMESHLINK_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9445B50)
#define UNITYENGINE_AI_NAVMESHLINK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9445BE0)
#define UNITYENGINE_AI_NAVMESHLINK_GET_COSTMODIFIER_OFFSET UNITYSDK_OFFSET(0x9445C40)
#define UNITYENGINE_AI_NAVMESHLINK_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x9445C50)
#define UNITYENGINE_AI_NAVMESHLINK_HASTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x9445C60)
#define UNITYENGINE_AI_NAVMESHLINK_UPDATETRACKEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x9445D60)
#define UNITYENGINE_AI_NAVMESHLINK_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x9445F20)
#define UNITYENGINE_AI_NAVMESHLINK_SET_BIDIRECTIONAL_OFFSET UNITYSDK_OFFSET(0x9445F50)
#define UNITYENGINE_AI_NAVMESHLINK_SET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x9445F80)
#define UNITYENGINE_AI_NAVMESHLINK_UPDATELINK_OFFSET UNITYSDK_OFFSET(0x9445950)
#define UNITYENGINE_AI_NAVMESHLINK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9445FB0)
#define UNITYENGINE_AI_NAVMESHLINK_GET_AREA_OFFSET UNITYSDK_OFFSET(0x9446020)
#define UNITYENGINE_AI_NAVMESHLINK_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9446030)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshLink_TypeDefinitionIndex = 37900;

	class NavMeshLink : public Il2CppObject
	{
	public:
		::System::Int32 m_AgentTypeID; // 0x18
		::UnityEngine::Vector3* m_StartPoint; // 0x1C
		::UnityEngine::Vector3* m_EndPoint; // 0x28
		::System::Single m_Width; // 0x34
		::System::Int32 m_CostModifier; // 0x38
		::System::Boolean m_Bidirectional; // 0x3C
		::System::Boolean m_AutoUpdatePosition; // 0x3D
		::System::Int32 m_Area; // 0x40
		::UnityEngine::AI::NavMeshLinkInstance* m_LinkInstance; // 0x44
		::UnityEngine::Vector3* m_LastPosition; // 0x48
		::UnityEngine::Quaternion* m_LastRotation; // 0x54
		Il2CppObject* s_Tracked; // 0x0

		::System::Boolean get_bidirectional()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_BIDIRECTIONAL_OFFSET))(nullptr);
		}

		::System::Void AddLink()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ADDLINK_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_endPoint()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_ENDPOINT_OFFSET))(nullptr);
		}

		::System::Void RemoveTracking(::UnityEngine::AI::NavMeshLink* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshLink*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_REMOVETRACKING_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_startPoint()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_STARTPOINT_OFFSET))(nullptr);
		}

		::System::Void SetAutoUpdate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SETAUTOUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_startPoint(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_STARTPOINT_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_agentTypeID()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_AGENTTYPEID_OFFSET))(nullptr);
		}

		::System::Boolean get_autoUpdate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_AUTOUPDATE_OFFSET))(nullptr);
		}

		::System::Void set_area(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_AREA_OFFSET))(arg, nullptr);
		}

		::System::Void AddTracking(::UnityEngine::AI::NavMeshLink* arg)
		{
			((::System::Void(*)(::UnityEngine::AI::NavMeshLink*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ADDTRACKING_OFFSET))(arg, nullptr);
		}

		::System::Void set_costModifier(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_COSTMODIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void set_autoUpdate(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_AUTOUPDATE_OFFSET))(arg, nullptr);
		}

		::System::Void set_width(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_costModifier()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_COSTMODIFIER_OFFSET))(nullptr);
		}

		::System::Single get_width()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_WIDTH_OFFSET))(nullptr);
		}

		::System::Boolean HasTransformChanged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_HASTRANSFORMCHANGED_OFFSET))(nullptr);
		}

		::System::Void UpdateTrackedInstances()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_UPDATETRACKEDINSTANCES_OFFSET))(nullptr);
		}

		::System::Void set_agentTypeID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_AGENTTYPEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_bidirectional(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_BIDIRECTIONAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_endPoint(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_ENDPOINT_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateLink()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_UPDATELINK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ONENABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_area()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_AREA_OFFSET))(nullptr);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(nullptr);
		}

	};
}

