#pragma once
#include "../../unitysdk.h"

#define SYSTEM_REFLECTION_TYPEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9241E90)
#define SYSTEM_REFLECTION_TYPEINFO_SYSTEM.REFLECTION.IREFLECTABLETYPE.GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x92427A0)
#define SYSTEM_REFLECTION_TYPEINFO_ASTYPE_OFFSET UNITYSDK_OFFSET(0x92427B0)
#define SYSTEM_REFLECTION_TYPEINFO_GETDECLAREDFIELD_OFFSET UNITYSDK_OFFSET(0x92427C0)
#define SYSTEM_REFLECTION_TYPEINFO_GETDECLAREDPROPERTY_OFFSET UNITYSDK_OFFSET(0x92427E0)
#define SYSTEM_REFLECTION_TYPEINFO_GET_DECLAREDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x92427F0)
#define SYSTEM_REFLECTION_TYPEINFO_GET_IMPLEMENTEDINTERFACES_OFFSET UNITYSDK_OFFSET(0x9242810)

namespace System::Reflection
{
	inline static constexpr unsigned int TypeInfo_TypeDefinitionIndex = 24893;

	class TypeInfo : public Il2CppObject
	{
	public:
		::System::Reflection::BindingFlags* DeclaredOnlyLookup; // 0x0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Reflection::TypeInfo* System.Reflection.IReflectableType.GetTypeInfo()
		{
			return (return (::System::Reflection::TypeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_SYSTEM.REFLECTION.IREFLECTABLETYPE.GETTYPEINFO_OFFSET))(nullptr);
		}

		::System::Type* AsType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_ASTYPE_OFFSET))(nullptr);
		}

		::System::Reflection::FieldInfo* GetDeclaredField(::System::String* str)
		{
			return (return (::System::Reflection::FieldInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_GETDECLAREDFIELD_OFFSET))(str, nullptr);
		}

		::System::Reflection::PropertyInfo* GetDeclaredProperty(::System::String* str)
		{
			return (return (::System::Reflection::PropertyInfo*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_GETDECLAREDPROPERTY_OFFSET))(str, nullptr);
		}

		Il2CppObject* get_DeclaredProperties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_GET_DECLAREDPROPERTIES_OFFSET))(nullptr);
		}

		Il2CppObject* get_ImplementedInterfaces()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TYPEINFO_GET_IMPLEMENTEDINTERFACES_OFFSET))(nullptr);
		}

	};
}

