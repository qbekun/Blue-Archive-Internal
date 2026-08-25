#pragma once
#include "../../unitysdk.h"

#define MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_GET_ERROR_CODE_OFFSET UNITYSDK_OFFSET(0xF134A0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_SET_ERROR_OFFSET UNITYSDK_OFFSET(0xF134B0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_SET_ERROR_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xF134C0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_SET_ERROR_CODE_OFFSET UNITYSDK_OFFSET(0xF134D0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_GET_ERROR_OFFSET UNITYSDK_OFFSET(0xF134E0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_GET_ERROR_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xF134F0)
#define MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_.CTOR_OFFSET UNITYSDK_OFFSET(0xF13500)

namespace MX::NetworkProtocol
{
	inline static constexpr unsigned int BillingValidateErrorResponse_TypeDefinitionIndex = 11361;

	class BillingValidateErrorResponse : public Il2CppObject
	{
	public:
		::System::Int64 _error_code_k__BackingField; // 0x10
		::System::String* _error_k__BackingField; // 0x18
		::System::String* _error_description_k__BackingField; // 0x20

		::System::Int64 get_error_code()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_GET_ERROR_CODE_OFFSET))(nullptr);
		}

		::System::Void set_error(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_SET_ERROR_OFFSET))(str, nullptr);
		}

		::System::Void set_error_description(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_SET_ERROR_DESCRIPTION_OFFSET))(str, nullptr);
		}

		::System::Void set_error_code(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_SET_ERROR_CODE_OFFSET))(arg, nullptr);
		}

		::System::String* get_error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_GET_ERROR_OFFSET))(nullptr);
		}

		::System::String* get_error_description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_GET_ERROR_DESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_NETWORKPROTOCOL_BILLINGVALIDATEERRORRESPONSE_.CTOR_OFFSET))(nullptr);
		}

	};
}

