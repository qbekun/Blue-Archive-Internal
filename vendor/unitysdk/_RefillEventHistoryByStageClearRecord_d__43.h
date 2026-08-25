#pragma once
#include "unitysdk.h"

class UIScenarioMode_Chapter;
class <>c__DisplayClass43_0;
class EventContents;

#define <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_.CTOR_OFFSET UNITYSDK_OFFSET(0x27F0200)
#define <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x27F0F60)
#define <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x27F0F70)
#define <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27F1E70)
#define <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x27F1E80)
#define <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x27F1ED0)

	inline static constexpr unsigned int <RefillEventHistoryByStageClearRecord>d__43_TypeDefinitionIndex = 7720;

	class <RefillEventHistoryByStageClearRecord>d__43 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIScenarioMode_Chapter* __4__this; // 0x20
		<>c__DisplayClass43_0* __8__1; // 0x28
		EventContents* _eventContentInfo_5__2; // 0x30
		::System::Int32 _eventIdIndex_5__3; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REFILLEVENTHISTORYBYSTAGECLEARRECORD>D__43_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

