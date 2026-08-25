#pragma once
#include "unitysdk.h"

class UICraftDuration;
class <>c__DisplayClass60_0;

#define <CO_CHECKTIME>D__60_.CTOR_OFFSET UNITYSDK_OFFSET(0x23876E0)
#define <CO_CHECKTIME>D__60_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2389F90)
#define <CO_CHECKTIME>D__60_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2389FA0)
#define <CO_CHECKTIME>D__60_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x238A3A0)
#define <CO_CHECKTIME>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x238A3B0)
#define <CO_CHECKTIME>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x238A400)

	inline static constexpr unsigned int <co_CheckTime>d__60_TypeDefinitionIndex = 5131;

	class <co_CheckTime>d__60 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UICraftDuration* __4__this; // 0x20
		<>c__DisplayClass60_0* __8__1; // 0x28
		::System::TimeSpan* _limitTime_5__2; // 0x30

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKTIME>D__60_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKTIME>D__60_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKTIME>D__60_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKTIME>D__60_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKTIME>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <CO_CHECKTIME>D__60_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

