#pragma once
#include "../../unitysdk.h"

namespace Spine { class TrackEntry; }
namespace Spine::Unity { class WaitForSpineAnimationComplete; }

#define SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE_.CTOR_OFFSET UNITYSDK_OFFSET(0x961FF70)
#define SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x961FFD0)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineAnimationComplete_TypeDefinitionIndex = 35381;

	class WaitForSpineAnimationComplete : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Spine::TrackEntry* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::Spine::Unity::WaitForSpineAnimationComplete* NowWaitFor(::Spine::TrackEntry* arg, ::System::Boolean arg)
		{
			return (return (::Spine::Unity::WaitForSpineAnimationComplete*(*)(::Spine::TrackEntry*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONCOMPLETE_NOWWAITFOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

