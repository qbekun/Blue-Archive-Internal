#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Linq { class JPropertyKeyedCollection; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JsonCloneSettings; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonMergeSettings; }
namespace Newtonsoft::Json::Linq { class JProperty; }
namespace Newtonsoft::Json::Linq { class JTokenType; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json::Linq { class JToken&; }

#define NEWTONSOFT_JSON_LINQ_JOBJECT_WRITETOASYNC_OFFSET UNITYSDK_OFFSET(0x95016E0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x95019F0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x9501A00)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x9501B40)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9501B50)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9501BF0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_ADD_PROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x9501C90)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_REMOVE_PROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x9501D30)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94FEA00)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9501E50)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9501EC0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9501F40)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_.CTOR_OFFSET UNITYSDK_OFFSET(0x9501F50)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x9502010)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x9502460)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x95025C0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_VALIDATETOKEN_OFFSET UNITYSDK_OFFSET(0x9502630)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_MERGEITEM_OFFSET UNITYSDK_OFFSET(0x9502910)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_ISNULL_OFFSET UNITYSDK_OFFSET(0x9502FD0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_INTERNALPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x95030F0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_INTERNALPROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x9503230)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x9503260)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9503310)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x9503320)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_PROPERTY_OFFSET UNITYSDK_OFFSET(0x9503360)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_PROPERTY_OFFSET UNITYSDK_OFFSET(0x94FEC80)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_PROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x9503370)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x95034E0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x95036B0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9503630)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x95037B0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_LOAD_OFFSET UNITYSDK_OFFSET(0x95038F0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_LOAD_OFFSET UNITYSDK_OFFSET(0x9503900)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_PARSE_OFFSET UNITYSDK_OFFSET(0x9503AC0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_PARSE_OFFSET UNITYSDK_OFFSET(0x9503AD0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x9503CC0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x9503CE0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_WRITETO_OFFSET UNITYSDK_OFFSET(0x9504060)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9504140)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9504180)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x95041C0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x9502F50)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x95043C0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_KEYS_OFFSET UNITYSDK_OFFSET(0x95044D0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x9504580)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x9504630)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_VALUES_OFFSET UNITYSDK_OFFSET(0x9504680)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.ADD_OFFSET UNITYSDK_OFFSET(0x95046D0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.CLEAR_OFFSET UNITYSDK_OFFSET(0x9504770)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.CONTAINS_OFFSET UNITYSDK_OFFSET(0x9504790)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.COPYTO_OFFSET UNITYSDK_OFFSET(0x9504810)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x9504D90)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.REMOVE_OFFSET UNITYSDK_OFFSET(0x9504DA0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x9504EE0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x9502EE0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x9504F10)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_ONPROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x9504FA0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x9505030)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x95050D0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x9505540)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x9505590)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCOMPONENTNAME_OFFSET UNITYSDK_OFFSET(0x95055A0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x95055B0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTEVENT_OFFSET UNITYSDK_OFFSET(0x9505600)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTPROPERTY_OFFSET UNITYSDK_OFFSET(0x9505610)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEDITOR_OFFSET UNITYSDK_OFFSET(0x9505620)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9505630)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET UNITYSDK_OFFSET(0x9505680)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTYOWNER_OFFSET UNITYSDK_OFFSET(0x95056D0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GETMETAOBJECT_OFFSET UNITYSDK_OFFSET(0x9505750)
#define NEWTONSOFT_JSON_LINQ_JOBJECT__WRITETOASYNC_G__AWAITPROPERTIES|0_0_OFFSET UNITYSDK_OFFSET(0x9501890)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JObject_TypeDefinitionIndex = 32028;

	class JObject : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Linq::JPropertyKeyedCollection* _properties; // 0x58
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x60
		::System::ComponentModel::PropertyChangingEventHandler* PropertyChanging; // 0x68

