#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B49700)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B49790)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE_GET_TYPENAME_OFFSET UNITYSDK_OFFSET(0x9B49870)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptionProviderAttribute_TypeDefinitionIndex = 29466;

	class TypeDescriptionProviderAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _TypeName_k__BackingField; // 0x10

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_TypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTIONPROVIDERATTRIBUTE_GET_TYPENAME_OFFSET))(nullptr);
		}

	};
}

