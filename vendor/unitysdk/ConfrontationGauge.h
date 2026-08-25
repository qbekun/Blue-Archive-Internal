#pragma once
#include "unitysdk.h"

class ShaderGaugeController;
namespace UnityEngine { class GameObject; }
class UITexture;
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Animation; }

#define CONFRONTATIONGAUGE_HIDEHPBARS_OFFSET UNITYSDK_OFFSET(0x25DF980)
#define CONFRONTATIONGAUGE_OPEN_OFFSET UNITYSDK_OFFSET(0x25DFE00)
#define CONFRONTATIONGAUGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25E00D0)
#define CONFRONTATIONGAUGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x25E00E0)
#define CONFRONTATIONGAUGE_HIDEUI_OFFSET UNITYSDK_OFFSET(0x25E0130)
#define CONFRONTATIONGAUGE_COWAITANDHIDE_OFFSET UNITYSDK_OFFSET(0x25E02E0)
#define CONFRONTATIONGAUGE_SETGAUGE_OFFSET UNITYSDK_OFFSET(0x25E0380)
#define CONFRONTATIONGAUGE_CLOSEGAUGEEMPTY_OFFSET UNITYSDK_OFFSET(0x25E0490)
#define CONFRONTATIONGAUGE_CLOSETARGETCHARACTERDEAD_OFFSET UNITYSDK_OFFSET(0x25E0530)
#define CONFRONTATIONGAUGE_CLOSEGAUGEFULL_OFFSET UNITYSDK_OFFSET(0x25E0540)
#define CONFRONTATIONGAUGE_SETPORTRAIT_OFFSET UNITYSDK_OFFSET(0x25E05E0)
#define CONFRONTATIONGAUGE_COCHECKOPEN_OFFSET UNITYSDK_OFFSET(0x25E0040)

	inline static constexpr unsigned int ConfrontationGauge_TypeDefinitionIndex = 6379;

	class ConfrontationGauge : public Il2CppObject
	{
	public:
		ShaderGaugeController* GaugeControllerLeft; // 0x18
		ShaderGaugeController* GaugeControllerRight; // 0x20
		::UnityEngine::GameObject* GaugeFrictionEffect; // 0x28
		UITexture* portraitLeft; // 0x30
		UITexture* portraitRight; // 0x38
		::UnityEngine::GameObject* GaugeEmptyEffect; // 0x40
		::UnityEngine::GameObject* GaugeFullEffect; // 0x48
		::UnityEngine::AnimationClip* animationOpen; // 0x50
		::UnityEngine::AnimationClip* animationGaugeFull; // 0x58
		::UnityEngine::AnimationClip* animationGaugeEmpty; // 0x60
		::UnityEngine::AnimationClip* animationCharacterDead; // 0x68
		::UnityEngine::Animation* animationPlayer; // 0x70
		::System::Boolean hideUICalled; // 0x78

		::System::Void HideHPBars()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_HIDEHPBARS_OFFSET))(nullptr);
		}

		::System::Void Open(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_OPEN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean HideUI(::UnityEngine::AnimationClip* arg, ::System::Single arg2)
		{
			return ((::System::Boolean(*)(::UnityEngine::AnimationClip*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_HIDEUI_OFFSET))(arg, arg2, nullptr);
		}

		::System::Collections::IEnumerator* CoWaitAndHide(::System::Single arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_COWAITANDHIDE_OFFSET))(arg, nullptr);
		}

		::System::Void SetGauge(::System::Int64 arg, ::System::Int64 arg2)
		{
			((::System::Void(*)(::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_SETGAUGE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void CloseGaugeEmpty(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_CLOSEGAUGEEMPTY_OFFSET))(arg, nullptr);
		}

		::System::Void CloseTargetCharacterDead(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_CLOSETARGETCHARACTERDEAD_OFFSET))(arg, nullptr);
		}

		::System::Void CloseGaugeFull(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_CLOSEGAUGEFULL_OFFSET))(arg, nullptr);
		}

		::System::Void SetPortrait(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_SETPORTRAIT_OFFSET))(str, str2, nullptr);
		}

		::System::Collections::IEnumerator* CoCheckOpen(::System::Action* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + CONFRONTATIONGAUGE_COCHECKOPEN_OFFSET))(arg, nullptr);
		}

	};

