#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }

#define UIFORWARDEVENTS_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA04EF0)
#define UIFORWARDEVENTS_.CTOR_OFFSET UNITYSDK_OFFSET(0xA04FB0)
#define UIFORWARDEVENTS_ONHOVER_OFFSET UNITYSDK_OFFSET(0xA04FC0)
#define UIFORWARDEVENTS_ONCLICK_OFFSET UNITYSDK_OFFSET(0xA05080)
#define UIFORWARDEVENTS_ONDROP_OFFSET UNITYSDK_OFFSET(0xA05120)
#define UIFORWARDEVENTS_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xA051C0)
#define UIFORWARDEVENTS_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA05290)
#define UIFORWARDEVENTS_ONDOUBLECLICK_OFFSET UNITYSDK_OFFSET(0xA05350)
#define UIFORWARDEVENTS_ONPRESS_OFFSET UNITYSDK_OFFSET(0xA053F0)
#define UIFORWARDEVENTS_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xA054B0)

	inline static constexpr unsigned int UIForwardEvents_TypeDefinitionIndex = 40;

	class UIForwardEvents : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* target; // 0x18
		::System::Boolean onHover; // 0x20
		::System::Boolean onPress; // 0x21
		::System::Boolean onClick; // 0x22
		::System::Boolean onDoubleClick; // 0x23
		::System::Boolean onSelect; // 0x24
		::System::Boolean onDrag; // 0x25
		::System::Boolean onDrop; // 0x26
		::System::Boolean onSubmit; // 0x27
		::System::Boolean onScroll; // 0x28

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORWARDEVENTS_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORWARDEVENTS_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORWARDEVENTS_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORWARDEVENTS_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnDrop(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORWARDEVENTS_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void OnScroll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIFORWARDEVENTS_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIFORWARDEVENTS_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnDoubleClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORWARDEVENTS_ONDOUBLECLICK_OFFSET))(nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIFORWARDEVENTS_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnSubmit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIFORWARDEVENTS_ONSUBMIT_OFFSET))(nullptr);
		}

	};

