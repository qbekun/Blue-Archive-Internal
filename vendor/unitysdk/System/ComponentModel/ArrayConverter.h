#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B21A20)
#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B21BE0)
#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B21F60)
#define SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B21F70)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ArrayConverter_TypeDefinitionIndex = 29345;

	class ArrayConverter : public Il2CppObject
	{
	public:
		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_GETPROPERTIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ARRAYCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

