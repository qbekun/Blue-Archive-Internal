#pragma once
#include "unitysdk.h"

class UISprite;

#define UISPRITEANIMATION_PAUSE_OFFSET UNITYSDK_OFFSET(0x243AB50)
#define UISPRITEANIMATION_REBUILDSPRITELIST_OFFSET UNITYSDK_OFFSET(0x243AB60)
#define UISPRITEANIMATION_SET_NAMEPREFIX_OFFSET UNITYSDK_OFFSET(0x243AE80)
#define UISPRITEANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x243AED0)
#define UISPRITEANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x243AF80)
#define UISPRITEANIMATION_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x243AF90)
#define UISPRITEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x243AFA0)
#define UISPRITEANIMATION_RESETTOBEGINNING_OFFSET UNITYSDK_OFFSET(0x243AFB0)
#define UISPRITEANIMATION_GET_FRAMESPERSECOND_OFFSET UNITYSDK_OFFSET(0x243B090)
#define UISPRITEANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x243B0A0)
#define UISPRITEANIMATION_START_OFFSET UNITYSDK_OFFSET(0x243B2A0)
#define UISPRITEANIMATION_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x243B2B0)
#define UISPRITEANIMATION_SET_FRAMESPERSECOND_OFFSET UNITYSDK_OFFSET(0x243B2F0)
#define UISPRITEANIMATION_GET_NAMEPREFIX_OFFSET UNITYSDK_OFFSET(0x243B300)
#define UISPRITEANIMATION_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x243B310)

	inline static constexpr unsigned int UISpriteAnimation_TypeDefinitionIndex = 253;

	class UISpriteAnimation : public Il2CppObject
	{
	public:
		::System::Int32 frameIndex; // 0x18
		::System::Int32 mFPS; // 0x1C
		::System::String* mPrefix; // 0x20
		::System::Boolean mLoop; // 0x28
		::System::Boolean mSnap; // 0x29
		UISprite* mSprite; // 0x30
		::System::Single mDelta; // 0x38
		::System::Boolean mActive; // 0x3C
		Il2CppObject* mSpriteNames; // 0x40

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_PAUSE_OFFSET))(nullptr);
		}

		::System::Void RebuildSpriteList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_REBUILDSPRITELIST_OFFSET))(nullptr);
		}

		::System::Void set_namePrefix(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_SET_NAMEPREFIX_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void set_loop(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_SET_LOOP_OFFSET))(arg, nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_PLAY_OFFSET))(nullptr);
		}

		::System::Void ResetToBeginning()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_RESETTOBEGINNING_OFFSET))(nullptr);
		}

		::System::Int32 get_framesPerSecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_GET_FRAMESPERSECOND_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_START_OFFSET))(nullptr);
		}

		::System::Int32 get_frames()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_GET_FRAMES_OFFSET))(nullptr);
		}

		::System::Void set_framesPerSecond(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_SET_FRAMESPERSECOND_OFFSET))(arg, nullptr);
		}

		::System::String* get_namePrefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_GET_NAMEPREFIX_OFFSET))(nullptr);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISPRITEANIMATION_GET_LOOP_OFFSET))(nullptr);
		}

	};

