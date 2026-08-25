#pragma once
#include "unitysdk.h"

class TeamPosition;

#define <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E8A00)
#define <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x24E8A20)
#define <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x24E8A30)
#define <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24E8B10)
#define <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x24E8B20)
#define <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x24E8B70)

	inline static constexpr unsigned int <<OnClickAttackType>g__TagCoroutine|63_0>d_TypeDefinitionIndex = 6017;

	class <<OnClickAttackType>g__TagCoroutine|63_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		TeamPosition* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKATTACKTYPE>G__TAGCOROUTINE|63_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

