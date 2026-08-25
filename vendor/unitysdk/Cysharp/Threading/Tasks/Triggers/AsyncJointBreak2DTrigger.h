#pragma once
#include "../../../../unitysdk.h"

namespace UnityEngine { class Joint2D; }
namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnJointBreak2DHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2D_OFFSET UNITYSDK_OFFSET(0x9DE7C00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE7C50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x9DE7CC0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DE7D40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_OFFSET UNITYSDK_OFFSET(0x9DE7E20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9DE7F10)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncJointBreak2DTrigger_TypeDefinitionIndex = 36028;

	class AsyncJointBreak2DTrigger : public ::FlatData::RaidSeasonType
	{
	public:
		::System::Void OnJointBreak2D(::UnityEngine::Joint2D* arg)
		{
			((::System::Void(*)(::UnityEngine::Joint2D*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2D_OFFSET))(arg, nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* GetOnJointBreak2DAsyncHandler()
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_OFFSET))(nullptr);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler* GetOnJointBreak2DAsyncHandler(::System::Threading::CancellationToken* arg)
		{
			return (return (::Cysharp::Threading::Tasks::Triggers::IAsyncOnJointBreak2DHandler*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_GETONJOINTBREAK2DASYNCHANDLER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* OnJointBreak2DAsync()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_OFFSET))(nullptr);
		}

		Il2CppObject* OnJointBreak2DAsync(::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_ONJOINTBREAK2DASYNC_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCJOINTBREAK2DTRIGGER_.CTOR_OFFSET))(nullptr);
		}

	};
}

