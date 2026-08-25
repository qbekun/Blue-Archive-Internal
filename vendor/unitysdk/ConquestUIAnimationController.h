#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }

#define CONQUESTUIANIMATIONCONTROLLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x234B130)
#define CONQUESTUIANIMATIONCONTROLLER_PLAYOPEN_OFFSET UNITYSDK_OFFSET(0x234B1A0)
#define CONQUESTUIANIMATIONCONTROLLER_CO_PLAYOPEN_OFFSET UNITYSDK_OFFSET(0x234B220)
#define CONQUESTUIANIMATIONCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x234B2B0)
#define CONQUESTUIANIMATIONCONTROLLER_PLAYHIDE_OFFSET UNITYSDK_OFFSET(0x234B2C0)
#define CONQUESTUIANIMATIONCONTROLLER_GET_OPENANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x234B370)
#define CONQUESTUIANIMATIONCONTROLLER_SETTOOPEN_OFFSET UNITYSDK_OFFSET(0x234B3B0)

	inline static constexpr unsigned int ConquestUIAnimationController_TypeDefinitionIndex = 5014;

	class ConquestUIAnimationController : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* openAni; // 0x18
		::System::String* openAniName; // 0x20
		::System::String* mainStoryOpenAniName; // 0x28
		::System::Boolean isMainOrPermanent; // 0x30
		::System::Boolean isOpen; // 0x31

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUIANIMATIONCONTROLLER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PlayOpen(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUIANIMATIONCONTROLLER_PLAYOPEN_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* Co_PlayOpen(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUIANIMATIONCONTROLLER_CO_PLAYOPEN_OFFSET))(arg, nullptr);
		}

		::System::Void Initialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUIANIMATIONCONTROLLER_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* PlayHide(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUIANIMATIONCONTROLLER_PLAYHIDE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationClip* get_OpenAnimationClip()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUIANIMATIONCONTROLLER_GET_OPENANIMATIONCLIP_OFFSET))(nullptr);
		}

		::System::Void SetToOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONQUESTUIANIMATIONCONTROLLER_SETTOOPEN_OFFSET))(nullptr);
		}

	};

