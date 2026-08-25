#pragma once
#include "../../unitysdk.h"

#define ICSHARPCODE_SHARPZIPLIB_VALUEOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x904AD80)
#define ICSHARPCODE_SHARPZIPLIB_VALUEOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x904AE10)
#define ICSHARPCODE_SHARPZIPLIB_VALUEOUTOFRANGEEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x904AEB0)

namespace ICSharpCode::SharpZipLib
{
	inline static constexpr unsigned int ValueOutOfRangeException_TypeDefinitionIndex = 37109;

	class ValueOutOfRangeException : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_VALUEOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_VALUEOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_VALUEOUTOFRANGEEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

