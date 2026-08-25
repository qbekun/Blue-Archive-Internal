#pragma once
#include "unitysdk.h"

class EventContentTask;
class EventContentRestartMainStageNetworkTask;

#define <REQEUSTRESTARTMAINSTAGE>D__32_.CTOR_OFFSET UNITYSDK_OFFSET(0x200E150)
#define <REQEUSTRESTARTMAINSTAGE>D__32_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2012410)
#define <REQEUSTRESTARTMAINSTAGE>D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2012420)
#define <REQEUSTRESTARTMAINSTAGE>D__32_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20125A0)
#define <REQEUSTRESTARTMAINSTAGE>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x20125B0)
#define <REQEUSTRESTARTMAINSTAGE>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2012600)

	inline static constexpr unsigned int <ReqeustRestartMainStage>d__32_TypeDefinitionIndex = 3147;

	class <ReqeustRestartMainStage>d__32 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		EventContentTask* __4__this; // 0x20
		EventContentRestartMainStageNetworkTask* _task_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REQEUSTRESTARTMAINSTAGE>D__32_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQEUSTRESTARTMAINSTAGE>D__32_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQEUSTRESTARTMAINSTAGE>D__32_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQEUSTRESTARTMAINSTAGE>D__32_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQEUSTRESTARTMAINSTAGE>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQEUSTRESTARTMAINSTAGE>D__32_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

