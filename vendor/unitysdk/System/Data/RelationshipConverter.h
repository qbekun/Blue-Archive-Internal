#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_RELATIONSHIPCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x976CEE0)
#define SYSTEM_DATA_RELATIONSHIPCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x976CEF0)
#define SYSTEM_DATA_RELATIONSHIPCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x976CF90)

namespace System::Data
{
	inline static constexpr unsigned int RelationshipConverter_TypeDefinitionIndex = 32289;

	class RelationshipConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATIONSHIPCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATIONSHIPCONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RELATIONSHIPCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

