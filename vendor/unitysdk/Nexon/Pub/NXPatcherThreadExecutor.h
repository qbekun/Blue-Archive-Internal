#pragma once
#include "../../unitysdk.h"

#define NEXON_PUB_NXPATCHERTHREADEXECUTOR_AWAKE_OFFSET UNITYSDK_OFFSET(0x954B9D0)
#define NEXON_PUB_NXPATCHERTHREADEXECUTOR_RUNONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x954BA50)
#define NEXON_PUB_NXPATCHERTHREADEXECUTOR_ENQUEUE_OFFSET UNITYSDK_OFFSET(0x954BAE0)
#define NEXON_PUB_NXPATCHERTHREADEXECUTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x954BC10)

namespace Nexon::Pub
{
	inline static constexpr unsigned int NXPatcherThreadExecutor_TypeDefinitionIndex = 37536;

	class NXPatcherThreadExecutor : public Il2CppObject
	{
	public:
		Il2CppObject* ThreadExecutorQueue; // 0x18
		::System::Object* QueueLock; // 0x20

		::System::Void Awake()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERTHREADEXECUTOR_AWAKE_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* RunOnMainThread()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERTHREADEXECUTOR_RUNONMAINTHREAD_OFFSET))(nullptr);
		}

		::System::Void Enqueue(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERTHREADEXECUTOR_ENQUEUE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEXON_PUB_NXPATCHERTHREADEXECUTOR_.CTOR_OFFSET))(nullptr);
		}

	};
}

