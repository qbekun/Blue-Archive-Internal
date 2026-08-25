#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7B040)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7B0B0)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7BA10)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7BA40)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7BAB0)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7BB20)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GET_NATIVEERRORCODE_OFFSET UNITYSDK_OFFSET(0x9B7BBA0)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9B7BBB0)
#define SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GETERRORMESSAGE_OFFSET UNITYSDK_OFFSET(0x9B7B0E0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int Win32Exception_TypeDefinitionIndex = 29528;

	class Win32Exception : public Il2CppObject
	{
	public:
		::System::Int32 nativeErrorCode; // 0x90

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Int32, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET))(arg, str, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_NativeErrorCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GET_NATIVEERRORCODE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetErrorMessage(::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_WIN32EXCEPTION_GETERRORMESSAGE_OFFSET))(arg, nullptr);
		}

	};
}

