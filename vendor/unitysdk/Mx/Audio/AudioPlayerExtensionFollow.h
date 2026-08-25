#pragma once
#include "../../unitysdk.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace MX::Audio { class AudioSourceObject; }

#define MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOW_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1D49880)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOW_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1D49C80)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOW_ONREGISTER_OFFSET UNITYSDK_OFFSET(0x1D49C90)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOW_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D49D30)
#define MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOW_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1D49D80)

namespace MX::Audio
{
	inline static constexpr unsigned int AudioPlayerExtensionFollow_TypeDefinitionIndex = 20163;

	class AudioPlayerExtensionFollow : public DebuggerProxy
	{
	public:
		::UnityEngine::Transform* target; // 0x20
		::UnityEngine::Vector3* worldspaceOffset; // 0x28

		::System::Void SetPosition()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOW_SETPOSITION_OFFSET))(nullptr);
		}

		::System::Void SetTarget(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOW_SETTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void OnRegister(::MX::Audio::AudioSourceObject* arg)
		{
			((::System::Void(*)(::MX::Audio::AudioSourceObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOW_ONREGISTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOW_.CTOR_OFFSET))(nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_AUDIO_AUDIOPLAYEREXTENSIONFOLLOW_LATEUPDATE_OFFSET))(nullptr);
		}

	};
}

