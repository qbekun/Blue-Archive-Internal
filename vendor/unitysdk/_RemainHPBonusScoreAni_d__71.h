#pragma once
#include "unitysdk.h"

class UIMinigameRhythmBattle;

#define <REMAINHPBONUSSCOREANI>D__71_.CTOR_OFFSET UNITYSDK_OFFSET(0xD19C30)
#define <REMAINHPBONUSSCOREANI>D__71_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1B280)
#define <REMAINHPBONUSSCOREANI>D__71_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD1B290)
#define <REMAINHPBONUSSCOREANI>D__71_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1B610)
#define <REMAINHPBONUSSCOREANI>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET UNITYSDK_OFFSET(0xD1B620)
#define <REMAINHPBONUSSCOREANI>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD1B670)

	inline static constexpr unsigned int <RemainHPBonusScoreAni>d__71_TypeDefinitionIndex = 683;

	class <RemainHPBonusScoreAni>d__71 : public Il2CppObject
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		UIMinigameRhythmBattle* __4__this; // 0x20
		::System::Int64 currentScore; // 0x28
		::System::Int64 hpBonus; // 0x30
		::System::Single _finalHPGaugeValue_5__2; // 0x38
		::System::Single _f_5__3; // 0x3C

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + <REMAINHPBONUSSCOREANI>D__71_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMAINHPBONUSSCOREANI>D__71_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMAINHPBONUSSCOREANI>D__71_MOVENEXT_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IEnumerator_System.Object_.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMAINHPBONUSSCOREANI>D__71_SYSTEM.COLLECTIONS.GENERIC.IENUMERATOR_SYSTEM.OBJECT_.GET_CURRENT_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IEnumerator.Reset()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMAINHPBONUSSCOREANI>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.RESET_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IEnumerator.get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + <REMAINHPBONUSSCOREANI>D__71_SYSTEM.COLLECTIONS.IENUMERATOR.GET_CURRENT_OFFSET))(nullptr);
		}

	};

