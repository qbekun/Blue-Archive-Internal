#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE000)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE050)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE070)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x92EE0B0)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_SETMESSAGEFIELD_OFFSET UNITYSDK_OFFSET(0x92EE160)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x92EE210)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_FUSIONLOG_OFFSET UNITYSDK_OFFSET(0x92EE220)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92EE230)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EE400)
#define SYSTEM_IO_FILENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x92EE4C0)

namespace System::IO
{
	inline static constexpr unsigned int FileNotFoundException_TypeDefinitionIndex = 25228;

	class FileNotFoundException : public Il2CppObject
	{
	public:
		::System::String* _FileName_k__BackingField; // 0x90
		::System::String* _FusionLog_k__BackingField; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void SetMessageField()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_SETMESSAGEFIELD_OFFSET))(nullptr);
		}

		::System::String* get_FileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::String* get_FusionLog()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_GET_FUSIONLOG_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

