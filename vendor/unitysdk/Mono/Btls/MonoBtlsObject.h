#pragma once
#include "../../unitysdk.h"

#define MONO_BTLS_MONOBTLSOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96DB760)
#define MONO_BTLS_MONOBTLSOBJECT_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x96DB810)
#define MONO_BTLS_MONOBTLSOBJECT_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x96E1270)
#define MONO_BTLS_MONOBTLSOBJECT_CHECKTHROW_OFFSET UNITYSDK_OFFSET(0x96E0EE0)
#define MONO_BTLS_MONOBTLSOBJECT_SETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x96DCEF0)
#define MONO_BTLS_MONOBTLSOBJECT_CHECKERROR_OFFSET UNITYSDK_OFFSET(0x96DBF00)
#define MONO_BTLS_MONOBTLSOBJECT_CHECKERROR_OFFSET UNITYSDK_OFFSET(0x96E0C80)
#define MONO_BTLS_MONOBTLSOBJECT_CHECKLASTERROR_OFFSET UNITYSDK_OFFSET(0x96DEE00)
#define MONO_BTLS_MONOBTLSOBJECT_MONO_BTLS_FREE_OFFSET UNITYSDK_OFFSET(0x96E12A0)
#define MONO_BTLS_MONOBTLSOBJECT_FREEDATAPTR_OFFSET UNITYSDK_OFFSET(0x96E0C90)
#define MONO_BTLS_MONOBTLSOBJECT_CLOSE_OFFSET UNITYSDK_OFFSET(0x96E1320)
#define MONO_BTLS_MONOBTLSOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96E1330)
#define MONO_BTLS_MONOBTLSOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96E14E0)
#define MONO_BTLS_MONOBTLSOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x96E1540)

namespace Mono::Btls
{
	inline static constexpr unsigned int MonoBtlsObject_TypeDefinitionIndex = 29105;

	class MonoBtlsObject : public Il2CppObject
	{
	public:
		MonoBtlsHandle* handle; // 0x10
		::System::Exception* lastError; // 0x18

		::System::Void .ctor(MonoBtlsHandle* arg)
		{
			((::System::Void(*)(MonoBtlsHandle*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		MonoBtlsHandle* get_Handle()
		{
			return (return (MonoBtlsHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_GET_HANDLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Void CheckThrow()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_CHECKTHROW_OFFSET))(nullptr);
		}

		::System::Exception* SetException(::System::Exception* arg)
		{
			return (return (::System::Exception*(*)(::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_SETEXCEPTION_OFFSET))(arg, nullptr);
		}

		::System::Void CheckError(::System::Boolean arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Boolean, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_CHECKERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void CheckError(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_CHECKERROR_OFFSET))(arg, str, nullptr);
		}

		::System::Void CheckLastError(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_CHECKLASTERROR_OFFSET))(str, nullptr);
		}

		::System::Void mono_btls_free(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_MONO_BTLS_FREE_OFFSET))(arg, nullptr);
		}

		::System::Void FreeDataPtr(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_FREEDATAPTR_OFFSET))(arg, nullptr);
		}

		::System::Void Close()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_CLOSE_OFFSET))(nullptr);
		}

		::System::Void Dispose(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_DISPOSE_OFFSET))(arg, nullptr);
		}

		::System::Void Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_DISPOSE_OFFSET))(nullptr);
		}

		::System::Void Finalize()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_BTLS_MONOBTLSOBJECT_FINALIZE_OFFSET))(nullptr);
		}

	};
}

