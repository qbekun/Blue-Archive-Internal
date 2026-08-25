#pragma once
#include "unitysdk.h"

class UIAudioPlay;

#define UICHAPTERCOMPLETESTAMPPLAYER_COPLAY_OFFSET UNITYSDK_OFFSET(0xB17FB0)
#define UICHAPTERCOMPLETESTAMPPLAYER_.CTOR_OFFSET UNITYSDK_OFFSET(0xB18060)
#define UICHAPTERCOMPLETESTAMPPLAYER_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xB18070)
#define UICHAPTERCOMPLETESTAMPPLAYER_FINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xB18080)
#define UICHAPTERCOMPLETESTAMPPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB181A0)
#define UICHAPTERCOMPLETESTAMPPLAYER_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xB18220)

	inline static constexpr unsigned int UIChapterCompleteStampPlayer_TypeDefinitionIndex = 8224;

	class UIChapterCompleteStampPlayer : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* tweeners; // 0x18
		UIAudioPlay* audioPlay; // 0x20
		::System::Single _Duration_k__BackingField; // 0x28

		::System::Collections::IEnumerator* CoPlay(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERCOMPLETESTAMPPLAYER_COPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERCOMPLETESTAMPPLAYER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_Duration(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERCOMPLETESTAMPPLAYER_SET_DURATION_OFFSET))(arg, nullptr);
		}

		::System::Void FindComponents()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERCOMPLETESTAMPPLAYER_FINDCOMPONENTS_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERCOMPLETESTAMPPLAYER_ONENABLE_OFFSET))(nullptr);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UICHAPTERCOMPLETESTAMPPLAYER_GET_DURATION_OFFSET))(nullptr);
		}

	};

