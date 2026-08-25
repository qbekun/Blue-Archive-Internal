#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x976B610)
#define SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x976B6A0)
#define SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x976B6B0)
#define SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x976B750)

namespace System::Data
{
	inline static constexpr unsigned int PrimaryKeyTypeConverter_TypeDefinitionIndex = 32276;

	class PrimaryKeyTypeConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_PRIMARYKEYTYPECONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

