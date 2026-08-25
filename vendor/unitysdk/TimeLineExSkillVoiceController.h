#pragma once
#include "unitysdk.h"

class RecentlySkillCutInPlayInfo;
namespace MX::Audio { class AudioSourceData; }
namespace UnityEngine { class GameObject; }
class EntityVisual;
namespace UnityEngine { class Coroutine; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class PlayableGraph; }
namespace MX::Audio { class VoicePlayInfo; }

#define TIMELINEEXSKILLVOICECONTROLLER_PLAYBYVOICEPLAYER_OFFSET UNITYSDK_OFFSET(0x204CF90)
#define TIMELINEEXSKILLVOICECONTROLLER__PLAYBYSOUNDMANAGER_B__12_1_OFFSET UNITYSDK_OFFSET(0x204D390)
#define TIMELINEEXSKILLVOICECONTROLLER_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x204D3B0)
#define TIMELINEEXSKILLVOICECONTROLLER__PLAYBYSOUNDMANAGER_B__12_0_OFFSET UNITYSDK_OFFSET(0x204D6F0)
#define TIMELINEEXSKILLVOICECONTROLLER_GETVOICEEVENT_OFFSET UNITYSDK_OFFSET(0x204D5F0)
#define TIMELINEEXSKILLVOICECONTROLLER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x204D800)
#define TIMELINEEXSKILLVOICECONTROLLER_PLAYBYSOUNDMANAGER_OFFSET UNITYSDK_OFFSET(0x204D810)
#define TIMELINEEXSKILLVOICECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204D980)

	inline static constexpr unsigned int TimeLineExSkillVoiceController_TypeDefinitionIndex = 3303;

	class TimeLineExSkillVoiceController : public Il2CppObject
	{
	public:
		RecentlySkillCutInPlayInfo* RecentlyCutInInfo; // 0x0
		::System::Int32 formVoiceIndex; // 0x18
		::System::String* key; // 0x20
		::System::Boolean IsCutIn; // 0x28
		::MX::Audio::AudioSourceData* AudioData; // 0x30
		::UnityEngine::GameObject* owner; // 0x38
		EntityVisual* entityVisual; // 0x40
		Il2CppObject* voiceEvent; // 0x48
		::UnityEngine::Coroutine* cutinVoiceCoroutine; // 0x50

		::System::Void PlayByVoicePlayer()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLVOICECONTROLLER_PLAYBYVOICEPLAYER_OFFSET))(nullptr);
		}

		::System::Void _PlayBySoundManager_b__12_1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLVOICECONTROLLER__PLAYBYSOUNDMANAGER_B__12_1_OFFSET))(nullptr);
		}

		::UnityEngine::Playables::Playable* CreatePlayable(::UnityEngine::Playables::PlayableGraph* arg, ::UnityEngine::GameObject* arg2)
		{
			return ((::UnityEngine::Playables::Playable*(*)(::UnityEngine::Playables::PlayableGraph*, ::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLVOICECONTROLLER_CREATEPLAYABLE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void _PlayBySoundManager_b__12_0(::MX::Audio::VoicePlayInfo* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLVOICECONTROLLER__PLAYBYSOUNDMANAGER_B__12_0_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetVoiceEvent()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLVOICECONTROLLER_GETVOICEEVENT_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLVOICECONTROLLER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void PlayBySoundManager()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLVOICECONTROLLER_PLAYBYSOUNDMANAGER_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMELINEEXSKILLVOICECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

	};

