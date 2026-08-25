#pragma once
#include "../../unitysdk.h"

namespace Spine { class TrackEntry; }
namespace Spine::Unity { class WaitForSpineAnimationEnd; }

#define SPINE_UNITY_WAITFORSPINEANIMATIONEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x9620020)
#define SPINE_UNITY_WAITFORSPINEANIMATIONEND_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x9620050)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineAnimationEnd_TypeDefinitionIndex = 35382;

	class WaitForSpineAnimationEnd : public Il2CppObject
	{
	public:
		::System::Void .ctor(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONEND_.CTOR_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::WaitForSpineAnimationEnd* NowWaitFor(::Spine::TrackEntry* arg)
		{
			return (return (::Spine::Unity::WaitForSpineAnimationEnd*(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATIONEND_NOWWAITFOR_OFFSET))(arg, nullptr);
		}

	};
}

