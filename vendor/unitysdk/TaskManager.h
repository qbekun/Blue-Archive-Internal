#pragma once
#include "unitysdk.h"

#define TASKMANAGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x20368B0)
#define TASKMANAGER_ONLOGOUT_OFFSET UNITYSDK_OFFSET(0x2036960)
#define TASKMANAGER_GETORADDTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define TASKMANAGER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x2036B90)
#define TASKMANAGER_TRYGETTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define TASKMANAGER_GETTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define TASKMANAGER_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x2036C30)
#define TASKMANAGER_HASTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define TASKMANAGER_REMOVETASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define TASKMANAGER_ADDTASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define TASKMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x2036C70)
#define TASKMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x2036E90)

	inline static constexpr unsigned int TaskManager_TypeDefinitionIndex = 3237;

	class TaskManager : public JsDialogType
	{
	public:
		Il2CppObject* table; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void OnLogout()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_ONLOGOUT_OFFSET))(nullptr);
		}

		Il2CppObject* GetOrAddTask()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_GETORADDTASK_OFFSET))(nullptr);
		}

		::System::Void OnApplicationFocus(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_ONAPPLICATIONFOCUS_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryGetTask(Il2CppObject&* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_TRYGETTASK_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetTask()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_GETTASK_OFFSET))(nullptr);
		}

		::System::Void OnApplicationQuit()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_ONAPPLICATIONQUIT_OFFSET))(nullptr);
		}

		::System::Boolean HasTask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_HASTASK_OFFSET))(nullptr);
		}

		::System::Void RemoveTask()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_REMOVETASK_OFFSET))(nullptr);
		}

		Il2CppObject* AddTask()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_ADDTASK_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_CLEAR_OFFSET))(nullptr);
		}

		::System::Void Initialize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKMANAGER_INITIALIZE_OFFSET))(nullptr);
		}

	};

