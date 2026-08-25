#pragma once
#include "unitysdk.h"

namespace UnityEngine::UI { class Dropdown; }

#define <DELAYEDDESTROYDROPDOWNLIST>D__75_.CTOR_OFFSET UNITYSDK_OFFSET(0xA2F67E0)
#define <DELAYEDDESTROYDROPDOWNLIST>D__75_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xA2F6C20)
#define <DELAYEDDESTROYDROPDOWNLIST>D__75_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xA2F6C30)
#define <DELAYEDDESTROYDROPDOWNLIST>D__75_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA2F6CE0)
#define <DELAYEDDESTROYDROPDOWNLIST>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xA2F6CF0)
#define <DELAYEDDESTROYDROPDOWNLIST>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA2F6D40)

	inline static constexpr unsigned int <DelayedDestroyDropdownList>d__75_TypeDefinitionIndex = 34763;

	class <DelayedDestroyDropdownList>d__75 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delay; // 0x20
		::UnityEngine::UI::Dropdown* __4__this; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDDESTROYDROPDOWNLIST>D__75_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDDESTROYDROPDOWNLIST>D__75_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDDESTROYDROPDOWNLIST>D__75_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDDESTROYDROPDOWNLIST>D__75_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDDESTROYDROPDOWNLIST>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <DELAYEDDESTROYDROPDOWNLIST>D__75_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

