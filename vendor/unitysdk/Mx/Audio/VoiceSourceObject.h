#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class VoicePlayInfo; }

#define MX_AUDIO_VOICESOURCEOBJECT_TURNDOWNVOLUME_OFFSET UNITYSDK_OFFSET(0x1D58BE0)
#define MX_AUDIO_VOICESOURCEOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x1D59320)
#define MX_AUDIO_VOICESOURCEOBJECT_SET_VOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D593E0)
#define MX_AUDIO_VOICESOURCEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D593F0)
#define MX_AUDIO_VOICESOURCEOBJECT_GET_VOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D59400)
#define MX_AUDIO_VOICESOURCEOBJECT_COPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D59410)
#define MX_AUDIO_VOICESOURCEOBJECT_UPDATEVOLUME_OFFSET UNITYSDK_OFFSET(0x1D594A0)
#define MX_AUDIO_VOICESOURCEOBJECT_SET_TURNEDDOWN_OFFSET UNITYSDK_OFFSET(0x1D59530)
#define MX_AUDIO_VOICESOURCEOBJECT_GET_TURNEDDOWN_OFFSET UNITYSDK_OFFSET(0x1D59540)
#define MX_AUDIO_VOICESOURCEOBJECT_GET_CANUSE_OFFSET UNITYSDK_OFFSET(0x1D59550)

namespace MX::Audio
{
	inline static constexpr unsigned int VoiceSourceObject_TypeDefinitionIndex = 20216;

	class VoiceSourceObject : public ::System::Runtime::CompilerServices::IsReadOnlyAttribute
	{
	public:
		::MX::Audio::VoicePlayInfo* _VoicePlayInfo_k__BackingField; // 0x40
		::System::Boolean _TurnedDown_k__BackingField; // 0x48

		::System::Void TurnDownVolume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICESOURCEOBJECT_TURNDOWNVOLUME_OFFSET))(nullptr);
		}

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICESOURCEOBJECT_RESET_OFFSET))(nullptr);
		}

		::System::Void set_VoicePlayInfo(::MX::Audio::VoicePlayInfo* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICESOURCEOBJECT_SET_VOICEPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICESOURCEOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::MX::Audio::VoicePlayInfo* get_VoicePlayInfo()
		{
			return (return (::MX::Audio::VoicePlayInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICESOURCEOBJECT_GET_VOICEPLAYINFO_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoProgress()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICESOURCEOBJECT_COPROGRESS_OFFSET))(nullptr);
		}

		::System::Void UpdateVolume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICESOURCEOBJECT_UPDATEVOLUME_OFFSET))(nullptr);
		}

		::System::Void set_TurnedDown(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICESOURCEOBJECT_SET_TURNEDDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TurnedDown()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICESOURCEOBJECT_GET_TURNEDDOWN_OFFSET))(nullptr);
		}

		::System::Boolean get_CanUse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_VOICESOURCEOBJECT_GET_CANUSE_OFFSET))(nullptr);
		}

	};
}

