#pragma once
#include "unitysdk.h"

#define <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x27FDD60)
#define <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27FDD80)
#define <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27FDD90)
#define <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27FDE40)
#define <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27FDE50)
#define <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27FDEA0)

	inline static constexpr unsigned int <<StartEventScenarioGroup>g__DelayInvoke|40_3>d_TypeDefinitionIndex = 7747;

	class <<StartEventScenarioGroup>g__DelayInvoke|40_3>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delaySeconds; // 0x20
		::System::Action* action; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<STARTEVENTSCENARIOGROUP>G__DELAYINVOKE|40_3>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

