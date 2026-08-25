#pragma once
#include "../../../unitysdk.h"

#define BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNSHORTLIVING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNSHORTLIVING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNSHORTLIVING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNSHORTLIVING_OFFSET UNITYSDK_OFFSET(0x000000)
#define BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNSHORTLIVING_OFFSET UNITYSDK_OFFSET(0x8955F0)
#define BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNLONGLIVING_OFFSET UNITYSDK_OFFSET(0x8956B0)

namespace BestHTTP::PlatformSupport::Threading
{
	inline static constexpr unsigned int ThreadedRunner_TypeDefinitionIndex = 23272;

	class ThreadedRunner : public Il2CppObject
	{
	public:
		::System::Void RunShortLiving(Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNSHORTLIVING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void RunShortLiving(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNSHORTLIVING_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void RunShortLiving(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNSHORTLIVING_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RunShortLiving(Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNSHORTLIVING_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void RunShortLiving(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNSHORTLIVING_OFFSET))(arg, nullptr);
		}

		::System::Void RunLongLiving(::System::Action* arg)
		{
			((::System::Void(*)(::System::Action*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_PLATFORMSUPPORT_THREADING_THREADEDRUNNER_RUNLONGLIVING_OFFSET))(arg, nullptr);
		}

	};
}

