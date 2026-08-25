#pragma once
#include "unitysdk.h"

namespace TMPro { class TMP_InputField; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define <MOUSEDRAGOUTSIDERECT>D__294_.CTOR_OFFSET UNITYSDK_OFFSET(0xA16D400)
#define <MOUSEDRAGOUTSIDERECT>D__294_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA16D420)
#define <MOUSEDRAGOUTSIDERECT>D__294_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA16D430)
#define <MOUSEDRAGOUTSIDERECT>D__294_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA16D6C0)
#define <MOUSEDRAGOUTSIDERECT>D__294_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA16D6D0)
#define <MOUSEDRAGOUTSIDERECT>D__294_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA16D720)

	inline static constexpr unsigned int <MouseDragOutsideRect>d__294_TypeDefinitionIndex = 33692;

	class <MouseDragOutsideRect>d__294 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::TMPro::TMP_InputField* __4__this; // 0x20
		::UnityEngine::EventSystems::PointerEventData* eventData; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__294_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__294_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__294_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__294_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__294_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <MOUSEDRAGOUTSIDERECT>D__294_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

