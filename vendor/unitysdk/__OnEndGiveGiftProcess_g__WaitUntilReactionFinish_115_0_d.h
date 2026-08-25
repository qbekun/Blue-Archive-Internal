#pragma once
#include "unitysdk.h"

class CafeCharacter;

#define <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x19B1470)
#define <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B2780)
#define <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19B2790)
#define <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19B28A0)
#define <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x19B28B0)
#define <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19B2900)

	inline static constexpr unsigned int <<OnEndGiveGiftProcess>g__WaitUntilReactionFinish|115_0>d_TypeDefinitionIndex = 1339;

	class <<OnEndGiveGiftProcess>g__WaitUntilReactionFinish|115_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CafeCharacter* __4__this; // 0x20
		::System::String* _reactionStateName_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONENDGIVEGIFTPROCESS>G__WAITUNTILREACTIONFINISH|115_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

