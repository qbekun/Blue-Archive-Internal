#pragma once
#include "unitysdk.h"

class UIBattlePass;
class <>c__DisplayClass23_0;

#define <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x224E180)
#define <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x224F8A0)
#define <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x224F8B0)
#define <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x224FB50)
#define <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x224FB60)
#define <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x224FBB0)

	inline static constexpr unsigned int <<OnClickLobby>g__coOnClickLobby|23_0>d_TypeDefinitionIndex = 4530;

	class <<OnClickLobby>g__coOnClickLobby|23_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIBattlePass* __4__this; // 0x20
		<>c__DisplayClass23_0* __8__1; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONCLICKLOBBY>G__COONCLICKLOBBY|23_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

