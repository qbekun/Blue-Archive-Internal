#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B2C3F0)
#define SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B2C490)
#define SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B2C530)
#define SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B2C840)
#define SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2CC50)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DateTimeConverter_TypeDefinitionIndex = 29373;

	class DateTimeConverter : public Il2CppObject
	{
	public:
		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DATETIMECONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

