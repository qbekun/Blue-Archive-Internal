#pragma once
#include "unitysdk.h"

class UIBattlePass;

#define <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x224E220)
#define <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x224FBC0)
#define <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x224FBD0)
#define <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x224FD50)
#define <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x224FD60)
#define <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x224FDB0)

	inline static constexpr unsigned int <<OnClickMission>g__coOnClickMission|25_0>d_TypeDefinitionIndex = 4531;

	class <<OnClickMission>g__coOnClickMission|25_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIBattlePass* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKMISSION>G__COONCLICKMISSION|25_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

