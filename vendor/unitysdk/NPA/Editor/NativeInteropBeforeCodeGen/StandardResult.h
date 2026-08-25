#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_GET_CODE_OFFSET UNITYSDK_OFFSET(0x9C3AB00)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9C3AC30)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_GET_DETAILSTRING_OFFSET UNITYSDK_OFFSET(0x9C3AC40)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_GET_TRACEID_OFFSET UNITYSDK_OFFSET(0x9C3AC50)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_GET_REQUESTID_OFFSET UNITYSDK_OFFSET(0x9C3AC60)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_UTF8PTRTOSTRING_OFFSET UNITYSDK_OFFSET(0x9C3AB10)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int StandardResult_TypeDefinitionIndex = 26795;

	class StandardResult : public Il2CppObject
	{
	public:
		::System::Int32 code; // 0x10
		::System::Int32 message; // 0x18
		::System::Int32 detailString; // 0x20
		::System::Int32 traceId; // 0x28
		::System::Int32 requestId; // 0x30
		::System::Int64 svcCode; // 0x38
		::System::Int64 sdkResponseCode; // 0x40

		::System::String* get_Code()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_GET_CODE_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_DetailString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_GET_DETAILSTRING_OFFSET))(nullptr);
		}

		::System::String* get_TraceId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_GET_TRACEID_OFFSET))(nullptr);
		}

		::System::String* get_RequestId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_GET_REQUESTID_OFFSET))(nullptr);
		}

		::System::String* Utf8PtrToString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_STANDARDRESULT_UTF8PTRTOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

