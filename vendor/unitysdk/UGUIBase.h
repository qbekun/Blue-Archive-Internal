#pragma once
#include "unitysdk.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Coroutine; }

#define UGUIBASE_SETALPHA_OFFSET UNITYSDK_OFFSET(0x2124FA0)
#define UGUIBASE_SETFONT_OFFSET UNITYSDK_OFFSET(0x2125030)
#define UGUIBASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x2125100)
#define UGUIBASE_GET_ISANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x21251F0)
#define UGUIBASE_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x2125200)
#define UGUIBASE_ONOPEN_OFFSET UNITYSDK_OFFSET(0x2125230)
#define UGUIBASE_.CTOR_OFFSET UNITYSDK_OFFSET(0x21252B0)
#define UGUIBASE_COOPENANIMATION_OFFSET UNITYSDK_OFFSET(0x21252C0)
#define UGUIBASE_SET_ISANIMATIONEND_OFFSET UNITYSDK_OFFSET(0x2125360)

	inline static constexpr unsigned int UGUIBase_TypeDefinitionIndex = 3904;

	class UGUIBase : public Il2CppObject
	{
	public:
		::UnityEngine::CanvasGroup* canvasGroup; // 0x18
		::UnityEngine::RectTransform* rectTransform; // 0x20
		::UnityEngine::Animation* ChangeUIAni; // 0x28
		::UnityEngine::Coroutine* changeAniCoroutine; // 0x30
		::System::Boolean _IsAnimationEnd_k__BackingField; // 0x38

		::System::Void SetAlpha(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UGUIBASE_SETALPHA_OFFSET))(arg, nullptr);
		}

		::System::Void SetFont()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIBASE_SETFONT_OFFSET))(nullptr);
		}

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIBASE_AWAKE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsAnimationEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIBASE_GET_ISANIMATIONEND_OFFSET))(nullptr);
		}

		::System::Void OnClose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIBASE_ONCLOSE_OFFSET))(nullptr);
		}

		::System::Void OnOpen()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIBASE_ONOPEN_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UGUIBASE_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* CoOpenAnimation(::System::Boolean arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UGUIBASE_COOPENANIMATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_IsAnimationEnd(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UGUIBASE_SET_ISANIMATIONEND_OFFSET))(arg, nullptr);
		}

	};

