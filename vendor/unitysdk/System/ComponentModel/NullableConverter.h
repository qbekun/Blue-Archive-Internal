#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B3E390)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B3E4D0)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B3E580)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B3E680)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B3E730)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9B3E920)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETCREATEINSTANCESUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B3E950)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B3E980)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B3E9D0)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x9B3EA00)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x9B3EE00)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B3EE30)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_ISVALID_OFFSET UNITYSDK_OFFSET(0x9B3EE60)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_NULLABLETYPE_OFFSET UNITYSDK_OFFSET(0x9B3EEA0)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_UNDERLYINGTYPE_OFFSET UNITYSDK_OFFSET(0x9B3EEB0)
#define SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_UNDERLYINGTYPECONVERTER_OFFSET UNITYSDK_OFFSET(0x9B3EEC0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int NullableConverter_TypeDefinitionIndex = 29442;

	class NullableConverter : public Il2CppObject
	{
	public:
		::System::Type* _NullableType_k__BackingField; // 0x10
		::System::Type* _UnderlyingType_k__BackingField; // 0x18
		::System::ComponentModel::TypeConverter* _UnderlyingTypeConverter_k__BackingField; // 0x20

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* CreateInstance(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Collections::IDictionary* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Collections::IDictionary*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_CREATEINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean GetCreateInstanceSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETCREATEINSTANCESUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETPROPERTIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(arg, nullptr);
		}

		StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (StandardValuesCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValid(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_ISVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Type* get_NullableType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_NULLABLETYPE_OFFSET))(nullptr);
		}

		::System::Type* get_UnderlyingType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_UNDERLYINGTYPE_OFFSET))(nullptr);
		}

		::System::ComponentModel::TypeConverter* get_UnderlyingTypeConverter()
		{
			return (return (::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_NULLABLECONVERTER_GET_UNDERLYINGTYPECONVERTER_OFFSET))(nullptr);
		}

	};
}

