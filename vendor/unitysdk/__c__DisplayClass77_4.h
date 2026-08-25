#pragma once
#include "unitysdk.h"

class ScenarioLogCompactData;
class ScenarioScriptInfo;

#define <>C__DISPLAYCLASS77_4_.CTOR_OFFSET UNITYSDK_OFFSET(0x2034BA0)
#define <>C__DISPLAYCLASS77_4__STARTSCENARIOGROUPCONTINUE_B__12_OFFSET UNITYSDK_OFFSET(0x2034C60)

	inline static constexpr unsigned int <>c__DisplayClass77_4_TypeDefinitionIndex = 3220;

	class <>c__DisplayClass77_4 : public Il2CppObject
	{
	public:
		ScenarioLogCompactData* log; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_4_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _StartScenarioGroupContinue_b__12(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_4__STARTSCENARIOGROUPCONTINUE_B__12_OFFSET))(arg, nullptr);
		}

	};

