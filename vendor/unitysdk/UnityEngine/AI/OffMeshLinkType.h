#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::AI { class OffMeshLinkType; }

namespace UnityEngine::AI
{
	inline static constexpr unsigned int OffMeshLinkType_TypeDefinitionIndex = 37496;

	class OffMeshLinkType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::UnityEngine::AI::OffMeshLinkType* LinkTypeManual; // 0x0
		::UnityEngine::AI::OffMeshLinkType* LinkTypeDropDown; // 0x0
		::UnityEngine::AI::OffMeshLinkType* LinkTypeJumpAcross; // 0x0

	};
}

