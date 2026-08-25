#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLNODELIST_ITEM_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLNODELIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLNODELIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_XML_XMLNODELIST_GET_ITEMOF_OFFSET UNITYSDK_OFFSET(0x99A5A20)
#define SYSTEM_XML_XMLNODELIST_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET UNITYSDK_OFFSET(0x99A5A40)
#define SYSTEM_XML_XMLNODELIST_PRIVATEDISPOSENODELIST_OFFSET UNITYSDK_OFFSET(0x99A5A60)
#define SYSTEM_XML_XMLNODELIST_.CTOR_OFFSET UNITYSDK_OFFSET(0x99A5A70)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeList_TypeDefinitionIndex = 27777;

	class XmlNodeList : public Il2CppObject
	{
	public:
		::System::Xml::XmlNode* Item(::System::Int32 arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_GETENUMERATOR_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* get_ItemOf(::System::Int32 arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_GET_ITEMOF_OFFSET))(arg, nullptr);
		}

		::System::Void System.IDisposable.Dispose()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_SYSTEM.IDISPOSABLE.DISPOSE_OFFSET))(nullptr);
		}

		::System::Void PrivateDisposeNodeList()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_PRIVATEDISPOSENODELIST_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODELIST_.CTOR_OFFSET))(nullptr);
		}

	};
}

