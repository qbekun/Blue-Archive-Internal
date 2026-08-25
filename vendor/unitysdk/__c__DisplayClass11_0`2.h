#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }

#define <>C__DISPLAYCLASS11_0`2_.CTOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS11_0`2__QUEUETOTIMELINEHANDLER_G__ONPLAY|0_OFFSET UNITYSDK_OFFSET(0x000000)
#define <>C__DISPLAYCLASS11_0`2__QUEUETOTIMELINEHANDLER_G__ONSTOP|1_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int <>c__DisplayClass11_0`2_TypeDefinitionIndex = 3606;

	class <>c__DisplayClass11_0`2 : public Il2CppObject
	{
	public:
		Il2CppObject* infos; // 0x0
		Il2CppObject* timelineInstanceList; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS11_0`2_.CTOR_OFFSET))(nullptr);
		}

		::System::Void _QueueToTimelineHandler_g__OnPlay|0(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS11_0`2__QUEUETOTIMELINEHANDLER_G__ONPLAY|0_OFFSET))(arg, nullptr);
		}

		::System::Void _QueueToTimelineHandler_g__OnStop|1(::UnityEngine::Playables::PlayableDirector* arg)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS11_0`2__QUEUETOTIMELINEHANDLER_G__ONSTOP|1_OFFSET))(arg, nullptr);
		}

	};

