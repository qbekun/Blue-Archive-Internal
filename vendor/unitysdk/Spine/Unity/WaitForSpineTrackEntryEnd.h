#pragma once
#include "../../unitysdk.h"

namespace Spine { class TrackEntry; }
namespace Spine::Unity { class WaitForSpineTrackEntryEnd; }

#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_.CTOR_OFFSET UNITYSDK_OFFSET(0x9620880)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9620980)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_HANDLEEND_OFFSET UNITYSDK_OFFSET(0x9620A20)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x9620A30)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SAFESUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x96208B0)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_NOWWAITFOR_OFFSET UNITYSDK_OFFSET(0x9620A40)
#define SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9620A60)

namespace Spine::Unity
{
	inline static constexpr unsigned int WaitForSpineTrackEntryEnd_TypeDefinitionIndex = 35384;

	class WaitForSpineTrackEntryEnd : public Il2CppObject
	{
	public:
		::System::Boolean m_WasFired; // 0x10

		::System::Void .ctor(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.IEnumerator.MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM.COLLECTIONS.IENUMERATOR.MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void HandleEnd(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_HANDLEEND_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Void SafeSubscribe(::Spine::TrackEntry* arg)
		{
			((::System::Void(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SAFESUBSCRIBE_OFFSET))(arg, nullptr);
		}

		::Spine::Unity::WaitForSpineTrackEntryEnd* NowWaitFor(::Spine::TrackEntry* arg)
		{
			return (return (::Spine::Unity::WaitForSpineTrackEntryEnd*(*)(::Spine::TrackEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_NOWWAITFOR_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_WAITFORSPINETRACKENTRYEND_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};
}

