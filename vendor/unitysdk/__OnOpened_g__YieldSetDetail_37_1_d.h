#pragma once
#include "unitysdk.h"

class UITimeAttackLobby;
namespace UnityEngine { class WaitForEndOfFrame; }

#define <<ONOPENED>G__YIELDSETDETAIL|37_1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0xB65590)
#define <<ONOPENED>G__YIELDSETDETAIL|37_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xB66B20)
#define <<ONOPENED>G__YIELDSETDETAIL|37_1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB66B30)
#define <<ONOPENED>G__YIELDSETDETAIL|37_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB66C40)
#define <<ONOPENED>G__YIELDSETDETAIL|37_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xB66C50)
#define <<ONOPENED>G__YIELDSETDETAIL|37_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB66CA0)

	inline static constexpr unsigned int <<OnOpened>g__YieldSetDetail|37_1>d_TypeDefinitionIndex = 8435;

	class <<OnOpened>g__YieldSetDetail|37_1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UITimeAttackLobby* __4__this; // 0x20
		::UnityEngine::WaitForEndOfFrame* _wait_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__YIELDSETDETAIL|37_1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__YIELDSETDETAIL|37_1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__YIELDSETDETAIL|37_1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__YIELDSETDETAIL|37_1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__YIELDSETDETAIL|37_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<ONOPENED>G__YIELDSETDETAIL|37_1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

