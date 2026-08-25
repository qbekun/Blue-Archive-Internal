#pragma once
#include "unitysdk.h"

class DiceRaceController;
class <>c__DisplayClass22_0;

#define <BACKSTADIUMLOAD>D__22_.CTOR_OFFSET UNITYSDK_OFFSET(0x23D4120)
#define <BACKSTADIUMLOAD>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x23D4C50)
#define <BACKSTADIUMLOAD>D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x23D4C60)
#define <BACKSTADIUMLOAD>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23D4E50)
#define <BACKSTADIUMLOAD>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x23D4E60)
#define <BACKSTADIUMLOAD>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23D4EB0)

	inline static constexpr unsigned int <BackStadiumLoad>d__22_TypeDefinitionIndex = 5316;

	class <BackStadiumLoad>d__22 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		DiceRaceController* __4__this; // 0x20
		::System::Int64 eventContentId; // 0x28
		<>c__DisplayClass22_0* __8__1; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <BACKSTADIUMLOAD>D__22_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <BACKSTADIUMLOAD>D__22_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <BACKSTADIUMLOAD>D__22_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <BACKSTADIUMLOAD>D__22_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <BACKSTADIUMLOAD>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <BACKSTADIUMLOAD>D__22_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

