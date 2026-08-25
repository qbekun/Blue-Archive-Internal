#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class VoicePlayInfoSimple; }

#define MX_AUDIO_SIMPLEVOICESOURCEOBJECT_RESET_OFFSET UNITYSDK_OFFSET(0x1D51EC0)
#define MX_AUDIO_SIMPLEVOICESOURCEOBJECT_COPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D51F20)
#define MX_AUDIO_SIMPLEVOICESOURCEOBJECT_GET_CANUSE_OFFSET UNITYSDK_OFFSET(0x1D51FB0)
#define MX_AUDIO_SIMPLEVOICESOURCEOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D51FE0)
#define MX_AUDIO_SIMPLEVOICESOURCEOBJECT_GET_VOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D51FF0)
#define MX_AUDIO_SIMPLEVOICESOURCEOBJECT_UPDATEVOLUME_OFFSET UNITYSDK_OFFSET(0x1D52000)
#define MX_AUDIO_SIMPLEVOICESOURCEOBJECT_SET_TURNEDDOWN_OFFSET UNITYSDK_OFFSET(0x1D52040)
#define MX_AUDIO_SIMPLEVOICESOURCEOBJECT_GET_TURNEDDOWN_OFFSET UNITYSDK_OFFSET(0x1D52050)
#define MX_AUDIO_SIMPLEVOICESOURCEOBJECT_SET_VOICEPLAYINFO_OFFSET UNITYSDK_OFFSET(0x1D52060)
#define MX_AUDIO_SIMPLEVOICESOURCEOBJECT_TURNDOWNVOLUME_OFFSET UNITYSDK_OFFSET(0x1D51780)

namespace MX::Audio
{
	inline static constexpr unsigned int SimpleVoiceSourceObject_TypeDefinitionIndex = 20194;

	class SimpleVoiceSourceObject : public ::System::Runtime::CompilerServices::IsReadOnlyAttribute
	{
	public:
		::MX::Audio::VoicePlayInfoSimple* _VoicePlayInfo_k__BackingField; // 0x40
		::System::Boolean _TurnedDown_k__BackingField; // 0x48

		::System::Void Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICESOURCEOBJECT_RESET_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoProgress()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICESOURCEOBJECT_COPROGRESS_OFFSET))(nullptr);
		}

		::System::Boolean get_CanUse()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICESOURCEOBJECT_GET_CANUSE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICESOURCEOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::MX::Audio::VoicePlayInfoSimple* get_VoicePlayInfo()
		{
			return (return (::MX::Audio::VoicePlayInfoSimple*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICESOURCEOBJECT_GET_VOICEPLAYINFO_OFFSET))(nullptr);
		}

		::System::Void UpdateVolume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICESOURCEOBJECT_UPDATEVOLUME_OFFSET))(nullptr);
		}

		::System::Void set_TurnedDown(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICESOURCEOBJECT_SET_TURNEDDOWN_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_TurnedDown()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICESOURCEOBJECT_GET_TURNEDDOWN_OFFSET))(nullptr);
		}

		::System::Void set_VoicePlayInfo(::MX::Audio::VoicePlayInfoSimple* arg)
		{
			((::System::Void(*)(::MX::Audio::VoicePlayInfoSimple*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICESOURCEOBJECT_SET_VOICEPLAYINFO_OFFSET))(arg, nullptr);
		}

		::System::Void TurnDownVolume()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_SIMPLEVOICESOURCEOBJECT_TURNDOWNVOLUME_OFFSET))(nullptr);
		}

	};
}

