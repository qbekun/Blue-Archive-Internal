#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2F840)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2F8C0)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2F960)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2FA10)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_EDITORBASETYPENAME_OFFSET UNITYSDK_OFFSET(0x9B2FA90)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_EDITORTYPENAME_OFFSET UNITYSDK_OFFSET(0x9B2FAA0)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x9B2FAB0)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2FB50)
#define SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2FBE0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int EditorAttribute_TypeDefinitionIndex = 29386;

	class EditorAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _typeId; // 0x10
		::System::String* _EditorBaseTypeName_k__BackingField; // 0x18
		::System::String* _EditorTypeName_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Type* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* get_EditorBaseTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_EDITORBASETYPENAME_OFFSET))(nullptr);
		}

		::System::String* get_EditorTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_EDITORTYPENAME_OFFSET))(nullptr);
		}

		::System::Object* get_TypeId()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GET_TYPEID_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_EDITORATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

