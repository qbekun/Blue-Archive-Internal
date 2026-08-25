#pragma once
#include "unitysdk.h"

class ScenarioScriptInfo;

#define <>C__DISPLAYCLASS77_3_.CTOR_OFFSET UNITYSDK_OFFSET(0x2034310)
#define <>C__DISPLAYCLASS77_3__STARTSCENARIOGROUPCONTINUE_B__8_OFFSET UNITYSDK_OFFSET(0x2034BC0)
#define <>C__DISPLAYCLASS77_3__STARTSCENARIOGROUPCONTINUE_B__9_OFFSET UNITYSDK_OFFSET(0x2034BE0)
#define <>C__DISPLAYCLASS77_3__STARTSCENARIOGROUPCONTINUE_B__10_OFFSET UNITYSDK_OFFSET(0x2034C20)

	inline static constexpr unsigned int <>c__DisplayClass77_3_TypeDefinitionIndex = 3219;

	class <>c__DisplayClass77_3 : public Il2CppObject
	{
	public:
		::System::Int64 startScenarioIndex; // 0x10
		ScenarioScriptInfo* info; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_3_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _StartScenarioGroupContinue_b__8(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_3__STARTSCENARIOGROUPCONTINUE_B__8_OFFSET))(arg, nullptr);
		}

		::System::Boolean _StartScenarioGroupContinue_b__9(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_3__STARTSCENARIOGROUPCONTINUE_B__9_OFFSET))(arg, nullptr);
		}

		::System::Boolean _StartScenarioGroupContinue_b__10(ScenarioScriptInfo* arg)
		{
			return ((::System::Boolean(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS77_3__STARTSCENARIOGROUPCONTINUE_B__10_OFFSET))(arg, nullptr);
		}

	};

