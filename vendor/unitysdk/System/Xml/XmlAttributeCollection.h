#pragma once
#include "../../unitysdk.h"

#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x998F710)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_OFFSET UNITYSDK_OFFSET(0x9988EE0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_OFFSET UNITYSDK_OFFSET(0x998F720)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_OFFSET UNITYSDK_OFFSET(0x998F830)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_FINDNODEOFFSETNS_OFFSET UNITYSDK_OFFSET(0x998F980)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x998FB60)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_APPEND_OFFSET UNITYSDK_OFFSET(0x998FE00)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x9990150)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x99901D0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x9990270)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET UNITYSDK_OFFSET(0x9990340)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x99903D0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x99903E0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET UNITYSDK_OFFSET(0x99903F0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_ADDNODE_OFFSET UNITYSDK_OFFSET(0x9990400)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_INSERTNODEAT_OFFSET UNITYSDK_OFFSET(0x99905D0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVENODEAT_OFFSET UNITYSDK_OFFSET(0x9990670)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_DETACH_OFFSET UNITYSDK_OFFSET(0x998FF20)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_INSERTPARENTINTOELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x998FFD0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEPARENTFROMELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x9990810)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEDUPLICATEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x99904E0)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_PREPAREPARENTINELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x998EA60)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_RESETPARENTINELEMENTIDATTRMAP_OFFSET UNITYSDK_OFFSET(0x998EB40)
#define SYSTEM_XML_XMLATTRIBUTECOLLECTION_INTERNALAPPENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x998FD60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAttributeCollection_TypeDefinitionIndex = 27752;

	class XmlAttributeCollection : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Xml::XmlNode* arg)
		{
			((::System::Void(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlAttribute* get_ItemOf(::System::Int32 arg)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlAttribute* get_ItemOf(::System::String* str)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_OFFSET))(str, nullptr);
		}

		::System::Xml::XmlAttribute* get_ItemOf(::System::String* str, ::System::String* str)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_GET_ITEMOF_OFFSET))(str, str, nullptr);
		}

		::System::Int32 FindNodeOffsetNS(::System::Xml::XmlAttribute* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::XmlAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_FINDNODEOFFSETNS_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_SETNAMEDITEM_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlAttribute* Append(::System::Xml::XmlAttribute* arg)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::Xml::XmlAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_APPEND_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlAttribute* Remove(::System::Xml::XmlAttribute* arg)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::Xml::XmlAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlAttribute* RemoveAt(::System::Int32 arg)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEAT_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveAll()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEALL_OFFSET))(nullptr);
		}

		::System::Void System.Collections.ICollection.CopyTo(::System::Array* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Array*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.COPYTO_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean System.Collections.ICollection.get_IsSynchronized()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_ISSYNCHRONIZED_OFFSET))(nullptr);
		}

		::System::Object* System.Collections.ICollection.get_SyncRoot()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_SYNCROOT_OFFSET))(nullptr);
		}

		::System::Int32 System.Collections.ICollection.get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_SYSTEM.COLLECTIONS.ICOLLECTION.GET_COUNT_OFFSET))(nullptr);
		}

		::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_ADDNODE_OFFSET))(arg, nullptr);
		}

		::System::Xml::XmlNode* InsertNodeAt(::System::Int32 arg, ::System::Xml::XmlNode* arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Int32, ::System::Xml::XmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_INSERTNODEAT_OFFSET))(arg, arg, nullptr);
		}

		::System::Xml::XmlNode* RemoveNodeAt(::System::Int32 arg)
		{
			return (return (::System::Xml::XmlNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVENODEAT_OFFSET))(arg, nullptr);
		}

		::System::Void Detach(::System::Xml::XmlAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::XmlAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_DETACH_OFFSET))(arg, nullptr);
		}

		::System::Void InsertParentIntoElementIdAttrMap(::System::Xml::XmlAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::XmlAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_INSERTPARENTINTOELEMENTIDATTRMAP_OFFSET))(arg, nullptr);
		}

		::System::Void RemoveParentFromElementIdAttrMap(::System::Xml::XmlAttribute* arg)
		{
			((::System::Void(*)(::System::Xml::XmlAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEPARENTFROMELEMENTIDATTRMAP_OFFSET))(arg, nullptr);
		}

		::System::Int32 RemoveDuplicateAttribute(::System::Xml::XmlAttribute* arg)
		{
			return (return (::System::Int32(*)(::System::Xml::XmlAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_REMOVEDUPLICATEATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean PrepareParentInElementIdAttrMap(::System::String* str, ::System::String* str)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_PREPAREPARENTINELEMENTIDATTRMAP_OFFSET))(str, str, nullptr);
		}

		::System::Void ResetParentInElementIdAttrMap(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_RESETPARENTINELEMENTIDATTRMAP_OFFSET))(str, str, nullptr);
		}

		::System::Xml::XmlAttribute* InternalAppendAttribute(::System::Xml::XmlAttribute* arg)
		{
			return (return (::System::Xml::XmlAttribute*(*)(::System::Xml::XmlAttribute*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLATTRIBUTECOLLECTION_INTERNALAPPENDATTRIBUTE_OFFSET))(arg, nullptr);
		}

	};
}

