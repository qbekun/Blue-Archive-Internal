#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B48C00)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B48C60)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B48CB0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_GET_CONVERTERTYPENAME_OFFSET UNITYSDK_OFFSET(0x9B48CE0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B48CF0)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B48D50)
#define SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B48D80)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeConverterAttribute_TypeDefinitionIndex = 29463;

	class TypeConverterAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::ComponentModel::TypeConverterAttribute* Default; // 0x0
		::System::String* _ConverterTypeName_k__BackingField; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_ConverterTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_GET_CONVERTERTYPENAME_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPECONVERTERATTRIBUTE_.CCTOR_OFFSET))(nullptr);
		}

	};
}

