#pragma once
#include "unitysdk.h"

class UIScenarioMode_MainVolume;
class <>c__DisplayClass60_0;

#define <CO_SHOWOPENLAST>D__60_.CTOR_OFFSET UNITYSDK_OFFSET(0x28060B0)
#define <CO_SHOWOPENLAST>D__60_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x28082F0)
#define <CO_SHOWOPENLAST>D__60_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2808300)
#define <CO_SHOWOPENLAST>D__60_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2808600)
#define <CO_SHOWOPENLAST>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2808610)
#define <CO_SHOWOPENLAST>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2808660)

	inline static constexpr unsigned int <Co_ShowOpenLast>d__60_TypeDefinitionIndex = 7769;

	class <Co_ShowOpenLast>d__60 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIScenarioMode_MainVolume* __4__this; // 0x20
		<>c__DisplayClass60_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWOPENLAST>D__60_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWOPENLAST>D__60_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWOPENLAST>D__60_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWOPENLAST>D__60_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWOPENLAST>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_SHOWOPENLAST>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

