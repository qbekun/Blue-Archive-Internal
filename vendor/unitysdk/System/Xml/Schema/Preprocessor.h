#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_PREPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9884680)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x98847A0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CLEANUP_OFFSET UNITYSDK_OFFSET(0x98883C0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CLEANUPREDEFINE_OFFSET UNITYSDK_OFFSET(0x9888B70)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x9888C10)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_SET_READERSETTINGS_OFFSET UNITYSDK_OFFSET(0x9888C30)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_SET_SCHEMALOCATIONS_OFFSET UNITYSDK_OFFSET(0x9888C50)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_SET_CHAMELEONSCHEMAS_OFFSET UNITYSDK_OFFSET(0x9888C60)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GET_ROOTSCHEMA_OFFSET UNITYSDK_OFFSET(0x9888C70)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_BUILDSCHEMALIST_OFFSET UNITYSDK_OFFSET(0x9885E60)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_LOADEXTERNALS_OFFSET UNITYSDK_OFFSET(0x9884EB0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GETBUILDINSCHEMA_OFFSET UNITYSDK_OFFSET(0x98884C0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_BUILDREFNAMESPACES_OFFSET UNITYSDK_OFFSET(0x9888D10)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PARSEURI_OFFSET UNITYSDK_OFFSET(0x9888F70)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x9885FE0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_COPYINCLUDEDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x9889630)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSREDEFINE_OFFSET UNITYSDK_OFFSET(0x9887500)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GETINCLUDEDSET_OFFSET UNITYSDK_OFFSET(0x988C7E0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GETPARENTSCHEMA_OFFSET UNITYSDK_OFFSET(0x988C750)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_SETSCHEMADEFAULTS_OFFSET UNITYSDK_OFFSET(0x9889540)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_COUNTGROUPSELFREFERENCE_OFFSET UNITYSDK_OFFSET(0x988CF70)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDGROUP_OFFSET UNITYSDK_OFFSET(0x988C920)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x988C9B0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x988CE70)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x988CB00)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x988AAC0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSLOCALATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x988D7D0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTECONTENT_OFFSET UNITYSDK_OFFSET(0x988D550)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x988AC40)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x988BF00)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSLOCALELEMENT_OFFSET UNITYSDK_OFFSET(0x988E540)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x988E180)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSIDENTITYCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x988E9D0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x988B880)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x988ADB0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSGROUP_OFFSET UNITYSDK_OFFSET(0x988C170)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSNOTATION_OFFSET UNITYSDK_OFFSET(0x988C3B0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSPARTICLE_OFFSET UNITYSDK_OFFSET(0x988EDD0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x988DCD0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATEIDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98891B0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATENAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x988D280)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATEQNAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x988DA30)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_RESOLVESCHEMALOCATIONURI_OFFSET UNITYSDK_OFFSET(0x9888C80)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GETSCHEMAENTITY_OFFSET UNITYSDK_OFFSET(0x9888CD0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_GETCHAMELEONSCHEMA_OFFSET UNITYSDK_OFFSET(0x9884D60)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_SETPARENT_OFFSET UNITYSDK_OFFSET(0x98890E0)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSANNOTATION_OFFSET UNITYSDK_OFFSET(0x9889110)
#define SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSANNOTATION_OFFSET UNITYSDK_OFFSET(0x988C6D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Preprocessor_TypeDefinitionIndex = 28084;

	class Preprocessor : public ::TriInspector::TriValidationResult
	{
	public:
		::System::String* Xmlns; // 0x40
		::System::String* NsXsi; // 0x48
		::System::String* targetNamespace; // 0x50
		::System::Xml::Schema::XmlSchema* rootSchema; // 0x58
		::System::Xml::Schema::XmlSchema* currentSchema; // 0x60
		::System::Xml::Schema::XmlSchemaForm* elementFormDefault; // 0x68
		::System::Xml::Schema::XmlSchemaForm* attributeFormDefault; // 0x6C
		::System::Xml::Schema::XmlSchemaDerivationMethod* blockDefault; // 0x70
		::System::Xml::Schema::XmlSchemaDerivationMethod* finalDefault; // 0x74
		::System::Collections::Hashtable* schemaLocations; // 0x78
		::System::Collections::Hashtable* chameleonSchemas; // 0x80
		::System::Collections::Hashtable* referenceNamespaces; // 0x88
		::System::Collections::Hashtable* processedExternals; // 0x90
		::System::Collections::SortedList* lockList; // 0x98
		::System::Xml::XmlReaderSettings* readerSettings; // 0xA0
		::System::Xml::Schema::XmlSchema* rootSchemaForRedefine; // 0xA8
		::System::Collections::ArrayList* redefinedList; // 0xB0
		::System::Xml::Schema::XmlSchema* builtInSchemaForXmlNS; // 0x0
		::System::Xml::XmlResolver* xmlResolver; // 0xB8

		::System::Void .ctor(::System::Xml::XmlNameTable* arg, ::System::Xml::Schema::SchemaNames* arg, ::System::Xml::Schema::ValidationEventHandler* arg, ::System::Xml::Schema::XmlSchemaCompilationSettings* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*, ::System::Xml::Schema::XmlSchemaCompilationSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Execute(::System::Xml::Schema::XmlSchema* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchema*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_EXECUTE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void Cleanup(::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void CleanupRedefine(::System::Xml::Schema::XmlSchemaExternal* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaExternal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CLEANUPREDEFINE_OFFSET))(arg, nullptr);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* arg)
		{
			((::System::Void(*)(::System::Xml::XmlResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_SET_XMLRESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Void set_ReaderSettings(::System::Xml::XmlReaderSettings* arg)
		{
			((::System::Void(*)(::System::Xml::XmlReaderSettings*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_SET_READERSETTINGS_OFFSET))(arg, nullptr);
		}

		::System::Void set_SchemaLocations(::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_SET_SCHEMALOCATIONS_OFFSET))(arg, nullptr);
		}

		::System::Void set_ChameleonSchemas(::System::Collections::Hashtable* arg)
		{
			((::System::Void(*)(::System::Collections::Hashtable*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_SET_CHAMELEONSCHEMAS_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* get_RootSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GET_ROOTSCHEMA_OFFSET))(nullptr);
		}

		::System::Void BuildSchemaList(::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_BUILDSCHEMALIST_OFFSET))(arg, nullptr);
		}

		::System::Void LoadExternals(::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_LOADEXTERNALS_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* GetBuildInSchema()
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GETBUILDINSCHEMA_OFFSET))(nullptr);
		}

		::System::Void BuildRefNamespaces(::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_BUILDREFNAMESPACES_OFFSET))(arg, nullptr);
		}

		::System::Void ParseUri(::System::String* str, ::System::String* str, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PARSEURI_OFFSET))(str, str, arg, nullptr);
		}

		::System::Void Preprocess(::System::Xml::Schema::XmlSchema* arg, ::System::String* str, ::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::System::String*, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESS_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void CopyIncludedComponents(::System::Xml::Schema::XmlSchema* arg, ::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_COPYINCLUDEDCOMPONENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessRedefine(::System::Xml::Schema::RedefineEntry* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::RedefineEntry*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSREDEFINE_OFFSET))(arg, nullptr);
		}

		::System::Void GetIncludedSet(::System::Xml::Schema::XmlSchema* arg, ::System::Collections::ArrayList* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::System::Collections::ArrayList*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GETINCLUDEDSET_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* GetParentSchema(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GETPARENTSCHEMA_OFFSET))(arg, nullptr);
		}

		::System::Void SetSchemaDefaults(::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_SETSCHEMADEFAULTS_OFFSET))(arg, nullptr);
		}

		::System::Int32 CountGroupSelfReference(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::XmlSchemaGroup* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_COUNTGROUPSELFREFERENCE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckRefinedGroup(::System::Xml::Schema::XmlSchemaGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void CheckRefinedAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttributeGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDATTRIBUTEGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void CheckRefinedSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDSIMPLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckRefinedComplexType(::System::Xml::Schema::XmlSchemaComplexType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaComplexType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_CHECKREFINEDCOMPLEXTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessAttribute(::System::Xml::Schema::XmlSchemaAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessLocalAttribute(::System::Xml::Schema::XmlSchemaAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSLOCALATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessAttributeContent(::System::Xml::Schema::XmlSchemaAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTECONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttributeGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTEGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessElement(::System::Xml::Schema::XmlSchemaElement* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessLocalElement(::System::Xml::Schema::XmlSchemaElement* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSLOCALELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessElementContent(::System::Xml::Schema::XmlSchemaElement* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSELEMENTCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSIDENTITYCONSTRAINT_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSSIMPLETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessComplexType(::System::Xml::Schema::XmlSchemaComplexType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSCOMPLEXTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessGroup(::System::Xml::Schema::XmlSchemaGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessNotation(::System::Xml::Schema::XmlSchemaNotation* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaNotation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSNOTATION_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessParticle(::System::Xml::Schema::XmlSchemaParticle* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSPARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Xml::Schema::XmlSchemaAnyAttribute* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSATTRIBUTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ValidateIdAttribute(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATEIDATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateNameAttribute(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATENAMEATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateQNameAttribute(::System::Xml::Schema::XmlSchemaObject* arg, ::System::String* str, ::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::System::String*, ::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_VALIDATEQNAMEATTRIBUTE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Uri* ResolveSchemaLocationUri(::System::Xml::Schema::XmlSchema* arg, ::System::String* str)
		{
			return (return (::System::Uri*(*)(::System::Xml::Schema::XmlSchema*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_RESOLVESCHEMALOCATIONURI_OFFSET))(arg, str, nullptr);
		}

		::System::Object* GetSchemaEntity(::System::Uri* arg)
		{
			return (return (::System::Object*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GETSCHEMAENTITY_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchema* GetChameleonSchema(::System::String* str, ::System::Xml::Schema::XmlSchema* arg)
		{
			return (return (::System::Xml::Schema::XmlSchema*(*)(::System::String*, ::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_GETCHAMELEONSCHEMA_OFFSET))(str, arg, nullptr);
		}

		::System::Void SetParent(::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_SETPARENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessAnnotation(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSANNOTATION_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAnnotation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PREPROCESSOR_PREPROCESSANNOTATION_OFFSET))(arg, nullptr);
		}

	};
}

