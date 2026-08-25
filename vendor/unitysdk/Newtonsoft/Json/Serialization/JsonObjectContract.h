#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class MemberSerialization; }
namespace Newtonsoft::Json::Serialization { class JsonPropertyCollection; }
namespace Newtonsoft::Json::Serialization { class ExtensionDataSetter; }
namespace Newtonsoft::Json::Serialization { class ExtensionDataGetter; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x94CB9B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_MEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x94CB9C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x94CB9D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_MISSINGMEMBERHANDLING_OFFSET UNITYSDK_OFFSET(0x94CB9E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_ITEMREQUIRED_OFFSET UNITYSDK_OFFSET(0x94CB9F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_ITEMREQUIRED_OFFSET UNITYSDK_OFFSET(0x94CBA00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_ITEMNULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CBA10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_ITEMNULLVALUEHANDLING_OFFSET UNITYSDK_OFFSET(0x94CBA20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_PROPERTIES_OFFSET UNITYSDK_OFFSET(0x94CBA30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_CREATORPARAMETERS_OFFSET UNITYSDK_OFFSET(0x94BC350)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x94CBA40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x94CBA50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x94CBA70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_PARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x94CBA80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATASETTER_OFFSET UNITYSDK_OFFSET(0x94CBAA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATASETTER_OFFSET UNITYSDK_OFFSET(0x94CBAB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATAGETTER_OFFSET UNITYSDK_OFFSET(0x94CBAD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATAGETTER_OFFSET UNITYSDK_OFFSET(0x94CBAE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATAVALUETYPE_OFFSET UNITYSDK_OFFSET(0x94CBB00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATAVALUETYPE_OFFSET UNITYSDK_OFFSET(0x94BD890)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATANAMERESOLVER_OFFSET UNITYSDK_OFFSET(0x94CBB10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATANAMERESOLVER_OFFSET UNITYSDK_OFFSET(0x94CBB20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_HASREQUIREDORDEFAULTVALUEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x94CBB40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94BBAF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GETUNINITIALIZEDOBJECT_OFFSET UNITYSDK_OFFSET(0x94CBFE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonObjectContract_TypeDefinitionIndex = 31947;

	class JsonObjectContract : public Il2CppObject
	{
	public:
		::Newtonsoft::Json::MemberSerialization* _MemberSerialization_k__BackingField; // 0xC0
		Il2CppObject* _MissingMemberHandling_k__BackingField; // 0xC4
		Il2CppObject* _ItemRequired_k__BackingField; // 0xCC
		Il2CppObject* _ItemNullValueHandling_k__BackingField; // 0xD4
		::Newtonsoft::Json::Serialization::JsonPropertyCollection* _Properties_k__BackingField; // 0xE0
		::Newtonsoft::Json::Serialization::ExtensionDataSetter* _ExtensionDataSetter_k__BackingField; // 0xE8
		::Newtonsoft::Json::Serialization::ExtensionDataGetter* _ExtensionDataGetter_k__BackingField; // 0xF0
		Il2CppObject* _ExtensionDataNameResolver_k__BackingField; // 0xF8
		::System::Boolean ExtensionDataIsJToken; // 0x100
		Il2CppObject* _hasRequiredOrDefaultValueProperties; // 0x101
		Il2CppObject* _overrideCreator; // 0x108
		Il2CppObject* _parameterizedCreator; // 0x110
		::Newtonsoft::Json::Serialization::JsonPropertyCollection* _creatorParameters; // 0x118
		::System::Type* _extensionDataValueType; // 0x120

		::Newtonsoft::Json::MemberSerialization* get_MemberSerialization()
		{
			return (return (::Newtonsoft::Json::MemberSerialization*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_MEMBERSERIALIZATION_OFFSET))(nullptr);
		}

		::System::Void set_MemberSerialization(::Newtonsoft::Json::MemberSerialization* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::MemberSerialization*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_MEMBERSERIALIZATION_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_MissingMemberHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_MISSINGMEMBERHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_MissingMemberHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_MISSINGMEMBERHANDLING_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ItemRequired()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_ITEMREQUIRED_OFFSET))(nullptr);
		}

		::System::Void set_ItemRequired(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_ITEMREQUIRED_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ItemNullValueHandling()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_ITEMNULLVALUEHANDLING_OFFSET))(nullptr);
		}

		::System::Void set_ItemNullValueHandling(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_ITEMNULLVALUEHANDLING_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_Properties()
		{
			return (return (::Newtonsoft::Json::Serialization::JsonPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_PROPERTIES_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonPropertyCollection* get_CreatorParameters()
		{
			return (return (::Newtonsoft::Json::Serialization::JsonPropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_CREATORPARAMETERS_OFFSET))(nullptr);
		}

		Il2CppObject* get_OverrideCreator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_OVERRIDECREATOR_OFFSET))(nullptr);
		}

		::System::Void set_OverrideCreator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_OVERRIDECREATOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParameterizedCreator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET))(nullptr);
		}

		::System::Void set_ParameterizedCreator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_PARAMETERIZEDCREATOR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::ExtensionDataSetter* get_ExtensionDataSetter()
		{
			return (return (::Newtonsoft::Json::Serialization::ExtensionDataSetter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATASETTER_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionDataSetter(::Newtonsoft::Json::Serialization::ExtensionDataSetter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::ExtensionDataSetter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATASETTER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::ExtensionDataGetter* get_ExtensionDataGetter()
		{
			return (return (::Newtonsoft::Json::Serialization::ExtensionDataGetter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATAGETTER_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionDataGetter(::Newtonsoft::Json::Serialization::ExtensionDataGetter* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::ExtensionDataGetter*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATAGETTER_OFFSET))(arg, nullptr);
		}

		::System::Type* get_ExtensionDataValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATAVALUETYPE_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionDataValueType(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATAVALUETYPE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ExtensionDataNameResolver()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_EXTENSIONDATANAMERESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_ExtensionDataNameResolver(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_SET_EXTENSIONDATANAMERESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasRequiredOrDefaultValueProperties()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GET_HASREQUIREDORDEFAULTVALUEPROPERTIES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* GetUninitializedObject()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONOBJECTCONTRACT_GETUNINITIALIZEDOBJECT_OFFSET))(nullptr);
		}

	};
}

