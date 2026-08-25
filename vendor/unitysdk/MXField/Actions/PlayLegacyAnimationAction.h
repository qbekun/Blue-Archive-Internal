#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define MXFIELD_ACTIONS_PLAYLEGACYANIMATIONACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF2710)
#define MXFIELD_ACTIONS_PLAYLEGACYANIMATIONACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF27A0)

namespace MXField::Actions
{
	inline static constexpr unsigned int PlayLegacyAnimationAction_TypeDefinitionIndex = 11105;

	class PlayLegacyAnimationAction : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* animation; // 0x40
		::UnityEngine::AnimationClip* clip; // 0x48
		::System::Boolean waitForAnimationEnd; // 0x50

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYLEGACYANIMATIONACTION_COEXECUTE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYLEGACYANIMATIONACTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

