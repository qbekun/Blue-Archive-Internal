#pragma once
#include "unitysdk.h"

class ScenarioLogCompactData;
class ScenarioLogData;
class ScenarioScriptInfo;

#define SCENARIOLOGSYSTEM_CREATECOMPACTDATA_OFFSET UNITYSDK_OFFSET(0x1EDD9C0)
#define SCENARIOLOGSYSTEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD9E0)
#define SCENARIOLOGSYSTEM_SETLOGBYCOMPACTDATA_OFFSET UNITYSDK_OFFSET(0x1EDDAB0)
#define SCENARIOLOGSYSTEM_TRYGETLOGDATA_OFFSET UNITYSDK_OFFSET(0x1EDE190)
#define SCENARIOLOGSYSTEM_GET_LOGCOUNT_OFFSET UNITYSDK_OFFSET(0x1EDE250)
#define SCENARIOLOGSYSTEM__DEBUG_EDITLOG_OFFSET UNITYSDK_OFFSET(0x1EDE290)
#define SCENARIOLOGSYSTEM__RECORDDIALOG_G__GETDIALOGSCRIPT|8_0_OFFSET UNITYSDK_OFFSET(0x1EDE400)
#define SCENARIOLOGSYSTEM_RECORDDIALOG_OFFSET UNITYSDK_OFFSET(0x1EDDE90)
#define SCENARIOLOGSYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EDE490)
#define SCENARIOLOGSYSTEM_RECORDSELECTION_OFFSET UNITYSDK_OFFSET(0x1EDDB10)
#define SCENARIOLOGSYSTEM_GET_LOGSFORSAVEDATA_OFFSET UNITYSDK_OFFSET(0x1EDE520)

	inline static constexpr unsigned int ScenarioLogSystem_TypeDefinitionIndex = 1845;

	class ScenarioLogSystem : public Il2CppObject
	{
	public:
		Il2CppObject* logs; // 0x10
		Il2CppObject* compactLogs; // 0x18
		::System::Int64 EMPTY_SELECTION_GROUP; // 0x0

		ScenarioLogCompactData* CreateCompactData(ScenarioLogData* arg, ::System::Int64 arg2)
		{
			return ((ScenarioLogCompactData*(*)(ScenarioLogData*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM_CREATECOMPACTDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetLogByCompactData(ScenarioScriptInfo* arg, ScenarioLogCompactData* arg2)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ScenarioLogCompactData*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM_SETLOGBYCOMPACTDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean TryGetLogData(::System::Int32 arg, ScenarioLogData&* arg2)
		{
			return ((::System::Boolean(*)(::System::Int32, ScenarioLogData&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM_TRYGETLOGDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_LogCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM_GET_LOGCOUNT_OFFSET))(nullptr);
		}

		::System::Void _Debug_EditLog(::System::Boolean arg, ScenarioScriptInfo* arg2)
		{
			((::System::Void(*)(::System::Boolean, ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM__DEBUG_EDITLOG_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* _RecordDialog_g__GetDialogScript|8_0(<>c__DisplayClass8_0&* arg)
		{
			return ((::System::String*(*)(<>c__DisplayClass8_0&*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM__RECORDDIALOG_G__GETDIALOGSCRIPT|8_0_OFFSET))(arg, nullptr);
		}

		::System::Void RecordDialog(ScenarioScriptInfo* arg)
		{
			((::System::Void(*)(ScenarioScriptInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM_RECORDDIALOG_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM_CLEAR_OFFSET))(nullptr);
		}

		::System::Void RecordSelection(ScenarioScriptInfo* arg, Il2CppObject* arg2, ::System::Int64 arg3)
		{
			((::System::Void(*)(ScenarioScriptInfo*, Il2CppObject*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM_RECORDSELECTION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		Il2CppObject* get_LogsForSaveData()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENARIOLOGSYSTEM_GET_LOGSFORSAVEDATA_OFFSET))(nullptr);
		}

	};

