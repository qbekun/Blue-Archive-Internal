#pragma once
#include "unitysdk.h"

class UIEventTrigger;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }

#define UIEVENTTRIGGER_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0xA04050)
#define UIEVENTTRIGGER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA04250)
#define UIEVENTTRIGGER_ONPRESS_OFFSET UNITYSDK_OFFSET(0xA04350)
#define UIEVENTTRIGGER_ONDOUBLECLICK_OFFSET UNITYSDK_OFFSET(0xA04470)
#define UIEVENTTRIGGER_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0xA04580)
#define UIEVENTTRIGGER_GET_ISCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0xA04160)
#define UIEVENTTRIGGER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xA04680)
#define UIEVENTTRIGGER_ONDRAGOVER_OFFSET UNITYSDK_OFFSET(0xA047A0)
#define UIEVENTTRIGGER_ONCLICK_OFFSET UNITYSDK_OFFSET(0xA048B0)
#define UIEVENTTRIGGER_ONHOVER_OFFSET UNITYSDK_OFFSET(0xA049C0)
#define UIEVENTTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0xA04AE0)
#define UIEVENTTRIGGER_ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0xA04DF0)

	inline static constexpr unsigned int UIEventTrigger_TypeDefinitionIndex = 39;

	class UIEventTrigger : public Il2CppObject
	{
	public:
		UIEventTrigger* current; // 0x0
		Il2CppObject* onHoverOver; // 0x18
		Il2CppObject* onHoverOut; // 0x20
		Il2CppObject* onPress; // 0x28
		Il2CppObject* onRelease; // 0x30
		Il2CppObject* onSelect; // 0x38
		Il2CppObject* onDeselect; // 0x40
		Il2CppObject* onClick; // 0x48
		Il2CppObject* onDoubleClick; // 0x50
		Il2CppObject* onDragStart; // 0x58
		Il2CppObject* onDragEnd; // 0x60
		Il2CppObject* onDragOver; // 0x68
		Il2CppObject* onDragOut; // 0x70
		Il2CppObject* onDrag; // 0x78

		::System::Void OnDragOut(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_ONDRAGOUT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void OnDoubleClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_ONDOUBLECLICK_OFFSET))(nullptr);
		}

		::System::Void OnDragEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_ONDRAGEND_OFFSET))(nullptr);
		}

		::System::Boolean get_isColliderEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_GET_ISCOLLIDERENABLED_OFFSET))(nullptr);
		}

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragOver(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_ONDRAGOVER_OFFSET))(arg, nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDragStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTTRIGGER_ONDRAGSTART_OFFSET))(nullptr);
		}

	};

