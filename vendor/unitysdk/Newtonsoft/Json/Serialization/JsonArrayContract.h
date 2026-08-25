#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class IWrappedCollection; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_COLLECTIONITEMTYPE_OFFSET UNITYSDK_OFFSET(0x94C84B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_ISMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x94C84C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x94C84D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_SHOULDCREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x94C84E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_CANDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94C84F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_CANDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x94C8500)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x94C8510)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x94C85E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x94C3C50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_HASPARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x94C85F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_HASPARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x94C8600)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_HASPARAMETERIZEDCREATORINTERNAL_OFFSET UNITYSDK_OFFSET(0x94C8610)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C2B40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x94C8A60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_CREATETEMPORARYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x94C8EB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_STOREFSHARPLISTCREATORIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x94C8890)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonArrayContract_TypeDefinitionIndex = 31932;

	class JsonArrayContract : public Il2CppObject
	{
	public:
		::System::Type* _CollectionItemType_k__BackingField; // 0xC0
		::System::Boolean _IsMultidimensionalArray_k__BackingField; // 0xC8
		::System::Type* _genericCollectionDefinitionType; // 0xD0
		::System::Type* _genericWrapperType; // 0xD8
		Il2CppObject* _genericWrapperCreator; // 0xE0
		Il2CppObject* _genericTemporaryCollectionCreator; // 0xE8
		::System::Boolean _IsArray_k__BackingField; // 0xF0
		::System::Boolean _ShouldCreateWrapper_k__BackingField; // 0xF1
		::System::Boolean _CanDeserialize_k__BackingField; // 0xF2
		::System::Reflection::ConstructorInfo* _parameterizedConstructor; // 0xF8
		Il2CppObject* _parameterizedCreator; // 0x100
		Il2CppObject* _overrideCreator; // 0x108
		::System::Boolean _HasParameterizedCreator_k__BackingField; // 0x110

		::System::Type* get_CollectionItemType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_COLLECTIONITEMTYPE_OFFSET))(nullptr);
		}

		::System::Boolean get_IsMultidimensionalArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_ISMULTIDIMENSIONALARRAY_OFFSET))(nullptr);
		}

		::System::Boolean get_IsArray()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_ISARRAY_OFFSET))(nullptr);
		}

		::System::Boolean get_ShouldCreateWrapper()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_SHOULDCREATEWRAPPER_OFFSET))(nullptr);
		}

		::System::Boolean get_CanDeserialize()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_CANDESERIALIZE_OFFSET))(nullptr);
		}

		::System::Void set_CanDeserialize(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_CANDESERIALIZE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ParameterizedCreator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_OverrideCreator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_OVERRIDECREATOR_OFFSET))(nullptr);
		}

		::System::Void set_OverrideCreator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_OVERRIDECREATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasParameterizedCreator()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_HASPARAMETERIZEDCREATOR_OFFSET))(nullptr);
		}

		::System::Void set_HasParameterizedCreator(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_SET_HASPARAMETERIZEDCREATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasParameterizedCreatorInternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_GET_HASPARAMETERIZEDCREATORINTERNAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_.CTOR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::IWrappedCollection* CreateWrapper(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::IWrappedCollection*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_CREATEWRAPPER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IList* CreateTemporaryCollection()
		{
			return (return (::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_CREATETEMPORARYCOLLECTION_OFFSET))(nullptr);
		}

		::System::Void StoreFSharpListCreatorIfNecessary(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONARRAYCONTRACT_STOREFSHARPLISTCREATORIFNECESSARY_OFFSET))(arg, nullptr);
		}

	};
}

