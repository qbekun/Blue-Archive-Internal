#pragma once
#include "../../unitysdk.h"

namespace Unity::Burst { class BurstCompilerOptions; }

#define UNITY_BURST_BURSTCOMPILER_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x9E2D950)
#define UNITY_BURST_BURSTCOMPILER_COMPILEILPPMETHOD2_OFFSET UNITYSDK_OFFSET(0x9E2DA00)
#define UNITY_BURST_BURSTCOMPILER_GETILPPMETHODFUNCTIONPOINTER2_OFFSET UNITYSDK_OFFSET(0x9E2E1F0)
#define UNITY_BURST_BURSTCOMPILER_COMPILE_OFFSET UNITYSDK_OFFSET(0x9E2DBF0)
#define UNITY_BURST_BURSTCOMPILER_DUMMYMETHOD_OFFSET UNITYSDK_OFFSET(0x9E2E530)
#define UNITY_BURST_BURSTCOMPILER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E2E540)
#define UNITY_BURST_BURSTCOMPILER__GETILPPMETHODFUNCTIONPOINTER2_G__GETMANAGEDFALLBACKDELEGATE|17_0_OFFSET UNITYSDK_OFFSET(0x9E2E390)
#define UNITY_BURST_BURSTCOMPILER_INITIALIZE$BURSTCOMPILERHELPER_ISBURSTENABLED_00000143$BURSTDIRECTCALL_OFFSET UNITYSDK_OFFSET(0x9E2E6D0)

namespace Unity::Burst
{
	inline static constexpr unsigned int BurstCompiler_TypeDefinitionIndex = 37239;

	class BurstCompiler : public Il2CppObject
	{
	public:
		::System::Boolean _IsEnabled; // 0x0
		::Unity::Burst::BurstCompilerOptions* Options; // 0x8
		::System::Action* OnCompileILPPMethod2; // 0x10
		::System::Reflection::MethodInfo* DummyMethodInfo; // 0x18

		::System::Boolean get_IsEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILER_GET_ISENABLED_OFFSET))(nullptr);
		}

		::System::Int32 CompileILPPMethod2(::System::RuntimeMethodHandle* arg)
		{
			return (return (::System::Int32(*)(::System::RuntimeMethodHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILER_COMPILEILPPMETHOD2_OFFSET))(arg, nullptr);
		}

		::System::Object** GetILPPMethodFunctionPointer2(::System::Int32 arg, ::System::RuntimeMethodHandle* arg, ::System::RuntimeTypeHandle* arg)
		{
			return (return (::System::Object**(*)(::System::Int32, ::System::RuntimeMethodHandle*, ::System::RuntimeTypeHandle*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILER_GETILPPMETHODFUNCTIONPOINTER2_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object** Compile(::System::Object* arg, ::System::Reflection::MethodInfo* arg, ::System::Boolean arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Object**(*)(::System::Object*, ::System::Reflection::MethodInfo*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILER_COMPILE_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Void DummyMethod()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILER_DUMMYMETHOD_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void _GetILPPMethodFunctionPointer2_g__GetManagedFallbackDelegate|17_0(::System::Delegate&* arg, ::System::Runtime::InteropServices::GCHandle&* arg, <>c__DisplayClass17_0&* arg)
		{
			((::System::Void(*)(::System::Delegate&*, ::System::Runtime::InteropServices::GCHandle&*, <>c__DisplayClass17_0&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILER__GETILPPMETHODFUNCTIONPOINTER2_G__GETMANAGEDFALLBACKDELEGATE|17_0_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Initialize$BurstCompilerHelper_IsBurstEnabled_00000143$BurstDirectCall()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILER_INITIALIZE$BURSTCOMPILERHELPER_ISBURSTENABLED_00000143$BURSTDIRECTCALL_OFFSET))(nullptr);
		}

	};
}

