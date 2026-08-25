#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Utilities { class ReflectionObject; }
namespace Newtonsoft::Json { class MemberSerialization; }
namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json::Serialization { class NamingStrategy; }
namespace Newtonsoft::Json { class JsonContainerAttribute; }
namespace Newtonsoft::Json::Utilities { class ReflectionDelegateFactory; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETCACHEDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CANTYPEDESCRIPTORCONVERTSTRING_OFFSET UNITYSDK_OFFSET(0x94E0630)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATACONTRACTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x94E3620)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATAMEMBERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x94E36F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETOBJECTMEMBERSERIALIZATION_OFFSET UNITYSDK_OFFSET(0x94E39B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTER_OFFSET UNITYSDK_OFFSET(0x94E3B50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATEJSONCONVERTERINSTANCE_OFFSET UNITYSDK_OFFSET(0x94E3C70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATENAMINGSTRATEGYINSTANCE_OFFSET UNITYSDK_OFFSET(0x94E3D70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETCONTAINERNAMINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x94E3E70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETCREATOR_OFFSET UNITYSDK_OFFSET(0x94E3F30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEDMETADATATYPE_OFFSET UNITYSDK_OFFSET(0x94E4230)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEMETADATATYPEFROMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x94E42D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_ISNONSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x94E45B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_ISSERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x94E3AE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x000000)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_DYNAMICCODEGENERATION_OFFSET UNITYSDK_OFFSET(0x94E4620)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_FULLYTRUSTED_OFFSET UNITYSDK_OFFSET(0x94E26C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_REFLECTIONDELEGATEFACTORY_OFFSET UNITYSDK_OFFSET(0x94E4180)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94E4730)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonTypeReflector_TypeDefinitionIndex = 31963;

	class JsonTypeReflector : public Il2CppObject
	{
	public:
		Il2CppObject* _dynamicCodeGeneration; // 0x0
		Il2CppObject* _fullyTrusted; // 0x2
		::System::String* IdPropertyName; // 0x0
		::System::String* RefPropertyName; // 0x0
		::System::String* TypePropertyName; // 0x0
		::System::String* ValuePropertyName; // 0x0
		::System::String* ArrayValuesPropertyName; // 0x0
		::System::String* ShouldSerializePrefix; // 0x0
		::System::String* SpecifiedPostfix; // 0x0
		::System::String* ConcurrentDictionaryTypeName; // 0x0
		Il2CppObject* CreatorCache; // 0x8
		Il2CppObject* AssociatedMetadataTypesCache; // 0x10
		::Newtonsoft::Json::Utilities::ReflectionObject* _metadataTypeAttributeReflectionObject; // 0x18

		Il2CppObject* GetCachedAttribute(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETCACHEDATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanTypeDescriptorConvertString(::System::Type* arg, ::System::ComponentModel::TypeConverter&* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::System::ComponentModel::TypeConverter&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CANTYPEDESCRIPTORCONVERTSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Runtime::Serialization::DataContractAttribute* GetDataContractAttribute(::System::Type* arg)
		{
			return (return (::System::Runtime::Serialization::DataContractAttribute*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATACONTRACTATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Runtime::Serialization::DataMemberAttribute* GetDataMemberAttribute(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Runtime::Serialization::DataMemberAttribute*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETDATAMEMBERATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::MemberSerialization* GetObjectMemberSerialization(::System::Type* arg, ::System::Boolean arg)
		{
			return (return (::Newtonsoft::Json::MemberSerialization*(*)(::System::Type*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETOBJECTMEMBERSERIALIZATION_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::JsonConverter* GetJsonConverter(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::JsonConverter*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETJSONCONVERTER_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::JsonConverter* CreateJsonConverterInstance(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Newtonsoft::Json::JsonConverter*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATEJSONCONVERTERINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::NamingStrategy* CreateNamingStrategyInstance(::System::Type* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::NamingStrategy*(*)(::System::Type*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_CREATENAMINGSTRATEGYINSTANCE_OFFSET))(arg, arg, nullptr);
		}

		::Newtonsoft::Json::Serialization::NamingStrategy* GetContainerNamingStrategy(::Newtonsoft::Json::JsonContainerAttribute* arg)
		{
			return (return (::Newtonsoft::Json::Serialization::NamingStrategy*(*)(::Newtonsoft::Json::JsonContainerAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETCONTAINERNAMINGSTRATEGY_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetCreator(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETCREATOR_OFFSET))(arg, nullptr);
		}

		::System::Type* GetAssociatedMetadataType(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEDMETADATATYPE_OFFSET))(arg, nullptr);
		}

		::System::Type* GetAssociateMetadataTypeFromAttribute(::System::Type* arg)
		{
			return (return (::System::Type*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETASSOCIATEMETADATATYPEFROMATTRIBUTE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAttribute(::System::Type* arg)
		{
			return (return (Il2CppObject*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETATTRIBUTE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAttribute(::System::Reflection::MemberInfo* arg)
		{
			return (return (Il2CppObject*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsNonSerializable(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_ISNONSERIALIZABLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsSerializable(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_ISSERIALIZABLE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* GetAttribute(::System::Object* arg)
		{
			return (return (Il2CppObject*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GETATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_DynamicCodeGeneration()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_DYNAMICCODEGENERATION_OFFSET))(nullptr);
		}

		::System::Boolean get_FullyTrusted()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_FULLYTRUSTED_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Utilities::ReflectionDelegateFactory* get_ReflectionDelegateFactory()
		{
			return (return (::Newtonsoft::Json::Utilities::ReflectionDelegateFactory*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_GET_REFLECTIONDELEGATEFACTORY_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONTYPEREFLECTOR_.CCTOR_OFFSET))(nullptr);
		}

	};
}

