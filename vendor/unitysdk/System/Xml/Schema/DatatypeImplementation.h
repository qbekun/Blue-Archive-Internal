#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A16CB0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_ANYSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x9A21660)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_UNTYPEDATOMICTYPE_OFFSET UNITYSDK_OFFSET(0x9A216B0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A21700)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPEXSD_OFFSET UNITYSDK_OFFSET(0x9A217A0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXDRNAME_OFFSET UNITYSDK_OFFSET(0x9A21840)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET UNITYSDK_OFFSET(0x9A21910)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x9A219E0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x9A21AC0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET UNITYSDK_OFFSET(0x9A20AD0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET UNITYSDK_OFFSET(0x9A21D30)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMXSDTYPE_OFFSET UNITYSDK_OFFSET(0x9A21DC0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETNORMALIZEDSTRINGTYPEV1COMPAT_OFFSET UNITYSDK_OFFSET(0x9A21EB0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTOKENTYPEV1COMPAT_OFFSET UNITYSDK_OFFSET(0x9A22130)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETBUILTINTYPES_OFFSET UNITYSDK_OFFSET(0x9A223B0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETPRIMITIVETYPECODE_OFFSET UNITYSDK_OFFSET(0x9A22400)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYRESTRICTION_OFFSET UNITYSDK_OFFSET(0x9A22590)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET UNITYSDK_OFFSET(0x9A226B0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET UNITYSDK_OFFSET(0x9A1E910)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYUNION_OFFSET UNITYSDK_OFFSET(0x9A22810)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_VERIFYSCHEMAVALID_OFFSET UNITYSDK_OFFSET(0x9A22990)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISDERIVEDFROM_OFFSET UNITYSDK_OFFSET(0x9A229A0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x9A22C60)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISCOMPARABLE_OFFSET UNITYSDK_OFFSET(0x9A22C80)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A22D80)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x9A22D90)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x9A22DE0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x9A22E30)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x9A22E40)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VARIETY_OFFSET UNITYSDK_OFFSET(0x9A22EA0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x9A22EB0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_RESTRICTION_OFFSET UNITYSDK_OFFSET(0x9A22EC0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_HASLEXICALFACETS_OFFSET UNITYSDK_OFFSET(0x9A22ED0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_HASVALUEFACETS_OFFSET UNITYSDK_OFFSET(0x9A22F00)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BASE_OFFSET UNITYSDK_OFFSET(0x9A22F30)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_LISTVALUETYPE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALIDRESTRICTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A22F40)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A22F50)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A231D0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_TRYPARSEVALUE_OFFSET UNITYSDK_OFFSET(0x9A23370)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x9A23150)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET UNITYSDK_OFFSET(0x9A237B0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A23810)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DatatypeImplementation_TypeDefinitionIndex = 27996;

	class DatatypeImplementation : public Il2CppObject
	{
	public:
		::System::Xml::Schema::XmlSchemaDatatypeVariety* variety; // 0x10
		::System::Xml::Schema::RestrictionFacets* restriction; // 0x18
		::System::Xml::Schema::DatatypeImplementation* baseType; // 0x20
		::System::Xml::Schema::XmlValueConverter* valueConverter; // 0x28
		::System::Xml::Schema::XmlSchemaType* parentSchemaType; // 0x30
		::System::Collections::Hashtable* builtinTypes; // 0x0
		::Il2CppArray<::System::Object*>* enumToTypeCode; // 0x8
		::System::Xml::Schema::XmlSchemaSimpleType* anySimpleType; // 0x10
		::System::Xml::Schema::XmlSchemaSimpleType* anyAtomicType; // 0x18
		::System::Xml::Schema::XmlSchemaSimpleType* untypedAtomicType; // 0x20
		::System::Xml::Schema::XmlSchemaSimpleType* yearMonthDurationType; // 0x28
		::System::Xml::Schema::XmlSchemaSimpleType* dayTimeDurationType; // 0x30
		::System::Xml::Schema::XmlSchemaSimpleType* normalizedStringTypeV1Compat; // 0x38
		::System::Xml::Schema::XmlSchemaSimpleType* tokenTypeV1Compat; // 0x40
		::System::Xml::XmlQualifiedName* QnAnySimpleType; // 0x48
		::System::Xml::XmlQualifiedName* QnAnyType; // 0x50
		::System::Xml::Schema::FacetsChecker* stringFacetsChecker; // 0x58
		::System::Xml::Schema::FacetsChecker* miscFacetsChecker; // 0x60
		::System::Xml::Schema::FacetsChecker* numeric2FacetsChecker; // 0x68
		::System::Xml::Schema::FacetsChecker* binaryFacetsChecker; // 0x70
		::System::Xml::Schema::FacetsChecker* dateTimeFacetsChecker; // 0x78
		::System::Xml::Schema::FacetsChecker* durationFacetsChecker; // 0x80
		::System::Xml::Schema::FacetsChecker* listFacetsChecker; // 0x88
		::System::Xml::Schema::FacetsChecker* qnameFacetsChecker; // 0x90
		::System::Xml::Schema::FacetsChecker* unionFacetsChecker; // 0x98
		::System::Xml::Schema::DatatypeImplementation* c_anySimpleType; // 0xA0
		::System::Xml::Schema::DatatypeImplementation* c_anyURI; // 0xA8
		::System::Xml::Schema::DatatypeImplementation* c_base64Binary; // 0xB0
		::System::Xml::Schema::DatatypeImplementation* c_boolean; // 0xB8
		::System::Xml::Schema::DatatypeImplementation* c_byte; // 0xC0
		::System::Xml::Schema::DatatypeImplementation* c_char; // 0xC8
		::System::Xml::Schema::DatatypeImplementation* c_date; // 0xD0
		::System::Xml::Schema::DatatypeImplementation* c_dateTime; // 0xD8
		::System::Xml::Schema::DatatypeImplementation* c_dateTimeNoTz; // 0xE0
		::System::Xml::Schema::DatatypeImplementation* c_dateTimeTz; // 0xE8
		::System::Xml::Schema::DatatypeImplementation* c_day; // 0xF0
		::System::Xml::Schema::DatatypeImplementation* c_decimal; // 0xF8
		::System::Xml::Schema::DatatypeImplementation* c_double; // 0x100
		::System::Xml::Schema::DatatypeImplementation* c_doubleXdr; // 0x108
		::System::Xml::Schema::DatatypeImplementation* c_duration; // 0x110
		::System::Xml::Schema::DatatypeImplementation* c_ENTITY; // 0x118
		::System::Xml::Schema::DatatypeImplementation* c_ENTITIES; // 0x120
		::System::Xml::Schema::DatatypeImplementation* c_ENUMERATION; // 0x128
		::System::Xml::Schema::DatatypeImplementation* c_fixed; // 0x130
		::System::Xml::Schema::DatatypeImplementation* c_float; // 0x138
		::System::Xml::Schema::DatatypeImplementation* c_floatXdr; // 0x140
		::System::Xml::Schema::DatatypeImplementation* c_hexBinary; // 0x148
		::System::Xml::Schema::DatatypeImplementation* c_ID; // 0x150
		::System::Xml::Schema::DatatypeImplementation* c_IDREF; // 0x158
		::System::Xml::Schema::DatatypeImplementation* c_IDREFS; // 0x160
		::System::Xml::Schema::DatatypeImplementation* c_int; // 0x168
		::System::Xml::Schema::DatatypeImplementation* c_integer; // 0x170
		::System::Xml::Schema::DatatypeImplementation* c_language; // 0x178
		::System::Xml::Schema::DatatypeImplementation* c_long; // 0x180
		::System::Xml::Schema::DatatypeImplementation* c_month; // 0x188
		::System::Xml::Schema::DatatypeImplementation* c_monthDay; // 0x190
		::System::Xml::Schema::DatatypeImplementation* c_Name; // 0x198
		::System::Xml::Schema::DatatypeImplementation* c_NCName; // 0x1A0
		::System::Xml::Schema::DatatypeImplementation* c_negativeInteger; // 0x1A8
		::System::Xml::Schema::DatatypeImplementation* c_NMTOKEN; // 0x1B0
		::System::Xml::Schema::DatatypeImplementation* c_NMTOKENS; // 0x1B8
		::System::Xml::Schema::DatatypeImplementation* c_nonNegativeInteger; // 0x1C0
		::System::Xml::Schema::DatatypeImplementation* c_nonPositiveInteger; // 0x1C8
		::System::Xml::Schema::DatatypeImplementation* c_normalizedString; // 0x1D0
		::System::Xml::Schema::DatatypeImplementation* c_NOTATION; // 0x1D8
		::System::Xml::Schema::DatatypeImplementation* c_positiveInteger; // 0x1E0
		::System::Xml::Schema::DatatypeImplementation* c_QName; // 0x1E8
		::System::Xml::Schema::DatatypeImplementation* c_QNameXdr; // 0x1F0
		::System::Xml::Schema::DatatypeImplementation* c_short; // 0x1F8
		::System::Xml::Schema::DatatypeImplementation* c_string; // 0x200
		::System::Xml::Schema::DatatypeImplementation* c_time; // 0x208
		::System::Xml::Schema::DatatypeImplementation* c_timeNoTz; // 0x210
		::System::Xml::Schema::DatatypeImplementation* c_timeTz; // 0x218
		::System::Xml::Schema::DatatypeImplementation* c_token; // 0x220
		::System::Xml::Schema::DatatypeImplementation* c_unsignedByte; // 0x228
		::System::Xml::Schema::DatatypeImplementation* c_unsignedInt; // 0x230
		::System::Xml::Schema::DatatypeImplementation* c_unsignedLong; // 0x238
		::System::Xml::Schema::DatatypeImplementation* c_unsignedShort; // 0x240
		::System::Xml::Schema::DatatypeImplementation* c_uuid; // 0x248
		::System::Xml::Schema::DatatypeImplementation* c_year; // 0x250
		::System::Xml::Schema::DatatypeImplementation* c_yearMonth; // 0x258
		::System::Xml::Schema::DatatypeImplementation* c_normalizedStringV1Compat; // 0x260
		::System::Xml::Schema::DatatypeImplementation* c_tokenV1Compat; // 0x268
		::System::Xml::Schema::DatatypeImplementation* c_anyAtomicType; // 0x270
		::System::Xml::Schema::DatatypeImplementation* c_dayTimeDuration; // 0x278
		::System::Xml::Schema::DatatypeImplementation* c_untypedAtomicType; // 0x280
		::System::Xml::Schema::DatatypeImplementation* c_yearMonthDuration; // 0x288
		::Il2CppArray<::System::Object*>* c_tokenizedTypes; // 0x290
		::Il2CppArray<::System::Object*>* c_tokenizedTypesXsd; // 0x298
		::Il2CppArray<::System::Object*>* c_XdrTypes; // 0x2A0
		::Il2CppArray<::System::Object*>* c_XsdTypes; // 0x2A8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_AnySimpleType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_ANYSIMPLETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_UntypedAtomicType()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_UNTYPEDATOMICTYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedType(::System::Xml::XmlTokenizedType* arg)
		{
			return (return (::System::Xml::Schema::DatatypeImplementation*(*)(::System::Xml::XmlTokenizedType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedTypeXsd(::System::Xml::XmlTokenizedType* arg)
		{
			return (return (::System::Xml::Schema::DatatypeImplementation*(*)(::System::Xml::XmlTokenizedType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPEXSD_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::DatatypeImplementation* FromXdrName(::System::String* str)
		{
			return (return (::System::Xml::Schema::DatatypeImplementation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXDRNAME_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::DatatypeImplementation* FromTypeName(::System::String* str)
		{
			return (return (::System::Xml::Schema::DatatypeImplementation*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET))(str, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* StartBuiltinType(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void FinishBuiltinType(::System::Xml::Schema::XmlSchemaSimpleType* arg, ::System::Xml::Schema::XmlSchemaSimpleType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Xml::Schema::XmlSchemaSimpleType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateBuiltinTypes()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromTypeCode(::System::Xml::Schema::XmlTypeCode* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::Schema::XmlTypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromXsdType(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMXSDTYPE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* GetNormalizedStringTypeV1Compat()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETNORMALIZEDSTRINGTYPEV1COMPAT_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* GetTokenTypeV1Compat()
		{
			return (return (::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTOKENTYPEV1COMPAT_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* GetBuiltInTypes()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETBUILTINTYPES_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* GetPrimitiveTypeCode(::System::Xml::Schema::XmlTypeCode* arg)
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::System::Xml::Schema::XmlTypeCode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETPRIMITIVETYPECODE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByRestriction(::System::Xml::Schema::XmlSchemaObjectCollection* arg, ::System::Xml::XmlNameTable* arg, ::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Xml::XmlNameTable*, ::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYRESTRICTION_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(::System::Int32 arg, ::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatype*(*)(::System::Int32, ::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::Schema::DatatypeImplementation* DeriveByUnion(::Il2CppArray<::System::Object*>* arg, ::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::DatatypeImplementation*(*)(::Il2CppArray<::System::Object*>*, ::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYUNION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void VerifySchemaValid(::System::Xml::Schema::XmlSchemaObjectTable* arg, ::System::Xml::Schema::XmlSchemaObject* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaObjectTable*, ::System::Xml::Schema::XmlSchemaObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_VERIFYSCHEMAVALID_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsDerivedFrom(::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISDERIVEDFROM_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsEqual(::System::Object* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsComparable(::System::Xml::Schema::XmlSchemaDatatype* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::XmlSchemaDatatype*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISCOMPARABLE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* arg)
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return (return (::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_FACETSCHECKER_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlValueConverter* get_ValueConverter()
		{
			return (return (::System::Xml::Schema::XmlValueConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUECONVERTER_OFFSET))(nullptr);
		}

		::System::Xml::XmlTokenizedType* get_TokenizedType()
		{
			return (return (::System::Xml::XmlTokenizedType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TOKENIZEDTYPE_OFFSET))(nullptr);
		}

		::System::Type* get_ValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaDatatypeVariety* get_Variety()
		{
			return (return (::System::Xml::Schema::XmlSchemaDatatypeVariety*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VARIETY_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlTypeCode* get_TypeCode()
		{
			return (return (::System::Xml::Schema::XmlTypeCode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TYPECODE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFacets* get_Restriction()
		{
			return (return (::System::Xml::Schema::RestrictionFacets*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_RESTRICTION_OFFSET))(nullptr);
		}

		::System::Boolean get_HasLexicalFacets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_HASLEXICALFACETS_OFFSET))(nullptr);
		}

		::System::Boolean get_HasValueFacets()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_HASVALUEFACETS_OFFSET))(nullptr);
		}

		::System::Xml::Schema::DatatypeImplementation* get_Base()
		{
			return (return (::System::Xml::Schema::DatatypeImplementation*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BASE_OFFSET))(nullptr);
		}

		::System::Type* get_ListValueType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_LISTVALUETYPE_OFFSET))(nullptr);
		}

		::System::Xml::Schema::RestrictionFlags* get_ValidRestrictionFlags()
		{
			return (return (::System::Xml::Schema::RestrictionFlags*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALIDRESTRICTIONFLAGS_OFFSET))(nullptr);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace* get_BuiltInWhitespaceFacet()
		{
			return (return (::System::Xml::Schema::XmlSchemaWhiteSpace*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET))(nullptr);
		}

		::System::Object* ParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Object* ParseValue(::System::String* str, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Boolean arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET))(str, arg, arg, arg, nullptr);
		}

		::System::Exception* TryParseValue(::System::Object* arg, ::System::Xml::XmlNameTable* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Object&* arg)
		{
			return (return (::System::Exception*(*)(::System::Object*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*, ::System::Object&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_TRYPARSEVALUE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetTypeName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET))(nullptr);
		}

		::System::Int32 Compare(::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Int32(*)(::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_.CTOR_OFFSET))(nullptr);
		}

	};
}

