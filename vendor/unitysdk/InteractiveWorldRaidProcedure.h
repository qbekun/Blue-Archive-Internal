#pragma once
#include "unitysdk.h"

class ConditionCombineMode;
class InteractiveWorldRaidDesignLevel;
namespace Cysharp::Threading::Tasks { class UniTaskVoid; }

#define INTERACTIVEWORLDRAIDPROCEDURE_AWAKE_OFFSET UNITYSDK_OFFSET(0x25A59F0)
#define INTERACTIVEWORLDRAIDPROCEDURE_.CTOR_OFFSET UNITYSDK_OFFSET(0x25A5CF0)
#define INTERACTIVEWORLDRAIDPROCEDURE_ADD_COMMANDEXECUTED_OFFSET UNITYSDK_OFFSET(0x25A0550)
#define INTERACTIVEWORLDRAIDPROCEDURE_REMOVE_COMMANDEXECUTED_OFFSET UNITYSDK_OFFSET(0x25A5D00)
#define INTERACTIVEWORLDRAIDPROCEDURE_EXECUTECOMMANDS_OFFSET UNITYSDK_OFFSET(0x25A5DA0)
#define INTERACTIVEWORLDRAIDPROCEDURE_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x25A5E40)
#define INTERACTIVEWORLDRAIDPROCEDURE_CANCELEXECUTION_OFFSET UNITYSDK_OFFSET(0x2597840)

	inline static constexpr unsigned int InteractiveWorldRaidProcedure_TypeDefinitionIndex = 342;

	class InteractiveWorldRaidProcedure : public Il2CppObject
	{
	public:
		::System::Action* CommandExecuted; // 0x18
		ConditionCombineMode* conditionCombineMode; // 0x20
		::Il2CppArray<::System::Object*>* _triggers; // 0x28
		::Il2CppArray<::System::Object*>* _conditions; // 0x30
		Il2CppObject* _trueCommands; // 0x38
		Il2CppObject* _falseCommands; // 0x40
		InteractiveWorldRaidDesignLevel* _designLevel; // 0x48
		::System::Boolean _isCommandExecuting; // 0x50
		::System::Threading::CancellationTokenSource* _manualCancelTokenSource; // 0x58

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROCEDURE_AWAKE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROCEDURE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void add_CommandExecuted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROCEDURE_ADD_COMMANDEXECUTED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CommandExecuted(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROCEDURE_REMOVE_COMMANDEXECUTED_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid* ExecuteCommands(::System::Boolean arg)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROCEDURE_EXECUTECOMMANDS_OFFSET))(arg, nullptr);
		}

		::System::Void OnTriggered()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROCEDURE_ONTRIGGERED_OFFSET))(nullptr);
		}

		::System::Void CancelExecution()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERACTIVEWORLDRAIDPROCEDURE_CANCELEXECUTION_OFFSET))(nullptr);
		}

	};

