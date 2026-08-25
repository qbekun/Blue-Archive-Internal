#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class IContractResolver; }
namespace Newtonsoft::Json { class DefaultJsonNameTable; }
namespace Newtonsoft::Json::Serialization { class NamingStrategy; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { class JsonObjectContract; }
namespace Newtonsoft::Json::Serialization { class JsonPropertyCollection; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Serialization { class JsonDictionaryContract; }
namespace Newtonsoft::Json::Serialization { class JsonArrayContract; }
namespace Newtonsoft::Json::Serialization { class JsonPrimitiveContract; }
namespace Newtonsoft::Json::Serialization { class JsonLinqContract; }
namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonDynamicContract; }
namespace Newtonsoft::Json::Serialization { class JsonStringContract; }
namespace Newtonsoft::Json { class MemberSerialization; }
namespace Newtonsoft::Json::Serialization { class IValueProvider; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x94B9FF0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DYNAMICCODEGENERATION_OFFSET UNITYSDK_OFFSET(0x94BA040)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET UNITYSDK_OFFSET(0x94BA0A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET UNITYSDK_OFFSET(0x94BA0B0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET UNITYSDK_OFFSET(0x94BA0C0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET UNITYSDK_OFFSET(0x94BA0D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEINTERFACE_OFFSET UNITYSDK_OFFSET(0x94BA0E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEINTERFACE_OFFSET UNITYSDK_OFFSET(0x94BA0F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x94BA100)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x94BA110)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNOREISSPECIFIEDMEMBERS_OFFSET UNITYSDK_OFFSET(0x94BA120)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNOREISSPECIFIEDMEMBERS_OFFSET UNITYSDK_OFFSET(0x94BA130)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESHOULDSERIALIZEMEMBERS_OFFSET UNITYSDK_OFFSET(0x94BA140)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESHOULDSERIALIZEMEMBERS_OFFSET UNITYSDK_OFFSET(0x94BA150)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_NAMINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x94BA160)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_NAMINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x94BA170)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_.CTOR_OFFSET UNITYSDK_OFFSET(0x94B9A00)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET UNITYSDK_OFFSET(0x94BA180)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_FILTERMEMBERS_OFFSET UNITYSDK_OFFSET(0x94BA230)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSERIALIZABLEMEMBERS_OFFSET UNITYSDK_OFFSET(0x94BA370)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSERIALIZEENTITYMEMBER_OFFSET UNITYSDK_OFFSET(0x94BB160)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEOBJECTCONTRACT_OFFSET UNITYSDK_OFFSET(0x94BB280)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_THROWUNABLETOSERIALIZEERROR_OFFSET UNITYSDK_OFFSET(0x94BD3E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETEXTENSIONDATAMEMBERFORTYPE_OFFSET UNITYSDK_OFFSET(0x94BC6F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETEXTENSIONDATADELEGATES_OFFSET UNITYSDK_OFFSET(0x94BC8F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETATTRIBUTECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x94BBE00)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETIMMUTABLECONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x94BC420)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETPARAMETERIZEDCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x94BC3D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONSTRUCTORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x94BDA80)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_MATCHPROPERTY_OFFSET UNITYSDK_OFFSET(0x94BD970)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTYFROMCONSTRUCTORPARAMETER_OFFSET UNITYSDK_OFFSET(0x94BE190)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACTCONVERTER_OFFSET UNITYSDK_OFFSET(0x94BF0A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETDEFAULTCREATOR_OFFSET UNITYSDK_OFFSET(0x94BF0F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_INITIALIZECONTRACT_OFFSET UNITYSDK_OFFSET(0x94BBB80)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECALLBACKMETHODS_OFFSET UNITYSDK_OFFSET(0x94BF1B0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCALLBACKMETHODSFORTYPE_OFFSET UNITYSDK_OFFSET(0x94BF530)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISCONCURRENTOROBSERVABLECOLLECTION_OFFSET UNITYSDK_OFFSET(0x94C13E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x94C0AC0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPSERIALIZING_OFFSET UNITYSDK_OFFSET(0x94C09D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLASSHIERARCHYFORTYPE_OFFSET UNITYSDK_OFFSET(0x94BD480)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEDICTIONARYCONTRACT_OFFSET UNITYSDK_OFFSET(0x94C1530)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEARRAYCONTRACT_OFFSET UNITYSDK_OFFSET(0x94C27A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPRIMITIVECONTRACT_OFFSET UNITYSDK_OFFSET(0x94C3C80)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATELINQCONTRACT_OFFSET UNITYSDK_OFFSET(0x94C3DD0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEISERIALIZABLECONTRACT_OFFSET UNITYSDK_OFFSET(0x94C3E60)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEDYNAMICCONTRACT_OFFSET UNITYSDK_OFFSET(0x94C40D0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESTRINGCONTRACT_OFFSET UNITYSDK_OFFSET(0x94C44E0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONTRACT_OFFSET UNITYSDK_OFFSET(0x94C4550)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISJSONPRIMITIVETYPE_OFFSET UNITYSDK_OFFSET(0x94C4990)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISICONVERTIBLE_OFFSET UNITYSDK_OFFSET(0x94C4B20)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CANCONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x94C49F0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISVALIDCALLBACK_OFFSET UNITYSDK_OFFSET(0x94C0BB0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLRTYPEFULLNAME_OFFSET UNITYSDK_OFFSET(0x94C4C90)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94C4D90)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETNAMETABLE_OFFSET UNITYSDK_OFFSET(0x94C52B0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEMEMBERVALUEPROVIDER_OFFSET UNITYSDK_OFFSET(0x94C52C0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x94C5320)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETPROPERTYSETTINGSFROMATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x94BE6A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESHOULDSERIALIZETEST_OFFSET UNITYSDK_OFFSET(0x94C55A0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETISSPECIFIEDACTIONS_OFFSET UNITYSDK_OFFSET(0x94C5800)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94C5B70)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEEXTENSIONDATANAME_OFFSET UNITYSDK_OFFSET(0x94C5BA0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEDICTIONARYKEY_OFFSET UNITYSDK_OFFSET(0x94C5BD0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETRESOLVEDPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x94C5C10)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94C5C30)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultContractResolver_TypeDefinitionIndex = 31919;

	class DefaultContractResolver : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::Serialization::IContractResolver* _instance; // 0x0
		::Il2CppArray<::System::Object*>* BlacklistedTypeNames; // 0x8
		::Il2CppArray<::System::Object*>* BuiltInConverters; // 0x10
		::Newtonsoft::Json::DefaultJsonNameTable* _nameTable; // 0x10
		Il2CppObject* _contractCache; // 0x18
		::System::Reflection::BindingFlags* _DefaultMembersSearchFlags_k__BackingField; // 0x20
		::System::Boolean _SerializeCompilerGeneratedMembers_k__BackingField; // 0x24
		::System::Boolean _IgnoreSerializableInterface_k__BackingField; // 0x25
		::System::Boolean _IgnoreSerializableAttribute_k__BackingField; // 0x26
		::System::Boolean _IgnoreIsSpecifiedMembers_k__BackingField; // 0x27
		::System::Boolean _IgnoreShouldSerializeMembers_k__BackingField; // 0x28
		::Newtonsoft::Json::Serialization::NamingStrategy* _NamingStrategy_k__BackingField; // 0x30

		::Newtonsoft::Json::Serialization::IContractResolver* get_Instance()
		{
			return (return (::Newtonsoft::Json::Serialization::IContractResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_INSTANCE_OFFSET))(nullptr);
		}

		::System::Boolean get_DynamicCodeGeneration()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DYNAMICCODEGENERATION_OFFSET))(nullptr);
		}

		::System::Reflection::BindingFlags* get_DefaultMembersSearchFlags()
		{
			return (return (::System::Reflection::BindingFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET))(nullptr);
		}

		::System::Void set_DefaultMembersSearchFlags(::System::Reflection::BindingFlags* arg)
		{
			((::System::Void(*)(::System::Reflection::BindingFlags*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_DEFAULTMEMBERSSEARCHFLAGS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_SerializeCompilerGeneratedMembers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET))(nullptr);
		}

		::System::Void set_SerializeCompilerGeneratedMembers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_SERIALIZECOMPILERGENERATEDMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreSerializableInterface()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEINTERFACE_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreSerializableInterface(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEINTERFACE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreSerializableAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESERIALIZABLEATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreSerializableAttribute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESERIALIZABLEATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreIsSpecifiedMembers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNOREISSPECIFIEDMEMBERS_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreIsSpecifiedMembers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNOREISSPECIFIEDMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IgnoreShouldSerializeMembers()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_IGNORESHOULDSERIALIZEMEMBERS_OFFSET))(nullptr);
		}

		::System::Void set_IgnoreShouldSerializeMembers(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_IGNORESHOULDSERIALIZEMEMBERS_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::NamingStrategy* get_NamingStrategy()
		{
			return (return (::Newtonsoft::Json::Serialization::NamingStrategy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GET_NAMINGSTRATEGY_OFFSET))(nullptr);
		}

		::System::Void set_NamingStrategy(::Newtonsoft::Json::Serialization::NamingStrategy* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::NamingStrategy*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SET_NAMINGSTRATEGY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_.CTOR_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACT_OFFSET))(arg, nullptr);
		}

		::System::Boolean FilterMembers(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_FILTERMEMBERS_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetSerializableMembers(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETSERIALIZABLEMEMBERS_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSerializeEntityMember(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSERIALIZEENTITYMEMBER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonObjectContract* CreateObjectContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonObjectContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEOBJECTCONTRACT_OFFSET))(arg, nullptr);
		}

		::System::Void ThrowUnableToSerializeError(::System::Object* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_THROWUNABLETOSERIALIZEERROR_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::MemberInfo* GetExtensionDataMemberForType(::System::Type* arg)
		{
			return (return (::System::Reflection::MemberInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETEXTENSIONDATAMEMBERFORTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void SetExtensionDataDelegates(::Newtonsoft::Json::Serialization::JsonObjectContract* arg, ::System::Reflection::MemberInfo* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonObjectContract*, ::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETEXTENSIONDATADELEGATES_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::ConstructorInfo* GetAttributeConstructor(::System::Type* arg)
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETATTRIBUTECONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		::System::Reflection::ConstructorInfo* GetImmutableConstructor(::System::Type* arg, ::Newtonsoft::Json::Serialization::JsonPropertyCollection* arg)
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::Newtonsoft::Json::Serialization::JsonPropertyCollection*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETIMMUTABLECONSTRUCTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Reflection::ConstructorInfo* GetParameterizedConstructor(::System::Type* arg)
		{
			return (return (::System::Reflection::ConstructorInfo*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETPARAMETERIZEDCONSTRUCTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateConstructorParameters(::System::Reflection::ConstructorInfo* arg, ::Newtonsoft::Json::Serialization::JsonPropertyCollection* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::ConstructorInfo*, ::Newtonsoft::Json::Serialization::JsonPropertyCollection*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONSTRUCTORPARAMETERS_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* MatchProperty(::Newtonsoft::Json::Serialization::JsonPropertyCollection* arg, ::System::String* str, ::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonProperty*(*)(::Newtonsoft::Json::Serialization::JsonPropertyCollection*, ::System::String*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_MATCHPROPERTY_OFFSET))(arg, str, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* CreatePropertyFromConstructorParameter(::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Reflection::ParameterInfo* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonProperty*(*)(::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Reflection::ParameterInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTYFROMCONSTRUCTORPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::JsonConverter* ResolveContractConverter(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::JsonConverter*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECONTRACTCONVERTER_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetDefaultCreator(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETDEFAULTCREATOR_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeContract(::Newtonsoft::Json::Serialization::JsonContract* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_INITIALIZECONTRACT_OFFSET))(arg, nullptr);
		}

		::System::Void ResolveCallbackMethods(::Newtonsoft::Json::Serialization::JsonContract* arg, ::System::Type* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVECALLBACKMETHODS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetCallbackMethodsForType(::System::Type* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg, Il2CppObject&* arg)
		{
			((::System::Void(*)(::System::Type*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCALLBACKMETHODSFORTYPE_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsConcurrentOrObservableCollection(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISCONCURRENTOROBSERVABLECOLLECTION_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSkipDeserialized(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPDESERIALIZED_OFFSET))(arg, nullptr);
		}

		::System::Boolean ShouldSkipSerializing(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SHOULDSKIPSERIALIZING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetClassHierarchyForType(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLASSHIERARCHYFORTYPE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonDictionaryContract* CreateDictionaryContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonDictionaryContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEDICTIONARYCONTRACT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonArrayContract* CreateArrayContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonArrayContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEARRAYCONTRACT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonPrimitiveContract* CreatePrimitiveContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonPrimitiveContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPRIMITIVECONTRACT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonLinqContract* CreateLinqContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonLinqContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATELINQCONTRACT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonISerializableContract* CreateISerializableContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonISerializableContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEISERIALIZABLECONTRACT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonDynamicContract* CreateDynamicContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonDynamicContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEDYNAMICCONTRACT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonStringContract* CreateStringContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonStringContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESTRINGCONTRACT_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* CreateContract(::System::Type* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATECONTRACT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsJsonPrimitiveType(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISJSONPRIMITIVETYPE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsIConvertible(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISICONVERTIBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvertToString(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CANCONVERTTOSTRING_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsValidCallback(::System::Reflection::MethodInfo* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Type* arg, ::System::Reflection::MethodInfo* arg, ::System::Type&* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MethodInfo*, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::System::Reflection::MethodInfo*, ::System::Type&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_ISVALIDCALLBACK_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::String* GetClrTypeFullName(::System::Type* arg)
		{
			return (return (::System::String*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETCLRTYPEFULLNAME_OFFSET))(arg, nullptr);
		}

		Il2CppObject* CreateProperties(::System::Type* arg, ::Newtonsoft::Json::MemberSerialization* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::Newtonsoft::Json::MemberSerialization*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTIES_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::DefaultJsonNameTable* GetNameTable()
		{
			return (return (::Newtonsoft::Json::DefaultJsonNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETNAMETABLE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Serialization::IValueProvider* CreateMemberValueProvider(::System::Reflection::MemberInfo* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::IValueProvider*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEMEMBERVALUEPROVIDER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonProperty* CreateProperty(::System::Reflection::MemberInfo* arg, ::Newtonsoft::Json::MemberSerialization* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::JsonProperty*(*)(::System::Reflection::MemberInfo*, ::Newtonsoft::Json::MemberSerialization*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATEPROPERTY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetPropertySettingsFromAttributes(::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Object* arg, ::System::String* str, ::System::Type* arg, ::Newtonsoft::Json::MemberSerialization* arg, bool&* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::String*, ::System::Type*, ::Newtonsoft::Json::MemberSerialization*, bool&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETPROPERTYSETTINGSFROMATTRIBUTES_OFFSET))(arg, arg, str, arg, arg, arg, nullptr);
		}

		Il2CppObject* CreateShouldSerializeTest(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_CREATESHOULDSERIALIZETEST_OFFSET))(arg, nullptr);
		}

		::System::Void SetIsSpecifiedActions(::Newtonsoft::Json::Serialization::JsonProperty* arg, ::System::Reflection::MemberInfo* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Reflection::MemberInfo*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_SETISSPECIFIEDACTIONS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ResolvePropertyName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::String* ResolveExtensionDataName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEEXTENSIONDATANAME_OFFSET))(str, nullptr);
		}

		::System::String* ResolveDictionaryKey(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_RESOLVEDICTIONARYKEY_OFFSET))(str, nullptr);
		}

		::System::String* GetResolvedPropertyName(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_GETRESOLVEDPROPERTYNAME_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTCONTRACTRESOLVER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

