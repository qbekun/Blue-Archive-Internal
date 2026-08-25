#pragma once
#include "unitysdk.h"

#define TASKNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x93DE020)
#define TASKNODE_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET UNITYSDK_OFFSET(0x93DE8F0)
#define TASKNODE_SYSTEM.THREADING.ITHREADPOOLWORKITEM.MARKABORTED_OFFSET UNITYSDK_OFFSET(0x93DE930)

	inline static constexpr unsigned int TaskNode_TypeDefinitionIndex = 24072;

	class TaskNode : public ::UnityEngine::InputSystem::InputActionMap
	{
	public:
		TaskNode* Prev; // 0x58
		TaskNode* Next; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKNODE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKNODE_SYSTEM.THREADING.ITHREADPOOLWORKITEM.EXECUTEWORKITEM_OFFSET))(nullptr);
		}

		::System::Void System.Threading.IThreadPoolWorkItem.MarkAborted(::System::Threading::ThreadAbortException* arg)
		{
			((::System::Void(*)(::System::Threading::ThreadAbortException*, ::PVOID))((::PBYTE)hIl2Cpp + TASKNODE_SYSTEM.THREADING.ITHREADPOOLWORKITEM.MARKABORTED_OFFSET))(arg, nullptr);
		}

	};

