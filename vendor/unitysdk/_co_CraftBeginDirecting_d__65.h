#pragma once
#include "unitysdk.h"

class UICraftDuration;

#define <CO_CRAFTBEGINDIRECTING>D__65_.CTOR_OFFSET UNITYSDK_OFFSET(0x2387490)
#define <CO_CRAFTBEGINDIRECTING>D__65_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x238BB80)
#define <CO_CRAFTBEGINDIRECTING>D__65_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x238BB90)
#define <CO_CRAFTBEGINDIRECTING>D__65_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x238C190)
#define <CO_CRAFTBEGINDIRECTING>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x238C1A0)
#define <CO_CRAFTBEGINDIRECTING>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x238C1F0)

	inline static constexpr unsigned int <co_CraftBeginDirecting>d__65_TypeDefinitionIndex = 5135;

	class <co_CraftBeginDirecting>d__65 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICraftDuration* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_CRAFTBEGINDIRECTING>D__65_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CRAFTBEGINDIRECTING>D__65_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CRAFTBEGINDIRECTING>D__65_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CRAFTBEGINDIRECTING>D__65_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CRAFTBEGINDIRECTING>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CRAFTBEGINDIRECTING>D__65_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

