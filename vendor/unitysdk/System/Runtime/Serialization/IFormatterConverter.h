#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int IFormatterConverter_TypeDefinitionIndex = 24570;

	class IFormatterConverter : public Il2CppObject
	{
	public:
		::System::Object* Convert(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ToBoolean(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt32(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_TOINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToInt64(::System::Object* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_TOINT64_OFFSET))(arg, nullptr);
		}

		::System::Single ToSingle(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_IFORMATTERCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

	};
}

