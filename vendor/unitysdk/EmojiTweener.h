#pragma once
#include "unitysdk.h"

class TweenScale;

#define EMOJITWEENER__AWAKE_B__5_0_OFFSET UNITYSDK_OFFSET(0x25E7380)
#define EMOJITWEENER_REMOVE_TURNOFFACTION_OFFSET UNITYSDK_OFFSET(0x25E73A0)
#define EMOJITWEENER_FINISHOFFTWEEN_OFFSET UNITYSDK_OFFSET(0x25E4E50)
#define EMOJITWEENER_ADD_TURNOFFACTION_OFFSET UNITYSDK_OFFSET(0x25E7440)
#define EMOJITWEENER_PREPARE_OFFSET UNITYSDK_OFFSET(0x25E3440)
#define EMOJITWEENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E74E0)
#define EMOJITWEENER_AWAKE_OFFSET UNITYSDK_OFFSET(0x25E74F0)
#define EMOJITWEENER_COMPONENTDISABLE_OFFSET UNITYSDK_OFFSET(0x25E4FE0)
#define EMOJITWEENER_PLAYONTWEEN_OFFSET UNITYSDK_OFFSET(0x25E6730)
#define EMOJITWEENER_PLAYOFFTWEEN_OFFSET UNITYSDK_OFFSET(0x25E5F40)

	inline static constexpr unsigned int EmojiTweener_TypeDefinitionIndex = 6396;

	class EmojiTweener : public Il2CppObject
	{
	public:
		TweenScale* turnOnTween; // 0x18
		TweenScale* turnOffTween; // 0x20
		::System::Action* TurnOffAction; // 0x28

		::System::Void _Awake_b__5_0()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJITWEENER__AWAKE_B__5_0_OFFSET))(nullptr);
		}

		::System::Void remove_TurnOffAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJITWEENER_REMOVE_TURNOFFACTION_OFFSET))(arg, nullptr);
		}

		::System::Void FinishOffTween()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJITWEENER_FINISHOFFTWEEN_OFFSET))(nullptr);
		}

		::System::Void add_TurnOffAction(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + EMOJITWEENER_ADD_TURNOFFACTION_OFFSET))(arg, nullptr);
		}

		::System::Void Prepare()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJITWEENER_PREPARE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJITWEENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJITWEENER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void ComponentDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJITWEENER_COMPONENTDISABLE_OFFSET))(nullptr);
		}

		::System::Void PlayOnTween()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJITWEENER_PLAYONTWEEN_OFFSET))(nullptr);
		}

		::System::Void PlayOffTween()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOJITWEENER_PLAYOFFTWEEN_OFFSET))(nullptr);
		}

	};

