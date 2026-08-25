#pragma once
#include "../unitysdk.h"

class UILabel;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Coroutine; }

#define MXUNDERCOVER_UICOUNTDOWN_AWAKE_OFFSET UNITYSDK_OFFSET(0xDCACE0)
#define MXUNDERCOVER_UICOUNTDOWN_PLAY_OFFSET UNITYSDK_OFFSET(0xDCAD90)
#define MXUNDERCOVER_UICOUNTDOWN_CLEAR_OFFSET UNITYSDK_OFFSET(0xDCACF0)
#define MXUNDERCOVER_UICOUNTDOWN_CLEARCOROUTINE_OFFSET UNITYSDK_OFFSET(0xDCAF10)
#define MXUNDERCOVER_UICOUNTDOWN_CO_STOP_OFFSET UNITYSDK_OFFSET(0xDCAF90)
#define MXUNDERCOVER_UICOUNTDOWN_REFRESHTIMELABEL_OFFSET UNITYSDK_OFFSET(0xDCB020)
#define MXUNDERCOVER_UICOUNTDOWN_CO_PLAY_OFFSET UNITYSDK_OFFSET(0xDCAE70)
#define MXUNDERCOVER_UICOUNTDOWN_.CTOR_OFFSET UNITYSDK_OFFSET(0xDCB180)
#define MXUNDERCOVER_UICOUNTDOWN_STOP_OFFSET UNITYSDK_OFFSET(0xDCB190)
#define MXUNDERCOVER_UICOUNTDOWN_CLEARCOROUTINEANIMATION_OFFSET UNITYSDK_OFFSET(0xDCAF50)

namespace MXUnderCover
{
	inline static constexpr unsigned int UICountdown_TypeDefinitionIndex = 10045;

	class UICountdown : public Il2CppObject
	{
	public:
		UILabel* timeLabel; // 0x18
		::UnityEngine::Animation* countdownAnimation; // 0x20
		::UnityEngine::GameObject* alertBG; // 0x28
		::System::String* AnimationOn; // 0x0
		::System::String* AnimationOff; // 0x0
		::System::String* AnimationFail; // 0x0
		::UnityEngine::Coroutine* coroutine; // 0x30
		::UnityEngine::Coroutine* coroutineAnimation; // 0x38

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UICOUNTDOWN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Play(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UICOUNTDOWN_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UICOUNTDOWN_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ClearCoroutine()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UICOUNTDOWN_CLEARCOROUTINE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_Stop()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UICOUNTDOWN_CO_STOP_OFFSET))(nullptr);
		}

		::System::Void RefreshTimeLabel(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UICOUNTDOWN_REFRESHTIMELABEL_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* co_Play(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UICOUNTDOWN_CO_PLAY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UICOUNTDOWN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UICOUNTDOWN_STOP_OFFSET))(nullptr);
		}

		::System::Void ClearCoroutineAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UICOUNTDOWN_CLEARCOROUTINEANIMATION_OFFSET))(nullptr);
		}

	};
}

