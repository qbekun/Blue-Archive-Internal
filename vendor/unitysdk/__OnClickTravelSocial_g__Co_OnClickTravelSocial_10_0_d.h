#pragma once
#include "unitysdk.h"

class <>c__DisplayClass10_0;
class <>c__DisplayClass10_1;

#define <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x2280000)
#define <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2280FB0)
#define <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2280FC0)
#define <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2281710)
#define <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2281720)
#define <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2281770)

	inline static constexpr unsigned int <<OnClickTravelSocial>g__Co_OnClickTravelSocial|10_0>d_TypeDefinitionIndex = 4661;

	class <<OnClickTravelSocial>g__Co_OnClickTravelSocial|10_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		<>c__DisplayClass10_0* __8__1; // 0x20
		<>c__DisplayClass10_1* __8__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKTRAVELSOCIAL>G__CO_ONCLICKTRAVELSOCIAL|10_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

