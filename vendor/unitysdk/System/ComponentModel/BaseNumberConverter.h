#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B23910)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x9B23920)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B23930)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B239D0)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B23DC0)
#define SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B240A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int BaseNumberConverter_TypeDefinitionIndex = 29350;

	class BaseNumberConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_AllowHex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_GET_ALLOWHEX_OFFSET))(nullptr);
		}

		::System::Type* get_TargetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BASENUMBERCONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

	};
}

