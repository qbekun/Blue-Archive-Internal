#pragma once
#include "../../unitysdk.h"

#define SYSTEM_IO_FILELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EDAF0)
#define SYSTEM_IO_FILELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EDB40)
#define SYSTEM_IO_FILELOADEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x92EDB60)
#define SYSTEM_IO_FILELOADEXCEPTION_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x92EDC40)
#define SYSTEM_IO_FILELOADEXCEPTION_GET_FUSIONLOG_OFFSET UNITYSDK_OFFSET(0x92EDC50)
#define SYSTEM_IO_FILELOADEXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x92EDC60)
#define SYSTEM_IO_FILELOADEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x92EDE30)
#define SYSTEM_IO_FILELOADEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x92EDEF0)
#define SYSTEM_IO_FILELOADEXCEPTION_FORMATFILELOADEXCEPTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x92EDBE0)

namespace System::IO
{
	inline static constexpr unsigned int FileLoadException_TypeDefinitionIndex = 25226;

	class FileLoadException : public Il2CppObject
	{
	public:
		::System::String* _FileName_k__BackingField; // 0x90
		::System::String* _FusionLog_k__BackingField; // 0x98

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_FileName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_GET_FILENAME_OFFSET))(nullptr);
		}

		::System::String* get_FusionLog()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_GET_FUSIONLOG_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		::System::String* FormatFileLoadExceptionMessage(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IO_FILELOADEXCEPTION_FORMATFILELOADEXCEPTIONMESSAGE_OFFSET))(str, arg, nullptr);
		}

	};
}

