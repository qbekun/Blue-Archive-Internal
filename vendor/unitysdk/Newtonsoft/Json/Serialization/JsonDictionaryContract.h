#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Utilities { class IWrappedDictionary; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYRESOLVER_OFFSET UNITYSDK_OFFSET(0x94CA300)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYKEYRESOLVER_OFFSET UNITYSDK_OFFSET(0x94CA310)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYTYPE_OFFSET UNITYSDK_OFFSET(0x94CA330)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYVALUETYPE_OFFSET UNITYSDK_OFFSET(0x94CA340)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_KEYCONTRACT_OFFSET UNITYSDK_OFFSET(0x94CA350)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_KEYCONTRACT_OFFSET UNITYSDK_OFFSET(0x94CA360)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_SHOULDCREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x94CA380)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x94CA390)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x94CA460)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_OVERRIDECREATOR_OFFSET UNITYSDK_OFFSET(0x94CA470)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x94CA490)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_HASPARAMETERIZEDCREATOR_OFFSET UNITYSDK_OFFSET(0x94CA4A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATORINTERNAL_OFFSET UNITYSDK_OFFSET(0x94CA4B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_.CTOR_OFFSET UNITYSDK_OFFSET(0x94C1B70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x94CA520)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATETEMPORARYDICTIONARY_OFFSET UNITYSDK_OFFSET(0x94CA830)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonDictionaryContract_TypeDefinitionIndex = 31942;

	class JsonDictionaryContract : public Il2CppObject
	{
	public:
		Il2CppObject* _DictionaryKeyResolver_k__BackingField; // 0xC0
		::System::Type* _DictionaryKeyType_k__BackingField; // 0xC8
		::System::Type* _DictionaryValueType_k__BackingField; // 0xD0
		::Newtonsoft::Json::Serialization::JsonContract* _KeyContract_k__BackingField; // 0xD8
		::System::Type* _genericCollectionDefinitionType; // 0xE0
		::System::Type* _genericWrapperType; // 0xE8
		Il2CppObject* _genericWrapperCreator; // 0xF0
		Il2CppObject* _genericTemporaryDictionaryCreator; // 0xF8
		::System::Boolean _ShouldCreateWrapper_k__BackingField; // 0x100
		::System::Reflection::ConstructorInfo* _parameterizedConstructor; // 0x108
		Il2CppObject* _overrideCreator; // 0x110
		Il2CppObject* _parameterizedCreator; // 0x118
		::System::Boolean _HasParameterizedCreator_k__BackingField; // 0x120

		Il2CppObject* get_DictionaryKeyResolver()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYRESOLVER_OFFSET))(nullptr);
		}

		::System::Void set_DictionaryKeyResolver(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_DICTIONARYKEYRESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Type* get_DictionaryKeyType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYKEYTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_DictionaryValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_DICTIONARYVALUETYPE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Serialization::JsonContract* get_KeyContract()
		{
			return (return (::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_KEYCONTRACT_OFFSET))(nullptr);
		}

		::System::Void set_KeyContract(::Newtonsoft::Json::Serialization::JsonContract* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Serialization::JsonContract*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_KEYCONTRACT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ShouldCreateWrapper()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_SHOULDCREATEWRAPPER_OFFSET))(nullptr);
		}

		Il2CppObject* get_ParameterizedCreator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_PARAMETERIZEDCREATOR_OFFSET))(nullptr);
		}

		Il2CppObject* get_OverrideCreator()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_OVERRIDECREATOR_OFFSET))(nullptr);
		}

		::System::Void set_OverrideCreator(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_OVERRIDECREATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasParameterizedCreator()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATOR_OFFSET))(nullptr);
		}

		::System::Void set_HasParameterizedCreator(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_SET_HASPARAMETERIZEDCREATOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_HasParameterizedCreatorInternal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_GET_HASPARAMETERIZEDCREATORINTERNAL_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_.CTOR_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Utilities::IWrappedDictionary* CreateWrapper(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Utilities::IWrappedDictionary*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATEWRAPPER_OFFSET))(arg, nullptr);
		}

		::System::Collections::IDictionary* CreateTemporaryDictionary()
		{
			return (return (::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONDICTIONARYCONTRACT_CREATETEMPORARYDICTIONARY_OFFSET))(nullptr);
		}

	};
}

