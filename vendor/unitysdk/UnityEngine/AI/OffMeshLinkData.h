#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class OffMeshLinkType; }
namespace UnityEngine { class Vector3; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int OffMeshLinkData_TypeDefinitionIndex = 37497;

	class OffMeshLinkData : public Il2CppObject
	{
	public:
		::System::Int32 m_Valid; // 0x10
		::System::Int32 m_Activated; // 0x14
		::System::Int32 m_InstanceID; // 0x18
		::UnityEngine::AI::OffMeshLinkType* m_LinkType; // 0x1C
		::UnityEngine::Vector3* m_StartPos; // 0x20
		::UnityEngine::Vector3* m_EndPos; // 0x2C

	};
}

