#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_CHARCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B24BA0)
#define SYSTEM_COMPONENTMODEL_CHARCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B24C40)
#define SYSTEM_COMPONENTMODEL_CHARCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B24D50)
#define SYSTEM_COMPONENTMODEL_CHARCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B24EB0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int CharConverter_TypeDefinitionIndex = 29358;

	class CharConverter : public Il2CppObject
	{
	public:
		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CHARCONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CHARCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CHARCONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_CHARCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

