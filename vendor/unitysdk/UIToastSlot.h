#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UILabel;
class ToastAnimationPlayer;
class TweenPosition;
class UISlider;
class UIGradientSprite;
class UITexture;
namespace UnityEngine { class Color32; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Coroutine; }

#define UITOASTSLOT_PLAYAPPEAR_OFFSET UNITYSDK_OFFSET(0xB77810)
#define UITOASTSLOT_MOVEUP_OFFSET UNITYSDK_OFFSET(0xB76850)
#define UITOASTSLOT_GET_APPEARTWEENS_OFFSET UNITYSDK_OFFSET(0xB77A20)
#define UITOASTSLOT_HIDE_OFFSET UNITYSDK_OFFSET(0xB74E70)
#define UITOASTSLOT_GET_MYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB77AE0)
#define UITOASTSLOT_WAITANDHIDE_OFFSET UNITYSDK_OFFSET(0xB77B70)
#define UITOASTSLOT_.CTOR_OFFSET UNITYSDK_OFFSET(0xB77C10)
#define UITOASTSLOT_SETTOAST_OFFSET UNITYSDK_OFFSET(0xB75950)
#define UITOASTSLOT_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xB758C0)
#define UITOASTSLOT_HIDEANDSETTOAST_OFFSET UNITYSDK_OFFSET(0xB758E0)

	inline static constexpr unsigned int UIToastSlot_TypeDefinitionIndex = 8491;

	class UIToastSlot : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* hideRoot; // 0x18
		UILabel* label_big; // 0x20
		::UnityEngine::GameObject* appearTweenRoot; // 0x28
		Il2CppObject* appearTweens; // 0x30
		ToastAnimationPlayer* toastAnimationPlayer; // 0x38
		TweenPosition* moveTween; // 0x40
		::System::Single moveDistance; // 0x48
		UISlider* progressBar; // 0x50
		UIGradientSprite* progressForeground; // 0x58
		UILabel* progressLabel; // 0x60
		UITexture* portraitWidget; // 0x68
		::UnityEngine::Color32* barColor_Ing_Left; // 0x70
		::UnityEngine::Color32* barColor_Ing_Right; // 0x74
		::UnityEngine::Color32* barColor_Complete_Left; // 0x78
		::UnityEngine::Color32* barColor_Complete_Right; // 0x7C
		::UnityEngine::Transform* myTransform; // 0x80
		::UnityEngine::Coroutine* timer; // 0x88
		::System::Int32 moveUpCount; // 0x90

		::System::Void PlayAppear(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITOASTSLOT_PLAYAPPEAR_OFFSET))(arg, nullptr);
		}

		::System::Void MoveUp()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOASTSLOT_MOVEUP_OFFSET))(nullptr);
		}

		Il2CppObject* get_AppearTweens()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOASTSLOT_GET_APPEARTWEENS_OFFSET))(nullptr);
		}

		::System::Void Hide()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOASTSLOT_HIDE_OFFSET))(nullptr);
		}

		::UnityEngine::Transform* get_MyTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOASTSLOT_GET_MYTRANSFORM_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* WaitAndHide(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITOASTSLOT_WAITANDHIDE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOASTSLOT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetToast(::System::String* str, ::System::Single arg, ::System::Int64 arg2, ::System::Int64 arg3, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::System::Int64, ::System::Int64, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UITOASTSLOT_SETTOAST_OFFSET))(str, arg, arg2, arg3, str2, nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITOASTSLOT_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Void HideAndSetToast(::System::String* str, ::System::Single arg)
		{
			((::System::Void(*)(::System::String*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UITOASTSLOT_HIDEANDSETTOAST_OFFSET))(str, arg, nullptr);
		}

	};

