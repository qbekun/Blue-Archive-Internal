#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B4EA30)
#define SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B4EB10)
#define SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B4EBF0)
#define SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B4EFC0)
#define SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4FD20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DateTimeOffsetConverter_TypeDefinitionIndex = 29494;

	class DateTimeOffsetConverter : public Il2CppObject
	{
	public:
		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMEOFFSETCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

