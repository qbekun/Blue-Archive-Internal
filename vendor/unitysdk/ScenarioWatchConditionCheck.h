#pragma once
#include "unitysdk.h"

#define SCENARIOWATCHCONDITIONCHECK_SET_CLEAREDMODECHECK_OFFSET UNITYSDK_OFFSET(0x18282A0)
#define SCENARIOWATCHCONDITIONCHECK_.CTOR_OFFSET UNITYSDK_OFFSET(0x1825E60)
#define SCENARIOWATCHCONDITIONCHECK_GET_CLEAREDMODECHECK_OFFSET UNITYSDK_OFFSET(0x18282B0)
#define SCENARIOWATCHCONDITIONCHECK_GET_CLEAREDSTAGECHECK_OFFSET UNITYSDK_OFFSET(0x18282C0)
#define SCENARIOWATCHCONDITIONCHECK_GET_EVENTCHECK_OFFSET UNITYSDK_OFFSET(0x18282D0)
#define SCENARIOWATCHCONDITIONCHECK_SET_EVENTCHECK_OFFSET UNITYSDK_OFFSET(0x18282E0)
#define SCENARIOWATCHCONDITIONCHECK_SET_CLUBCHECK_OFFSET UNITYSDK_OFFSET(0x18282F0)
#define SCENARIOWATCHCONDITIONCHECK_SET_CLEAREDSTAGECHECK_OFFSET UNITYSDK_OFFSET(0x1828300)
#define SCENARIOWATCHCONDITIONCHECK_SET_ACCOUNTLEVELCHECK_OFFSET UNITYSDK_OFFSET(0x1828310)
#define SCENARIOWATCHCONDITIONCHECK_GET_ACCOUNTLEVELCHECK_OFFSET UNITYSDK_OFFSET(0x1828320)
#define SCENARIOWATCHCONDITIONCHECK_GET_ALLCONDITIONPASSED_OFFSET UNITYSDK_OFFSET(0x1825EC0)
#define SCENARIOWATCHCONDITIONCHECK_GET_CLUBCHECK_OFFSET UNITYSDK_OFFSET(0x1828330)

	inline static constexpr unsigned int ScenarioWatchConditionCheck_TypeDefinitionIndex = 1296;

	class ScenarioWatchConditionCheck : public Il2CppObject
	{
	public:
		::System::Boolean _AccountLevelCheck_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _ClearedModeCheck_k__BackingField; // 0x18
		::System::Boolean _ClearedStageCheck_k__BackingField; // 0x20
		::System::Boolean _ClubCheck_k__BackingField; // 0x21
		::System::Boolean _EventCheck_k__BackingField; // 0x22

		::System::Void set_ClearedModeCheck(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_SET_CLEAREDMODECHECK_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Boolean arg, ::Il2CppArray<::System::Object*>* arg2, ::System::Boolean arg3, ::System::Boolean arg4, ::System::Boolean arg5)
		{
			((::System::Void(*)(::System::Boolean, ::Il2CppArray<::System::Object*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_.CTOR_OFFSET))(arg, arg2, arg3, arg4, arg5, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_ClearedModeCheck()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_GET_CLEAREDMODECHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_ClearedStageCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_GET_CLEAREDSTAGECHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_EventCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_GET_EVENTCHECK_OFFSET))(nullptr);
		}

		::System::Void set_EventCheck(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_SET_EVENTCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClubCheck(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_SET_CLUBCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void set_ClearedStageCheck(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_SET_CLEAREDSTAGECHECK_OFFSET))(arg, nullptr);
		}

		::System::Void set_AccountLevelCheck(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_SET_ACCOUNTLEVELCHECK_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AccountLevelCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_GET_ACCOUNTLEVELCHECK_OFFSET))(nullptr);
		}

		::System::Boolean get_AllConditionPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_GET_ALLCONDITIONPASSED_OFFSET))(nullptr);
		}

		::System::Boolean get_ClubCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOWATCHCONDITIONCHECK_GET_CLUBCHECK_OFFSET))(nullptr);
		}

	};

