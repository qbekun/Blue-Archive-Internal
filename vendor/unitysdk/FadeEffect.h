#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Color; }

#define FADEEFFECT_LOGICFADERATETOVISUAL_OFFSET UNITYSDK_OFFSET(0x20B3CA0)
#define FADEEFFECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x20B3DF0)
#define FADEEFFECT_GET_VISUALEFFECTRADIUSMETER_OFFSET UNITYSDK_OFFSET(0x20B3D80)
#define FADEEFFECT_FADE_OFFSET UNITYSDK_OFFSET(0x20B3E00)
#define FADEEFFECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x20B3F10)
#define FADEEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x20B4020)

	inline static constexpr unsigned int FadeEffect_TypeDefinitionIndex = 3594;

	class FadeEffect : public Il2CppObject
	{
	public:
		::UnityEngine::Color* MinRadiusColor; // 0x0
		::UnityEngine::Color* MaxRadiusColor; // 0x10
		::UnityEngine::Color* TestPositionColor; // 0x20
		::System::String* fadePropertyName; // 0x0
		::System::Int32 fadePropertyID; // 0x18
		::System::Int64 VisualEffectMinRadius; // 0x20
		::System::Int64 VisualEffectMaxRadius; // 0x28

		::System::Single LogicFadeRateToVisual(::System::Single arg, ::System::Single arg2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FADEEFFECT_LOGICFADERATETOVISUAL_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADEEFFECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Single get_VisualEffectRadiusMeter()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FADEEFFECT_GET_VISUALEFFECTRADIUSMETER_OFFSET))(nullptr);
		}

		::System::Void Fade(::System::Single arg, ::System::Single arg2)
		{
			((::System::Void(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FADEEFFECT_FADE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADEEFFECT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FADEEFFECT_ONENABLE_OFFSET))(nullptr);
		}

	};

