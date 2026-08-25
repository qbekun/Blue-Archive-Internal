#pragma once
#include "unitysdk.h"

class GroundCommandSetLimitBreakGaugeVisual;

#define <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x15B8A60)
#define <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B8A80)
#define <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15B8A90)
#define <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B8B80)
#define <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x15B8B90)
#define <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15B8BE0)

	inline static constexpr unsigned int <<Visualize>g__WaitUIBattleAndSet|4_0>d_TypeDefinitionIndex = 1186;

	class <<Visualize>g__WaitUIBattleAndSet|4_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		GroundCommandSetLimitBreakGaugeVisual* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<VISUALIZE>G__WAITUIBATTLEANDSET|4_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

