#pragma once
#include "unitysdk.h"

class VoidDelegate;
class BoolDelegate;
class FloatDelegate;
class VectorDelegate;
class ObjectDelegate;
class KeyCodeDelegate;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Vector2; }
namespace UnityEngine { class KeyCode; }
class UIEventListener;

#define UIEVENTLISTENER_ONDROP_OFFSET UNITYSDK_OFFSET(0x20708D0)
#define UIEVENTLISTENER_ONPRESS_OFFSET UNITYSDK_OFFSET(0x2070A30)
#define UIEVENTLISTENER_CLEAR_OFFSET UNITYSDK_OFFSET(0x2070A80)
#define UIEVENTLISTENER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x2070BC0)
#define UIEVENTLISTENER_ONDRAGOUT_OFFSET UNITYSDK_OFFSET(0x2070C20)
#define UIEVENTLISTENER_ONDRAGEND_OFFSET UNITYSDK_OFFSET(0x2070C70)
#define UIEVENTLISTENER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2070CB0)
#define UIEVENTLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x2070D00)
#define UIEVENTLISTENER_ONHOVER_OFFSET UNITYSDK_OFFSET(0x2070D40)
#define UIEVENTLISTENER_ONTOOLTIP_OFFSET UNITYSDK_OFFSET(0x2070D90)
#define UIEVENTLISTENER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x2070DE0)
#define UIEVENTLISTENER_GET_ISCOLLIDERENABLED_OFFSET UNITYSDK_OFFSET(0x2070930)
#define UIEVENTLISTENER_ONKEY_OFFSET UNITYSDK_OFFSET(0x2070E30)
#define UIEVENTLISTENER_.CTOR_OFFSET UNITYSDK_OFFSET(0x2070E80)
#define UIEVENTLISTENER_ONDRAGOVER_OFFSET UNITYSDK_OFFSET(0x2070E90)
#define UIEVENTLISTENER_GET_OFFSET UNITYSDK_OFFSET(0x2070EE0)
#define UIEVENTLISTENER_ONDOUBLECLICK_OFFSET UNITYSDK_OFFSET(0x2070F80)
#define UIEVENTLISTENER_ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0x2070FD0)
#define UIEVENTLISTENER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x2071010)

	inline static constexpr unsigned int UIEventListener_TypeDefinitionIndex = 140;

	class UIEventListener : public Il2CppObject
	{
	public:
		::System::Object* parameter; // 0x18
		VoidDelegate* onSubmit; // 0x20
		VoidDelegate* onClick; // 0x28
		VoidDelegate* onDoubleClick; // 0x30
		BoolDelegate* onHover; // 0x38
		BoolDelegate* onPress; // 0x40
		BoolDelegate* onSelect; // 0x48
		FloatDelegate* onScroll; // 0x50
		VoidDelegate* onDragStart; // 0x58
		VectorDelegate* onDrag; // 0x60
		VoidDelegate* onDragOver; // 0x68
		VoidDelegate* onDragOut; // 0x70
		VoidDelegate* onDragEnd; // 0x78
		ObjectDelegate* onDrop; // 0x80
		KeyCodeDelegate* onKey; // 0x88
		BoolDelegate* onTooltip; // 0x90
		::System::Boolean needsActiveCollider; // 0x98

		::System::Void OnDrop(::UnityEngine::GameObject* arg)
		{
			((::System::Void(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONDROP_OFFSET))(arg, nullptr);
		}

		::System::Void OnPress(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONPRESS_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void OnScroll(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONSCROLL_OFFSET))(arg, nullptr);
		}

		::System::Void OnDragOut()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONDRAGOUT_OFFSET))(nullptr);
		}

		::System::Void OnDragEnd()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONDRAGEND_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void OnDrag(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONDRAG_OFFSET))(arg, nullptr);
		}

		::System::Void OnHover(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONHOVER_OFFSET))(arg, nullptr);
		}

		::System::Void OnTooltip(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONTOOLTIP_OFFSET))(arg, nullptr);
		}

		::System::Void OnSelect(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONSELECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_isColliderEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_GET_ISCOLLIDERENABLED_OFFSET))(nullptr);
		}

		::System::Void OnKey(::UnityEngine::KeyCode* arg)
		{
			((::System::Void(*)(::UnityEngine::KeyCode*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONKEY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnDragOver()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONDRAGOVER_OFFSET))(nullptr);
		}

		UIEventListener* Get(::UnityEngine::GameObject* arg)
		{
			return ((UIEventListener*(*)(::UnityEngine::GameObject*, ::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_GET_OFFSET))(arg, nullptr);
		}

		::System::Void OnDoubleClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONDOUBLECLICK_OFFSET))(nullptr);
		}

		::System::Void OnDragStart()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONDRAGSTART_OFFSET))(nullptr);
		}

		::System::Void OnSubmit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIEVENTLISTENER_ONSUBMIT_OFFSET))(nullptr);
		}

	};

