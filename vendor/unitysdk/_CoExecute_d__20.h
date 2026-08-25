#pragma once
#include "unitysdk.h"

namespace MXField::Actions { class SimplePlayerAniAction; }

#define <COEXECUTE>D__20_.CTOR_OFFSET UNITYSDK_OFFSET(0xEF5560)
#define <COEXECUTE>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xEF5580)
#define <COEXECUTE>D__20_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEF5590)
#define <COEXECUTE>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEF5650)
#define <COEXECUTE>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xEF5660)
#define <COEXECUTE>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEF56B0)

	inline static constexpr unsigned int <CoExecute>d__20_TypeDefinitionIndex = 11124;

	class <CoExecute>d__20 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::MXField::Actions::SimplePlayerAniAction* __4__this; // 0x20

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__20_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__20_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__20_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__20_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <COEXECUTE>D__20_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

