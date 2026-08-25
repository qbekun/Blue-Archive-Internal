#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B243F0)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B24490)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x9B24680)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x9B24820)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B24830)
#define SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B24840)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BooleanConverter_TypeDefinitionIndex = 29355;

	class BooleanConverter : public Il2CppObject
	{
	public:
		StandardValuesCollection* s_values; // 0x0

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (StandardValuesCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BOOLEANCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

