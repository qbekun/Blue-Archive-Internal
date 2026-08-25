#pragma once
#include "unitysdk.h"

class UIPlayTween;
namespace UnityEngine { class GameObject; }
namespace AnimationOrTween { class Trigger; }
namespace AnimationOrTween { class Direction; }
namespace AnimationOrTween { class EnableCondition; }
namespace AnimationOrTween { class DisableCondition; }

#define UIPLAYTWEEN_AWAKE_OFFSET UNITYSDK_OFFSET(0xA0B090)
#define UIPLAYTWEEN_START_OFFSET UNITYSDK_OFFSET(0xA0B150)
#define UIPLAYTWEEN_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA0B1D0)
#define UIPLAYTWEEN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA0B700)
#define UIPLAYTWEEN_ONDRAGOVER_OFFSET UNITYSDK_OFFSET(0xA0B800)
#define UIPLAYTWEEN_ONHOVER_OFFSET UNITYSDK_OFFSET(0xA0B470)
#define UIPLAYTWEEN_CUSTOMHOVERLISTENER_OFFSET UNITYSDK_OFFSET(0xA0BBF0)
#define UIPLAYTWEEN_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0xA0BE20)
#define UIPLAYTWEEN_ONPRESS_OFFSET UNITYSDK_OFFSET(0xA0BE60)
#define UIPLAYTWEEN_ONCLICK_OFFSET UNITYSDK_OFFSET(0xA0BEE0)
#define UIPLAYTWEEN_ONDOUBLECLICK_OFFSET UNITYSDK_OFFSET(0xA0BF10)
#define UIPLAYTWEEN_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA0BF40)
#define UIPLAYTWEEN_ONTOGGLE_OFFSET UNITYSDK_OFFSET(0xA0BFC0)
#define UIPLAYTWEEN_UPDATE_OFFSET UNITYSDK_OFFSET(0xA0C130)
#define UIPLAYTWEEN_PLAY_OFFSET UNITYSDK_OFFSET(0xA0C240)
#define UIPLAYTWEEN_PLAY_OFFSET UNITYSDK_OFFSET(0xA0B810)
#define UIPLAYTWEEN_ONFINISHED_OFFSET UNITYSDK_OFFSET(0xA0C250)
#define UIPLAYTWEEN_.CTOR_OFFSET UNITYSDK_OFFSET(0xA0C3D0)

	inline static constexpr unsigned int UIPlayTween_TypeDefinitionIndex = 54;

	class UIPlayTween : public Il2CppObject
	{
	public:
		UIPlayTween* current; // 0x0
		::UnityEngine::GameObject* tweenTarget; // 0x18
		::System::Int32 tweenGroup; // 0x20
		::AnimationOrTween::Trigger* trigger; // 0x24
		::AnimationOrTween::Direction* playDirection; // 0x28
		::System::Boolean resetOnPlay; // 0x2C
		::System::Boolean resetIfDisabled; // 0x2D
		::AnimationOrTween::EnableCondition* ifDisabledOnPlay; // 0x30
		::AnimationOrTween::DisableCondition* disableWhenFinished; // 0x34
		::System::Boolean includeChildren; // 0x38
		Il2CppObject* onFinished; // 0x40
		::UnityEngine::GameObject* eventReceiver; // 0x48
		::System::String* callWhenFinished; // 0x50
		::Il2CppArray<::System::Object*>* mTweens; // 0x58
		::System::Boolean mStarted; // 0x60
		::System::Int32 mActive; // 0x64
		::System::Boolean mActivated; // 0x68

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_AWAKE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_START_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONENABLE_OFFSET))(nullptr);
		}

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Void OnDragOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONDRAGOVER_OFFSET))(nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void CustomHoverListener(::UnityEngine::GameObject* arg, ::System::Boolean arg2)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_CUSTOMHOVERLISTENER_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnDragOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONDRAGOUT_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnDoubleClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONDOUBLECLICK_OFFSET))(nullptr);
		}

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnToggle()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONTOGGLE_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_PLAY_OFFSET))(nullptr);
		}

		::System::Void Play(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_PLAY_OFFSET))(arg, nullptr);
		}

		::System::Void OnFinished()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_ONFINISHED_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIPLAYTWEEN_.CTOR_OFFSET))(nullptr);
		}

	};

