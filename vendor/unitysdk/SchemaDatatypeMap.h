#pragma once
#include "unitysdk.h"

#define SCHEMADATATYPEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A20A30)
#define SCHEMADATATYPEMAP_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A20A80)
#define SCHEMADATATYPEMAP_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x9A23820)
#define SCHEMADATATYPEMAP_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9A23840)
#define SCHEMADATATYPEMAP_GET_PARENTINDEX_OFFSET UNITYSDK_OFFSET(0x9A23850)
#define SCHEMADATATYPEMAP_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9A23860)

	inline static constexpr unsigned int SchemaDatatypeMap_TypeDefinitionIndex = 27995;

	class SchemaDatatypeMap : public Il2CppObject
	{
	public:
		::System::String* name; // 0x10
		::System::Xml::Schema::DatatypeImplementation* type; // 0x18
		::System::Int32 parentIndex; // 0x20

		::System::Void .ctor(::System::String* str, ::System::Xml::Schema::DatatypeImplementation* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::DatatypeImplementation*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMADATATYPEMAP_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::Xml::Schema::DatatypeImplementation* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Xml::Schema::DatatypeImplementation*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMADATATYPEMAP_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::System::Xml::Schema::DatatypeImplementation* op_Explicit(SchemaDatatypeMap* arg)
		{
			return (return (::System::Xml::Schema::DatatypeImplementation*(*)(SchemaDatatypeMap*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMADATATYPEMAP_OP_EXPLICIT_OFFSET))(arg, nullptr);
		}

		::System::String* get_Name()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMADATATYPEMAP_GET_NAME_OFFSET))(nullptr);
		}

		::System::Int32 get_ParentIndex()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SCHEMADATATYPEMAP_GET_PARENTINDEX_OFFSET))(nullptr);
		}

		::System::Int32 CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SCHEMADATATYPEMAP_COMPARETO_OFFSET))(arg, nullptr);
		}

	};

