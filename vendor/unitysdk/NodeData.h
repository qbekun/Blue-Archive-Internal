#pragma once
#include "unitysdk.h"

#define NODEDATA_GET_NONE_OFFSET UNITYSDK_OFFSET(0x996AFA0)
#define NODEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x996B060)
#define NODEDATA_GET_LINENO_OFFSET UNITYSDK_OFFSET(0x996B140)
#define NODEDATA_GET_LINEPOS_OFFSET UNITYSDK_OFFSET(0x996B150)
#define NODEDATA_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x996B160)
#define NODEDATA_SET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x996B170)
#define NODEDATA_GET_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x996B180)
#define NODEDATA_SET_ISDEFAULTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x996B190)
#define NODEDATA_GET_VALUEBUFFERED_OFFSET UNITYSDK_OFFSET(0x996B1A0)
#define NODEDATA_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x996B1B0)
#define NODEDATA_TRIMSPACESINVALUE_OFFSET UNITYSDK_OFFSET(0x996B200)
#define NODEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x996B090)
#define NODEDATA_CLEARNAME_OFFSET UNITYSDK_OFFSET(0x996B250)
#define NODEDATA_SETLINEINFO_OFFSET UNITYSDK_OFFSET(0x996B300)
#define NODEDATA_SETLINEINFO2_OFFSET UNITYSDK_OFFSET(0x996B310)
#define NODEDATA_SETVALUENODE_OFFSET UNITYSDK_OFFSET(0x996B320)
#define NODEDATA_SETVALUENODE_OFFSET UNITYSDK_OFFSET(0x996B360)
#define NODEDATA_SETNAMEDNODE_OFFSET UNITYSDK_OFFSET(0x996B3B0)
#define NODEDATA_SETNAMEDNODE_OFFSET UNITYSDK_OFFSET(0x996B410)
#define NODEDATA_SETVALUE_OFFSET UNITYSDK_OFFSET(0x996B4D0)
#define NODEDATA_SETVALUE_OFFSET UNITYSDK_OFFSET(0x996B4F0)
#define NODEDATA_ONBUFFERINVALIDATED_OFFSET UNITYSDK_OFFSET(0x996B540)
#define NODEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x996B590)
#define NODEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0x996B610)
#define NODEDATA_GETNAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x996B680)
#define NODEDATA_CREATENAMEWPREFIX_OFFSET UNITYSDK_OFFSET(0x996B690)
#define NODEDATA_SYSTEM.ICOMPARABLE.COMPARETO_OFFSET UNITYSDK_OFFSET(0x996B720)

	inline static constexpr unsigned int NodeData_TypeDefinitionIndex = 27696;

	class NodeData : public Il2CppObject
	{
	public:
		NodeData* s_None; // 0x0
		::System::Xml::XmlNodeType* type; // 0x10
		::System::String* localName; // 0x18
		::System::String* prefix; // 0x20
		::System::String* ns; // 0x28
		::System::String* nameWPrefix; // 0x30
		::System::String* value; // 0x38
		::Il2CppArray<::System::Object*>* chars; // 0x40
		::System::Int32 valueStartPos; // 0x48
		::System::Int32 valueLength; // 0x4C
		::System::Xml::LineInfo* lineInfo; // 0x50
		::System::Xml::LineInfo* lineInfo2; // 0x58
		::System::Char quoteChar; // 0x60
		::System::Int32 depth; // 0x64
		::System::Boolean isEmptyOrDefault; // 0x68
		::System::Int32 entityId; // 0x6C
		::System::Boolean xmlContextPushed; // 0x70
		NodeData* nextAttrValueChunk; // 0x78
		::System::Object* schemaType; // 0x80
		::System::Object* typedValue; // 0x88

		NodeData* get_None()
		{
			return (return (NodeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_GET_NONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Int32 get_LineNo()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_GET_LINENO_OFFSET))(nullptr);
		}

		::System::Int32 get_LinePos()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_GET_LINEPOS_OFFSET))(nullptr);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_GET_ISEMPTYELEMENT_OFFSET))(nullptr);
		}

		::System::Void set_IsEmptyElement(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SET_ISEMPTYELEMENT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDefaultAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_GET_ISDEFAULTATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_IsDefaultAttribute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SET_ISDEFAULTATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_ValueBuffered()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_GET_VALUEBUFFERED_OFFSET))(nullptr);
		}

		::System::String* get_StringValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_GET_STRINGVALUE_OFFSET))(nullptr);
		}

		::System::Void TrimSpacesInValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_TRIMSPACESINVALUE_OFFSET))(nullptr);
		}

		::System::Void Clear(::System::Xml::XmlNodeType* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNodeType*, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_CLEAR_OFFSET))(arg, nullptr);
		}

		::System::Void ClearName()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_CLEARNAME_OFFSET))(nullptr);
		}

		::System::Void SetLineInfo(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SETLINEINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetLineInfo2(::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SETLINEINFO2_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetValueNode(::System::Xml::XmlNodeType* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlNodeType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SETVALUENODE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetValueNode(::System::Xml::XmlNodeType* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Xml::XmlNodeType*, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SETVALUENODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void SetNamedNode(::System::Xml::XmlNodeType* arg, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlNodeType*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SETNAMEDNODE_OFFSET))(arg, str, nullptr);
		}

		::System::Void SetNamedNode(::System::Xml::XmlNodeType* arg, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::Xml::XmlNodeType*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SETNAMEDNODE_OFFSET))(arg, str, str, str, nullptr);
		}

		::System::Void SetValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SETVALUE_OFFSET))(str, nullptr);
		}

		::System::Void SetValue(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SETVALUE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void OnBufferInvalidated()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_ONBUFFERINVALIDATED_OFFSET))(nullptr);
		}

		::System::Void CopyTo(::System::Int32 arg, ::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Int32 CopyTo(::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			return (return (::System::Int32(*)(::System::Int32, ::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_COPYTO_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::String* GetNameWPrefix(::System::Xml::XmlNameTable* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_GETNAMEWPREFIX_OFFSET))(arg, nullptr);
		}

		::System::String* CreateNameWPrefix(::System::Xml::XmlNameTable* arg)
		{
			return (return (::System::String*(*)(::System::Xml::XmlNameTable*, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_CREATENAMEWPREFIX_OFFSET))(arg, nullptr);
		}

		::System::Int32 System.IComparable.CompareTo(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NODEDATA_SYSTEM.ICOMPARABLE.COMPARETO_OFFSET))(arg, nullptr);
		}

	};

