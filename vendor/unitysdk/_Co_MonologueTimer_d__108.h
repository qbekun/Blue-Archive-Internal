#pragma once
#include "unitysdk.h"

class UICafe;

#define <CO_MONOLOGUETIMER>D__108_.CTOR_OFFSET UNITYSDK_OFFSET(0x2276520)
#define <CO_MONOLOGUETIMER>D__108_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x227B280)
#define <CO_MONOLOGUETIMER>D__108_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x227B290)
#define <CO_MONOLOGUETIMER>D__108_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x227B3C0)
#define <CO_MONOLOGUETIMER>D__108_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x227B3D0)
#define <CO_MONOLOGUETIMER>D__108_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x227B420)

	inline static constexpr unsigned int <Co_MonologueTimer>d__108_TypeDefinitionIndex = 4642;

	class <Co_MonologueTimer>d__108 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICafe* __4__this; // 0x20
		::System::Single delay; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_MONOLOGUETIMER>D__108_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_MONOLOGUETIMER>D__108_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_MONOLOGUETIMER>D__108_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_MONOLOGUETIMER>D__108_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_MONOLOGUETIMER>D__108_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_MONOLOGUETIMER>D__108_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

