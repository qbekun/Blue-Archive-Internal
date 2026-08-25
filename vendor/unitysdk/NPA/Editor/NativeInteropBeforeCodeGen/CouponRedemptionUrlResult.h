#pragma once
#include "../../../unitysdk.h"

#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONREDEMPTIONURLRESULT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9C3B530)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONREDEMPTIONURLRESULT_GET_URL_OFFSET UNITYSDK_OFFSET(0x9C3B660)
#define NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONREDEMPTIONURLRESULT_UTF8PTRTOSTRING_OFFSET UNITYSDK_OFFSET(0x9C3B540)

namespace NPA::Editor::NativeInteropBeforeCodeGen
{
	inline static constexpr unsigned int CouponRedemptionUrlResult_TypeDefinitionIndex = 26798;

	class CouponRedemptionUrlResult : public Il2CppObject
	{
	public:
		::System::Int32 sdk_res_code; // 0x10
		::System::Int32 message; // 0x18
		::System::Int32 url; // 0x20

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONREDEMPTIONURLRESULT_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_Url()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONREDEMPTIONURLRESULT_GET_URL_OFFSET))(nullptr);
		}

		::System::String* Utf8PtrToString(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_EDITOR_NATIVEINTEROPBEFORECODEGEN_COUPONREDEMPTIONURLRESULT_UTF8PTRTOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

