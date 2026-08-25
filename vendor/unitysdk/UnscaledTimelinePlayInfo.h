#pragma once
#include "unitysdk.h"

namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Playables { class PlayableAsset; }

#define UNSCALEDTIMELINEPLAYINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0xB6E610)

	inline static constexpr unsigned int UnscaledTimelinePlayInfo_TypeDefinitionIndex = 8456;

	class UnscaledTimelinePlayInfo : public Il2CppObject
	{
	public:
		::System::Void .ctor(::UnityEngine::Playables::PlayableDirector* arg, ::UnityEngine::Playables::PlayableAsset* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5, ::System::Action* arg6)
		{
			((::System::Void(*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Playables::PlayableAsset*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UNSCALEDTIMELINEPLAYINFO_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, arg6, nullptr);
		}

	};

