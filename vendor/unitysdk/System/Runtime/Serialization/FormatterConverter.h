#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x91F7800)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x91F78F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x91F7980)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x91F7A10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x91F7AA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x91F7B30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_THROWVALUENULLEXCEPTION_OFFSET UNITYSDK_OFFSET(0x91F7890)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x91F7BC0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FormatterConverter_TypeDefinitionIndex = 24578;

	class FormatterConverter : public Il2CppObject
	{
	public:
		::System::Object* Convert(::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_CONVERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ToBoolean(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Int32 ToInt32(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT32_OFFSET))(arg, nullptr);
		}

		::System::Int64 ToInt64(::System::Object* arg)
		{
			return (return (::System::Int64(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOINT64_OFFSET))(arg, nullptr);
		}

		::System::Single ToSingle(::System::Object* arg)
		{
			return (return (::System::Single(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSINGLE_OFFSET))(arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_TOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowValueNullException()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_THROWVALUENULLEXCEPTION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

