#pragma once
#include "../../unitysdk.h"

#define SYSTEM_DYNAMIC_EXPANDOOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B7CB0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x96B7D60)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYSETVALUE_OFFSET UNITYSDK_OFFSET(0x96B7F20)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYDELETEVALUE_OFFSET UNITYSDK_OFFSET(0x96B8760)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_ISDELETEDMEMBER_OFFSET UNITYSDK_OFFSET(0x96B7BA0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_GET_CLASS_OFFSET UNITYSDK_OFFSET(0x96B8C80)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASSCORE_OFFSET UNITYSDK_OFFSET(0x96B86A0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASS_OFFSET UNITYSDK_OFFSET(0x96B8F30)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.DYNAMIC.IDYNAMICMETAOBJECTPROVIDER.GETMETAOBJECT_OFFSET UNITYSDK_OFFSET(0x96B9100)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYADDMEMBER_OFFSET UNITYSDK_OFFSET(0x96B9280)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUEFORKEY_OFFSET UNITYSDK_OFFSET(0x96B9390)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDOCONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x96B93C0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.GET_KEYS_OFFSET UNITYSDK_OFFSET(0x96B9450)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.GET_VALUES_OFFSET UNITYSDK_OFFSET(0x96B95F0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x96B9790)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x96B9800)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.ADD_OFFSET UNITYSDK_OFFSET(0x96B98B0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x96B98C0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.REMOVE_OFFSET UNITYSDK_OFFSET(0x96B9A10)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x96B9AF0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x96B9B20)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x96B9B30)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.ADD_OFFSET UNITYSDK_OFFSET(0x96B9B40)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.CLEAR_OFFSET UNITYSDK_OFFSET(0x96B9B90)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.CONTAINS_OFFSET UNITYSDK_OFFSET(0x96B9E70)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.COPYTO_OFFSET UNITYSDK_OFFSET(0x96B9F00)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.REMOVE_OFFSET UNITYSDK_OFFSET(0x96BA3C0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x96BA420)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x96BA540)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_GETEXPANDOENUMERATOR_OFFSET UNITYSDK_OFFSET(0x96BA4B0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x96BA5F0)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x96BA680)
#define SYSTEM_DYNAMIC_EXPANDOOBJECT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96BA710)

namespace System::Dynamic
{
	inline static constexpr unsigned int ExpandoObject_TypeDefinitionIndex = 33561;

	class ExpandoObject : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* s_expandoTryGetValue; // 0x0
		::System::Reflection::MethodInfo* s_expandoTrySetValue; // 0x8
		::System::Reflection::MethodInfo* s_expandoTryDeleteValue; // 0x10
		::System::Reflection::MethodInfo* s_expandoPromoteClass; // 0x18
		::System::Reflection::MethodInfo* s_expandoCheckVersion; // 0x20
		::System::Object* LockObject; // 0x10
		ExpandoData* _data; // 0x18
		::System::Int32 _count; // 0x20
		::System::Object* Uninitialized; // 0x28
		::System::ComponentModel::PropertyChangedEventHandler* _propertyChanged; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean TryGetValue(::System::Object* arg, ::System::Int32 arg, ::System::String* str, ::System::Boolean arg, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void TrySetValue(::System::Object* arg, ::System::Int32 arg, ::System::Object* arg, ::System::String* str, ::System::Boolean arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Object*, ::System::String*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYSETVALUE_OFFSET))(arg, arg, arg, str, arg, arg, nullptr);
		}

		::System::Boolean TryDeleteValue(::System::Object* arg, ::System::Int32 arg, ::System::String* str, ::System::Boolean arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYDELETEVALUE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Boolean IsDeletedMember(::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_ISDELETEDMEMBER_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::ExpandoClass* get_Class()
		{
			return (return (::System::Dynamic::ExpandoClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_GET_CLASS_OFFSET))(nullptr);
		}

		ExpandoData* PromoteClassCore(::System::Dynamic::ExpandoClass* arg, ::System::Dynamic::ExpandoClass* arg)
		{
			return (return (ExpandoData*(*)(::System::Dynamic::ExpandoClass*, ::System::Dynamic::ExpandoClass*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASSCORE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PromoteClass(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_PROMOTECLASS_OFFSET))(arg, arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* System.Dynamic.IDynamicMetaObjectProvider.GetMetaObject(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.DYNAMIC.IDYNAMICMETAOBJECTPROVIDER.GETMETAOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void TryAddMember(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYADDMEMBER_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetValueForKey(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_TRYGETVALUEFORKEY_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ExpandoContainsKey(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_EXPANDOCONTAINSKEY_OFFSET))(str, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IDictionary_System.String_System.Object_.get_Keys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.GET_KEYS_OFFSET))(nullptr);
		}

		Il2CppObject* System.Collections.Generic.IDictionary_System.String_System.Object_.get_Values()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.GET_VALUES_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.Generic.IDictionary_System.String_System.Object_.get_Item(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void System.Collections.Generic.IDictionary_System.String_System.Object_.set_Item(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::Void System.Collections.Generic.IDictionary_System.String_System.Object_.Add(::System::String* str, ::System::Object* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.IDictionary_System.String_System.Object_.ContainsKey(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.CONTAINSKEY_OFFSET))(str, nullptr);
		}

		::System::Boolean System.Collections.Generic.IDictionary_System.String_System.Object_.Remove(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.REMOVE_OFFSET))(str, nullptr);
		}

		::System::Boolean System.Collections.Generic.IDictionary_System.String_System.Object_.TryGetValue(::System::String* str, ::System::Object&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_SYSTEM.OBJECT_.TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_System.Object__.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_System.Object__.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_System.Object__.Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.ADD_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_System.Object__.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_System.Object__.Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_System.Object__.CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_System.Object__.Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IEnumerable_System.Collections.Generic.KeyValuePair_System.String_System.Object__.GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.GENERIC.IENUMERABLE_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_SYSTEM.OBJECT__.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetExpandoEnumerator(ExpandoData* arg, ::System::Int32 arg)
		{
			return (return (Il2CppObject*(*)(ExpandoData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_GETEXPANDOENUMERATOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.ComponentModel.INotifyPropertyChanged.add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.ADD_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void System.ComponentModel.INotifyPropertyChanged.remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_SYSTEM.COMPONENTMODEL.INOTIFYPROPERTYCHANGED.REMOVE_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DYNAMIC_EXPANDOOBJECT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

