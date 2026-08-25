#pragma once
#include "../../../../unitysdk.h"

#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103F710)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103F830)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103F720)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103B850)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103F840)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103FB40)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GET_RAWDATA_OFFSET UNITYSDK_OFFSET(0x103FCA0)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GET_CURRENTPOSITION_OFFSET UNITYSDK_OFFSET(0x103FCB0)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GET_CURRENTRECORDINDEX_OFFSET UNITYSDK_OFFSET(0x103FCC0)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GET_CURRENTFIELDINDEX_OFFSET UNITYSDK_OFFSET(0x103FCD0)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x103FCE0)
#define MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x103FCF0)

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int MalformedCsvException_TypeDefinitionIndex = 12849;

	class MalformedCsvException : public Il2CppObject
	{
	public:
		::System::String* _message; // 0x90
		::System::String* _rawData; // 0x98
		::System::Int32 _currentFieldIndex; // 0xA0
		::System::Int64 _currentRecordIndex; // 0xA8
		::System::Int32 _currentPosition; // 0xB0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int64 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Exception* arg4)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg2)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::String* get_RawData()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GET_RAWDATA_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentPosition()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GET_CURRENTPOSITION_OFFSET))(nullptr);
		}

		::System::Int64 get_CurrentRecordIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GET_CURRENTRECORDINDEX_OFFSET))(nullptr);
		}

		::System::Int32 get_CurrentFieldIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GET_CURRENTFIELDINDEX_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg2)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MALFORMEDCSVEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg2, nullptr);
		}

	};
}

