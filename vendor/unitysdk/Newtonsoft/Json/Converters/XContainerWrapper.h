#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json::Converters { class IXmlNode; }

#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x9539320)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9537320)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x9537580)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_HASCHILDNODES_OFFSET UNITYSDK_OFFSET(0x9537B00)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x95393A0)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_WRAPNODE_OFFSET UNITYSDK_OFFSET(0x9538AF0)
#define NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x9538690)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XContainerWrapper_TypeDefinitionIndex = 32121;

	class XContainerWrapper : public Il2CppObject
	{
	public:
		Il2CppObject* _childNodes; // 0x18

		::System::Xml::Linq::XContainer* get_Container()
		{
			return (return (::System::Xml::Linq::XContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_CONTAINER_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Xml::Linq::XContainer* arg)
		{
			((::System::Void(*)(::System::Xml::Linq::XContainer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_.CTOR_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_ChildNodes()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_CHILDNODES_OFFSET))(nullptr);
		}

		::System::Boolean get_HasChildNodes()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_HASCHILDNODES_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* get_ParentNode()
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_GET_PARENTNODE_OFFSET))(nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* WrapNode(::System::Xml::Linq::XObject* arg)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::Xml::Linq::XObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_WRAPNODE_OFFSET))(arg, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* AppendChild(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XCONTAINERWRAPPER_APPENDCHILD_OFFSET))(arg, nullptr);
		}

	};
}

