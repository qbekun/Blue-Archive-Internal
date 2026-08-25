#pragma once
#include "unitysdk.h"

class TutorialTask;

#define <COSETTUTORIALSCENARIOMODE>D__144_.CTOR_OFFSET UNITYSDK_OFFSET(0x203D480)
#define <COSETTUTORIALSCENARIOMODE>D__144_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2043610)
#define <COSETTUTORIALSCENARIOMODE>D__144_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2043620)
#define <COSETTUTORIALSCENARIOMODE>D__144_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20436F0)
#define <COSETTUTORIALSCENARIOMODE>D__144_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2043700)
#define <COSETTUTORIALSCENARIOMODE>D__144_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2043750)

	inline static constexpr unsigned int <CoSetTutorialScenarioMode>d__144_TypeDefinitionIndex = 3252;

	class <CoSetTutorialScenarioMode>d__144 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		TutorialTask* __4__this; // 0x20
		::System::Int64 modeID; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COSETTUTORIALSCENARIOMODE>D__144_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETTUTORIALSCENARIOMODE>D__144_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETTUTORIALSCENARIOMODE>D__144_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETTUTORIALSCENARIOMODE>D__144_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETTUTORIALSCENARIOMODE>D__144_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COSETTUTORIALSCENARIOMODE>D__144_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

