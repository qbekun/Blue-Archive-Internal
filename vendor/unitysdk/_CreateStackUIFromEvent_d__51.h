#pragma once
#include "unitysdk.h"

namespace MXField::UI { class UIFieldLobby; }
class <>c__DisplayClass51_0;
class <>c__DisplayClass51_2;

#define <CREATESTACKUIFROMEVENT>D__51_.CTOR_OFFSET UNITYSDK_OFFSET(0xE9AA00)
#define <CREATESTACKUIFROMEVENT>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xE9D0E0)
#define <CREATESTACKUIFROMEVENT>D__51_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xE9D140)
#define <CREATESTACKUIFROMEVENT>D__51___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xE9D7D0)
#define <CREATESTACKUIFROMEVENT>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE9D820)
#define <CREATESTACKUIFROMEVENT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xE9D830)
#define <CREATESTACKUIFROMEVENT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xE9D880)

	inline static constexpr unsigned int <CreateStackUIFromEvent>d__51_TypeDefinitionIndex = 10721;

	class <CreateStackUIFromEvent>d__51 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::UI::UIFieldLobby* __4__this; // 0x20
		<>c__DisplayClass51_0* __8__1; // 0x28
		<>c__DisplayClass51_2* __8__2; // 0x30
		Il2CppObject* __7__wrap1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUIFROMEVENT>D__51_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUIFROMEVENT>D__51_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUIFROMEVENT>D__51_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Void __m__Finally1()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUIFROMEVENT>D__51___M__FINALLY1_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUIFROMEVENT>D__51_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUIFROMEVENT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CREATESTACKUIFROMEVENT>D__51_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

