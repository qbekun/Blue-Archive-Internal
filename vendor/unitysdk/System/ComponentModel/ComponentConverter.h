#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4D0E0)
#define SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B4D140)
#define SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B4D1A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ComponentConverter_TypeDefinitionIndex = 29491;

	class ComponentConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER_GETPROPERTIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_COMPONENTCONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(arg, nullptr);
		}

	};
}

