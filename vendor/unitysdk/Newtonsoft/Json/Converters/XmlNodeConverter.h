#pragma once
#include "../../../unitysdk.h"

namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json::Converters { class IXmlNode; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Converters { class IXmlDocument; }
namespace Newtonsoft::Json::Converters { class IXmlElement; }

#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_DESERIALIZEROOTELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x953AB40)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SET_DESERIALIZEROOTELEMENTNAME_OFFSET UNITYSDK_OFFSET(0x953AB50)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_WRITEARRAYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x953AB60)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SET_WRITEARRAYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x953AB70)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_OMITROOTOBJECT_OFFSET UNITYSDK_OFFSET(0x953AB80)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SET_OMITROOTOBJECT_OFFSET UNITYSDK_OFFSET(0x953AB90)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_ENCODESPECIALCHARACTERS_OFFSET UNITYSDK_OFFSET(0x953ABA0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SET_ENCODESPECIALCHARACTERS_OFFSET UNITYSDK_OFFSET(0x953ABB0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x953ABC0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRAPXML_OFFSET UNITYSDK_OFFSET(0x953AD00)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_PUSHPARENTNAMESPACES_OFFSET UNITYSDK_OFFSET(0x953AE10)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_RESOLVEFULLNAME_OFFSET UNITYSDK_OFFSET(0x953CD40)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x953D0A0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISARRAY_OFFSET UNITYSDK_OFFSET(0x953D4D0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZEGROUPEDNODES_OFFSET UNITYSDK_OFFSET(0x953D880)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRITEGROUPEDNODES_OFFSET UNITYSDK_OFFSET(0x953E310)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRITEGROUPEDNODES_OFFSET UNITYSDK_OFFSET(0x953E470)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZENODE_OFFSET UNITYSDK_OFFSET(0x953B540)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ALLSAMENAME_OFFSET UNITYSDK_OFFSET(0x953E550)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READJSON_OFFSET UNITYSDK_OFFSET(0x953EB60)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x9540080)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READELEMENT_OFFSET UNITYSDK_OFFSET(0x953F460)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x95423C0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9542040)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CONVERTTOKENTOXMLVALUE_OFFSET UNITYSDK_OFFSET(0x9540630)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READARRAYELEMENTS_OFFSET UNITYSDK_OFFSET(0x95415D0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDJSONARRAYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9542C80)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SHOULDREADINTO_OFFSET UNITYSDK_OFFSET(0x95419C0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READATTRIBUTEELEMENTS_OFFSET UNITYSDK_OFFSET(0x9541A10)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x9540D10)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEDOCUMENTTYPE_OFFSET UNITYSDK_OFFSET(0x95411C0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_OFFSET UNITYSDK_OFFSET(0x9542AA0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZENODE_OFFSET UNITYSDK_OFFSET(0x953F7C0)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISNAMESPACEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9542F90)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_VALUEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x953E830)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CANCONVERT_OFFSET UNITYSDK_OFFSET(0x9543070)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISXOBJECT_OFFSET UNITYSDK_OFFSET(0x9543100)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISXMLNODE_OFFSET UNITYSDK_OFFSET(0x9543190)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9543220)
#define NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9543230)

namespace Newtonsoft::Json::Converters
{
	inline static constexpr unsigned int XmlNodeConverter_TypeDefinitionIndex = 32125;

	class XmlNodeConverter : public Il2CppObject
	{
	public:
		Il2CppObject* EmptyChildNodes; // 0x0
		::System::String* TextName; // 0x0
		::System::String* CommentName; // 0x0
		::System::String* CDataName; // 0x0
		::System::String* WhitespaceName; // 0x0
		::System::String* SignificantWhitespaceName; // 0x0
		::System::String* DeclarationName; // 0x0
		::System::String* JsonNamespaceUri; // 0x0
		::System::String* _DeserializeRootElementName_k__BackingField; // 0x10
		::System::Boolean _WriteArrayAttribute_k__BackingField; // 0x18
		::System::Boolean _OmitRootObject_k__BackingField; // 0x19
		::System::Boolean _EncodeSpecialCharacters_k__BackingField; // 0x1A

		::System::String* get_DeserializeRootElementName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_DESERIALIZEROOTELEMENTNAME_OFFSET))(nullptr);
		}

		::System::Void set_DeserializeRootElementName(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SET_DESERIALIZEROOTELEMENTNAME_OFFSET))(str, nullptr);
		}

		::System::Boolean get_WriteArrayAttribute()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_WRITEARRAYATTRIBUTE_OFFSET))(nullptr);
		}

		::System::Void set_WriteArrayAttribute(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SET_WRITEARRAYATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_OmitRootObject()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_OMITROOTOBJECT_OFFSET))(nullptr);
		}

		::System::Void set_OmitRootObject(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SET_OMITROOTOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_EncodeSpecialCharacters()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GET_ENCODESPECIALCHARACTERS_OFFSET))(nullptr);
		}

		::System::Void set_EncodeSpecialCharacters(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SET_ENCODESPECIALCHARACTERS_OFFSET))(arg, nullptr);
		}

		::System::Void WriteJson(::Newtonsoft::Json::JsonWriter* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRITEJSON_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlNode* WrapXml(::System::Object* arg)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlNode*(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRAPXML_OFFSET))(arg, nullptr);
		}

		::System::Void PushParentNamespaces(::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::Xml::XmlNamespaceManager* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_PUSHPARENTNAMESPACES_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ResolveFullName(::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::Xml::XmlNamespaceManager* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_RESOLVEFULLNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::String* GetPropertyName(::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::Xml::XmlNamespaceManager* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_GETPROPERTYNAME_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean IsArray(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISARRAY_OFFSET))(arg, nullptr);
		}

		::System::Void SerializeGroupedNodes(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::Xml::XmlNamespaceManager* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZEGROUPEDNODES_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void WriteGroupedNodes(::Newtonsoft::Json::JsonWriter* arg, ::System::Xml::XmlNamespaceManager* arg, ::System::Boolean arg, Il2CppObject* arg, ::System::String* str)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean, Il2CppObject*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRITEGROUPEDNODES_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void WriteGroupedNodes(::Newtonsoft::Json::JsonWriter* arg, ::System::Xml::XmlNamespaceManager* arg, ::System::Boolean arg, ::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::String* str)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_WRITEGROUPEDNODES_OFFSET))(arg, arg, arg, arg, str, nullptr);
		}

		::System::Void SerializeNode(::Newtonsoft::Json::JsonWriter* arg, ::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::Xml::XmlNamespaceManager* arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SERIALIZENODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean AllSameName(::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ALLSAMENAME_OFFSET))(arg, nullptr);
		}

		::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* arg, ::System::Type* arg, ::System::Object* arg, ::Newtonsoft::Json::JsonSerializer* arg)
		{
			return (return (::System::Object*(*)(::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*, ::Newtonsoft::Json::JsonSerializer*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READJSON_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void DeserializeValue(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Converters::IXmlDocument* arg, ::System::Xml::XmlNamespaceManager* arg, ::System::String* str, ::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZEVALUE_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Void ReadElement(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Converters::IXmlDocument* arg, ::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::String* str, ::System::Xml::XmlNamespaceManager* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READELEMENT_OFFSET))(arg, arg, arg, str, arg, nullptr);
		}

		::System::Void CreateElement(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Converters::IXmlDocument* arg, ::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::String* str, ::System::Xml::XmlNamespaceManager* arg, ::System::String* str, Il2CppObject* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::System::Xml::XmlNamespaceManager*, ::System::String*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_OFFSET))(arg, arg, arg, str, arg, str, arg, nullptr);
		}

		::System::Void AddAttribute(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Converters::IXmlDocument* arg, ::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::String* str, ::System::String* str, ::System::Xml::XmlNamespaceManager* arg, ::System::String* str)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::System::String*, ::System::Xml::XmlNamespaceManager*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDATTRIBUTE_OFFSET))(arg, arg, arg, str, str, arg, str, nullptr);
		}

		::System::String* ConvertTokenToXmlValue(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::String*(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CONVERTTOKENTOXMLVALUE_OFFSET))(arg, nullptr);
		}

		::System::Void ReadArrayElements(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Converters::IXmlDocument* arg, ::System::String* str, ::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::Xml::XmlNamespaceManager* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::String*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READARRAYELEMENTS_OFFSET))(arg, arg, str, arg, arg, nullptr);
		}

		::System::Void AddJsonArrayAttribute(::Newtonsoft::Json::Converters::IXmlElement* arg, ::Newtonsoft::Json::Converters::IXmlDocument* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::Converters::IXmlElement*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ADDJSONARRAYATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean ShouldReadInto(::Newtonsoft::Json::JsonReader* arg)
		{
			return (return (::System::Boolean(*)(::Newtonsoft::Json::JsonReader*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_SHOULDREADINTO_OFFSET))(arg, nullptr);
		}

		Il2CppObject* ReadAttributeElements(::Newtonsoft::Json::JsonReader* arg, ::System::Xml::XmlNamespaceManager* arg)
		{
			return (return (Il2CppObject*(*)(::Newtonsoft::Json::JsonReader*, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_READATTRIBUTEELEMENTS_OFFSET))(arg, arg, nullptr);
		}

		::System::Void CreateInstruction(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Converters::IXmlDocument* arg, ::Newtonsoft::Json::Converters::IXmlNode* arg, ::System::String* str)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEINSTRUCTION_OFFSET))(arg, arg, arg, str, nullptr);
		}

		::System::Void CreateDocumentType(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Converters::IXmlDocument* arg, ::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEDOCUMENTTYPE_OFFSET))(arg, arg, arg, nullptr);
		}

		::Newtonsoft::Json::Converters::IXmlElement* CreateElement(::System::String* str, ::Newtonsoft::Json::Converters::IXmlDocument* arg, ::System::String* str, ::System::Xml::XmlNamespaceManager* arg)
		{
			return (return (::Newtonsoft::Json::Converters::IXmlElement*(*)(::System::String*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::String*, ::System::Xml::XmlNamespaceManager*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CREATEELEMENT_OFFSET))(str, arg, str, arg, nullptr);
		}

		::System::Void DeserializeNode(::Newtonsoft::Json::JsonReader* arg, ::Newtonsoft::Json::Converters::IXmlDocument* arg, ::System::Xml::XmlNamespaceManager* arg, ::Newtonsoft::Json::Converters::IXmlNode* arg)
		{
			((::System::Void(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Converters::IXmlDocument*, ::System::Xml::XmlNamespaceManager*, ::Newtonsoft::Json::Converters::IXmlNode*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_DESERIALIZENODE_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Boolean IsNamespaceAttribute(::System::String* str, ::System::String&* arg)
		{
			return (return (::System::Boolean(*)(::System::String*, ::System::String&*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISNAMESPACEATTRIBUTE_OFFSET))(str, arg, nullptr);
		}

		::System::Boolean ValueAttributes(Il2CppObject* arg)
		{
			return (return (::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_VALUEATTRIBUTES_OFFSET))(arg, nullptr);
		}

		::System::Boolean CanConvert(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_CANCONVERT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsXObject(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISXOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsXmlNode(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_ISXMLNODE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_CONVERTERS_XMLNODECONVERTER_.CCTOR_OFFSET))(nullptr);
		}

	};
}

