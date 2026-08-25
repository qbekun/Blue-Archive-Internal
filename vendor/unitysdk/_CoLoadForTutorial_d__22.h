#pragma once
#include "unitysdk.h"

class BattleResourcesPreloader;

#define <COLOADFORTUTORIAL>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0x20F4DF0)
#define <COLOADFORTUTORIAL>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20FEF00)
#define <COLOADFORTUTORIAL>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20FEF10)
#define <COLOADFORTUTORIAL>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20FF010)
#define <COLOADFORTUTORIAL>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20FF020)
#define <COLOADFORTUTORIAL>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20FF070)

	inline static constexpr unsigned int <CoLoadForTutorial>d__22_TypeDefinitionIndex = 3839;

	class <CoLoadForTutorial>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		BattleResourcesPreloader* __4__this; // 0x20
		Il2CppObject* table; // 0x28
		::System::Action* callback; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COLOADFORTUTORIAL>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADFORTUTORIAL>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADFORTUTORIAL>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADFORTUTORIAL>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADFORTUTORIAL>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COLOADFORTUTORIAL>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

