#pragma once
#include "unitysdk.h"

#define XMLNODEIDHASHTABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9796E30)
#define XMLNODEIDHASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9796EF0)
#define XMLNODEIDHASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9796F90)
#define XMLNODEIDHASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9797030)
#define XMLNODEIDHASHTABLE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x97970C0)

	inline static constexpr unsigned int XmlNodeIdHashtable_TypeDefinitionIndex = 32313;

	class XmlNodeIdHashtable : public Il2CppObject
	{
	public:
		XmlNodeIdentety* _id; // 0x50

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + XMLNODEIDHASHTABLE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Item(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + XMLNODEIDHASHTABLE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Item(::System::Xml::XmlReader* arg)
		{
			return (return (::System::Object*(*)(::System::Xml::XmlReader*, ::PVOID))((::PBYTE)hIl2Cpp + XMLNODEIDHASHTABLE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Item(::System::Data::DataTable* arg)
		{
			return (return (::System::Object*(*)(::System::Data::DataTable*, ::PVOID))((::PBYTE)hIl2Cpp + XMLNODEIDHASHTABLE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Object* get_Item(::System::String* str)
		{
			return (return (::System::Object*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + XMLNODEIDHASHTABLE_GET_ITEM_OFFSET))(str, nullptr);
		}

	};

