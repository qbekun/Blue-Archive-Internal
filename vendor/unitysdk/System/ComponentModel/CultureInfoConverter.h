#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GET_DEFAULTCULTURESTRING_OFFSET UNITYSDK_OFFSET(0x9B265B0)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETCULTURENAME_OFFSET UNITYSDK_OFFSET(0x9B265E0)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B26610)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B266B0)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B26750)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B272C0)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x9B27760)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x9B279A0)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B279B0)
#define SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B279C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CultureInfoConverter_TypeDefinitionIndex = 29367;

	class CultureInfoConverter : public Il2CppObject
	{
	public:
		StandardValuesCollection* _values; // 0x10
		::System::String* DefaultInvariantCultureString; // 0x0

		::System::String* get_DefaultCultureString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GET_DEFAULTCULTURESTRING_OFFSET))(nullptr);
		}

		::System::String* GetCultureName(::System::Globalization::CultureInfo* arg)
		{
			return (return (::System::String*(*)(::System::Globalization::CultureInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETCULTURENAME_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (StandardValuesCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CULTUREINFOCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

