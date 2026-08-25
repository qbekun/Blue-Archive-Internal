#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B49880)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B498B0)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B49990)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B49A70)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B49B80)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x9B49D10)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x9B49DE0)
#define SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B49DF0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeListConverter_TypeDefinitionIndex = 29467;

	class TypeListConverter : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _types; // 0x10
		StandardValuesCollection* _values; // 0x18

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (StandardValuesCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPELISTCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(arg, nullptr);
		}

	};
}

