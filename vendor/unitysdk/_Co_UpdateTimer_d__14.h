#pragma once
#include "unitysdk.h"

class UIScenarioAutoTimer;

#define <CO_UPDATETIMER>D__14_.CTOR_OFFSET UNITYSDK_OFFSET(0x27CF0E0)
#define <CO_UPDATETIMER>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27CF3D0)
#define <CO_UPDATETIMER>D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27CF3E0)
#define <CO_UPDATETIMER>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.SINGLE_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27CF610)
#define <CO_UPDATETIMER>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27CF620)
#define <CO_UPDATETIMER>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27CF670)

	inline static constexpr unsigned int <Co_UpdateTimer>d__14_TypeDefinitionIndex = 7608;

	class <Co_UpdateTimer>d__14 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Single __2__current; // 0x14
		::System::Single time; // 0x18
		UIScenarioAutoTimer* __4__this; // 0x20
		::System::Single _remaining_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATETIMER>D__14_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATETIMER>D__14_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATETIMER>D__14_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Single System.Collections.Generic.IEnumerator_System.Single_.get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATETIMER>D__14_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.SINGLE_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATETIMER>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_UPDATETIMER>D__14_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

