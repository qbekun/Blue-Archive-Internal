#pragma once
#include "../../unitysdk.h"

namespace Mx::Timeline { class TimelineHandleMessage; }
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define MX_TIMELINE_VICTORYTIMELINEHANDLER_PLAYTIMELINEINTERNAL_OFFSET UNITYSDK_OFFSET(0xE24CD0)
#define MX_TIMELINE_VICTORYTIMELINEHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE24DF0)
#define MX_TIMELINE_VICTORYTIMELINEHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0xE24FA0)
#define MX_TIMELINE_VICTORYTIMELINEHANDLER_ONTIMELINESKIPPED_OFFSET UNITYSDK_OFFSET(0xE25030)

namespace Mx::Timeline
{
	inline static constexpr unsigned int VictoryTimelineHandler_TypeDefinitionIndex = 10379;

	class VictoryTimelineHandler : public ::UnityEngine::InputSystem::Pointer
	{
	public:
		Il2CppObject* resources; // 0x38

		::System::Void PlayTimelineInternal(::Mx::Timeline::TimelineHandleMessage* arg, ::System::Action* arg2, ::System::Boolean arg3)
		{
			((::System::Void(*)(::Mx::Timeline::TimelineHandleMessage*, ::System::Action*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_VICTORYTIMELINEHANDLER_PLAYTIMELINEINTERNAL_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void OnDestroy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_VICTORYTIMELINEHANDLER_ONDESTROY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_VICTORYTIMELINEHANDLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean OnTimelineSkipped(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + MX_TIMELINE_VICTORYTIMELINEHANDLER_ONTIMELINESKIPPED_OFFSET))(arg, nullptr);
		}

	};
}

