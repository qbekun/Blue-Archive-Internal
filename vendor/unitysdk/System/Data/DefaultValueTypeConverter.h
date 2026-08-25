#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DEFAULTVALUETYPECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x974FF20)
#define SYSTEM_DATA_DEFAULTVALUETYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x974FF30)
#define SYSTEM_DATA_DEFAULTVALUETYPECONVERTER_CONVERTFROM_OFFSET UNITYSDK_OFFSET(0x97500D0)

namespace System::Data
{
	inline static constexpr unsigned int DefaultValueTypeConverter_TypeDefinitionIndex = 32243;

	class DefaultValueTypeConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DEFAULTVALUETYPECONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DEFAULTVALUETYPECONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DEFAULTVALUETYPECONVERTER_CONVERTFROM_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

