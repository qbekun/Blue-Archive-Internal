#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B31340)
#define SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B31350)
#define SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B313B0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ExpandableObjectConverter_TypeDefinitionIndex = 29390;

	class ExpandableObjectConverter : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER_GETPROPERTIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EXPANDABLEOBJECTCONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(arg, nullptr);
		}

	};
}

