#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_CONSTRAINTCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9731240)
#define SYSTEM_DATA_CONSTRAINTCONVERTER_CANCONVERTTO_OFFSET UNITYSDK_OFFSET(0x9731250)
#define SYSTEM_DATA_CONSTRAINTCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x97312F0)

namespace System::Data
{
	inline static constexpr unsigned int ConstraintConverter_TypeDefinitionIndex = 32196;

	class ConstraintConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTCONVERTER_CANCONVERTTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINTCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

