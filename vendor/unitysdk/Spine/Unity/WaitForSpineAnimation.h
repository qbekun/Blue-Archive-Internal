#pragma once
#include "../../unitysdk.h"

namespace Spine { class TrackEntry; }
namespace Spine::Unity { class WaitForSpineAnimation; }

#define SPINE_UNITY_WAITFORSPINEANIMATION_HANDLECOMPLETE_OFFSET UNITYSDK_OFFSET(0x961FC70)
#define SPINE_UNITY_WAITFORSPINEANIMATION_SAFESUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x961FC80)
#define SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x961FE60)
#define SPINE_UNITY_WAITFORSPINEANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x961FE70)
#define SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x961FEA0)
#define SPINE_UNITY_WAITFORSPINEANIMATION_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x961FEB0)
#define SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x961FED0)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineAnimation_TypeDefinitionIndex = 35380;

	class WaitForSpineAnimation : public Il2CppObject
	{
	public:
		::System::Boolean m_WasFired; // 0x10

		::System::Void HandleComplete(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_HANDLECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Void SafeSubscribe(::Spine::TrackEntry* arg, AnimationEventTypes* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, AnimationEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_SAFESUBSCRIBE_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Spine::TrackEntry* arg, AnimationEventTypes* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, AnimationEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::Spine::Unity::WaitForSpineAnimation* NowWaitFor(::Spine::TrackEntry* arg, AnimationEventTypes* arg)
		{
			return (return (::Spine::Unity::WaitForSpineAnimation*(*)(::Spine::TrackEntry*, AnimationEventTypes*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_NOWWAITFOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINEANIMATION_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

	};
}

