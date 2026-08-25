#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULTDATA_GET_EXECUTIONINFO_OFFSET UNITYSDK_OFFSET(0x9C3C470)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULTDATA_UTF8PTRTOSTRING_OFFSET UNITYSDK_OFFSET(0x9C3C480)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int ExecutionInfoResultData_TypeDefinitionIndex = 26803;

	class ExecutionInfoResultData : public Il2CppObject
	{
	public:
		::System::Int32 executionInfo; // 0x10

		::System::String* get_ExecutionInfo()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULTDATA_GET_EXECUTIONINFO_OFFSET))(nullptr);
		}

		::System::String* Utf8PtrToString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_EXECUTIONINFORESULTDATA_UTF8PTRTOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