		::System::Threading::Tasks::Task* WriteToAsync(::Newtonsoft::Json::JsonWriter* arg, ::System::Threading::CancellationToken* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_WRITETOASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::Newtonsoft::Json::JsonReader* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_LOADASYNC_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* LoadAsync(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_LOADASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		Il2CppObject* get_ChildrenTokens()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GET_CHILDRENTOKENS_OFFSET))(nullptr);
		}

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_ADD_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_REMOVE_PROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangingEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_ADD_PROPERTYCHANGING_OFFSET))(arg, nullptr);
		}

		::System::Void remove_PropertyChanging(::System::ComponentModel::PropertyChangingEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyChangingEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_REMOVE_PROPERTYCHANGING_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JObject* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JObject* arg, ::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JObject*, ::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_DEEPEQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_INDEXOFITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean InsertItem(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_INSERTITEM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void ValidateToken(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_VALIDATETOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void MergeItem(::System::Object* arg, ::Newtonsoft::Json::Linq::JsonMergeSettings* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_MERGEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsNull(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_ISNULL_OFFSET))(arg, nullptr);
		}

		::System::Void InternalPropertyChanged(::Newtonsoft::Json::Linq::JProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_INTERNALPROPERTYCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void InternalPropertyChanging(::Newtonsoft::Json::Linq::JProperty* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JProperty*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_INTERNALPROPERTYCHANGING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken(::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_CLONETOKEN_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JTokenType* get_Type()
		{
			return (return (::Newtonsoft::Json::Linq::JTokenType*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GET_TYPE_OFFSET))(nullptr);
		}

		Il2CppObject* Properties()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_PROPERTIES_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JProperty* Property(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Linq::JProperty*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_PROPERTY_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Linq::JProperty* Property(::System::String* str, ::System::StringComparison* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JProperty*(*)(::System::String*, ::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_PROPERTY_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* PropertyValues()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_PROPERTYVALUES_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Object* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::String*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JObject* Load(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JObject*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_LOAD_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JObject* Load(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JObject*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_LOAD_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JObject* Parse(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Linq::JObject*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_PARSE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Linq::JObject* Parse(::System::String* str, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JObject*(*)(::System::String*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_PARSE_OFFSET))(str, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JObject* FromObject(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_FROMOBJECT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JObject* FromObject(::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JObject*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_FROMOBJECT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_WRITETO_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* GetValue(::System::String* str)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GETVALUE_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* GetValue(::System::String* str, ::System::StringComparison* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::String*, ::System::StringComparison*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GETVALUE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::System::StringComparison* arg, ::Newtonsoft::Json::Linq::JToken&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::StringComparison*, ::Newtonsoft::Json::Linq::JToken&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_TRYGETVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Void Add(::System::String* str, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::String*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_ADD_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ContainsKey(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_CONTAINSKEY_OFFSET))(str, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IDictionary_System.String_Newtonsoft.Json.Linq.JToken_.get_Keys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_KEYS_OFFSET))(nullptr);
		}

		::System::Boolean Remove(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_REMOVE_OFFSET))(str, nullptr);
		}

		::System::Boolean TryGetValue(::System::String* str, ::Newtonsoft::Json::Linq::JToken&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::Newtonsoft::Json::Linq::JToken&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_TRYGETVALUE_OFFSET))(str, arg, nullptr);
		}

		Il2CppObject* System.Collections.Generic.IDictionary_System.String_Newtonsoft.Json.Linq.JToken_.get_Values()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.IDICTIONARY_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_VALUES_OFFSET))(nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_Newtonsoft.Json.Linq.JToken__.Add(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.ADD_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_Newtonsoft.Json.Linq.JToken__.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_Newtonsoft.Json.Linq.JToken__.Contains(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_Newtonsoft.Json.Linq.JToken__.CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_Newtonsoft.Json.Linq.JToken__.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_System.Collections.Generic.KeyValuePair_System.String_Newtonsoft.Json.Linq.JToken__.Remove(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_SYSTEM.COLLECTIONS.GENERIC.KEYVALUEPAIR_SYSTEM.STRING_NEWTONSOFT.JSON.LINQ.JTOKEN__.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetDeepHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GETDEEPHASHCODE_OFFSET))(nullptr);
		}

		Il2CppObject* GetEnumerator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void OnPropertyChanged(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_ONPROPERTYCHANGED_OFFSET))(str, nullptr);
		}

		::System::Void OnPropertyChanging(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_ONPROPERTYCHANGING_OFFSET))(str, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetProperties()
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetProperties(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::AttributeCollection* System.ComponentModel.ICustomTypeDescriptor.GetAttributes()
		{
			return (return (::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETATTRIBUTES_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.ICustomTypeDescriptor.GetClassName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCLASSNAME_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.ICustomTypeDescriptor.GetComponentName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCOMPONENTNAME_OFFSET))(nullptr);
		}

		::System::ComponentModel::TypeConverter* System.ComponentModel.ICustomTypeDescriptor.GetConverter()
		{
			return (return (::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETCONVERTER_OFFSET))(nullptr);
		}

		::System::ComponentModel::EventDescriptor* System.ComponentModel.ICustomTypeDescriptor.GetDefaultEvent()
		{
			return (return (::System::ComponentModel::EventDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTEVENT_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* System.ComponentModel.ICustomTypeDescriptor.GetDefaultProperty()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETDEFAULTPROPERTY_OFFSET))(nullptr);
		}

		::System::Object* System.ComponentModel.ICustomTypeDescriptor.GetEditor(::System::Type* arg)
		{
			return (return (::System::Object*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEDITOR_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetEvents(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::EventDescriptorCollection* System.ComponentModel.ICustomTypeDescriptor.GetEvents()
		{
			return (return (::System::ComponentModel::EventDescriptorCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETEVENTS_OFFSET))(nullptr);
		}

		::System::Object* System.ComponentModel.ICustomTypeDescriptor.GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* arg)
		{
			return (return (::System::Object*(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM.COMPONENTMODEL.ICUSTOMTYPEDESCRIPTOR.GETPROPERTYOWNER_OFFSET))(arg, nullptr);
		}

		::System::Dynamic::DynamicMetaObject* GetMetaObject(::System::Linq::Expressions::Expression* arg)
		{
			return (return (::System::Dynamic::DynamicMetaObject*(*)(::System::Linq::Expressions::Expression*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GETMETAOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Threading::Tasks::Task* _WriteToAsync_g__AwaitProperties|0_0(::System::Threading::Tasks::Task* arg, ::System::Int32 arg, ::Newtonsoft::Json::JsonWriter* arg, ::System::Threading::CancellationToken* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::System::Threading::Tasks::Task*, ::System::Int32, ::Newtonsoft::Json::JsonWriter*, ::System::Threading::CancellationToken*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT__WRITETOASYNC_G__AWAITPROPERTIES|0_0_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

	};
}

