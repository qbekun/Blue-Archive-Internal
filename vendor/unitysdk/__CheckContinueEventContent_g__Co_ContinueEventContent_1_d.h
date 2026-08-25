#pragma once
#include "unitysdk.h"

class <>c__DisplayClass1_0;
class EventContentAdventureListNetworkTask;

#define <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_.CTOR_OFFSET UNITYSDK_OFFSET(0x201B590)
#define <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x201B800)
#define <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x201B810)
#define <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x201BBC0)
#define <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x201BBD0)
#define <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x201BC20)

	inline static constexpr unsigned int <<CheckContinueEventContent>g__Co_ContinueEventContent|1>d_TypeDefinitionIndex = 3154;

	class <<CheckContinueEventContent>g__Co_ContinueEventContent|1>d : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Int64 eventContentId; // 0x20
		<>c__DisplayClass1_0* __4__this; // 0x28
		EventContentAdventureListNetworkTask* _networkTask_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <<CHECKCONTINUEEVENTCONTENT>G__CO_CONTINUEEVENTCONTENT|1>D_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

