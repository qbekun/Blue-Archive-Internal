#pragma once
#include "unitysdk.h"

namespace MX::Audio { class AnimationAudioEvent; }
class EnableGroup;
class SpringFloat;
namespace UnityEngine { class Animator; }
class UISlider;
class UIWidget;
class UserInteractionProgressClip;
namespace Assets::_MX::Program::Scripts::Network { class BaseMessage; }

#define UIUSERINTERACTIONPROGRESS_UPDATE_OFFSET UNITYSDK_OFFSET(0xB84990)
#define UIUSERINTERACTIONPROGRESS_ONBACK_OFFSET UNITYSDK_OFFSET(0xB84AA0)
#define UIUSERINTERACTIONPROGRESS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB84B30)
#define UIUSERINTERACTIONPROGRESS_HANDLEUIUSERINTERACTIONPROGRESSMESSAGE_OFFSET UNITYSDK_OFFSET(0xB84CB0)
#define UIUSERINTERACTIONPROGRESS_.CTOR_OFFSET UNITYSDK_OFFSET(0xB85640)
#define UIUSERINTERACTIONPROGRESS_SETUSERINTERACTIONPROGRESS_OFFSET UNITYSDK_OFFSET(0xB85700)
#define UIUSERINTERACTIONPROGRESS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB857F0)

	inline static constexpr unsigned int UIUserInteractionProgress_TypeDefinitionIndex = 8537;

	class UIUserInteractionProgress : public Il2CppObject
	{
	public:
		::System::Int32 HASH_SUCCESS; // 0xD8
		::MX::Audio::AnimationAudioEvent* SoundOpen; // 0xE0
		::MX::Audio::AnimationAudioEvent* SoundSuccess; // 0xE8
		::Il2CppArray<::System::Object*>* SoundTouch; // 0xF0
		::System::Single touchEffectAndSoundInterval; // 0xF8
		::Il2CppArray<::System::Object*>* SoundPhase; // 0x100
		EnableGroup* EnableOnTouch; // 0x108
		::Il2CppArray<::System::Object*>* EnableOnPhaseReached; // 0x110
		SpringFloat* springValue; // 0x118
		::UnityEngine::Animator* Animator; // 0x120
		UISlider* Slider; // 0x128
		UIWidget* BoxArea; // 0x130
		UserInteractionProgressClip* progressClip; // 0x138
		Il2CppObject* knownClips; // 0x140
		::System::Single lastTouchEffectAndSoundTime; // 0x148

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONPROGRESS_UPDATE_OFFSET))(nullptr);
		}

		::System::Void OnBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONPROGRESS_ONBACK_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONPROGRESS_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Boolean HandleUIUserInteractionProgressMessage(::Assets::_MX::Program::Scripts::Network::BaseMessage* arg)
		{
			return ((::System::Boolean(*)(::Assets::_MX::Program::Scripts::Network::BaseMessage*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONPROGRESS_HANDLEUIUSERINTERACTIONPROGRESSMESSAGE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONPROGRESS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetUserInteractionProgress(UserInteractionProgressClip* arg)
		{
			((::System::Void(*)(UserInteractionProgressClip*, ::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONPROGRESS_SETUSERINTERACTIONPROGRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIUSERINTERACTIONPROGRESS_ONENABLE_OFFSET))(nullptr);
		}

	};

