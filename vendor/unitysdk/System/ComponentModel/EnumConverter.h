#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B50460)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x9B50490)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x9B504A0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_SET_VALUES_OFFSET UNITYSDK_OFFSET(0x9B504B0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B504C0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B505E0)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_COMPARER_OFFSET UNITYSDK_OFFSET(0x9B50700)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B50750)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B50C70)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x9B51C40)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x9B52090)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B52120)
#define SYSTEM_COMPONENTMODEL_ENUMCONVERTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9B52130)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EnumConverter_TypeDefinitionIndex = 29498;

	class EnumConverter : public Il2CppObject
	{
	public:
		StandardValuesCollection* values; // 0x10
		::System::Type* type; // 0x18

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Type* get_EnumType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_ENUMTYPE_OFFSET))(nullptr);
		}

		StandardValuesCollection* get_Values()
		{
			return (return (StandardValuesCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void set_Values(StandardValuesCollection* arg)
		{
			((::System::Void(*)(StandardValuesCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_SET_VALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Collections::IComparer* get_Comparer()
		{
			return (return (::System::Collections::IComparer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GET_COMPARER_OFFSET))(nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (StandardValuesCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ENUMCONVERTER_ISVALID_OFFSET))(arg, arg, nullptr);
		}

	};
}

