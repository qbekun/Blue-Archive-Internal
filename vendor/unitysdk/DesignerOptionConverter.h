#pragma once
#include "unitysdk.h"

#define DESIGNEROPTIONCONVERTER_GETPROPERTIESSUPPORTED_OFFSET UNITYSDK_OFFSET(0x9B7E5E0)
#define DESIGNEROPTIONCONVERTER_GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9B7E5F0)
#define DESIGNEROPTIONCONVERTER_CONVERTTO_OFFSET UNITYSDK_OFFSET(0x9B7ECE0)
#define DESIGNEROPTIONCONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7EDC0)

	inline static constexpr unsigned int DesignerOptionConverter_TypeDefinitionIndex = 29551;

	class DesignerOptionConverter : public Il2CppObject
	{
	public:
		::System::Boolean GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::ITypeDescriptorContext*, ::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCONVERTER_GETPROPERTIESSUPPORTED_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Object* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Object*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCONVERTER_GETPROPERTIES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* arg, ::System::Globalization::CultureInfo* arg, ::System::Object* arg, ::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCONVERTER_CONVERTTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DESIGNEROPTIONCONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};

