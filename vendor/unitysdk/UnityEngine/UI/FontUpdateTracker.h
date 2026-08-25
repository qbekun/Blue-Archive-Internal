#pragma once
#include "../../unitysdk.h"

namespace UnityEngine::UI { class Text; }
namespace UnityEngine { class Font; }

#define UNITYENGINE_UI_FONTUPDATETRACKER_TRACKTEXT_OFFSET UNITYSDK_OFFSET(0xA2F6FF0)
#define UNITYENGINE_UI_FONTUPDATETRACKER_UNTRACKTEXT_OFFSET UNITYSDK_OFFSET(0xA2F7250)
#define UNITYENGINE_UI_FONTUPDATETRACKER_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA2F7460)
#define UNITYENGINE_UI_FONTUPDATETRACKER_REBUILDFORFONT_OFFSET UNITYSDK_OFFSET(0xA2F74F0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int FontUpdateTracker_TypeDefinitionIndex = 34766;

	class FontUpdateTracker : public Il2CppObject
	{
	public:
		Il2CppObject* m_Tracked; // 0x0

		::System::Void TrackText(::UnityEngine::UI::Text* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Text*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTUPDATETRACKER_TRACKTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void UntrackText(::UnityEngine::UI::Text* arg)
		{
			((::System::Void(*)(::UnityEngine::UI::Text*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTUPDATETRACKER_UNTRACKTEXT_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTUPDATETRACKER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RebuildForFont(::UnityEngine::Font* arg)
		{
			((::System::Void(*)(::UnityEngine::Font*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_FONTUPDATETRACKER_REBUILDFORFONT_OFFSET))(arg, nullptr);
		}

	};
}

