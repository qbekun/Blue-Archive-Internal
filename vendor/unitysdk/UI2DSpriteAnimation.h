#pragma once
#include "unitysdk.h"

namespace UnityEngine { class SpriteRenderer; }
class UI2DSprite;

#define UI2DSPRITEANIMATION_PAUSE_OFFSET UNITYSDK_OFFSET(0x21C9950)
#define UI2DSPRITEANIMATION_RESETTOBEGINNING_OFFSET UNITYSDK_OFFSET(0x21C9960)
#define UI2DSPRITEANIMATION_GET_FRAMESPERSECOND_OFFSET UNITYSDK_OFFSET(0x21C9C20)
#define UI2DSPRITEANIMATION_SET_FRAMESPERSECOND_OFFSET UNITYSDK_OFFSET(0x21C9C30)
#define UI2DSPRITEANIMATION_START_OFFSET UNITYSDK_OFFSET(0x21C9C40)
#define UI2DSPRITEANIMATION_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x21C9D00)
#define UI2DSPRITEANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x21C9D10)
#define UI2DSPRITEANIMATION_PLAY_OFFSET UNITYSDK_OFFSET(0x21C9C50)
#define UI2DSPRITEANIMATION_UPDATESPRITE_OFFSET UNITYSDK_OFFSET(0x21C99B0)
#define UI2DSPRITEANIMATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x21C9DD0)

	inline static constexpr unsigned int UI2DSpriteAnimation_TypeDefinitionIndex = 188;

	class UI2DSpriteAnimation : public Il2CppObject
	{
	public:
		::System::Int32 frameIndex; // 0x18
		::System::Int32 framerate; // 0x1C
		::System::Boolean ignoreTimeScale; // 0x20
		::System::Boolean loop; // 0x21
		::Il2CppArray<::System::Object*>* frames; // 0x28
		::UnityEngine::SpriteRenderer* mUnitySprite; // 0x30
		UI2DSprite* mNguiSprite; // 0x38
		::System::Single mUpdate; // 0x40

		::System::Void Pause()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITEANIMATION_PAUSE_OFFSET))(nullptr);
		}

		::System::Void ResetToBeginning()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITEANIMATION_RESETTOBEGINNING_OFFSET))(nullptr);
		}

		::System::Int32 get_framesPerSecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITEANIMATION_GET_FRAMESPERSECOND_OFFSET))(nullptr);
		}

		::System::Void set_framesPerSecond(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITEANIMATION_SET_FRAMESPERSECOND_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITEANIMATION_START_OFFSET))(nullptr);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITEANIMATION_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITEANIMATION_UPDATE_OFFSET))(nullptr);
		}

		::System::Void Play()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITEANIMATION_PLAY_OFFSET))(nullptr);
		}

		::System::Void UpdateSprite()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITEANIMATION_UPDATESPRITE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UI2DSPRITEANIMATION_.CTOR_OFFSET))(nullptr);
		}

	};

