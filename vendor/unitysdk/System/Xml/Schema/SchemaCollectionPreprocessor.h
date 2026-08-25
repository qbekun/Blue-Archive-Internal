#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x98A3B80)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x98A3BA0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CLEANUP_OFFSET UNITYSDK_OFFSET(0x98A3DF0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x98A77F0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_LOADEXTERNALS_OFFSET UNITYSDK_OFFSET(0x98A4040)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_BUILDREFNAMESPACES_OFFSET UNITYSDK_OFFSET(0x98A7A30)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x98A4E10)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSREDEFINE_OFFSET UNITYSDK_OFFSET(0x98A7DA0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_COUNTGROUPSELFREFERENCE_OFFSET UNITYSDK_OFFSET(0x98AB180)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDGROUP_OFFSET UNITYSDK_OFFSET(0x98AAB20)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x98AABB0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x98AB080)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x98AAD10)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98A9190)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSLOCALATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98AB950)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTECONTENT_OFFSET UNITYSDK_OFFSET(0x98AB740)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTEGROUP_OFFSET UNITYSDK_OFFSET(0x98A9310)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSELEMENT_OFFSET UNITYSDK_OFFSET(0x98AA3C0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSLOCALELEMENT_OFFSET UNITYSDK_OFFSET(0x98AC360)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x98AC000)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSIDENTITYCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x98AC780)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x98A9D90)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSCOMPLEXTYPE_OFFSET UNITYSDK_OFFSET(0x98A9410)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSGROUP_OFFSET UNITYSDK_OFFSET(0x98AA630)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSNOTATION_OFFSET UNITYSDK_OFFSET(0x98AA800)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSPARTICLE_OFFSET UNITYSDK_OFFSET(0x98ACB00)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x98ABCE0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATEIDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98A4B90)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATENAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98AB470)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATEQNAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x98ABB40)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_SETPARENT_OFFSET UNITYSDK_OFFSET(0x98A7C70)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSANNOTATION_OFFSET UNITYSDK_OFFSET(0x98A7CA0)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_RESOLVESCHEMALOCATIONURI_OFFSET UNITYSDK_OFFSET(0x98A7800)
#define SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_GETSCHEMAENTITY_OFFSET UNITYSDK_OFFSET(0x98A78E0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaCollectionPreprocessor_TypeDefinitionIndex = 28090;

	class SchemaCollectionPreprocessor : public ::TriInspector::TriValidationResult
	{
	public:
		::System::Xml::Schema::XmlSchema* schema; // 0x40
		::System::String* targetNamespace; // 0x48
		::System::Boolean buildinIncluded; // 0x50
		::System::Xml::Schema::XmlSchemaForm* elementFormDefault; // 0x54
		::System::Xml::Schema::XmlSchemaForm* attributeFormDefault; // 0x58
		::System::Xml::Schema::XmlSchemaDerivationMethod* blockDefault; // 0x5C
		::System::Xml::Schema::XmlSchemaDerivationMethod* finalDefault; // 0x60
		::System::Collections::Hashtable* schemaLocations; // 0x68
		::System::Collections::Hashtable* referenceNamespaces; // 0x70
		::System::String* Xmlns; // 0x78
		::System::Xml::XmlResolver* xmlResolver; // 0x80

		::System::Void .ctor(::System::Xml::XmlNameTable* arg, ::System::Xml::Schema::SchemaNames* arg, ::System::Xml::Schema::ValidationEventHandler* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNameTable*, ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean Execute(::System::Xml::Schema::XmlSchema* arg, ::System::String* str, ::System::Boolean arg, ::System::Xml::Schema::XmlSchemaCollection* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchema*, ::System::String*, ::System::Boolean, ::System::Xml::Schema::XmlSchemaCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_EXECUTE_OFFSET))(arg, str, arg, arg, nullptr);
		}

		::System::Void Cleanup(::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CLEANUP_OFFSET))(arg, nullptr);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* arg)
		{
			((::System::Void(*)(::System::Xml::XmlResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_SET_XMLRESOLVER_OFFSET))(arg, nullptr);
		}

		::System::Void LoadExternals(::System::Xml::Schema::XmlSchema* arg, ::System::Xml::Schema::XmlSchemaCollection* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::System::Xml::Schema::XmlSchemaCollection*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_LOADEXTERNALS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void BuildRefNamespaces(::System::Xml::Schema::XmlSchema* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_BUILDREFNAMESPACES_OFFSET))(arg, nullptr);
		}

		::System::Void Preprocess(::System::Xml::Schema::XmlSchema* arg, ::System::String* str, Compositor* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchema*, ::System::String*, Compositor*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESS_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void PreprocessRedefine(::System::Xml::Schema::XmlSchemaRedefine* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaRedefine*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSREDEFINE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CountGroupSelfReference(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_COUNTGROUPSELFREFERENCE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckRefinedGroup(::System::Xml::Schema::XmlSchemaGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void CheckRefinedAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttributeGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDATTRIBUTEGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void CheckRefinedSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDSIMPLETYPE_OFFSET))(arg, nullptr);
		}

		::System::Void CheckRefinedComplexType(::System::Xml::Schema::XmlSchemaComplexType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaComplexType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_CHECKREFINEDCOMPLEXTYPE_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessAttribute(::System::Xml::Schema::XmlSchemaAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessLocalAttribute(::System::Xml::Schema::XmlSchemaAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSLOCALATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessAttributeContent(::System::Xml::Schema::XmlSchemaAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTECONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaAttributeGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTEGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessElement(::System::Xml::Schema::XmlSchemaElement* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessLocalElement(::System::Xml::Schema::XmlSchemaElement* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSLOCALELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessElementContent(::System::Xml::Schema::XmlSchemaElement* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaElement*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSELEMENTCONTENT_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessIdentityConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSIDENTITYCONSTRAINT_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessSimpleType(::System::Xml::Schema::XmlSchemaSimpleType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSSIMPLETYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessComplexType(::System::Xml::Schema::XmlSchemaComplexType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSCOMPLEXTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessGroup(::System::Xml::Schema::XmlSchemaGroup* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaGroup*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSGROUP_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessNotation(::System::Xml::Schema::XmlSchemaNotation* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaNotation*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSNOTATION_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessParticle(::System::Xml::Schema::XmlSchemaParticle* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaParticle*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSPARTICLE_OFFSET))(arg, nullptr);
		}

		::System::Void PreprocessAttributes(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Xml::Schema::XmlSchemaAnyAttribute* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::Schema::XmlSchemaAnyAttribute*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSATTRIBUTES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void ValidateIdAttribute(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATEIDATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateNameAttribute(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATENAMEATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void ValidateQNameAttribute(::System::Xml::Schema::XmlSchemaObject* arg, ::System::String* str, ::System::Xml::XmlQualifiedName* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::System::String*, ::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_VALIDATEQNAMEATTRIBUTE_OFFSET))(arg, str, arg, nullptr);
		}

		::System::Void SetParent(::System::Xml::Schema::XmlSchemaObject* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_SETPARENT_OFFSET))(arg, arg, nullptr);
		}

		::System::Void PreprocessAnnotation(::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_PREPROCESSANNOTATION_OFFSET))(arg, nullptr);
		}

		::System::Uri* ResolveSchemaLocationUri(::System::Xml::Schema::XmlSchema* arg, ::System::String* str)
		{
			return (return (::System::Uri*(*)(::System::Xml::Schema::XmlSchema*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_RESOLVESCHEMALOCATIONURI_OFFSET))(arg, str, nullptr);
		}

		::System::IO::Stream* GetSchemaEntity(::System::Uri* arg)
		{
			return (return (::System::IO::Stream*(*)(::System::Uri*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMACOLLECTIONPREPROCESSOR_GETSCHEMAENTITY_OFFSET))(arg, nullptr);
		}

	};
}

