#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7EE90)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B7EEB0)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x9B7F410)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_GET_MEMBERINFO_OFFSET UNITYSDK_OFFSET(0x9B7F420)
#define SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x9B7F430)

namespace System::ComponentModel::Design::Serialization
{
	inline static constexpr unsigned int InstanceDescriptor_TypeDefinitionIndex = 29553;

	class InstanceDescriptor : public Il2CppObject
	{
	public:
		::System::Collections::ICollection* _Arguments_k__BackingField; // 0x10
		::System::Boolean _IsComplete_k__BackingField; // 0x18
		::System::Reflection::MemberInfo* _MemberInfo_k__BackingField; // 0x20

		::System::Void .ctor(::System::Reflection::MemberInfo* arg, ::System::Collections::ICollection* arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Collections::ICollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::Reflection::MemberInfo* arg, ::System::Collections::ICollection* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Reflection::MemberInfo*, ::System::Collections::ICollection*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Collections::ICollection* get_Arguments()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_GET_ARGUMENTS_OFFSET))(nullptr);
		}

		::System::Reflection::MemberInfo* get_MemberInfo()
		{
			return (return (::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_GET_MEMBERINFO_OFFSET))(nullptr);
		}

		::System::Object* Invoke()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DESIGN_SERIALIZATION_INSTANCEDESCRIPTOR_INVOKE_OFFSET))(nullptr);
		}

	};
}

