#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JContainer; }
namespace Newtonsoft::Json::Linq { class JsonCloneSettings; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Linq { class JsonMergeSettings; }
namespace Newtonsoft::Json::Linq { class JProperty; }
namespace Newtonsoft::Json { class IJsonLineInfo; }

#define NEWTONSOFT_JSON_LINQ_JCONTAINER_READTOKENFROMASYNC_OFFSET UNITYSDK_OFFSET(0x94FA990)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_READCONTENTFROMASYNC_OFFSET UNITYSDK_OFFSET(0x94FB060)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x94FB1A0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVE_LISTCHANGED_OFFSET UNITYSDK_OFFSET(0x94FB230)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_ADDINGNEW_OFFSET UNITYSDK_OFFSET(0x94FB2C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVE_ADDINGNEW_OFFSET UNITYSDK_OFFSET(0x94FB350)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x94FB3E0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x94FB470)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F8BD0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94F8CC0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CHECKREENTRANCY_OFFSET UNITYSDK_OFFSET(0x94FB960)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATECHILDRENCOLLECTION_OFFSET UNITYSDK_OFFSET(0x94FBA10)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ONADDINGNEW_OFFSET UNITYSDK_OFFSET(0x94FBA70)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ONLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x94FBA90)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x94FBB40)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_HASVALUES_OFFSET UNITYSDK_OFFSET(0x94FBBF0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSEQUAL_OFFSET UNITYSDK_OFFSET(0x94F93C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x94FBCB0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_LAST_OFFSET UNITYSDK_OFFSET(0x94FBDE0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CHILDREN_OFFSET UNITYSDK_OFFSET(0x94FBF10)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_VALUES_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_DESCENDANTS_OFFSET UNITYSDK_OFFSET(0x94FBF80)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_DESCENDANTSANDSELF_OFFSET UNITYSDK_OFFSET(0x94FC080)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GETDESCENDANTS_OFFSET UNITYSDK_OFFSET(0x94FC000)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ISMULTICONTENT_OFFSET UNITYSDK_OFFSET(0x94FC130)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREPARENTTOKEN_OFFSET UNITYSDK_OFFSET(0x94FC1F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x94FC300)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEMAT_OFFSET UNITYSDK_OFFSET(0x94FC720)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x94FCBC0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GETITEM_OFFSET UNITYSDK_OFFSET(0x94FCC10)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SETITEM_OFFSET UNITYSDK_OFFSET(0x94FCCD0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x94FD380)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REPLACEITEM_OFFSET UNITYSDK_OFFSET(0x94FD7D0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTAINSITEM_OFFSET UNITYSDK_OFFSET(0x94FD830)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_COPYITEMSTO_OFFSET UNITYSDK_OFFSET(0x94FD850)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ISTOKENUNCHANGED_OFFSET UNITYSDK_OFFSET(0x94FD2E0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_VALIDATETOKEN_OFFSET UNITYSDK_OFFSET(0x94FDE00)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x94FDF20)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_TRYADD_OFFSET UNITYSDK_OFFSET(0x94FDFF0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDANDSKIPPARENTCHECK_OFFSET UNITYSDK_OFFSET(0x94FE0C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDFIRST_OFFSET UNITYSDK_OFFSET(0x94FE190)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_TRYADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x94FB5A0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATEFROMCONTENT_OFFSET UNITYSDK_OFFSET(0x94FE1B0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x94FE260)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REPLACEALL_OFFSET UNITYSDK_OFFSET(0x94FE2C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x94FE300)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGEITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGE_OFFSET UNITYSDK_OFFSET(0x94FE320)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGE_OFFSET UNITYSDK_OFFSET(0x94FE4C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_VALIDATECONTENT_OFFSET UNITYSDK_OFFSET(0x94FE370)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_READTOKENFROM_OFFSET UNITYSDK_OFFSET(0x94FA150)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_READCONTENTFROM_OFFSET UNITYSDK_OFFSET(0x94FE510)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_READPROPERTY_OFFSET UNITYSDK_OFFSET(0x94FEAA0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSHASHCODE_OFFSET UNITYSDK_OFFSET(0x94F9A70)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.ITYPEDLIST.GETLISTNAME_OFFSET UNITYSDK_OFFSET(0x94FEFB0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.ITYPEDLIST.GETITEMPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94FEFF0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ILIST_NEWTONSOFT.JSON.LINQ.JTOKEN_.INDEXOF_OFFSET UNITYSDK_OFFSET(0x94FF160)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ILIST_NEWTONSOFT.JSON.LINQ.JTOKEN_.INSERT_OFFSET UNITYSDK_OFFSET(0x94FF180)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ILIST_NEWTONSOFT.JSON.LINQ.JTOKEN_.REMOVEAT_OFFSET UNITYSDK_OFFSET(0x94FF1B0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ILIST_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x94FF1D0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ILIST_NEWTONSOFT.JSON.LINQ.JTOKEN_.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x94FF1F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.ADD_OFFSET UNITYSDK_OFFSET(0x94FF210)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.CLEAR_OFFSET UNITYSDK_OFFSET(0x94FF230)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.CONTAINS_OFFSET UNITYSDK_OFFSET(0x94FF250)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.COPYTO_OFFSET UNITYSDK_OFFSET(0x94FF270)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x94FF290)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.REMOVE_OFFSET UNITYSDK_OFFSET(0x94FF2A0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREVALUE_OFFSET UNITYSDK_OFFSET(0x94FF2C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET UNITYSDK_OFFSET(0x94FF390)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.CLEAR_OFFSET UNITYSDK_OFFSET(0x94FF460)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET UNITYSDK_OFFSET(0x94FF480)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET UNITYSDK_OFFSET(0x94FF4B0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET UNITYSDK_OFFSET(0x94FF4E0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x94FF530)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x94FF540)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET UNITYSDK_OFFSET(0x94FF550)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.REMOVEAT_OFFSET UNITYSDK_OFFSET(0x94FF580)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x94FF5A0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x94FF5C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x94FF600)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x94FDD40)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x94FF620)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x94FF630)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.ADDINDEX_OFFSET UNITYSDK_OFFSET(0x94FF6B0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.ADDNEW_OFFSET UNITYSDK_OFFSET(0x94FF6C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWEDIT_OFFSET UNITYSDK_OFFSET(0x94FF880)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWNEW_OFFSET UNITYSDK_OFFSET(0x94FF890)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWREMOVE_OFFSET UNITYSDK_OFFSET(0x94FF8A0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.APPLYSORT_OFFSET UNITYSDK_OFFSET(0x94FF8B0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.FIND_OFFSET UNITYSDK_OFFSET(0x94FF900)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ISSORTED_OFFSET UNITYSDK_OFFSET(0x94FF950)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.REMOVEINDEX_OFFSET UNITYSDK_OFFSET(0x94FF960)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.REMOVESORT_OFFSET UNITYSDK_OFFSET(0x94FF970)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x94FF9C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SORTPROPERTY_OFFSET UNITYSDK_OFFSET(0x94FF9D0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSCHANGENOTIFICATION_OFFSET UNITYSDK_OFFSET(0x94FF9E0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSSEARCHING_OFFSET UNITYSDK_OFFSET(0x94FF9F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSSORTING_OFFSET UNITYSDK_OFFSET(0x94FFA00)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGEENUMERABLECONTENT_OFFSET UNITYSDK_OFFSET(0x94F7B70)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JContainer_TypeDefinitionIndex = 32020;

