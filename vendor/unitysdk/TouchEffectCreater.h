#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Camera; }
class UIRoot;
class FXTouch;
namespace UnityEngine { class Vector3; }

#define TOUCHEFFECTCREATER_CORESTORECLICKEFFECT_OFFSET UNITYSDK_OFFSET(0x219A170)
#define TOUCHEFFECTCREATER_AWAKE_OFFSET UNITYSDK_OFFSET(0x219A220)
#define TOUCHEFFECTCREATER_SETDRAGPOSITION_OFFSET UNITYSDK_OFFSET(0x219A2F0)
#define TOUCHEFFECTCREATER_CLEAR_OFFSET UNITYSDK_OFFSET(0x219A450)
#define TOUCHEFFECTCREATER_SHOWALIVETOUCHEFFECTS_OFFSET UNITYSDK_OFFSET(0x219A4A0)
#define TOUCHEFFECTCREATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x219A560)
#define TOUCHEFFECTCREATER_CREATEEFFECT_OFFSET UNITYSDK_OFFSET(0x219AAC0)
#define TOUCHEFFECTCREATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x219AC60)

	inline static constexpr unsigned int TouchEffectCreater_TypeDefinitionIndex = 4133;

	class TouchEffectCreater : public ::ToyWebViewShared::Messages::RequestLoadUrl
	{
	public:
		::UnityEngine::Camera* Camera; // 0x20
		UIRoot* UIRoot; // 0x28
		::System::Boolean IsOff; // 0x30
		Il2CppObject* touchEffectPool; // 0x38
		::System::Int32 maxDragEffectCount; // 0x40
		Il2CppObject* dragTouchEffects; // 0x48
		Il2CppObject* aliveTouchEffects; // 0x50
		::System::Int32 mouseId; // 0x58

		::System::Collections::IEnumerator* CoRestoreClickEffect(FXTouch* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(FXTouch*, ::PVOID))((::PBYTE)hIl2Cpp + TOUCHEFFECTCREATER_CORESTORECLICKEFFECT_OFFSET))(arg, nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOUCHEFFECTCREATER_AWAKE_OFFSET))(nullptr);
		}

		::System::Void SetDragPosition(FXTouch* arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(FXTouch*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TOUCHEFFECTCREATER_SETDRAGPOSITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOUCHEFFECTCREATER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void ShowAliveTouchEffects(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TOUCHEFFECTCREATER_SHOWALIVETOUCHEFFECTS_OFFSET))(arg, nullptr);
		}

		::System::Void Update()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOUCHEFFECTCREATER_UPDATE_OFFSET))(nullptr);
		}

		::System::Void CreateEffect(::System::Int32 arg, ::UnityEngine::Vector3* arg2)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + TOUCHEFFECTCREATER_CREATEEFFECT_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOUCHEFFECTCREATER_.CTOR_OFFSET))(nullptr);
		}

	};

