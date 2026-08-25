#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DATA_DATATABLETYPECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x97473F0)
#define SYSTEM_DATA_DATATABLETYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9747480)

namespace System::Data
{
	inline static constexpr unsigned int DataTableTypeConverter_TypeDefinitionIndex = 32233;

	class DataTableTypeConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLETYPECONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLETYPECONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(arg, nullptr);
		}

	};
}

