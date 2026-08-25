#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine { class Object; }

#define UNITYENGINE_TIMELINE_TIMELINEUNDO_PUSHDESTROYUNDO_OFFSET UNITYSDK_OFFSET(0xA1AF390)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineUndo_TypeDefinitionIndex = 36340;

	class TimelineUndo : public Il2CppObject
	{
	public:
		::System::Void PushDestroyUndo(::UnityEngine::Timeline::TimelineAsset* arg, ::UnityEngine::Object* arg, ::UnityEngine::Object* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineAsset*, ::UnityEngine::Object*, ::UnityEngine::Object*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEUNDO_PUSHDESTROYUNDO_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

