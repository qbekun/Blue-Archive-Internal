#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Vector3; }

#define UNITYENGINE_AI_NAVMESHHIT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA1B2830)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshHit_TypeDefinitionIndex = 37498;

	class NavMeshHit : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* m_Position; // 0x10
		::UnityEngine::Vector3* m_Normal; // 0x1C
		::System::Single m_Distance; // 0x28
		::System::Int32 m_Mask; // 0x2C
		::System::Int32 m_Hit; // 0x30

		::UnityEngine::Vector3* get_position()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHHIT_GET_POSITION_OFFSET))(nullptr);
		}

	};
}

