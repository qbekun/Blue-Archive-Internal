#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_GUIDCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B31DF0)
#define SYSTEM_COMPONENTMODEL_GUIDCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B31E90)
#define SYSTEM_COMPONENTMODEL_GUIDCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B31F30)
#define SYSTEM_COMPONENTMODEL_GUIDCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B31FF0)
#define SYSTEM_COMPONENTMODEL_GUIDCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B32320)

namespace System::ComponentModel
{
	inline static constexpr unsigned int GuidConverter_TypeDefinitionIndex = 29393;

	class GuidConverter : public Il2CppObject
	{
	public:
		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_GUIDCONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_GUIDCONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_GUIDCONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_GUIDCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_GUIDCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

