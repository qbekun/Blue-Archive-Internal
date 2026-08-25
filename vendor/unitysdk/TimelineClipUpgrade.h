#pragma once
#include "unitysdk.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define TIMELINECLIPUPGRADE_UPGRADECLIPINFROMGLOBALTOLOCAL_OFFSET UNITYSDK_OFFSET(0xA192840)

	inline static constexpr unsigned int TimelineClipUpgrade_TypeDefinitionIndex = 36256;

	class TimelineClipUpgrade : public Il2CppObject
	{
	public:
		::System::Void UpgradeClipInFromGlobalToLocal(::UnityEngine::Timeline::TimelineClip* arg)
		{
			((::System::Void(*)(::UnityEngine::Timeline::TimelineClip*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINECLIPUPGRADE_UPGRADECLIPINFROMGLOBALTOLOCAL_OFFSET))(arg, nullptr);
		}

	};

