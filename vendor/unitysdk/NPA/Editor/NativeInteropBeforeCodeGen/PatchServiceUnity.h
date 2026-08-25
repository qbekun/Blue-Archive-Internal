#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen { class PatchExecutionInfoCallback; }
namespace NPA::Editor::NativeInteropBeforeCodeGen { class ExecutionInfoResult&; }

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHSERVICEUNITY_.CTOR_OFFSET UNITYSDK_OFFSET(0x9C3C9E0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHSERVICEUNITY_GETEXECUTIONINFO_OFFSET UNITYSDK_OFFSET(0x9C3CA00)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHSERVICEUNITY_ONGETEXECUTIONINFOCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C3CB20)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHSERVICEUNITY_STATICGETEXECUTIONINFOCALLBACK_OFFSET UNITYSDK_OFFSET(0x9C3C8B0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHSERVICEUNITY_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9C3CB90)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int PatchServiceUnity_TypeDefinitionIndex = 26806;

	class PatchServiceUnity : public Il2CppObject
	{
	public:
		::NPA::Editor::NativeInteropBeforeCodeGen::PatchExecutionInfoCallback* getExecutionInfoCallback; // 0x0
		::System::Int32 _inface; // 0x10
		Il2CppObject* _getExecutionInfoHandler; // 0x18

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHSERVICEUNITY_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void GetExecutionInfo(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHSERVICEUNITY_GETEXECUTIONINFO_OFFSET))(arg, nullptr);
		}

		::System::Void OnGetExecutionInfoCallback(::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResult&* arg)
		{
			((::System::Void(*)(::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHSERVICEUNITY_ONGETEXECUTIONINFOCALLBACK_OFFSET))(arg, nullptr);
		}

		::System::Void StaticGetExecutionInfoCallback(::System::Int32 arg, ::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResult&* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResult&*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHSERVICEUNITY_STATICGETEXECUTIONINFOCALLBACK_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_PATCHSERVICEUNITY_.CCTOR_OFFSET))(nullptr);
		}

	};
}

