#pragma once
#include "unitysdk.h"

class RepurchaseGemProductNotice;
class AccountDismissRepurchasableNoticeTask;

#define <SENDDISMISSMESSAGEANDCLOSE>D__4_.CTOR_OFFSET UNITYSDK_OFFSET(0x2700E50)
#define <SENDDISMISSMESSAGEANDCLOSE>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27010D0)
#define <SENDDISMISSMESSAGEANDCLOSE>D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27010E0)
#define <SENDDISMISSMESSAGEANDCLOSE>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2701210)
#define <SENDDISMISSMESSAGEANDCLOSE>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2701220)
#define <SENDDISMISSMESSAGEANDCLOSE>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2701270)

	inline static constexpr unsigned int <SendDismissMessageAndClose>d__4_TypeDefinitionIndex = 7072;

	class <SendDismissMessageAndClose>d__4 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		RepurchaseGemProductNotice* __4__this; // 0x20
		AccountDismissRepurchasableNoticeTask* _task_5__2; // 0x28

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <SENDDISMISSMESSAGEANDCLOSE>D__4_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDDISMISSMESSAGEANDCLOSE>D__4_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDDISMISSMESSAGEANDCLOSE>D__4_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDDISMISSMESSAGEANDCLOSE>D__4_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDDISMISSMESSAGEANDCLOSE>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <SENDDISMISSMESSAGEANDCLOSE>D__4_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

