#pragma once
#include "unitysdk.h"

class UIEventCollectionCGObject;

#define <CO_PLAYINOUTANIMATION>D__32_.CTOR_OFFSET UNITYSDK_OFFSET(0x24A3AC0)
#define <CO_PLAYINOUTANIMATION>D__32_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24A43E0)
#define <CO_PLAYINOUTANIMATION>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24A43F0)
#define <CO_PLAYINOUTANIMATION>D__32_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24A4550)
#define <CO_PLAYINOUTANIMATION>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24A4560)
#define <CO_PLAYINOUTANIMATION>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24A45B0)

	inline static constexpr unsigned int <Co_PlayInOutAnimation>d__32_TypeDefinitionIndex = 5794;

	class <Co_PlayInOutAnimation>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventCollectionCGObject* __4__this; // 0x20
		::System::Boolean reverse; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYINOUTANIMATION>D__32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYINOUTANIMATION>D__32_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYINOUTANIMATION>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYINOUTANIMATION>D__32_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYINOUTANIMATION>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_PLAYINOUTANIMATION>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

