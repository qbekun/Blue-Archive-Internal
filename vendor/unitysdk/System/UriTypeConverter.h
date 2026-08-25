#pragma once
#include "../unitysdk.h"

#define SYSTEM_URITYPECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9AD7FE0)
#define SYSTEM_URITYPECONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x9AD7FF0)
#define SYSTEM_URITYPECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9AD80B0)
#define SYSTEM_URITYPECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9AD8160)
#define SYSTEM_URITYPECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9AD81C0)
#define SYSTEM_URITYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9AD8380)

namespace System
{
	inline static constexpr unsigned int UriTypeConverter_TypeDefinitionIndex = 29198;

	class UriTypeConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URITYPECONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

