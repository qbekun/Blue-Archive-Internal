#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CREATEINT32TASKS_OFFSET UNITYSDK_OFFSET(0x9229950)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CREATECACHEABLETASK_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9229A50)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncTaskCache_TypeDefinitionIndex = 24782;

	class AsyncTaskCache : public Il2CppObject
	{
	public:
		Il2CppObject* TrueTask; // 0x0
		Il2CppObject* FalseTask; // 0x8
		::Il2CppArray<::System::Object*>* Int32Tasks; // 0x10

		::Il2CppArray<::System::Object*>* CreateInt32Tasks()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CREATEINT32TASKS_OFFSET))(nullptr);
		}

		Il2CppObject* CreateCacheableTask(Il2CppObject* arg)
		{
			return (return (Il2CppObject*(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CREATECACHEABLETASK_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

