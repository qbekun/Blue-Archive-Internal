#pragma once
#include "../../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x904C3A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x904BAA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x904C3F0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipException_TypeDefinitionIndex = 37113;

	class ZipException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

