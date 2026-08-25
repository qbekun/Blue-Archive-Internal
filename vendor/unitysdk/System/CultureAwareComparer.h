#pragma once
#include "../unitysdk.h"

#define SYSTEM_CULTUREAWARECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9377E00)
#define SYSTEM_CULTUREAWARECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9378680)
#define SYSTEM_CULTUREAWARECOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9378760)
#define SYSTEM_CULTUREAWARECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x9378A60)
#define SYSTEM_CULTUREAWARECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9378AC0)
#define SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9378B20)
#define SYSTEM_CULTUREAWARECOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0x9378BA0)
#define SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9378C20)
#define SYSTEM_CULTUREAWARECOMPARER_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9378C60)

namespace System
{
	inline static constexpr unsigned int CultureAwareComparer_TypeDefinitionIndex = 23834;

	class CultureAwareComparer : public Il2CppObject
	{
	public:
		::System::Globalization::CompareInfo* _compareInfo; // 0x10
		::System::Globalization::CompareOptions* _options; // 0x18

		::System::Void .ctor(::System::Globalization::CultureInfo* arg, ::System::Globalization::CompareOptions* arg)
		{
			((::System::Void(*)(::System::Globalization::CultureInfo*, ::System::Globalization::CompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Globalization::CompareInfo* arg, ::System::Globalization::CompareOptions* arg)
		{
			((::System::Void(*)(::System::Globalization::CompareInfo*, ::System::Globalization::CompareOptions*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Compare(::System::String* str, ::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_COMPARE_OFFSET))(str, str, nullptr);
		}

		::System::Boolean Equals(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_EQUALS_OFFSET))(str, str, nullptr);
		}

		::System::Int32 GetHashCode(::System::String* str)
		{
			return (return (::System::Int32(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_OFFSET))(str, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CULTUREAWARECOMPARER_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

	};
}

