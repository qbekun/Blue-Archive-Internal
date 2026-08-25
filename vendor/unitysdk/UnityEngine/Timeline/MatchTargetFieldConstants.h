#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class MatchTargetFields; }

#define UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA18B670)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int MatchTargetFieldConstants_TypeDefinitionIndex = 36251;

	class MatchTargetFieldConstants : public Il2CppObject
	{
	public:
		::UnityEngine::Timeline::MatchTargetFields* All; // 0x0
		::UnityEngine::Timeline::MatchTargetFields* None; // 0x4
		::UnityEngine::Timeline::MatchTargetFields* Position; // 0x8
		::UnityEngine::Timeline::MatchTargetFields* Rotation; // 0xC

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_MATCHTARGETFIELDCONSTANTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

