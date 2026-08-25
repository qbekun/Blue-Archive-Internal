#pragma once
#include "../../../unitysdk.h"

namespace NPA::Editor::NativeInteropBeforeCodeGen { class ExecutionInfoResultData; }

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_GET_CODE_OFFSET UNITYSDK_OFFSET(0x9C3C5A0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9C3C6D0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_GET_REQUESTID_OFFSET UNITYSDK_OFFSET(0x9C3C6E0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_GET_TRACEID_OFFSET UNITYSDK_OFFSET(0x9C3C6F0)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_GET_DETAILSTR_OFFSET UNITYSDK_OFFSET(0x9C3C700)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_UTF8PTRTOSTRING_OFFSET UNITYSDK_OFFSET(0x9C3C5B0)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int ExecutionInfoResult_TypeDefinitionIndex = 26804;

	class ExecutionInfoResult : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		::System::Int32 message; // 0x18
		::System::Int32 requestId; // 0x20
		::System::Int32 traceId; // 0x28
		::System::Int32 detailStr; // 0x30
		::NPA::Editor::NativeInteropBeforeCodeGen::ExecutionInfoResultData* data; // 0x38
		::System::Int64 svcCode; // 0x40
		::System::Int64 sdkResCode; // 0x48

		::System::String* get_Code()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_GET_CODE_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_RequestId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_GET_REQUESTID_OFFSET))(nullptr);
		}

		::System::String* get_TraceId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_GET_TRACEID_OFFSET))(nullptr);
		}

		::System::String* get_DetailStr()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_GET_DETAILSTR_OFFSET))(nullptr);
		}

		::System::String* Utf8PtrToString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULT_UTF8PTRTOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

