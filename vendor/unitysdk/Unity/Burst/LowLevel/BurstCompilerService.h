#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Hash128&; }

#define UNITY_BURST_LOWLEVEL_BURSTCOMPILERSERVICE_COMPILEASYNCDELEGATEMETHOD_OFFSET UNITYSDK_OFFSET(0xA1E1BE0)
#define UNITY_BURST_LOWLEVEL_BURSTCOMPILERSERVICE_GETASYNCCOMPILEDASYNCDELEGATEMETHOD_OFFSET UNITYSDK_OFFSET(0xA1E1C20)
#define UNITY_BURST_LOWLEVEL_BURSTCOMPILERSERVICE_GETORCREATESHAREDMEMORY_OFFSET UNITYSDK_OFFSET(0xA1E1C60)
#define UNITY_BURST_LOWLEVEL_BURSTCOMPILERSERVICE_LOG_OFFSET UNITYSDK_OFFSET(0xA1E1CB0)

namespace Unity::Burst::LowLevel
{
	inline static constexpr unsigned int BurstCompilerService_TypeDefinitionIndex = 30928;

	class BurstCompilerService : public Il2CppObject
	{
	public:
		::System::Int32 CompileAsyncDelegateMethod(::System::Object* arg, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::Object*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_LOWLEVEL_BURSTCOMPILERSERVICE_COMPILEASYNCDELEGATEMETHOD_OFFSET))(arg, str, nullptr);
		}

		::System::Object** GetAsyncCompiledAsyncDelegateMethod(::System::Int32 arg)
		{
			return (return (::System::Object**(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_LOWLEVEL_BURSTCOMPILERSERVICE_GETASYNCCOMPILEDASYNCDELEGATEMETHOD_OFFSET))(arg, nullptr);
		}

		::System::Object** GetOrCreateSharedMemory(::UnityEngine::Hash128&* arg, ::System::UInt32 arg, ::System::UInt32 arg)
		{
			return (return (::System::Object**(*)(::UnityEngine::Hash128&*, ::System::UInt32, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_LOWLEVEL_BURSTCOMPILERSERVICE_GETORCREATESHAREDMEMORY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Log(::System::Object** arg, BurstLogType* arg, ::System::Object** arg, ::System::Object** arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object**, BurstLogType*, ::System::Object**, ::System::Object**, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_LOWLEVEL_BURSTCOMPILERSERVICE_LOG_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

