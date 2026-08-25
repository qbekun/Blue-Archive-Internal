#pragma once
#include "unitysdk.h"

class MultiStageSweep;
class ButtonActivator;
namespace UnityEngine { class WaitForSeconds; }

#define <COONSWEEPCOUNTBUTTONDOWN>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0x27067B0)
#define <COONSWEEPCOUNTBUTTONDOWN>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2707D30)
#define <COONSWEEPCOUNTBUTTONDOWN>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2707D40)
#define <COONSWEEPCOUNTBUTTONDOWN>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2707FE0)
#define <COONSWEEPCOUNTBUTTONDOWN>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2707FF0)
#define <COONSWEEPCOUNTBUTTONDOWN>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2708040)

	inline static constexpr unsigned int <CoOnSweepCountButtonDown>d__29_TypeDefinitionIndex = 7096;

	class <CoOnSweepCountButtonDown>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean isPlus; // 0x20
		MultiStageSweep* __4__this; // 0x28
		ButtonActivator* _button_5__2; // 0x30
		::UnityEngine::WaitForSeconds* _waitForSec_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

