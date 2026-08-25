#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2DF00)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2E050)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2E1F0)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2E060)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2E200)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABCLASSES_OFFSET UNITYSDK_OFFSET(0x9B2E390)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABCLASSNAMES_OFFSET UNITYSDK_OFFSET(0x9B2E730)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABSCOPES_OFFSET UNITYSDK_OFFSET(0x9B2E7B0)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_SET_TABSCOPES_OFFSET UNITYSDK_OFFSET(0x9B2E7C0)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2E7D0)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B2E850)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B2E9F0)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_OFFSET UNITYSDK_OFFSET(0x9B2EA00)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_OFFSET UNITYSDK_OFFSET(0x9B2ED50)
#define SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_OFFSET UNITYSDK_OFFSET(0x9B2EA20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int PropertyTabAttribute_TypeDefinitionIndex = 29381;

	class PropertyTabAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::Il2CppArray<::System::Object*>* _tabClasses; // 0x10
		::Il2CppArray<::System::Object*>* _tabClassNames; // 0x18
		::Il2CppArray<::System::Object*>* _TabScopes_k__BackingField; // 0x20

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::System::Type* arg, ::System::ComponentModel::PropertyTabScope* arg)
		{
			((::System::Void(*)(::System::Type*, ::System::ComponentModel::PropertyTabScope*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::ComponentModel::PropertyTabScope* arg)
		{
			((::System::Void(*)(::System::String*, ::System::ComponentModel::PropertyTabScope*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TabClasses()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABCLASSES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TabClassNames()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABCLASSNAMES_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_TabScopes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GET_TABSCOPES_OFFSET))(nullptr);
		}

		::System::Void set_TabScopes(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_SET_TABSCOPES_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::ComponentModel::PropertyTabAttribute* arg)
		{
			return (return (::System::Boolean(*)(::System::ComponentModel::PropertyTabAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Void InitializeArrays(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeArrays(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitializeArrays(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_PROPERTYTABATTRIBUTE_INITIALIZEARRAYS_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

