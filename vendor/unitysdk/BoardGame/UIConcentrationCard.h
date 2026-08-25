#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class MXButton;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Quaternion; }
namespace BoardGame { class ConcentrationCardInfo; }
namespace UnityEngine { class Texture; }

#define BOARDGAME_UICONCENTRATIONCARD_INITAILIZE_OFFSET UNITYSDK_OFFSET(0xE0F470)
#define BOARDGAME_UICONCENTRATIONCARD_PLAYSELECTANIMATION_OFFSET UNITYSDK_OFFSET(0xE0F5C0)
#define BOARDGAME_UICONCENTRATIONCARD_GET_FLIPBACKANIMLENGTH_OFFSET UNITYSDK_OFFSET(0xE10AB0)
#define BOARDGAME_UICONCENTRATIONCARD_SET_ISMATCHED_OFFSET UNITYSDK_OFFSET(0xE12160)
#define BOARDGAME_UICONCENTRATIONCARD_.CTOR_OFFSET UNITYSDK_OFFSET(0xE12170)
#define BOARDGAME_UICONCENTRATIONCARD_SETCARDVISUALDIRECT_OFFSET UNITYSDK_OFFSET(0xE11FB0)
#define BOARDGAME_UICONCENTRATIONCARD_AWAKE_OFFSET UNITYSDK_OFFSET(0xE121C0)
#define BOARDGAME_UICONCENTRATIONCARD_DISABLEEFFECTS_OFFSET UNITYSDK_OFFSET(0xE11E20)
#define BOARDGAME_UICONCENTRATIONCARD_GET_FLIPFRONTANIMLENGTH_OFFSET UNITYSDK_OFFSET(0xE0FB50)
#define BOARDGAME_UICONCENTRATIONCARD_SET_LOADFRONTIMAGECOMPLETE_OFFSET UNITYSDK_OFFSET(0xE12350)
#define BOARDGAME_UICONCENTRATIONCARD_GET_ISMATCHED_OFFSET UNITYSDK_OFFSET(0xE12360)
#define BOARDGAME_UICONCENTRATIONCARD_ANIMATEROTATION_OFFSET UNITYSDK_OFFSET(0xE120C0)
#define BOARDGAME_UICONCENTRATIONCARD_GET_CARDOUTANIMLENGTH_OFFSET UNITYSDK_OFFSET(0xE11080)
#define BOARDGAME_UICONCENTRATIONCARD_FLIPBACK_OFFSET UNITYSDK_OFFSET(0xE10A30)
#define BOARDGAME_UICONCENTRATIONCARD_ONCLICKED_OFFSET UNITYSDK_OFFSET(0xE12390)
#define BOARDGAME_UICONCENTRATIONCARD__LOADFRONTTEXTURE_B__40_0_OFFSET UNITYSDK_OFFSET(0xE12430)
#define BOARDGAME_UICONCENTRATIONCARD_SETBUTTONENABLE_OFFSET UNITYSDK_OFFSET(0xE0C4D0)
#define BOARDGAME_UICONCENTRATIONCARD_LOADFRONTTEXTURE_OFFSET UNITYSDK_OFFSET(0xE0F9A0)
#define BOARDGAME_UICONCENTRATIONCARD_FLIP_OFFSET UNITYSDK_OFFSET(0xE0FA60)
#define BOARDGAME_UICONCENTRATIONCARD_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xE12470)
#define BOARDGAME_UICONCENTRATIONCARD_GET_LOADFRONTIMAGECOMPLETE_OFFSET UNITYSDK_OFFSET(0xE12480)
#define BOARDGAME_UICONCENTRATIONCARD_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xE12490)

namespace BoardGame
{
	inline static constexpr unsigned int UIConcentrationCard_TypeDefinitionIndex = 10295;

	class UIConcentrationCard : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* front; // 0x18
		::UnityEngine::GameObject* back; // 0x20
		UITexture* frontTexture; // 0x28
		UITexture* backTexture; // 0x30
		MXButton* cardButton; // 0x38
		::UnityEngine::Animation* animation; // 0x40
		::UnityEngine::AnimationCurve* rotateCurve; // 0x48
		::UnityEngine::GameObject* selectFX; // 0x50
		::UnityEngine::GameObject* releaseFX; // 0x58
		::UnityEngine::GameObject* matchFX; // 0x60
		::System::Int32 _Index_k__BackingField; // 0x68
		::System::Boolean _LoadFrontImageComplete_k__BackingField; // 0x6C
		::System::Boolean _IsMatched_k__BackingField; // 0x6D
		::UnityEngine::Quaternion* initialRotation; // 0x70
		::System::String* CardInAnimName; // 0x0
		::System::String* CardOutAnimName; // 0x0
		::System::String* FlipFrontAnimName; // 0x0
		::System::String* FlipBackAnimName; // 0x0

		::System::Void Initailize(::BoardGame::ConcentrationCardInfo* arg)
		{
			((::System::Void(*)(::BoardGame::ConcentrationCardInfo*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_INITAILIZE_OFFSET))(arg, nullptr);
		}

		::System::Void PlaySelectAnimation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_PLAYSELECTANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Single get_FlipBackAnimLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_GET_FLIPBACKANIMLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_IsMatched(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_SET_ISMATCHED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetCardVisualDirect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_SETCARDVISUALDIRECT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_AWAKE_OFFSET))(nullptr);
		}

		::System::Void DisableEffects()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_DISABLEEFFECTS_OFFSET))(nullptr);
		}

		::System::Single get_FlipFrontAnimLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_GET_FLIPFRONTANIMLENGTH_OFFSET))(nullptr);
		}

		::System::Void set_LoadFrontImageComplete(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_SET_LOADFRONTIMAGECOMPLETE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsMatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_GET_ISMATCHED_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* AnimateRotation(::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg2, ::System::Single arg3)
		{
			return ((::System::Collections::IEnumerator*(*)(::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_ANIMATEROTATION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Single get_CardOutAnimLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_GET_CARDOUTANIMLENGTH_OFFSET))(nullptr);
		}

		::System::Void FlipBack()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_FLIPBACK_OFFSET))(nullptr);
		}

		::System::Void OnClicked()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_ONCLICKED_OFFSET))(nullptr);
		}

		::System::Void _LoadFrontTexture_b__40_0(::UnityEngine::Texture* arg)
		{
			((::System::Void(*)(::UnityEngine::Texture*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD__LOADFRONTTEXTURE_B__40_0_OFFSET))(arg, nullptr);
		}

		::System::Void SetButtonEnable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_SETBUTTONENABLE_OFFSET))(arg, nullptr);
		}

		::System::Void LoadFrontTexture(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_LOADFRONTTEXTURE_OFFSET))(str, nullptr);
		}

		::System::Void Flip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_FLIP_OFFSET))(arg, nullptr);
		}

		::System::Void set_Index(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_SET_INDEX_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_LoadFrontImageComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_GET_LOADFRONTIMAGECOMPLETE_OFFSET))(nullptr);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOARDGAME_UICONCENTRATIONCARD_GET_INDEX_OFFSET))(nullptr);
		}

	};
}

