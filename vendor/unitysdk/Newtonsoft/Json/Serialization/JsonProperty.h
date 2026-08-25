#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { class IValueProvider; }
namespace Newtonsoft::Json::Serialization { class IAttributeProvider; }
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class Required; }
namespace Newtonsoft::Json { class JsonWriter; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYCONTRACT_OFFSET UNITYSDK_OFFSET(0x94CC440)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYCONTRACT_OFFSET UNITYSDK_OFFSET(0x94CC450)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94CC460)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94BEFF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x94CC470)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DECLARINGTYPE_OFFSET UNITYSDK_OFFSET(0x94CC480)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x94CC490)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x94CC4A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_UNDERLYINGNAME_OFFSET UNITYSDK_OFFSET(0x94CC4B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_UNDERLYINGNAME_OFFSET UNITYSDK_OFFSET(0x94CC4C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_VALUEPROVIDER_OFFSET UNITYSDK_OFFSET(0x94CC4D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_VALUEPROVIDER_OFFSET UNITYSDK_OFFSET(0x94CC4E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ATTRIBUTEPROVIDER_OFFSET UNITYSDK_OFFSET(0x94CC4F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ATTRIBUTEPROVIDER_OFFSET UNITYSDK_OFFSET(0x94CC500)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x94CC510)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x94BE630)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x94CC520)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_CONVERTER_OFFSET UNITYSDK_OFFSET(0x94CC530)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_MEMBERCONVERTER_OFFSET UNITYSDK_OFFSET(0x94CC540)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_MEMBERCONVERTER_OFFSET UNITYSDK_OFFSET(0x94CC550)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_IGNORED_OFFSET UNITYSDK_OFFSET(0x94CC560)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_IGNORED_OFFSET UNITYSDK_OFFSET(0x94CC570)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_READABLE_OFFSET UNITYSDK_OFFSET(0x94CC580)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_READABLE_OFFSET UNITYSDK_OFFSET(0x94CC590)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_WRITABLE_OFFSET UNITYSDK_OFFSET(0x94CC5A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_WRITABLE_OFFSET UNITYSDK_OFFSET(0x94CC5B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_HASMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x94CC5C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_HASMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x94CC5D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x94BF070)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x94BF080)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GETRESOLVEDDEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x94CC5E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x94CBFB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_REQUIRED_OFFSET UNITYSDK_OFFSET(0x94CC690)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ISREQUIREDSPECIFIED_OFFSET UNITYSDK_OFFSET(0x94CC6F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x94CC720)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x94CC730)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC740)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_NULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC750)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC760)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC770)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC780)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_REFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC790)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC7A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_OBJECTCREATIONHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC7B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC7C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_TYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC7D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x94CC7E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SHOULDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x94CC7F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94CC810)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SHOULDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94CC820)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_GETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x94CC840)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_GETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x94CC850)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x94CC870)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SETISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x94CC880)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x94CC8A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x94CC900)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMCONVERTER_OFFSET UNITYSDK_OFFSET(0x94CC910)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x94CC930)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMISREFERENCE_OFFSET UNITYSDK_OFFSET(0x94CC940)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC950)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMTYPENAMEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC960)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC970)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMREFERENCELOOPHANDLING_OFFSET UNITYSDK_OFFSET(0x94CC980)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_WRITEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94CC990)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_.CTOR_OFFSET UNITYSDK_OFFSET(0x94BE620)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonProperty_TypeDefinitionIndex = 31949;

	class JsonProperty : public Il2CppObject
	{
	public:
		Il2CppObject* _required; // 0x10
		::System::Boolean _hasExplicitDefaultValue; // 0x18
		::System::Object* _defaultValue; // 0x20
		::System::Boolean _hasGeneratedDefaultValue; // 0x28
		::System::String* _propertyName; // 0x30
		::System::Boolean _skipPropertyNameEscape; // 0x38
		::System::Type* _propertyType; // 0x40
		::Newtonsoft::Json::Serialization::JsonContract* _PropertyContract_k__BackingField; // 0x48
		::System::Type* _DeclaringType_k__BackingField; // 0x50
		Il2CppObject* _Order_k__BackingField; // 0x58
		::System::String* _UnderlyingName_k__BackingField; // 0x60
		::Newtonsoft::Json::Serialization::IValueProvider* _ValueProvider_k__BackingField; // 0x68
		::Newtonsoft::Json::Serialization::IAttributeProvider* _AttributeProvider_k__BackingField; // 0x70
		::Newtonsoft::Json::JsonConverter* _Converter_k__BackingField; // 0x78
		::System::Boolean _Ignored_k__BackingField; // 0x80
		::System::Boolean _Readable_k__BackingField; // 0x81
		::System::Boolean _Writable_k__BackingField; // 0x82
		::System::Boolean _HasMemberAttribute_k__BackingField; // 0x83
		Il2CppObject* _IsReference_k__BackingField; // 0x84
		Il2CppObject* _NullValueHandling_k__BackingField; // 0x88
		Il2CppObject* _DefaultValueHandling_k__BackingField; // 0x90
		Il2CppObject* _ReferenceLoopHandling_k__BackingField; // 0x98
		Il2CppObject* _ObjectCreationHandling_k__BackingField; // 0xA0
		Il2CppObject* _TypeNameHandling_k__BackingField; // 0xA8
		Il2CppObject* _ShouldSerialize_k__BackingField; // 0xB0
		Il2CppObject* _ShouldDeserialize_k__BackingField; // 0xB8
		Il2CppObject* _GetIsSpecified_k__BackingField; // 0xC0
		Il2CppObject* _SetIsSpecified_k__BackingField; // 0xC8
		::Newtonsoft::Json::JsonConverter* _ItemConverter_k__BackingField; // 0xD0
		Il2CppObject* _ItemIsReference_k__BackingField; // 0xD8
		Il2CppObject* _ItemTypeNameHandling_k__BackingField; // 0xDC
		Il2CppObject* _ItemReferenceLoopHandling_k__BackingField; // 0xE4

		::Newtonsoft::Json::Serialization::JsonContract* get_PropertyContract()
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYCONTRACT_OFFSET))(nullptr);
		}

		::System::Void set_PropertyContract(::Newtonsoft::Json::Serialization::JsonContract* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYCONTRACT_OFFSET))(arg, nullptr);
		}

		::System::String* get_PropertyName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYNAME_OFFSET))(nullptr);
		}

		::System::Void set_PropertyName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Type* get_DeclaringType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DECLARINGTYPE_OFFSET))(nullptr);
		}

		::System::Void set_DeclaringType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DECLARINGTYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Order()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ORDER_OFFSET))(nullptr);
		}

		::System::Void set_Order(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ORDER_OFFSET))(arg, nullptr);
		}

		::System::String* get_UnderlyingName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_UNDERLYINGNAME_OFFSET))(nullptr);
		}

		::System::Void set_UnderlyingName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_UNDERLYINGNAME_OFFSET))(str, nullptr);
		}

		::Newtonsoft::Json::Serialization::IValueProvider* get_ValueProvider()
		{
			return (return (::Newtonsoft::Json::Serialization::IValueProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_VALUEPROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_ValueProvider(::Newtonsoft::Json::Serialization::IValueProvider* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::IValueProvider*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_VALUEPROVIDER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::IAttributeProvider* get_AttributeProvider()
		{
			return (return (::Newtonsoft::Json::Serialization::IAttributeProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ATTRIBUTEPROVIDER_OFFSET))(nullptr);
		}

		::System::Void set_AttributeProvider(::Newtonsoft::Json::Serialization::IAttributeProvider* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::IAttributeProvider*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ATTRIBUTEPROVIDER_OFFSET))(arg, nullptr);
		}

		::System::Type* get_PropertyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_PROPERTYTYPE_OFFSET))(nullptr);
		}

		::System::Void set_PropertyType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_PROPERTYTYPE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonConverter* get_Converter()
		{
			return (return (::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_CONVERTER_OFFSET))(nullptr);
		}

		::System::Void set_Converter(::Newtonsoft::Json::JsonConverter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonConverter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_CONVERTER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonConverter* get_MemberConverter()
		{
			return (return (::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_MEMBERCONVERTER_OFFSET))(nullptr);
		}

		::System::Void set_MemberConverter(::Newtonsoft::Json::JsonConverter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonConverter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_MEMBERCONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Ignored()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_IGNORED_OFFSET))(nullptr);
		}

		::System::Void set_Ignored(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_IGNORED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Readable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_READABLE_OFFSET))(nullptr);
		}

		::System::Void set_Readable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_READABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_Writable()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_WRITABLE_OFFSET))(nullptr);
		}

		::System::Void set_Writable(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_WRITABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasMemberAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_HASMEMBERATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_HasMemberAttribute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_HASMEMBERATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Object* get_DefaultValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUE_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValue(::System::Object* arg)
		{
			((::System::Void(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUE_OFFSET))(arg, nullptr);
		}

		::System::Object* GetResolvedDefaultValue()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GETRESOLVEDDEFAULTVALUE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Required* get_Required()
		{
			return (return (::Newtonsoft::Json::Required*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REQUIRED_OFFSET))(nullptr);
		}

		::System::Void set_Required(::Newtonsoft::Json::Required* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Required*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_REQUIRED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsRequiredSpecified()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ISREQUIREDSPECIFIED_OFFSET))(nullptr);
		}

		Il2CppObject* get_IsReference()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ISREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_IsReference(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ISREFERENCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_NullValueHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_NULLVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_NullValueHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_NULLVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_DefaultValueHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_DEFAULTVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_DefaultValueHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_DEFAULTVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ReferenceLoopHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_REFERENCELOOPHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ReferenceLoopHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_REFERENCELOOPHANDLING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ObjectCreationHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_OBJECTCREATIONHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ObjectCreationHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_OBJECTCREATIONHANDLING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_TypeNameHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_TYPENAMEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_TypeNameHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_TYPENAMEHANDLING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ShouldSerialize()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDSERIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_ShouldSerialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SHOULDSERIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ShouldDeserialize()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SHOULDDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_ShouldDeserialize(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SHOULDDESERIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_GetIsSpecified()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_GETISSPECIFIED_OFFSET))(nullptr);
		}

		::System::Void set_GetIsSpecified(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_GETISSPECIFIED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_SetIsSpecified()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_SETISSPECIFIED_OFFSET))(nullptr);
		}

		::System::Void set_SetIsSpecified(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_SETISSPECIFIED_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_TOSTRING_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::JsonConverter* get_ItemConverter()
		{
			return (return (::Newtonsoft::Json::JsonConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMCONVERTER_OFFSET))(nullptr);
		}

		::System::Void set_ItemConverter(::Newtonsoft::Json::JsonConverter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonConverter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMCONVERTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ItemIsReference()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMISREFERENCE_OFFSET))(nullptr);
		}

		::System::Void set_ItemIsReference(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMISREFERENCE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ItemTypeNameHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMTYPENAMEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ItemTypeNameHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMTYPENAMEHANDLING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ItemReferenceLoopHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_GET_ITEMREFERENCELOOPHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ItemReferenceLoopHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_SET_ITEMREFERENCELOOPHANDLING_OFFSET))(arg, nullptr);
		}

		::System::Void WritePropertyName(::Newtonsoft::Json::JsonWriter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_WRITEPROPERTYNAME_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONPROPERTY_.CTOR_OFFSET))(nullptr);
		}

	};
}

