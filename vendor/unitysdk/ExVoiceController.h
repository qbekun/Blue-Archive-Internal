#pragma once
#include "unitysdk.h"

namespace MX::Audio { class AudioSourceData; }
namespace UnityEngine::Playables { class Playable; }
namespace UnityEngine::Playables { class FrameData; }

#define EXVOICECONTROLLER_GET_AUDIODATA_OFFSET UNITYSDK_OFFSET(0x204D990)
#define EXVOICECONTROLLER_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x204D9A0)
#define EXVOICECONTROLLER_GET_PLAYACTION_OFFSET UNITYSDK_OFFSET(0x204D9C0)
#define EXVOICECONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x204D9D0)
#define EXVOICECONTROLLER_SET_AUDIODATA_OFFSET UNITYSDK_OFFSET(0x204D9E0)
#define EXVOICECONTROLLER_SET_PLAYACTION_OFFSET UNITYSDK_OFFSET(0x204D9F0)

	inline static constexpr unsigned int ExVoiceController_TypeDefinitionIndex = 3301;

	class ExVoiceController : public Il2CppObject
	{
	public:
		::MX::Audio::AudioSourceData* _AudioData_k__BackingField; // 0x10
		::System::Action* _PlayAction_k__BackingField; // 0x18

		::MX::Audio::AudioSourceData* get_AudioData()
		{
			return ((::MX::Audio::AudioSourceData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXVOICECONTROLLER_GET_AUDIODATA_OFFSET))(nullptr);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable* arg, ::UnityEngine::Playables::FrameData* arg2)
		{
			((::System::Void(*)(::UnityEngine::Playables::Playable*, ::UnityEngine::Playables::FrameData*, ::PVOID))((::PBYTE)hIl2Cpp + EXVOICECONTROLLER_ONBEHAVIOURPLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Action* get_PlayAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + EXVOICECONTROLLER_GET_PLAYACTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EXVOICECONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_AudioData(::MX::Audio::AudioSourceData* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceData*, ::PVOID))((::PBYTE)hIl2Cpp + EXVOICECONTROLLER_SET_AUDIODATA_OFFSET))(arg, nullptr);
		}

		::System::Void set_PlayAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + EXVOICECONTROLLER_SET_PLAYACTION_OFFSET))(arg, nullptr);
		}

	};