	class JContainer : public Il2CppObject
	{
	public:
		::System::ComponentModel::ListChangedEventHandler* _listChanged; // 0x30
		::System::ComponentModel::AddingNewEventHandler* _addingNew; // 0x38
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* _collectionChanged; // 0x40
		::System::Object* _syncRoot; // 0x48
		::System::Boolean _busy; // 0x50

		::System::Threading::Tasks::Task* ReadTokenFromAsync(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_READTOKENFROMASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Threading::Tasks::Task* ReadContentFromAsync(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg, ::System::Threading::CancellationToken* arg)
		{
			return (return (::System::Threading::Tasks::Task*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::System::Threading::CancellationToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_READCONTENTFROMASYNC_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void add_ListChanged(::System::ComponentModel::ListChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_LISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_ListChanged(::System::ComponentModel::ListChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVE_LISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void add_AddingNew(::System::ComponentModel::AddingNewEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::AddingNewEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_ADDINGNEW_OFFSET))(arg, nullptr);
		}

		::System::Void remove_AddingNew(::System::ComponentModel::AddingNewEventHandler* arg)
		{
			((::System::Void(*)(::System::ComponentModel::AddingNewEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVE_ADDINGNEW_OFFSET))(arg, nullptr);
		}

		::System::Void add_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void remove_CollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVE_COLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ChildrenTokens()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_CHILDRENTOKENS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Newtonsoft::Json::Linq::JContainer* arg, ::Newtonsoft::Json::Linq::JsonCloneSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JContainer*, ::Newtonsoft::Json::Linq::JsonCloneSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckReentrancy()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CHECKREENTRANCY_OFFSET))(nullptr);
		}

		Il2CppObject* CreateChildrenCollection()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATECHILDRENCOLLECTION_OFFSET))(nullptr);
		}

