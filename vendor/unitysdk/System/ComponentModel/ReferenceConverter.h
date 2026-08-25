#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B431F0)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B43230)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B43380)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B43760)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUES_OFFSET UNITYSDK_OFFSET(0x9B43E00)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET UNITYSDK_OFFSET(0x9B446E0)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B446F0)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_ISVALUEALLOWED_OFFSET UNITYSDK_OFFSET(0x9B44700)
#define SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B44710)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ReferenceConverter_TypeDefinitionIndex = 29450;

	class ReferenceConverter : public Il2CppObject
	{
	public:
		::System::String* s_none; // 0x0
		::System::Type* _type; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		StandardValuesCollection* GetStandardValues(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (StandardValuesCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUES_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesExclusive(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUESEXCLUSIVE_OFFSET))(arg, nullptr);
		}

		::System::Boolean GetStandardValuesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_GETSTANDARDVALUESSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValueAllowed(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_ISVALUEALLOWED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFERENCECONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

