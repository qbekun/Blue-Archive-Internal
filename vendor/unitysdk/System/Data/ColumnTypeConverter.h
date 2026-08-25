#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_COLUMNTYPECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x972C590)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x972C5A0)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x972C640)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x972CB80)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x972CC20)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x972CE40)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x972CFA0)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x972CFB0)
#define SYSTEM_DATA_COLUMNTYPECONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x972CFC0)

namespace System::Data
{
	inline static constexpr unsigned int ColumnTypeConverter_TypeDefinitionIndex = 32192;

	class ColumnTypeConverter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* s_types; // 0x0
		StandardValuesCollection* _values; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (StandardValuesCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_COLUMNTYPECONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

