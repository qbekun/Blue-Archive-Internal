#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_STRINGCONVERTER_CANCONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B47D60)
#define SYSTEM_COMPONENTMODEL_STRINGCONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x9B47E40)
#define SYSTEM_COMPONENTMODEL_STRINGCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B47EE0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int StringConverter_TypeDefinitionIndex = 29458;

	class StringConverter : public Il2CppObject
	{
	public:
		::System::Boolean CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_STRINGCONVERTER_CANCONVERTFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_STRINGCONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_STRINGCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

