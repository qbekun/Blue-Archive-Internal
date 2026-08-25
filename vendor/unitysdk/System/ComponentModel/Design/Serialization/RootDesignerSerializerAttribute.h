#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7F770)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_SERIALIZERBASETYPENAME_OFFSET UNITYSDK_OFFSET(0x9B7F7C0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x9B7F7D0)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int RootDesignerSerializerAttribute_TypeDefinitionIndex = 29554;

	class RootDesignerSerializerAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* _typeId; // 0x10
		::System::Boolean _Reloadable_k__BackingField; // 0x18
		::System::String* _SerializerTypeName_k__BackingField; // 0x20
		::System::String* _SerializerBaseTypeName_k__BackingField; // 0x28

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_.CTOR_OFFSET))(str, str, arg, nullptr);
		}

		::System::String* get_SerializerBaseTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_SERIALIZERBASETYPENAME_OFFSET))(nullptr);
		}

		::System::Object* get_TypeId()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_ROOTDESIGNERSERIALIZERATTRIBUTE_GET_TYPEID_OFFSET))(nullptr);
		}

	};
}

