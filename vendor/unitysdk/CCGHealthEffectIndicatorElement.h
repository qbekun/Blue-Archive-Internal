#pragma once
#include "unitysdk.h"

namespace UnityEngine { class Animation; }
namespace TMPro { class TMP_Text; }
namespace UnityEngine { class Transform; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Coroutine; }

#define CCGHEALTHEFFECTINDICATORELEMENT_ONPLAYEFFECT_OFFSET UNITYSDK_OFFSET(0x26E6330)
#define CCGHEALTHEFFECTINDICATORELEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x26E6720)
#define CCGHEALTHEFFECTINDICATORELEMENT_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x26E6790)
#define CCGHEALTHEFFECTINDICATORELEMENT_PLAY_OFFSET UNITYSDK_OFFSET(0x26E66B0)
#define CCGHEALTHEFFECTINDICATORELEMENT_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x26E6600)
#define CCGHEALTHEFFECTINDICATORELEMENT_START_OFFSET UNITYSDK_OFFSET(0x26E67C0)

	inline static constexpr unsigned int CCGHealthEffectIndicatorElement_TypeDefinitionIndex = 397;

	class CCGHealthEffectIndicatorElement : public Il2CppObject
	{
	public:
		::UnityEngine::Animation* anim; // 0x18
		::TMPro::TMP_Text* valueText; // 0x20
		::UnityEngine::Transform* bone; // 0x28
		::UnityEngine::Vector3* groundLocalPosition; // 0x30
		::UnityEngine::Vector3* initialOffset; // 0x3C
		::System::String* clipStart; // 0x48
		::System::String* clipIdle; // 0x50
		::System::Boolean isPlaying; // 0x58
		::UnityEngine::Coroutine* curCoroutine; // 0x60

		::System::Void OnPlayEffect(::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGHEALTHEFFECTINDICATORELEMENT_ONPLAYEFFECT_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHEALTHEFFECTINDICATORELEMENT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHEALTHEFFECTINDICATORELEMENT_GET_ISPLAYING_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* Play()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHEALTHEFFECTINDICATORELEMENT_PLAY_OFFSET))(nullptr);
		}

		::System::Void SetPosition(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + CCGHEALTHEFFECTINDICATORELEMENT_SETPOSITION_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCGHEALTHEFFECTINDICATORELEMENT_START_OFFSET))(nullptr);
		}

	};

