#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0xA1B2D80)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0xA1B2D90)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_COSTMODIFIER_OFFSET UNITYSDK_OFFSET(0xA1B2DA0)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_BIDIRECTIONAL_OFFSET UNITYSDK_OFFSET(0xA1B2DB0)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0xA1B2DD0)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_AREA_OFFSET UNITYSDK_OFFSET(0xA1B2DE0)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0xA1B2DF0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshLinkData_TypeDefinitionIndex = 37501;

	class NavMeshLinkData : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_StartPosition; // 0x10
		::UnityEngine::Vector3* m_EndPosition; // 0x1C
		::System::Single m_CostModifier; // 0x28
		::System::Int32 m_Bidirectional; // 0x2C
		::System::Single m_Width; // 0x30
		::System::Int32 m_Area; // 0x34
		::System::Int32 m_AgentTypeID; // 0x38

		::System::Void set_startPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_STARTPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_endPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_ENDPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void set_costModifier(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_COSTMODIFIER_OFFSET))(arg, nullptr);
		}

		::System::Void set_bidirectional(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_BIDIRECTIONAL_OFFSET))(arg, nullptr);
		}

		::System::Void set_width(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_WIDTH_OFFSET))(arg, nullptr);
		}

		::System::Void set_area(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_AREA_OFFSET))(arg, nullptr);
		}

		::System::Void set_agentTypeID(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_AGENTTYPEID_OFFSET))(arg, nullptr);
		}

	};
}

