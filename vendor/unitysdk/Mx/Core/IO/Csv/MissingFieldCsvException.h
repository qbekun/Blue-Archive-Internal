#pragma once
#include "../../../../unitysdk.h"

#define MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103FE00)
#define MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103FE10)
#define MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103FE20)
#define MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103BF50)
#define MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103FE30)
#define MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x103FE60)

namespace MX::Core::IO::Csv
{
	inline static constexpr unsigned int MissingFieldCsvException_TypeDefinitionIndex = 12850;

	class MissingFieldCsvException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Exception* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int64 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET))(str, arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Int32 arg, ::System::Int64 arg2, ::System::Int32 arg3, ::System::Exception* arg4)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Exception*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET))(str, arg, arg2, arg3, arg4, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg2)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CORE_IO_CSV_MISSINGFIELDCSVEXCEPTION_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

	};
}

