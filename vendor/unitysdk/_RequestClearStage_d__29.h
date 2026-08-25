#pragma once
#include "unitysdk.h"

class RoadPuzzleTask;
class <>c__DisplayClass29_0;

#define <REQUESTCLEARSTAGE>D__29_.CTOR_OFFSET UNITYSDK_OFFSET(0x2027580)
#define <REQUESTCLEARSTAGE>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x2027DC0)
#define <REQUESTCLEARSTAGE>D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x2027DD0)
#define <REQUESTCLEARSTAGE>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2028040)
#define <REQUESTCLEARSTAGE>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2028050)
#define <REQUESTCLEARSTAGE>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x20280A0)

	inline static constexpr unsigned int <RequestClearStage>d__29_TypeDefinitionIndex = 3195;

	class <RequestClearStage>d__29 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		Il2CppObject* onResponse; // 0x20
		RoadPuzzleTask* __4__this; // 0x28
		::System::Boolean isSkip; // 0x30
		<>c__DisplayClass29_0* __8__1; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REQUESTCLEARSTAGE>D__29_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTCLEARSTAGE>D__29_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTCLEARSTAGE>D__29_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTCLEARSTAGE>D__29_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTCLEARSTAGE>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REQUESTCLEARSTAGE>D__29_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

