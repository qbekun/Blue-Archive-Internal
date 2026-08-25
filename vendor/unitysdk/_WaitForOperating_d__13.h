#pragma once
#include "unitysdk.h"

class GeneralOperator;

#define <WAITFOROPERATING>D__13_.CTOR_OFFSET UNITYSDK_OFFSET(0x26C8780)
#define <WAITFOROPERATING>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x26C94E0)
#define <WAITFOROPERATING>D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x26C94F0)
#define <WAITFOROPERATING>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26C96E0)
#define <WAITFOROPERATING>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x26C96F0)
#define <WAITFOROPERATING>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x26C9740)

	inline static constexpr unsigned int <WaitForOperating>d__13_TypeDefinitionIndex = 6997;

	class <WaitForOperating>d__13 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Boolean waitRealTime; // 0x20
		::System::Single duration; // 0x24
		GeneralOperator* __4__this; // 0x28
		::System::Boolean isLastGroupMember; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <WAITFOROPERATING>D__13_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFOROPERATING>D__13_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFOROPERATING>D__13_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFOROPERATING>D__13_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFOROPERATING>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <WAITFOROPERATING>D__13_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

