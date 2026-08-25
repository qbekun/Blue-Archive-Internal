#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_SCHEMA_AXISSTACK_GET_SUBTREE_OFFSET UNITYSDK_OFFSET(0x9A05620)
#define SYSTEM_XML_SCHEMA_AXISSTACK_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9A05630)
#define SYSTEM_XML_SCHEMA_AXISSTACK_.CTOR_OFFSET UNITYSDK_OFFSET(0x9A05660)
#define SYSTEM_XML_SCHEMA_AXISSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x9A05720)
#define SYSTEM_XML_SCHEMA_AXISSTACK_POP_OFFSET UNITYSDK_OFFSET(0x9A057D0)
#define SYSTEM_XML_SCHEMA_AXISSTACK_EQUAL_OFFSET UNITYSDK_OFFSET(0x9A055B0)
#define SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOPARENT_OFFSET UNITYSDK_OFFSET(0x9A05820)
#define SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOCHILD_OFFSET UNITYSDK_OFFSET(0x9A059E0)
#define SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9A05B70)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int AxisStack_TypeDefinitionIndex = 27949;

	class AxisStack : public Il2CppObject
	{
	public:
		::System::Collections::ArrayList* _stack; // 0x10
		::System::Xml::Schema::ForwardAxis* _subtree; // 0x18
		::System::Xml::Schema::ActiveAxis* _parent; // 0x20

		::System::Xml::Schema::ForwardAxis* get_Subtree()
		{
			return (return (::System::Xml::Schema::ForwardAxis*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_GET_SUBTREE_OFFSET))(nullptr);
		}

		::System::Int32 get_Length()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_GET_LENGTH_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Schema::ForwardAxis* arg, ::System::Xml::Schema::ActiveAxis* arg)
		{
			((::System::Void(*)(::System::Xml::Schema::ForwardAxis*, ::System::Xml::Schema::ActiveAxis*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Push(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_PUSH_OFFSET))(arg, nullptr);
		}

		::System::Void Pop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_POP_OFFSET))(nullptr);
		}

		::System::Boolean Equal(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_EQUAL_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void MoveToParent(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOPARENT_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean MoveToChild(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOCHILD_OFFSET))(str, str, arg, nullptr);
		}

		::System::Boolean MoveToAttribute(::System::String* str, ::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_AXISSTACK_MOVETOATTRIBUTE_OFFSET))(str, str, arg, nullptr);
		}

	};
}

