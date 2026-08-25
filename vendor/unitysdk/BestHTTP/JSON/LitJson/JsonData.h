#pragma once
#include "../../../unitysdk.h"

namespace BestHTTP::JSON::LitJson { class JsonType; }
namespace BestHTTP::JSON::LitJson { class JsonData; }
namespace BestHTTP::JSON::LitJson { class JsonWriter; }
namespace BestHTTP::JSON::LitJson { class IJsonWrapper; }

#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x89FF30)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x8A00B0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x8A00C0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISDOUBLE_OFFSET UNITYSDK_OFFSET(0x8A00D0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISINT_OFFSET UNITYSDK_OFFSET(0x8A00E0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISLONG_OFFSET UNITYSDK_OFFSET(0x8A00F0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x8A0100)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x8A0110)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x8A0120)
#define BESTHTTP_JSON_LITJSON_JSONDATA_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x8A0350)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x8A0470)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x8A0480)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x8A0530)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x8A05E0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x8A0690)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GET_KEYS_OFFSET UNITYSDK_OFFSET(0x8A0740)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GET_VALUES_OFFSET UNITYSDK_OFFSET(0x8A0B10)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x8A0EE0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x8A0EF0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISDOUBLE_OFFSET UNITYSDK_OFFSET(0x8A0F00)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISINT_OFFSET UNITYSDK_OFFSET(0x8A0F10)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISLONG_OFFSET UNITYSDK_OFFSET(0x8A0F20)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x8A0F30)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x8A0F40)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x8A0F50)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x8A1120)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A11D0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A1280)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IORDEREDDICTIONARY.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A17F0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IORDEREDDICTIONARY.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A18B0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A1AF0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A1BA0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A1ED0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A1410)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A1F80)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8A1C20)
#define BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A20D0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A20E0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A2110)
#define BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A2140)
#define BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A2170)
#define BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A21A0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x8A23A0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x8A23E0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x8A2440)
#define BESTHTTP_JSON_LITJSON_JSONDATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x8A24B0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x8A2510)
#define BESTHTTP_JSON_LITJSON_JSONDATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x8A2570)
#define BESTHTTP_JSON_LITJSON_JSONDATA_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x8A25E0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x8A2650)
#define BESTHTTP_JSON_LITJSON_JSONDATA_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x8A26D0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x8A2750)
#define BESTHTTP_JSON_LITJSON_JSONDATA_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x8A27E0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x8A2850)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.ADD_OFFSET UNITYSDK_OFFSET(0x8A2900)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.CLEAR_OFFSET UNITYSDK_OFFSET(0x8A2B40)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.CONTAINS_OFFSET UNITYSDK_OFFSET(0x8A2C70)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8A2D20)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.REMOVE_OFFSET UNITYSDK_OFFSET(0x8A2DB0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8A3060)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x8A3110)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x8A3180)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GETINT_OFFSET UNITYSDK_OFFSET(0x8A31F0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GETLONG_OFFSET UNITYSDK_OFFSET(0x8A3260)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GETSTRING_OFFSET UNITYSDK_OFFSET(0x8A32D0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.SETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x8A3340)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.SETDOUBLE_OFFSET UNITYSDK_OFFSET(0x8A3360)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.SETINT_OFFSET UNITYSDK_OFFSET(0x8A3380)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.SETLONG_OFFSET UNITYSDK_OFFSET(0x8A33A0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.SETSTRING_OFFSET UNITYSDK_OFFSET(0x8A33C0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.TOJSON_OFFSET UNITYSDK_OFFSET(0x8A3400)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.TOJSON_OFFSET UNITYSDK_OFFSET(0x8A34E0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET UNITYSDK_OFFSET(0x8A3540)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.CLEAR_OFFSET UNITYSDK_OFFSET(0x8A3670)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET UNITYSDK_OFFSET(0x8A3730)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET UNITYSDK_OFFSET(0x8A37E0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET UNITYSDK_OFFSET(0x8A3890)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET UNITYSDK_OFFSET(0x8A3970)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.REMOVEAT_OFFSET UNITYSDK_OFFSET(0x8A3A30)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IORDEREDDICTIONARY.GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8A3AF0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IORDEREDDICTIONARY.INSERT_OFFSET UNITYSDK_OFFSET(0x8A3C10)
#define BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IORDEREDDICTIONARY.REMOVEAT_OFFSET UNITYSDK_OFFSET(0x8A3DB0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_ENSURECOLLECTION_OFFSET UNITYSDK_OFFSET(0x89FFE0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_ENSUREDICTIONARY_OFFSET UNITYSDK_OFFSET(0x8A01D0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_ENSURELIST_OFFSET UNITYSDK_OFFSET(0x8A1000)
#define BESTHTTP_JSON_LITJSON_JSONDATA_TOJSONDATA_OFFSET UNITYSDK_OFFSET(0x8A13A0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x8A3F60)
#define BESTHTTP_JSON_LITJSON_JSONDATA_ADD_OFFSET UNITYSDK_OFFSET(0x8A3550)
#define BESTHTTP_JSON_LITJSON_JSONDATA_REMOVE_OFFSET UNITYSDK_OFFSET(0x8A5500)
#define BESTHTTP_JSON_LITJSON_JSONDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x8A5910)
#define BESTHTTP_JSON_LITJSON_JSONDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x8A5A20)
#define BESTHTTP_JSON_LITJSON_JSONDATA_GETJSONTYPE_OFFSET UNITYSDK_OFFSET(0x8A5BE0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_SETJSONTYPE_OFFSET UNITYSDK_OFFSET(0x8A5BF0)
#define BESTHTTP_JSON_LITJSON_JSONDATA_TOJSON_OFFSET UNITYSDK_OFFSET(0x8A3410)
#define BESTHTTP_JSON_LITJSON_JSONDATA_TOJSON_OFFSET UNITYSDK_OFFSET(0x8A3510)
#define BESTHTTP_JSON_LITJSON_JSONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8A5DF0)

