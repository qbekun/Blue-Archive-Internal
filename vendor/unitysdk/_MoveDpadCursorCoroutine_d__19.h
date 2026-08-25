#pragma once
#include "unitysdk.h"

class ControllerMouse;
namespace UnityEngine::InputSystem::Controls { class DpadControl; }
namespace MX::Controller { class CursorPoint; }
namespace MX::Controller { class CursorPointInfo; }
class UIScrollView;

#define <MOVEDPADCURSORCOROUTINE>D__19_.CTOR_OFFSET UNITYSDK_OFFSET(0xC7F080)
#define <MOVEDPADCURSORCOROUTINE>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xC81B60)
#define <MOVEDPADCURSORCOROUTINE>D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC81B70)
#define <MOVEDPADCURSORCOROUTINE>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC826F0)
#define <MOVEDPADCURSORCOROUTINE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xC82700)
#define <MOVEDPADCURSORCOROUTINE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC82750)

	inline static constexpr unsigned int <MoveDpadCursorCoroutine>d__19_TypeDefinitionIndex = 9056;

	class <MoveDpadCursorCoroutine>d__19 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		ControllerMouse* __4__this; // 0x20
		::UnityEngine::InputSystem::Controls::DpadControl* dpad; // 0x28
		::MX::Controller::CursorPoint* _target_5__2; // 0x30
		::MX::Controller::CursorPointInfo* _cursorPointInfo_5__3; // 0x38
		UIScrollView* _scroll_5__4; // 0x40

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MOVEDPADCURSORCOROUTINE>D__19_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEDPADCURSORCOROUTINE>D__19_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEDPADCURSORCOROUTINE>D__19_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEDPADCURSORCOROUTINE>D__19_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEDPADCURSORCOROUTINE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOVEDPADCURSORCOROUTINE>D__19_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

