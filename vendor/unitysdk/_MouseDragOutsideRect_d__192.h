#pragma once
#include "unitysdk.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class InputField; }

#define <MOUSEDRAGOUTSIDERECT>D__192_.CTOR_OFFSET UNITYSDK_OFFSET(0xA45CB20)
#define <MOUSEDRAGOUTSIDERECT>D__192_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA463B60)
#define <MOUSEDRAGOUTSIDERECT>D__192_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA463B70)
#define <MOUSEDRAGOUTSIDERECT>D__192_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA463E50)
#define <MOUSEDRAGOUTSIDERECT>D__192_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA463E60)
#define <MOUSEDRAGOUTSIDERECT>D__192_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA463EB0)

	inline static constexpr unsigned int <MouseDragOutsideRect>d__192_TypeDefinitionIndex = 34793;

	class <MouseDragOutsideRect>d__192 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::EventSystems::PointerEventData* eventData; // 0x20
		::UnityEngine::UI::InputField* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__192_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__192_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__192_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__192_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__192_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__192_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

