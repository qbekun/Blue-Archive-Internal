#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4FD30)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4FE20)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4FEF0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4FF90)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B50040)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_DESIGNERBASETYPENAME_OFFSET UNITYSDK_OFFSET(0x9B500C0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_DESIGNERTYPENAME_OFFSET UNITYSDK_OFFSET(0x9B500D0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x9B500E0)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B50180)
#define SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B50210)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DesignerAttribute_TypeDefinitionIndex = 29495;

	class DesignerAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* designerTypeName; // 0x10
		::System::String* designerBaseTypeName; // 0x18
		::System::String* typeId; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_DesignerBaseTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_DESIGNERBASETYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_DesignerTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_DESIGNERTYPENAME_OFFSET))(nullptr);
		}

		::System::Object* get_TypeId()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GET_TYPEID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGNERATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