		::System::Void OnAddingNew(::System::ComponentModel::AddingNewEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::AddingNewEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ONADDINGNEW_OFFSET))(arg, nullptr);
		}

		::System::Void OnListChanged(::System::ComponentModel::ListChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::ComponentModel::ListChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ONLISTCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Void OnCollectionChanged(::System::Collections::Specialized::NotifyCollectionChangedEventArgs* arg)
		{
			((::System::Void(*)(::System::Collections::Specialized::NotifyCollectionChangedEventArgs*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ONCOLLECTIONCHANGED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasValues()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_HASVALUES_OFFSET))(nullptr);
		}

		::System::Boolean ContentsEqual(::Newtonsoft::Json::Linq::JContainer* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JContainer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSEQUAL_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_First()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_FIRST_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* get_Last()
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_LAST_OFFSET))(nullptr);
		}

		Il2CppObject* Children()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CHILDREN_OFFSET))(nullptr);
		}

		Il2CppObject* Values()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_VALUES_OFFSET))(nullptr);
		}

		Il2CppObject* Descendants()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_DESCENDANTS_OFFSET))(nullptr);
		}

		Il2CppObject* DescendantsAndSelf()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_DESCENDANTSANDSELF_OFFSET))(nullptr);
		}

		Il2CppObject* GetDescendants(::System::Boolean arg)
		{
			return (return (Il2CppObject*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GETDESCENDANTS_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsMultiContent(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ISMULTICONTENT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* EnsureParentToken(::Newtonsoft::Json::Linq::JToken* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::Newtonsoft::Json::Linq::JToken*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREPARENTTOKEN_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_INDEXOFITEM_OFFSET))(arg, nullptr);
		}

		::System::Boolean InsertItem(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_INSERTITEM_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void RemoveItemAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEMAT_OFFSET))(arg, nullptr);
		}

		::System::Boolean RemoveItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEM_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* GetItem(::System::Int32 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GETITEM_OFFSET))(arg, nullptr);
		}

		::System::Void SetItem(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SETITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ClearItems()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CLEARITEMS_OFFSET))(nullptr);
		}

		::System::Void ReplaceItem(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REPLACEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ContainsItem(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTAINSITEM_OFFSET))(arg, nullptr);
		}

		::System::Void CopyItemsTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_COPYITEMSTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsTokenUnchanged(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ISTOKENUNCHANGED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateToken(::Newtonsoft::Json::Linq::JToken* arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_VALIDATETOKEN_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryAdd(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_TRYADD_OFFSET))(arg, nullptr);
		}

		::System::Void AddAndSkipParentCheck(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDANDSKIPPARENTCHECK_OFFSET))(arg, nullptr);
		}

		::System::Void AddFirst(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDFIRST_OFFSET))(arg, nullptr);
		}

		::System::Boolean TryAddInternal(::System::Int32 arg, ::System::Object* arg, ::System::Boolean arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int32, ::System::Object*, ::System::Boolean, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_TRYADDINTERNAL_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* CreateFromContent(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATEFROMCONTENT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonWriter* CreateWriter()
		{
			return (return (::Newtonsoft::Json::JsonWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATEWRITER_OFFSET))(nullptr);
		}

		::System::Void ReplaceAll(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REPLACEALL_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEALL_OFFSET))(nullptr);
		}

		::System::Void MergeItem(::System::Object* arg, ::Newtonsoft::Json::Linq::JsonMergeSettings* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGEITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Merge(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGE_OFFSET))(arg, nullptr);
		}

		::System::Void Merge(::System::Object* arg, ::Newtonsoft::Json::Linq::JsonMergeSettings* arg)
		{
			((::System::Void(*)(::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ValidateContent(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_VALIDATECONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void ReadTokenFrom(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_READTOKENFROM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void ReadContentFrom(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_READCONTENTFROM_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JProperty* ReadProperty(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Linq::JsonLoadSettings* arg, ::Newtonsoft::Json::IJsonLineInfo* arg, ::Newtonsoft::Json::Linq::JContainer* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JProperty*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*, ::Newtonsoft::Json::IJsonLineInfo*, ::Newtonsoft::Json::Linq::JContainer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_READPROPERTY_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 ContentsHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSHASHCODE_OFFSET))(nullptr);
		}

		::System::String* System.ComponentModel.ITypedList.GetListName(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::String*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.ITYPEDLIST.GETLISTNAME_OFFSET))(arg, nullptr);
		}

		::System::ComponentModel::PropertyDescriptorCollection* System.ComponentModel.ITypedList.GetItemProperties(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::ComponentModel::PropertyDescriptorCollection*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.ITYPEDLIST.GETITEMPROPERTIES_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.Generic.IList_Newtonsoft.Json.Linq.JToken_.IndexOf(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Int32(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ILIST_NEWTONSOFT.JSON.LINQ.JTOKEN_.INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_Newtonsoft.Json.Linq.JToken_.Insert(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ILIST_NEWTONSOFT.JSON.LINQ.JTOKEN_.INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_Newtonsoft.Json.Linq.JToken_.RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ILIST_NEWTONSOFT.JSON.LINQ.JTOKEN_.REMOVEAT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* System.Collections.Generic.IList_Newtonsoft.Json.Linq.JToken_.get_Item(::System::Int32 arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ILIST_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.IList_Newtonsoft.Json.Linq.JToken_.set_Item(::System::Int32 arg, ::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ILIST_NEWTONSOFT.JSON.LINQ.JTOKEN_.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_Newtonsoft.Json.Linq.JToken_.Add(::Newtonsoft::Json::Linq::JToken* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.ADD_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_Newtonsoft.Json.Linq.JToken_.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_Newtonsoft.Json.Linq.JToken_.Contains(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.Generic.ICollection_Newtonsoft.Json.Linq.JToken_.CopyTo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_Newtonsoft.Json.Linq.JToken_.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.Generic.ICollection_Newtonsoft.Json.Linq.JToken_.Remove(::Newtonsoft::Json::Linq::JToken* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.GENERIC.ICOLLECTION_NEWTONSOFT.JSON.LINQ.JTOKEN_.REMOVE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Linq::JToken* EnsureValue(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREVALUE_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.IList.Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.IList.IndexOf(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.IList.get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IList.Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Object* System.Collections.IList.get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Void System.ComponentModel.IBindingList.AddIndex(::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.ADDINDEX_OFFSET))(arg, nullptr);
		}

		::System::Object* System.ComponentModel.IBindingList.AddNew()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.ADDNEW_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_AllowEdit()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWEDIT_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_AllowNew()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWNEW_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_AllowRemove()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ALLOWREMOVE_OFFSET))(nullptr);
		}

		::System::Void System.ComponentModel.IBindingList.ApplySort(::System::ComponentModel::PropertyDescriptor* arg, ::System::ComponentModel::ListSortDirection* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.APPLYSORT_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 System.ComponentModel.IBindingList.Find(::System::ComponentModel::PropertyDescriptor* arg, ::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::ComponentModel::PropertyDescriptor*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.FIND_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_IsSorted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_ISSORTED_OFFSET))(nullptr);
		}

		::System::Void System.ComponentModel.IBindingList.RemoveIndex(::System::ComponentModel::PropertyDescriptor* arg)
		{
			((::System::Void(*)(::System::ComponentModel::PropertyDescriptor*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.REMOVEINDEX_OFFSET))(arg, nullptr);
		}

		::System::Void System.ComponentModel.IBindingList.RemoveSort()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.REMOVESORT_OFFSET))(nullptr);
		}

		::System::ComponentModel::ListSortDirection* System.ComponentModel.IBindingList.get_SortDirection()
		{
			return (return (::System::ComponentModel::ListSortDirection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SORTDIRECTION_OFFSET))(nullptr);
		}

		::System::ComponentModel::PropertyDescriptor* System.ComponentModel.IBindingList.get_SortProperty()
		{
			return (return (::System::ComponentModel::PropertyDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SORTPROPERTY_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_SupportsChangeNotification()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSCHANGENOTIFICATION_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_SupportsSearching()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSSEARCHING_OFFSET))(nullptr);
		}

		::System::Boolean System.ComponentModel.IBindingList.get_SupportsSorting()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM.COMPONENTMODEL.IBINDINGLIST.GET_SUPPORTSSORTING_OFFSET))(nullptr);
		}

		::System::Void MergeEnumerableContent(::Newtonsoft::Json::Linq::JContainer* arg, ::System::Collections::IEnumerable* arg, ::Newtonsoft::Json::Linq::JsonMergeSettings* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Linq::JContainer*, ::System::Collections::IEnumerable*, ::Newtonsoft::Json::Linq::JsonMergeSettings*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGEENUMERABLECONTENT_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

