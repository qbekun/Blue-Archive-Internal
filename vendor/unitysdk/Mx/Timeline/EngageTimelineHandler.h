#pragma once
#include "../../unitysdk.h"

namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }
namespace Mx::Timeline { class TimelineHandleMessage; }

#define MX_TIMELINE_ENGAGETIMELINEHANDLER_ONTIMELINESKIPPED_OFFSET UNITYSDK_OFFSET(0xE21B20)
#define MX_TIMELINE_ENGAGETIMELINEHANDLER_PLAYTIMELINEINTERNAL_OFFSET UNITYSDK_OFFSET(0xE21BC0)
#define MX_TIMELINE_ENGAGETIMELINEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE21C70)
#define MX_TIMELINE_ENGAGETIMELINEHANDLER_ONSTOPPED_OFFSET UNITYSDK_OFFSET(0xE21CB0)
#define MX_TIMELINE_ENGAGETIMELINEHANDLER__PLAYTIMELINEINTERNAL_G__DOBATTLESTARTACTION|0_0_OFFSET UNITYSDK_OFFSET(0xE21D80)

namespace Mx::Timeline
{
	inline static constexpr unsigned int EngageTimelineHandler_TypeDefinitionIndex = 10366;

	class EngageTimelineHandler : public ::UnityEngine::InputSystem::Pen
	{
	public:
		::System::Boolean OnTimelineSkipped(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ENGAGETIMELINEHANDLER_ONTIMELINESKIPPED_OFFSET))(arg, nullptr);
		}

		::System::Void PlayTimelineInternal(::Mx::Timeline::TimelineHandleMessage* arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::Mx::Timeline::TimelineHandleMessage*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ENGAGETIMELINEHANDLER_PLAYTIMELINEINTERNAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ENGAGETIMELINEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnStopped()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ENGAGETIMELINEHANDLER_ONSTOPPED_OFFSET))(nullptr);
		}

		::System::Void _PlayTimelineInternal_g__DoBattleStartAction|0_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_ENGAGETIMELINEHANDLER__PLAYTIMELINEINTERNAL_G__DOBATTLESTARTACTION|0_0_OFFSET))(nullptr);
		}

	};
}

