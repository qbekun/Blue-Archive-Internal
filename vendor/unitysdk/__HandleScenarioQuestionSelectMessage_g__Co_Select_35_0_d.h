#pragma once
#include "unitysdk.h"

class UIScenarioNew;

#define <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x27E2760)
#define <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27E2780)
#define <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27E2790)
#define <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27E2860)
#define <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27E2870)
#define <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27E28C0)

	inline static constexpr unsigned int <<HandleScenarioQuestionSelectMessage>g__Co_Select|35_0>d_TypeDefinitionIndex = 7667;

	class <<HandleScenarioQuestionSelectMessage>g__Co_Select|35_0>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single delay; // 0x20
		UIScenarioNew* __4__this; // 0x28
		::System::Int64 id; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<HANDLESCENARIOQUESTIONSELECTMESSAGE>G__CO_SELECT|35_0>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