namespace BestHTTP::JSON::LitJson
{
	inline static constexpr unsigned int JsonData_TypeDefinitionIndex = 23304;

	class JsonData : public Il2CppObject
	{
	public:
		Il2CppObject* inst_array; // 0x10
		::System::Boolean inst_boolean; // 0x18
		::System::Double inst_double; // 0x20
		::System::Int32 inst_int; // 0x28
		::System::Int64 inst_long; // 0x30
		Il2CppObject* inst_object; // 0x38
		::System::String* inst_string; // 0x40
		::System::String* json; // 0x48
		::BestHTTP::JSON::LitJson::JsonType* type; // 0x50
		Il2CppObject* object_list; // 0x58

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISARRAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsBoolean()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISBOOLEAN_OFFSET))(nullptr);
		}

		::System::Boolean get_IsDouble()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISDOUBLE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsInt()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISINT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsLong()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISLONG_OFFSET))(nullptr);
		}

		::System::Boolean get_IsObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean get_IsString()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_ISSTRING_OFFSET))(nullptr);
		}

		Il2CppObject* get_Keys()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_KEYS_OFFSET))(nullptr);
		}

		::System::Boolean ContainsKey(::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_CONTAINSKEY_OFFSET))(str, nullptr);
		}

		::System::Int32 System.Collections.ICollection.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IDictionary.get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IDictionary.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* System.Collections.IDictionary.get_Keys()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GET_KEYS_OFFSET))(nullptr);
		}

		::System::Collections::ICollection* System.Collections.IDictionary.get_Values()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GET_VALUES_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.JSON.LitJson.IJsonWrapper.get_IsArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISARRAY_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.JSON.LitJson.IJsonWrapper.get_IsBoolean()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISBOOLEAN_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.JSON.LitJson.IJsonWrapper.get_IsDouble()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISDOUBLE_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.JSON.LitJson.IJsonWrapper.get_IsInt()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISINT_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.JSON.LitJson.IJsonWrapper.get_IsLong()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISLONG_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.JSON.LitJson.IJsonWrapper.get_IsObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISOBJECT_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.JSON.LitJson.IJsonWrapper.get_IsString()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GET_ISSTRING_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.get_IsFixedSize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.GET_ISFIXEDSIZE_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.get_IsReadOnly()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.GET_ISREADONLY_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.IDictionary.get_Item(::System::Object* arg)
		{
			return (return (::System::Object*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IDictionary.set_Item(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* BestHTTP.JSON.LitJson.IOrderedDictionary.get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IORDEREDDICTIONARY.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.JSON.LitJson.IOrderedDictionary.set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IORDEREDDICTIONARY.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Object* System.Collections.IList.get_Item(::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.set_Item(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* get_Item(::System::String* str)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::BestHTTP::JSON::LitJson::JsonData* arg)
		{
			((::System::Void(*)(::System::String*, ::BestHTTP::JSON::LitJson::JsonData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* get_Item(::System::Int32 arg)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::BestHTTP::JSON::LitJson::JsonData* arg)
		{
			((::System::Void(*)(::System::Int32, ::BestHTTP::JSON::LitJson::JsonData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_.CTOR_OFFSET))(str, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* op_Implicit(::System::Boolean arg)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* op_Implicit(::System::Double arg)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* op_Implicit(::System::Int32 arg)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* op_Implicit(::System::Int64 arg)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* op_Implicit(::System::String* str)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::System::Boolean op_Explicit(::BestHTTP::JSON::LitJson::JsonData* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::JsonData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Double op_Explicit(::BestHTTP::JSON::LitJson::JsonData* arg)
		{
			return (return (::System::Double(*)(::BestHTTP::JSON::LitJson::JsonData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int32 op_Explicit(::BestHTTP::JSON::LitJson::JsonData* arg)
		{
			return (return (::System::Int32(*)(::BestHTTP::JSON::LitJson::JsonData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Int64 op_Explicit(::BestHTTP::JSON::LitJson::JsonData* arg)
		{
			return (return (::System::Int64(*)(::BestHTTP::JSON::LitJson::JsonData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* op_Explicit(::BestHTTP::JSON::LitJson::JsonData* arg)
		{
			return (return (::System::String*(*)(::BestHTTP::JSON::LitJson::JsonData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.IDictionary.Add(::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.IDictionary.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IDictionary.Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionaryEnumerator* System.Collections.IDictionary.GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void System.Collections.IDictionary.Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IDICTIONARY.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* System.Collections.IEnumerable.GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.IENUMERABLE.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Boolean BestHTTP.JSON.LitJson.IJsonWrapper.GetBoolean()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GETBOOLEAN_OFFSET))(nullptr);
		}

		::System::Double BestHTTP.JSON.LitJson.IJsonWrapper.GetDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GETDOUBLE_OFFSET))(nullptr);
		}

		::System::Int32 BestHTTP.JSON.LitJson.IJsonWrapper.GetInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GETINT_OFFSET))(nullptr);
		}

		::System::Int64 BestHTTP.JSON.LitJson.IJsonWrapper.GetLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GETLONG_OFFSET))(nullptr);
		}

		::System::String* BestHTTP.JSON.LitJson.IJsonWrapper.GetString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.GETSTRING_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.JSON.LitJson.IJsonWrapper.SetBoolean(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.SETBOOLEAN_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.JSON.LitJson.IJsonWrapper.SetDouble(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.SETDOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.JSON.LitJson.IJsonWrapper.SetInt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.SETINT_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.JSON.LitJson.IJsonWrapper.SetLong(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.SETLONG_OFFSET))(arg, nullptr);
		}

		::System::Void BestHTTP.JSON.LitJson.IJsonWrapper.SetString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.SETSTRING_OFFSET))(str, nullptr);
		}

		::System::String* BestHTTP.JSON.LitJson.IJsonWrapper.ToJson()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.TOJSON_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.JSON.LitJson.IJsonWrapper.ToJson(::BestHTTP::JSON::LitJson::JsonWriter* arg)
		{
			((::System::Void(*)(::BestHTTP::JSON::LitJson::JsonWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IJSONWRAPPER.TOJSON_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.IList.Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.ADD_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean System.Collections.IList.Contains(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.CONTAINS_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.Collections.IList.IndexOf(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.INDEXOF_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.Insert(::System::Int32 arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.INSERT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void System.Collections.IList.Remove(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void System.Collections.IList.RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SYSTEM.COLLECTIONS.ILIST.REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionaryEnumerator* BestHTTP.JSON.LitJson.IOrderedDictionary.GetEnumerator()
		{
			return (return (::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IORDEREDDICTIONARY.GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Void BestHTTP.JSON.LitJson.IOrderedDictionary.Insert(::System::Int32 arg, ::System::Object* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IORDEREDDICTIONARY.INSERT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void BestHTTP.JSON.LitJson.IOrderedDictionary.RemoveAt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_BESTHTTP.JSON.LITJSON.IORDEREDDICTIONARY.REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Collections::ICollection* EnsureCollection()
		{
			return (return (::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_ENSURECOLLECTION_OFFSET))(nullptr);
		}

		::System::Collections::IDictionary* EnsureDictionary()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_ENSUREDICTIONARY_OFFSET))(nullptr);
		}

		::System::Collections::IList* EnsureList()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_ENSURELIST_OFFSET))(nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonData* ToJsonData(::System::Object* arg)
		{
			return (return (::BestHTTP::JSON::LitJson::JsonData*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_TOJSONDATA_OFFSET))(arg, nullptr);
		}

		::System::Void WriteJson(::BestHTTP::JSON::LitJson::IJsonWrapper* arg, ::BestHTTP::JSON::LitJson::JsonWriter* arg)
		{
			((::System::Void(*)(::BestHTTP::JSON::LitJson::IJsonWrapper*, ::BestHTTP::JSON::LitJson::JsonWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_WRITEJSON_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 Add(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_ADD_OFFSET))(arg, nullptr);
		}

		::System::Boolean Remove(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_CLEAR_OFFSET))(nullptr);
		}

		::System::Boolean Equals(::BestHTTP::JSON::LitJson::JsonData* arg)
		{
			return (return (::System::Boolean(*)(::BestHTTP::JSON::LitJson::JsonData*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_EQUALS_OFFSET))(arg, nullptr);
		}

		::BestHTTP::JSON::LitJson::JsonType* GetJsonType()
		{
			return (return (::BestHTTP::JSON::LitJson::JsonType*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_GETJSONTYPE_OFFSET))(nullptr);
		}

		::System::Void SetJsonType(::BestHTTP::JSON::LitJson::JsonType* arg)
		{
			((::System::Void(*)(::BestHTTP::JSON::LitJson::JsonType*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_SETJSONTYPE_OFFSET))(arg, nullptr);
		}

		::System::String* ToJson()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_TOJSON_OFFSET))(nullptr);
		}

		::System::Void ToJson(::BestHTTP::JSON::LitJson::JsonWriter* arg)
		{
			((::System::Void(*)(::BestHTTP::JSON::LitJson::JsonWriter*, ::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_TOJSON_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BESTHTTP_JSON_LITJSON_JSONDATA_TOSTRING_OFFSET))(nullptr);
		}

	};
}

