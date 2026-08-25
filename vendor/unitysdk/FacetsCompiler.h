#pragma once
#include "unitysdk.h"

#define FACETSCOMPILER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A313E0)
#define FACETSCOMPILER_COMPILELENGTHFACET_OFFSET UNITYSDK_OFFSET(0x9A31760)
#define FACETSCOMPILER_COMPILEMINLENGTHFACET_OFFSET UNITYSDK_OFFSET(0x9A31B40)
#define FACETSCOMPILER_COMPILEMAXLENGTHFACET_OFFSET UNITYSDK_OFFSET(0x9A31EE0)
#define FACETSCOMPILER_COMPILEPATTERNFACET_OFFSET UNITYSDK_OFFSET(0x9A32280)
#define FACETSCOMPILER_COMPILEENUMERATIONFACET_OFFSET UNITYSDK_OFFSET(0x9A32440)
#define FACETSCOMPILER_COMPILEWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x9A325C0)
#define FACETSCOMPILER_COMPILEMAXINCLUSIVEFACET_OFFSET UNITYSDK_OFFSET(0x9A32E30)
#define FACETSCOMPILER_COMPILEMAXEXCLUSIVEFACET_OFFSET UNITYSDK_OFFSET(0x9A33070)
#define FACETSCOMPILER_COMPILEMININCLUSIVEFACET_OFFSET UNITYSDK_OFFSET(0x9A329B0)
#define FACETSCOMPILER_COMPILEMINEXCLUSIVEFACET_OFFSET UNITYSDK_OFFSET(0x9A32BF0)
#define FACETSCOMPILER_COMPILETOTALDIGITSFACET_OFFSET UNITYSDK_OFFSET(0x9A332B0)
#define FACETSCOMPILER_COMPILEFRACTIONDIGITSFACET_OFFSET UNITYSDK_OFFSET(0x9A336D0)
#define FACETSCOMPILER_FINISHFACETCOMPILE_OFFSET UNITYSDK_OFFSET(0x9A339F0)
#define FACETSCOMPILER_CHECKVALUE_OFFSET UNITYSDK_OFFSET(0x9A346A0)
#define FACETSCOMPILER_COMPILEFACETCOMBINATIONS_OFFSET UNITYSDK_OFFSET(0x9A33DD0)
#define FACETSCOMPILER_COPYFACETSFROMBASETYPE_OFFSET UNITYSDK_OFFSET(0x9A34ED0)
#define FACETSCOMPILER_PARSEFACETVALUE_OFFSET UNITYSDK_OFFSET(0x9A344D0)
#define FACETSCOMPILER_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x9A34C30)
#define FACETSCOMPILER_CHECKPROHIBITEDFLAG_OFFSET UNITYSDK_OFFSET(0x9A343C0)
#define FACETSCOMPILER_CHECKDUPFLAG_OFFSET UNITYSDK_OFFSET(0x9A34450)
#define FACETSCOMPILER_SETFLAG_OFFSET UNITYSDK_OFFSET(0x9A34640)
#define FACETSCOMPILER_SETFLAG_OFFSET UNITYSDK_OFFSET(0x9A35470)
#define FACETSCOMPILER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9A354A0)

	inline static constexpr unsigned int FacetsCompiler_TypeDefinitionIndex = 28062;

	class FacetsCompiler : public Il2CppObject
	{
	public:
		::System::Xml::Schema::DatatypeImplementation* datatype; // 0x10
		::System::Xml::Schema::RestrictionFacets* derivedRestriction; // 0x18
		::System::Xml::Schema::RestrictionFlags* baseFlags; // 0x20
		::System::Xml::Schema::RestrictionFlags* baseFixedFlags; // 0x24
		::System::Xml::Schema::RestrictionFlags* validRestrictionFlags; // 0x28
		::System::Xml::Schema::XmlSchemaDatatype* nonNegativeInt; // 0x30
		::System::Xml::Schema::XmlSchemaDatatype* builtInType; // 0x38
		::System::Xml::Schema::XmlTypeCode* builtInEnum; // 0x40
		::System::Boolean firstPattern; // 0x44
		::System::Text::StringBuilder* regStr; // 0x48
		::System::Xml::Schema::XmlSchemaPatternFacet* pattern_facet; // 0x50
		::Il2CppArray<::System::Object*>* c_map; // 0x0

		::System::Void .ctor(::System::Xml::Schema::DatatypeImplementation* arg, ::System::Xml::Schema::RestrictionFacets* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::DatatypeImplementation*, ::System::Xml::Schema::RestrictionFacets*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CompileLengthFacet(::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILELENGTHFACET_OFFSET))(arg, nullptr);
		}

		::System::Void CompileMinLengthFacet(::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEMINLENGTHFACET_OFFSET))(arg, nullptr);
		}

		::System::Void CompileMaxLengthFacet(::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEMAXLENGTHFACET_OFFSET))(arg, nullptr);
		}

		::System::Void CompilePatternFacet(::System::Xml::Schema::XmlSchemaPatternFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaPatternFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEPATTERNFACET_OFFSET))(arg, nullptr);
		}

		::System::Void CompileEnumerationFacet(::System::Xml::Schema::XmlSchemaFacet* arg, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Xml::XmlNameTable* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::IXmlNamespaceResolver*, ::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEENUMERATIONFACET_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CompileWhitespaceFacet(::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEWHITESPACEFACET_OFFSET))(arg, nullptr);
		}

		::System::Void CompileMaxInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEMAXINCLUSIVEFACET_OFFSET))(arg, nullptr);
		}

		::System::Void CompileMaxExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEMAXEXCLUSIVEFACET_OFFSET))(arg, nullptr);
		}

		::System::Void CompileMinInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEMININCLUSIVEFACET_OFFSET))(arg, nullptr);
		}

		::System::Void CompileMinExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEMINEXCLUSIVEFACET_OFFSET))(arg, nullptr);
		}

		::System::Void CompileTotalDigitsFacet(::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILETOTALDIGITSFACET_OFFSET))(arg, nullptr);
		}

		::System::Void CompileFractionDigitsFacet(::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEFRACTIONDIGITSFACET_OFFSET))(arg, nullptr);
		}

		::System::Void FinishFacetCompile()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_FINISHFACETCOMPILE_OFFSET))(nullptr);
		}

		::System::Void CheckValue(::System::Object* arg, ::System::Xml::Schema::XmlSchemaFacet* arg)
		{
			((::System::Void(*)(::System::Object*, ::System::Xml::Schema::XmlSchemaFacet*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_CHECKVALUE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CompileFacetCombinations()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COMPILEFACETCOMBINATIONS_OFFSET))(nullptr);
		}

		::System::Void CopyFacetsFromBaseType()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_COPYFACETSFROMBASETYPE_OFFSET))(nullptr);
		}

		::System::Object* ParseFacetValue(::System::Xml::Schema::XmlSchemaDatatype* arg, ::System::Xml::Schema::XmlSchemaFacet* arg, ::System::String* str, ::System::Xml::IXmlNamespaceResolver* arg, ::System::Xml::XmlNameTable* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::Schema::XmlSchemaDatatype*, ::System::Xml::Schema::XmlSchemaFacet*, ::System::String*, ::System::Xml::IXmlNamespaceResolver*, ::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_PARSEFACETVALUE_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::String* Preprocess(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_PREPROCESS_OFFSET))(str, nullptr);
		}

		::System::Void CheckProhibitedFlag(::System::Xml::Schema::XmlSchemaFacet* arg, ::System::Xml::Schema::RestrictionFlags* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_CHECKPROHIBITEDFLAG_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void CheckDupFlag(::System::Xml::Schema::XmlSchemaFacet* arg, ::System::Xml::Schema::RestrictionFlags* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_CHECKDUPFLAG_OFFSET))(arg, arg, str, nullptr);
		}

		::System::Void SetFlag(::System::Xml::Schema::XmlSchemaFacet* arg, ::System::Xml::Schema::RestrictionFlags* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaFacet*, ::System::Xml::Schema::RestrictionFlags*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_SETFLAG_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetFlag(::System::Xml::Schema::RestrictionFlags* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::RestrictionFlags*, ::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_SETFLAG_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FACETSCOMPILER_.CCTOR_OFFSET))(nullptr);
		}

	};

