#pragma once
#include "unitysdk.h"

class UITBGBattleTop;
class <>c__DisplayClass41_0;

#define <COPLAYFACILITYRESULT>D__41_.CTOR_OFFSET UNITYSDK_OFFSET(0xB41410)
#define <COPLAYFACILITYRESULT>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB42EF0)
#define <COPLAYFACILITYRESULT>D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB42F00)
#define <COPLAYFACILITYRESULT>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB431B0)
#define <COPLAYFACILITYRESULT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB431C0)
#define <COPLAYFACILITYRESULT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB43210)

	inline static constexpr unsigned int <CoPlayFacilityResult>d__41_TypeDefinitionIndex = 8342;

	class <CoPlayFacilityResult>d__41 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::String* localizeKey; // 0x20
		UITBGBattleTop* __4__this; // 0x28
		<>c__DisplayClass41_0* __8__1; // 0x30
		::System::Action* onFinished; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COPLAYFACILITYRESULT>D__41_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYFACILITYRESULT>D__41_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYFACILITYRESULT>D__41_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYFACILITYRESULT>D__41_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYFACILITYRESULT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COPLAYFACILITYRESULT>D__41_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

