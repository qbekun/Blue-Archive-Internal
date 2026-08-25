#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x9B2CC60)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x9B2CC70)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B2CCD0)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B2CD70)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B2D0B0)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B2D160)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B2D1E0)
#define SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2D280)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DecimalConverter_TypeDefinitionIndex = 29374;

	class DecimalConverter : public ::TriInspector::InlineEditorModes
	{
	public:
		::System::Boolean get_AllowHex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_ALLOWHEX_OFFSET))(nullptr);
		}

		::System::Type* get_TargetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DECIMALCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

