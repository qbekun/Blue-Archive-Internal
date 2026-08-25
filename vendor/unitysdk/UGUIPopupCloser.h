#pragma once
#include "unitysdk.h"

namespace UnityEngine::UI { class Button; }
namespace UnityEngine { class Animation; }

#define UGUIPOPUPCLOSER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x21255D0)
#define UGUIPOPUPCLOSER_OPENANIDELEYCHECK_OFFSET UNITYSDK_OFFSET(0x21255E0)
#define UGUIPOPUPCLOSER_SETIGNOREENABLESTATE_OFFSET UNITYSDK_OFFSET(0x2125670)
#define UGUIPOPUPCLOSER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2125680)
#define UGUIPOPUPCLOSER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x2125690)
#define UGUIPOPUPCLOSER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2125730)

	inline static constexpr unsigned int UGUIPopupCloser_TypeDefinitionIndex = 3906;

	class UGUIPopupCloser : public Il2CppObject
	{
	public:
		::UnityEngine::UI::Button* buttonX; // 0x18
		::UnityEngine::UI::Button* buttonBackGround; // 0x20
		::UnityEngine::Animation* popupAni; // 0x28
		::System::Boolean ignoreEnableState; // 0x30
		::System::Boolean isClick; // 0x31

		::System::Void OnDisable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIPOPUPCLOSER_ONDISABLE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* OpenAniDeleyCheck()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIPOPUPCLOSER_OPENANIDELEYCHECK_OFFSET))(nullptr);
		}

		::System::Void SetIgnoreEnableState(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UGUIPOPUPCLOSER_SETIGNOREENABLESTATE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIPOPUPCLOSER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnPointerClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIPOPUPCLOSER_ONPOINTERCLICK_OFFSET))(nullptr);
		}

		::System::Void OnEnable()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIPOPUPCLOSER_ONENABLE_OFFSET))(nullptr);
		}

	};

