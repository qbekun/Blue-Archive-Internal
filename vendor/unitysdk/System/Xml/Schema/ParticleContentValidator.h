#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A107D0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A10830)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_INITVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A10890)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_VALIDATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9A108E0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET UNITYSDK_OFFSET(0x9A10930)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_START_OFFSET UNITYSDK_OFFSET(0x9A10980)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_OPENGROUP_OFFSET UNITYSDK_OFFSET(0x9A10AB0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CLOSEGROUP_OFFSET UNITYSDK_OFFSET(0x9A10AE0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_EXISTS_OFFSET UNITYSDK_OFFSET(0x9A10C70)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDNAME_OFFSET UNITYSDK_OFFSET(0x9A10CB0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x9A10EB0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDLEAFNODE_OFFSET UNITYSDK_OFFSET(0x9A10DC0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDCHOICE_OFFSET UNITYSDK_OFFSET(0x9A10F50)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x9A11060)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDSTAR_OFFSET UNITYSDK_OFFSET(0x9A11170)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDPLUS_OFFSET UNITYSDK_OFFSET(0x9A11380)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDQMARK_OFFSET UNITYSDK_OFFSET(0x9A113E0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDLEAFRANGE_OFFSET UNITYSDK_OFFSET(0x9A11440)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CLOSURE_OFFSET UNITYSDK_OFFSET(0x9A111D0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_FINISH_OFFSET UNITYSDK_OFFSET(0x9A115A0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CALCULATETOTALFOLLOWPOSFORRANGENODES_OFFSET UNITYSDK_OFFSET(0x9A11DF0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKCMUPAWITHLEAFRANGENODES_OFFSET UNITYSDK_OFFSET(0x9A12A30)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_GETAPPLICABLEMINMAXFOLLOWPOS_OFFSET UNITYSDK_OFFSET(0x9A12590)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKUNIQUEPARTICLEATTRIBUTION_OFFSET UNITYSDK_OFFSET(0x9A12DA0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKUNIQUEPARTICLEATTRIBUTION_OFFSET UNITYSDK_OFFSET(0x9A138B0)
#define SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_BUILDTRANSITIONTABLE_OFFSET UNITYSDK_OFFSET(0x9A12E50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ParticleContentValidator_TypeDefinitionIndex = 27984;

	class ParticleContentValidator : public Il2CppObject
	{
	public:
		::System::Xml::Schema::SymbolsDictionary* symbols; // 0x18
		::System::Xml::Schema::Positions* positions; // 0x20
		::System::Collections::Stack* stack; // 0x28
		::System::Xml::Schema::SyntaxTreeNode* contentNode; // 0x30
		::System::Boolean isPartial; // 0x38
		::System::Int32 minMaxNodesCount; // 0x3C
		::System::Boolean enableUpaCheck; // 0x40

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaContentType* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContentType*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::XmlSchemaContentType* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Xml::Schema::XmlSchemaContentType*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void InitValidation(::System::Xml::Schema::ValidationState* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::ValidationState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_INITVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* arg, ::System::Xml::Schema::ValidationState* arg, int32_t&* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, int32_t&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_VALIDATEELEMENT_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Boolean CompleteValidation(::System::Xml::Schema::ValidationState* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::Schema::ValidationState*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_COMPLETEVALIDATION_OFFSET))(arg, nullptr);
		}

		::System::Void Start()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_START_OFFSET))(nullptr);
		}

		::System::Void OpenGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_OPENGROUP_OFFSET))(nullptr);
		}

		::System::Void CloseGroup()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CLOSEGROUP_OFFSET))(nullptr);
		}

		::System::Boolean Exists(::System::Xml::XmlQualifiedName* arg)
		{
			return (return (::System::Boolean(*)(::System::Xml::XmlQualifiedName*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_EXISTS_OFFSET))(arg, nullptr);
		}

		::System::Void AddName(::System::Xml::XmlQualifiedName* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::XmlQualifiedName*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddNamespaceList(::System::Xml::Schema::NamespaceList* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::NamespaceList*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDNAMESPACELIST_OFFSET))(arg, arg, nullptr);
		}

		::System::Void AddLeafNode(::System::Xml::Schema::SyntaxTreeNode* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::SyntaxTreeNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDLEAFNODE_OFFSET))(arg, nullptr);
		}

		::System::Void AddChoice()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDCHOICE_OFFSET))(nullptr);
		}

		::System::Void AddSequence()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDSEQUENCE_OFFSET))(nullptr);
		}

		::System::Void AddStar()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDSTAR_OFFSET))(nullptr);
		}

		::System::Void AddPlus()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDPLUS_OFFSET))(nullptr);
		}

		::System::Void AddQMark()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDQMARK_OFFSET))(nullptr);
		}

		::System::Void AddLeafRange(::System::Decimal* arg, ::System::Decimal* arg)
		{
			((::System::Void(*)(::System::Decimal*, ::System::Decimal*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_ADDLEAFRANGE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Closure(::System::Xml::Schema::InteriorNode* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::InteriorNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CLOSURE_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::ContentValidator* Finish(::System::Boolean arg)
		{
			return (return (::System::Xml::Schema::ContentValidator*(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_FINISH_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* CalculateTotalFollowposForRangeNodes(::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Xml::Schema::BitSet&* arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::System::Xml::Schema::BitSet&*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CALCULATETOTALFOLLOWPOSFORRANGENODES_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckCMUPAWithLeafRangeNodes(::System::Xml::Schema::BitSet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKCMUPAWITHLEAFRANGENODES_OFFSET))(arg, nullptr);
		}

		::System::Xml::Schema::BitSet* GetApplicableMinMaxFollowPos(::System::Xml::Schema::BitSet* arg, ::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Xml::Schema::BitSet*(*)(::System::Xml::Schema::BitSet*, ::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_GETAPPLICABLEMINMAXFOLLOWPOS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKUNIQUEPARTICLEATTRIBUTION_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::BitSet*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_CHECKUNIQUEPARTICLEATTRIBUTION_OFFSET))(arg, nullptr);
		}

		::Il2CppArray<::System::Object*>* BuildTransitionTable(::System::Xml::Schema::BitSet* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::System::Xml::Schema::BitSet*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_PARTICLECONTENTVALIDATOR_BUILDTRANSITIONTABLE_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

