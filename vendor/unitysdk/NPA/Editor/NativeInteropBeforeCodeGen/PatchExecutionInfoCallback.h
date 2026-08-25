#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen { class ExecutionInfoResult&; }

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHEXECUTIONINFOCALLBACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3C710)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHEXECUTIONINFOCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x9C3C7E0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHEXECUTIONINFOCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x9C3C7F0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHEXECUTIONINFOCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x9C3C890)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int PatchExecutionInfoCallback_TypeDefinitionIndex = 26805;

	class PatchExecutionInfoCallback : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Object* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHEXECUTIONINFOCALLBACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Invoke(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHEXECUTIONINFOCALLBACK_INVOKE_OFFSET))(arg, arg, nullptr);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResult&* arg, ::System::AsyncCallback* arg, ::System::Object* arg)
		{
			return (return (::System::IAsyncResult*(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResult&*, ::System::AsyncCallback*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHEXECUTIONINFOCALLBACK_BEGININVOKE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void EndInvoke(::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResult&* arg, ::System::IAsyncResult* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResult&*, ::System::IAsyncResult*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHEXECUTIONINFOCALLBACK_ENDINVOKE_OFFSET))(arg, arg, nullptr);
		}

	};
}

