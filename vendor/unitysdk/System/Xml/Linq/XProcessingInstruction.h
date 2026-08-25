#pragma once
#include "../../../unitysdk.h"

#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9857C40)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x985D0F0)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_DATA_OFFSET UNITYSDK_OFFSET(0x985D190)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_SET_DATA_OFFSET UNITYSDK_OFFSET(0x985D1A0)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x985D3C0)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x985D3D0)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x985D3E0)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_CLONENODE_OFFSET UNITYSDK_OFFSET(0x985D470)
#define SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_VALIDATENAME_OFFSET UNITYSDK_OFFSET(0x985D010)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XProcessingInstruction_TypeDefinitionIndex = 37315;

	class XProcessingInstruction : public Il2CppObject
	{
	public:
		::System::String* target; // 0x28
		::System::String* data; // 0x30

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XProcessingInstruction* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XProcessingInstruction*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* get_Data()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void set_Data(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_SET_DATA_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlNodeType* get_NodeType()
		{
			return (return (::System::Xml::XmlNodeType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_NODETYPE_OFFSET))(nullptr);
		}

		::System::String* get_Target()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_GET_TARGET_OFFSET))(nullptr);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_WRITETO_OFFSET))(arg, nullptr);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return (return (::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_CLONENODE_OFFSET))(nullptr);
		}

		::System::Void ValidateName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XPROCESSINGINSTRUCTION_VALIDATENAME_OFFSET))(str, nullptr);
		}

	};
}

