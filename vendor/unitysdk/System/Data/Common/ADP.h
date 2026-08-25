#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x97CF500)
#define SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTIONASRETURNVALUE_OFFSET UNITYSDK_OFFSET(0x97CF590)
#define SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTIONWITHOUTRETHROW_OFFSET UNITYSDK_OFFSET(0x97CF6A0)
#define SYSTEM_DATA_COMMON_ADP_ARGUMENT_OFFSET UNITYSDK_OFFSET(0x97CF7B0)
#define SYSTEM_DATA_COMMON_ADP_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x97CF830)
#define SYSTEM_DATA_COMMON_ADP_ARGUMENTOUTOFRANGE_OFFSET UNITYSDK_OFFSET(0x97CF8B0)
#define SYSTEM_DATA_COMMON_ADP_INVALIDOPERATION_OFFSET UNITYSDK_OFFSET(0x97CF940)
#define SYSTEM_DATA_COMMON_ADP_NOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x97CF9C0)
#define SYSTEM_DATA_COMMON_ADP_ISCATCHABLEEXCEPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x97CFA40)
#define SYSTEM_DATA_COMMON_ADP_ISCATCHABLEORSECURITYEXCEPTIONTYPE_OFFSET UNITYSDK_OFFSET(0x97CFC80)
#define SYSTEM_DATA_COMMON_ADP_INVALIDENUMERATIONVALUE_OFFSET UNITYSDK_OFFSET(0x97CFE70)
#define SYSTEM_DATA_COMMON_ADP_INVALIDSEEKORIGIN_OFFSET UNITYSDK_OFFSET(0x97CFF60)
#define SYSTEM_DATA_COMMON_ADP_INVALIDACCEPTREJECTRULE_OFFSET UNITYSDK_OFFSET(0x97CFFC0)
#define SYSTEM_DATA_COMMON_ADP_INVALIDMISSINGSCHEMAACTION_OFFSET UNITYSDK_OFFSET(0x97D0050)
#define SYSTEM_DATA_COMMON_ADP_INVALIDRULE_OFFSET UNITYSDK_OFFSET(0x97D00E0)
#define SYSTEM_DATA_COMMON_ADP_WRONGTYPE_OFFSET UNITYSDK_OFFSET(0x97D0170)
#define SYSTEM_DATA_COMMON_ADP_.CCTOR_OFFSET UNITYSDK_OFFSET(0x97D0220)

namespace System::Data::Common
{
	inline static constexpr unsigned int ADP_TypeDefinitionIndex = 32352;

	class ADP : public Il2CppObject
	{
	public:
		::System::Type* s_stackOverflowType; // 0x0
		::System::Type* s_outOfMemoryType; // 0x8
		::System::Type* s_threadAbortType; // 0x10
		::System::Type* s_nullReferenceType; // 0x18
		::System::Type* s_accessViolationType; // 0x20
		::System::Type* s_securityType; // 0x28
		::System::String* StrEmpty; // 0x30
		::Il2CppArray<::System::Object*>* AzureSqlServerEndpoints; // 0x38
		::System::Int32 PtrZero; // 0x40
		::System::Int32 PtrSize; // 0x48

		::System::Void TraceException(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTION_OFFSET))(str, arg, nullptr);
		}

		::System::Void TraceExceptionAsReturnValue(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTIONASRETURNVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void TraceExceptionWithoutRethrow(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_TRACEEXCEPTIONWITHOUTRETHROW_OFFSET))(arg, nullptr);
		}

		::System::ArgumentException* Argument(::System::String* str)
		{
			return (return (::System::ArgumentException*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_ARGUMENT_OFFSET))(str, nullptr);
		}

		::System::ArgumentOutOfRangeException* ArgumentOutOfRange(::System::String* str)
		{
			return (return (::System::ArgumentOutOfRangeException*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_ARGUMENTOUTOFRANGE_OFFSET))(str, nullptr);
		}

		::System::ArgumentOutOfRangeException* ArgumentOutOfRange(::System::String* str, ::System::String* str)
		{
			return (return (::System::ArgumentOutOfRangeException*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_ARGUMENTOUTOFRANGE_OFFSET))(str, str, nullptr);
		}

		::System::InvalidOperationException* InvalidOperation(::System::String* str)
		{
			return (return (::System::InvalidOperationException*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDOPERATION_OFFSET))(str, nullptr);
		}

		::System::NotSupportedException* NotSupported(::System::String* str)
		{
			return (return (::System::NotSupportedException*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_NOTSUPPORTED_OFFSET))(str, nullptr);
		}

		::System::Boolean IsCatchableExceptionType(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_ISCATCHABLEEXCEPTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCatchableOrSecurityExceptionType(::System::Exception* arg)
		{
			return (return (::System::Boolean(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_ISCATCHABLEORSECURITYEXCEPTIONTYPE_OFFSET))(arg, nullptr);
		}

		::System::ArgumentOutOfRangeException* InvalidEnumerationValue(::System::Type* arg, ::System::Int32 arg)
		{
			return (return (::System::ArgumentOutOfRangeException*(*)(::System::Type*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDENUMERATIONVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Exception* InvalidSeekOrigin(::System::String* str)
		{
			return (return (::System::Exception*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDSEEKORIGIN_OFFSET))(str, nullptr);
		}

		::System::ArgumentOutOfRangeException* InvalidAcceptRejectRule(::System::Data::AcceptRejectRule* arg)
		{
			return (return (::System::ArgumentOutOfRangeException*(*)(::System::Data::AcceptRejectRule*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDACCEPTREJECTRULE_OFFSET))(arg, nullptr);
		}

		::System::ArgumentOutOfRangeException* InvalidMissingSchemaAction(::System::Data::MissingSchemaAction* arg)
		{
			return (return (::System::ArgumentOutOfRangeException*(*)(::System::Data::MissingSchemaAction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDMISSINGSCHEMAACTION_OFFSET))(arg, nullptr);
		}

		::System::ArgumentOutOfRangeException* InvalidRule(::System::Data::Rule* arg)
		{
			return (return (::System::ArgumentOutOfRangeException*(*)(::System::Data::Rule*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_INVALIDRULE_OFFSET))(arg, nullptr);
		}

		::System::Exception* WrongType(::System::Type* arg, ::System::Type* arg)
		{
			return (return (::System::Exception*(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_WRONGTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COMMON_ADP_.CCTOR_OFFSET))(nullptr);
		}

	};
}

