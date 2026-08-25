#pragma once
#include "unitysdk.h"

class UIEventTreasure;

#define <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x24CC390)
#define <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24CC3B0)
#define <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24CC3C0)
#define <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24CC580)
#define <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24CC590)
#define <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24CC5E0)

	inline static constexpr unsigned int <<Co_ResetAnimation>g__CoResetAnimation|40_0>d_TypeDefinitionIndex = 5923;

	class <<Co_ResetAnimation>g__CoResetAnimation|40_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIEventTreasure* __4__this; // 0x20
		::System::Int32 clipIndex; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CO_RESETANIMATION>G__CORESETANIMATION|40_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

