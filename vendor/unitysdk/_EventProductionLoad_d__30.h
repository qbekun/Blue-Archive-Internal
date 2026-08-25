#pragma once
#include "unitysdk.h"

class UISportsDiceRace;
class <>c__DisplayClass30_0;

#define <EVENTPRODUCTIONLOAD>D__30_.CTOR_OFFSET UNITYSDK_OFFSET(0x23DBC00)
#define <EVENTPRODUCTIONLOAD>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x23DD920)
#define <EVENTPRODUCTIONLOAD>D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x23DD930)
#define <EVENTPRODUCTIONLOAD>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23DE220)
#define <EVENTPRODUCTIONLOAD>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x23DE230)
#define <EVENTPRODUCTIONLOAD>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x23DE280)

	inline static constexpr unsigned int <EventProductionLoad>d__30_TypeDefinitionIndex = 5366;

	class <EventProductionLoad>d__30 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UISportsDiceRace* __4__this; // 0x20
		Il2CppObject* productionTypes; // 0x28
		::System::Int64 eventContentId; // 0x30
		<>c__DisplayClass30_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <EVENTPRODUCTIONLOAD>D__30_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EVENTPRODUCTIONLOAD>D__30_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <EVENTPRODUCTIONLOAD>D__30_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EVENTPRODUCTIONLOAD>D__30_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <EVENTPRODUCTIONLOAD>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <EVENTPRODUCTIONLOAD>D__30_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

