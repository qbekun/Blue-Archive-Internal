#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B22100)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B22270)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_FROMEXISTING_OFFSET UNITYSDK_OFFSET(0x9B22280)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9B227A0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B22700)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B227B0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9B227F0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9B232F0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9B23360)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9B22CE0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B233F0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_MATCHES_OFFSET UNITYSDK_OFFSET(0x9B23420)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_MATCHES_OFFSET UNITYSDK_OFFSET(0x9B234E0)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x9B23540)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x9B23550)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9B23560)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9B23590)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x9B22730)
#define SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9B235C0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AttributeCollection_TypeDefinitionIndex = 29347;

	class AttributeCollection : public Il2CppObject
	{
	public:
		::System::ComponentModel::AttributeCollection* Empty; // 0x0
		::System::Collections::Hashtable* s_defaultAttributes; // 0x8
		::Il2CppArray<::System::Object*>* _attributes; // 0x10
		::System::Object* s_internalSyncObject; // 0x10
		::System::Int32 FOUND_TYPES_LIMIT; // 0x0
		::Il2CppArray<::System::Object*>* _foundAttributeTypes; // 0x18
		::System::Int32 _index; // 0x20

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_.CTOR_OFFSET))(nullptr);
		}

		::System::ComponentModel::AttributeCollection* FromExisting(::System::ComponentModel::AttributeCollection* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::System::ComponentModel::AttributeCollection*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_FROMEXISTING_OFFSET))(arg, arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* get_Attributes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ATTRIBUTES_OFFSET))(nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Attribute* get_Item(::System::Int32 arg)
		{
			return (return (::System::Attribute*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Attribute* get_Item(::System::Type* arg)
		{
			return (return (::System::Attribute*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::System::Attribute* arg)
		{
			return (return (::System::Boolean(*)(::System::Attribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Contains(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Attribute* GetDefaultAttribute(::System::Type* arg)
		{
			return (return (::System::Attribute*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETDEFAULTATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean Matches(::System::Attribute* arg)
		{
			return (return (::System::Boolean(*)(::System::Attribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_MATCHES_OFFSET))(arg, nullptr);
		}

		::System::Boolean Matches(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Boolean(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_MATCHES_OFFSET))(arg, nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.ICollection.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ATTRIBUTECOLLECTION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

