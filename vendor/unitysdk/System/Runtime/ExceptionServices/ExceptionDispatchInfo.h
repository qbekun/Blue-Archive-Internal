#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227280)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_GET_BINARYSTACKTRACEARRAY_OFFSET UNITYSDK_OFFSET(0x92273C0)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_CAPTURE_OFFSET UNITYSDK_OFFSET(0x9226E50)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_GET_SOURCEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x92273D0)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_THROW_OFFSET UNITYSDK_OFFSET(0x9226F20)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_THROW_OFFSET UNITYSDK_OFFSET(0x92273E0)
#define SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9227430)

namespace System::Runtime::ExceptionServices
{
	inline static constexpr unsigned int ExceptionDispatchInfo_TypeDefinitionIndex = 24727;

	class ExceptionDispatchInfo : public Il2CppObject
	{
	public:
		::System::Exception* m_Exception; // 0x10
		::System::Object* m_stackTrace; // 0x18

		::System::Void .ctor(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_BinaryStackTraceArray()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_GET_BINARYSTACKTRACEARRAY_OFFSET))(nullptr);
		}

		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Capture(::System::Exception* arg)
		{
			return (return (::System::Runtime::ExceptionServices::ExceptionDispatchInfo*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_CAPTURE_OFFSET))(arg, nullptr);
		}

		::System::Exception* get_SourceException()
		{
			return (return (::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_GET_SOURCEEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void Throw()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_THROW_OFFSET))(nullptr);
		}

		::System::Void Throw(::System::Exception* arg)
		{
			((::System::Void(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_THROW_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_EXCEPTIONSERVICES_EXCEPTIONDISPATCHINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

