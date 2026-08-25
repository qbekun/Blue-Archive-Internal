#pragma once
#include "../../unitysdk.h"

class UITexture;
namespace UnityEngine { class GameObject; }
class UILabel;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Coroutine; }

#define MXFIELD_UI_UIFIELDNOTICECONTENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xEA2D30)
#define MXFIELD_UI_UIFIELDNOTICECONTENT_SETTEXTURE_OFFSET UNITYSDK_OFFSET(0xEA2780)
#define MXFIELD_UI_UIFIELDNOTICECONTENT_PLAY_OFFSET UNITYSDK_OFFSET(0xEA2DD0)
#define MXFIELD_UI_UIFIELDNOTICECONTENT_PLAY_OFFSET UNITYSDK_OFFSET(0xEA2860)
#define MXFIELD_UI_UIFIELDNOTICECONTENT_STOP_OFFSET UNITYSDK_OFFSET(0xEA2E90)
#define MXFIELD_UI_UIFIELDNOTICECONTENT_APPEAR_OFFSET UNITYSDK_OFFSET(0xEA2F00)
#define MXFIELD_UI_UIFIELDNOTICECONTENT_DISAPPEAR_OFFSET UNITYSDK_OFFSET(0xEA2F40)
#define MXFIELD_UI_UIFIELDNOTICECONTENT_COPLAY_OFFSET UNITYSDK_OFFSET(0xEA2E20)
#define MXFIELD_UI_UIFIELDNOTICECONTENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA22E0)

namespace MXField::UI
{
	inline static constexpr unsigned int UIFieldNoticeContent_TypeDefinitionIndex = 10746;

	class UIFieldNoticeContent : public Il2CppObject
	{
	public:
		UITexture* texture; // 0x18
		::UnityEngine::GameObject* labelRoot; // 0x20
		UILabel* label; // 0x28
		::UnityEngine::Animation* anim; // 0x30
		::UnityEngine::AnimationClip* appearClip; // 0x38
		::UnityEngine::AnimationClip* disappearClip; // 0x40
		::System::Action* onFinished; // 0x48
		::UnityEngine::Coroutine* playCoroutine; // 0x50

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICECONTENT_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void SetTexture(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICECONTENT_SETTEXTURE_OFFSET))(str, nullptr);
		}

		::System::Void Play(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICECONTENT_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Play(::System::String* str, ::System::Action* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICECONTENT_PLAY_OFFSET))(str, arg, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICECONTENT_STOP_OFFSET))(nullptr);
		}

		::System::Void Appear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICECONTENT_APPEAR_OFFSET))(nullptr);
		}

		::System::Void Disappear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICECONTENT_DISAPPEAR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoPlay()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICECONTENT_COPLAY_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_UIFIELDNOTICECONTENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

