#pragma once
#include "unitysdk.h"

class StageSweep;
class ButtonActivator;
namespace UnityEngine { class WaitForSeconds; }

#define <COONSWEEPCOUNTBUTTONDOWN>D__55_.CTOR_OFFSET UNITYSDK_OFFSET(0xB170B0)
#define <COONSWEEPCOUNTBUTTONDOWN>D__55_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB170D0)
#define <COONSWEEPCOUNTBUTTONDOWN>D__55_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB170E0)
#define <COONSWEEPCOUNTBUTTONDOWN>D__55_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB17320)
#define <COONSWEEPCOUNTBUTTONDOWN>D__55_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB17330)
#define <COONSWEEPCOUNTBUTTONDOWN>D__55_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB17380)

	inline static constexpr unsigned int <CoOnSweepCountButtonDown>d__55_TypeDefinitionIndex = 8218;

	class <CoOnSweepCountButtonDown>d__55 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean isPlus; // 0x20
		StageSweep* __4__this; // 0x28
		ButtonActivator* _button_5__2; // 0x30
		::UnityEngine::WaitForSeconds* _waitForSec_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__55_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__55_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__55_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__55_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__55_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COONSWEEPCOUNTBUTTONDOWN>D__55_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

