#pragma once
#include "../../unitysdk.h"

namespace MX::Audio { class AudioSourceData; }
namespace UnityEngine { class AudioSource; }

#define MXFIELD_ACTIONS_PLAYAUDIODATAACTION_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF1B90)
#define MXFIELD_ACTIONS_PLAYAUDIODATAACTION_COEXECUTE_OFFSET UNITYSDK_OFFSET(0xEF1BA0)

namespace MXField::Actions
{
	inline static constexpr unsigned int PlayAudioDataAction_TypeDefinitionIndex = 11100;

	class PlayAudioDataAction : public Il2CppObject
	{
	public:
		::MX::Audio::AudioSourceData* audioData; // 0x40
		::UnityEngine::AudioSource* audioSource; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYAUDIODATAACTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoExecute()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_ACTIONS_PLAYAUDIODATAACTION_COEXECUTE_OFFSET))(nullptr);
		}

	};
}

