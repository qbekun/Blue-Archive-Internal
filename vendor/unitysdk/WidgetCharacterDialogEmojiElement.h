#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
class UIPanel;
namespace MX::Data { class CharacterDialogEmojiInfo; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace MX::Audio { class SimpleVoicePlayer; }
class WidgetCharacterDialogEmojiElementAudioSetting;
class CoroutineCancellationToken;

#define WIDGETCHARACTERDIALOGEMOJIELEMENT_SETAUDIOSETTING_OFFSET UNITYSDK_OFFSET(0xC272C0)
#define WIDGETCHARACTERDIALOGEMOJIELEMENT_SETPANELDEPTH_OFFSET UNITYSDK_OFFSET(0xC25780)
#define WIDGETCHARACTERDIALOGEMOJIELEMENT_CO_PLAY_OFFSET UNITYSDK_OFFSET(0xC27860)
#define WIDGETCHARACTERDIALOGEMOJIELEMENT_SETDATA_OFFSET UNITYSDK_OFFSET(0xC27B10)
#define WIDGETCHARACTERDIALOGEMOJIELEMENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC27F70)
#define WIDGETCHARACTERDIALOGEMOJIELEMENT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xC27C10)
#define WIDGETCHARACTERDIALOGEMOJIELEMENT_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xC27F80)
#define WIDGETCHARACTERDIALOGEMOJIELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xC27F90)
#define WIDGETCHARACTERDIALOGEMOJIELEMENT_SET_TARGET_OFFSET UNITYSDK_OFFSET(0xC27FF0)
#define WIDGETCHARACTERDIALOGEMOJIELEMENT_GET_ISDIALOG_OFFSET UNITYSDK_OFFSET(0xC24B30)
#define WIDGETCHARACTERDIALOGEMOJIELEMENT_AWAKE_OFFSET UNITYSDK_OFFSET(0xC28000)

	inline static constexpr unsigned int WidgetCharacterDialogEmojiElement_TypeDefinitionIndex = 8900;

	class WidgetCharacterDialogEmojiElement : public Il2CppObject
	{
	public:
		::System::String* Type; // 0x18
		::UnityEngine::Animation* openAnimation; // 0x20
		::System::Boolean skipReverseAnimation; // 0x28
		UIPanel* panel; // 0x30
		::MX::Data::CharacterDialogEmojiInfo* info; // 0x38
		::UnityEngine::Transform* _Target_k__BackingField; // 0x40
		::UnityEngine::Vector3* worldPositionOffset; // 0x48
		::MX::Audio::SimpleVoicePlayer* voicePlayer; // 0x58
		::UnityEngine::Vector3* dampSmoothTime; // 0x60
		::UnityEngine::Vector3* dampVelocity; // 0x6C

		::System::Void SetAudioSetting(WidgetCharacterDialogEmojiElementAudioSetting* arg)
		{
			((::System::Void(*)(WidgetCharacterDialogEmojiElementAudioSetting*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_SETAUDIOSETTING_OFFSET))(arg, nullptr);
		}

		::System::Void SetPanelDepth(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_SETPANELDEPTH_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_Play(::System::Boolean arg, CoroutineCancellationToken* arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, CoroutineCancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_CO_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetData(::MX::Data::CharacterDialogEmojiInfo* arg, ::UnityEngine::Transform* arg2, ::UnityEngine::Vector3* arg3, ::MX::Audio::SimpleVoicePlayer* arg4, ::UnityEngine::Vector3* arg5)
		{
			((::System::Void(*)(::MX::Data::CharacterDialogEmojiInfo*, ::UnityEngine::Transform*, ::UnityEngine::Vector3*, ::MX::Audio::SimpleVoicePlayer*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_SETDATA_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::System::Void LateUpdate()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_LATEUPDATE_OFFSET))(nullptr);
		}

		::System::Void SetPosition(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_SETPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Transform* get_Target()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Target(::UnityEngine::Transform* arg)
		{
			((::System::Void(*)(::UnityEngine::Transform*, ::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_SET_TARGET_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_GET_ISDIALOG_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WIDGETCHARACTERDIALOGEMOJIELEMENT_AWAKE_OFFSET))(nullptr);
		}

	};

