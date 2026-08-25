#pragma once
#include "unitysdk.h"

class CampaignTask;
class <>c__DisplayClass142_0;

#define <ENDTACTICSKIPEFFECT>D__142_.CTOR_OFFSET UNITYSDK_OFFSET(0x2002110)
#define <ENDTACTICSKIPEFFECT>D__142_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x20088B0)
#define <ENDTACTICSKIPEFFECT>D__142_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x20088C0)
#define <ENDTACTICSKIPEFFECT>D__142_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2008E90)
#define <ENDTACTICSKIPEFFECT>D__142_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0x2008EA0)
#define <ENDTACTICSKIPEFFECT>D__142_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x2008EF0)

	inline static constexpr unsigned int <EndTacticSkipEffect>d__142_TypeDefinitionIndex = 3125;

	class <EndTacticSkipEffect>d__142 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		CampaignTask* __4__this; // 0x20
		<>c__DisplayClass142_0* __8__1; // 0x28
		::System::Boolean isPlayerWin; // 0x30
		::System::Int64 tacticRank; // 0x38

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <ENDTACTICSKIPEFFECT>D__142_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENDTACTICSKIPEFFECT>D__142_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENDTACTICSKIPEFFECT>D__142_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENDTACTICSKIPEFFECT>D__142_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENDTACTICSKIPEFFECT>D__142_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <ENDTACTICSKIPEFFECT>D__142_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

