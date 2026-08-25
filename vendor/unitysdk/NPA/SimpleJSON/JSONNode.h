#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }
namespace NPA::SimpleJSON { class JSONTextMode; }
namespace NPA::SimpleJSON { class JSONArray; }
namespace NPA::SimpleJSON { class JSONClass; }

#define NPA_SIMPLEJSON_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x9CCC8B0)
#define NPA_SIMPLEJSON_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CCC8C0)
#define NPA_SIMPLEJSON_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CCC8D0)
#define NPA_SIMPLEJSON_JSONNODE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CCC8E0)
#define NPA_SIMPLEJSON_JSONNODE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9CCC8F0)
#define NPA_SIMPLEJSON_JSONNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x9CCC900)
#define NPA_SIMPLEJSON_JSONNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x9CCC930)
#define NPA_SIMPLEJSON_JSONNODE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x9CCC940)
#define NPA_SIMPLEJSON_JSONNODE_ADD_OFFSET UNITYSDK_OFFSET(0x9CCC950)
#define NPA_SIMPLEJSON_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x9CCC9B0)
#define NPA_SIMPLEJSON_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x9CCC9C0)
#define NPA_SIMPLEJSON_JSONNODE_REMOVE_OFFSET UNITYSDK_OFFSET(0x9CCC9D0)
#define NPA_SIMPLEJSON_JSONNODE_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x9CCC9E0)
#define NPA_SIMPLEJSON_JSONNODE_GET_DEEPCHILDS_OFFSET UNITYSDK_OFFSET(0x9CCCA40)
#define NPA_SIMPLEJSON_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CCCAB0)
#define NPA_SIMPLEJSON_JSONNODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9CCCB40)
#define NPA_SIMPLEJSON_JSONNODE_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x9CCCBE0)
#define NPA_SIMPLEJSON_JSONNODE_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x9CCCBF0)
#define NPA_SIMPLEJSON_JSONNODE_SET_ASINT_OFFSET UNITYSDK_OFFSET(0x9CCCC30)
#define NPA_SIMPLEJSON_JSONNODE_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x9CCCC70)
#define NPA_SIMPLEJSON_JSONNODE_SET_ASLONG_OFFSET UNITYSDK_OFFSET(0x9CCCCC0)
#define NPA_SIMPLEJSON_JSONNODE_GET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x9CCCD00)
#define NPA_SIMPLEJSON_JSONNODE_SET_ASFLOAT_OFFSET UNITYSDK_OFFSET(0x9CCCD50)
#define NPA_SIMPLEJSON_JSONNODE_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x9CCCD90)
#define NPA_SIMPLEJSON_JSONNODE_SET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x9CCCDE0)
#define NPA_SIMPLEJSON_JSONNODE_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x9CCCE20)
#define NPA_SIMPLEJSON_JSONNODE_SET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x9CCCEC0)
#define NPA_SIMPLEJSON_JSONNODE_GET_ASARRAY_OFFSET UNITYSDK_OFFSET(0x9CCCF40)
#define NPA_SIMPLEJSON_JSONNODE_GET_ASOBJECT_OFFSET UNITYSDK_OFFSET(0x9CCCFB0)
#define NPA_SIMPLEJSON_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9CBDC20)
#define NPA_SIMPLEJSON_JSONNODE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x9CBC0B0)
#define NPA_SIMPLEJSON_JSONNODE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9CBE610)
#define NPA_SIMPLEJSON_JSONNODE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9CC1700)
#define NPA_SIMPLEJSON_JSONNODE_EQUALS_OFFSET UNITYSDK_OFFSET(0x9CCD020)
#define NPA_SIMPLEJSON_JSONNODE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9CCD030)
#define NPA_SIMPLEJSON_JSONNODE_GET_ESCAPEBUILDER_OFFSET UNITYSDK_OFFSET(0x9CCD040)
#define NPA_SIMPLEJSON_JSONNODE_ESCAPE_OFFSET UNITYSDK_OFFSET(0x9CCD0E0)
#define NPA_SIMPLEJSON_JSONNODE_PARSEELEMENT_OFFSET UNITYSDK_OFFSET(0x9CCD2C0)
#define NPA_SIMPLEJSON_JSONNODE_PARSE_OFFSET UNITYSDK_OFFSET(0x9CBC300)
#define NPA_SIMPLEJSON_JSONNODE_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x9CCD4D0)
#define NPA_SIMPLEJSON_JSONNODE_SAVETOSTREAM_OFFSET UNITYSDK_OFFSET(0x9CCD4E0)
#define NPA_SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDSTREAM_OFFSET UNITYSDK_OFFSET(0x9CCD560)
#define NPA_SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDFILE_OFFSET UNITYSDK_OFFSET(0x9CCD5C0)
#define NPA_SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDBASE64_OFFSET UNITYSDK_OFFSET(0x9CCD620)
#define NPA_SIMPLEJSON_JSONNODE_SAVETOFILE_OFFSET UNITYSDK_OFFSET(0x9CCD680)
#define NPA_SIMPLEJSON_JSONNODE_SAVETOBASE64_OFFSET UNITYSDK_OFFSET(0x9CCD8A0)
#define NPA_SIMPLEJSON_JSONNODE_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x9CCDAF0)
#define NPA_SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDFILE_OFFSET UNITYSDK_OFFSET(0x9CCDE80)
#define NPA_SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDSTREAM_OFFSET UNITYSDK_OFFSET(0x9CCDEE0)
#define NPA_SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDBASE64_OFFSET UNITYSDK_OFFSET(0x9CCDF40)
#define NPA_SIMPLEJSON_JSONNODE_LOADFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x9CCDFA0)
#define NPA_SIMPLEJSON_JSONNODE_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x9CCE130)
#define NPA_SIMPLEJSON_JSONNODE_LOADFROMBASE64_OFFSET UNITYSDK_OFFSET(0x9CCE290)
#define NPA_SIMPLEJSON_JSONNODE_PARSEADVANCED_OFFSET UNITYSDK_OFFSET(0x9CCE330)
#define NPA_SIMPLEJSON_JSONNODE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CCEB10)

namespace NPA::SimpleJSON
{
	inline static constexpr unsigned int JSONNode_TypeDefinitionIndex = 27420;

	class JSONNode : public Il2CppObject
	{
	public:
		::System::Text::StringBuilder* m_EscapeBuilder;

		::System::Void Add(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_ADD_OFFSET))(str, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* get_Item(::System::Int32 arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_ITEM_OFFSET))(arg, nullptr);
		}

		::System::Void set_Item(::System::Int32 arg, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::Int32, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SET_ITEM_OFFSET))(arg, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* get_Item(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_ITEM_OFFSET))(str, nullptr);
		}

		::System::Void set_Item(::System::String* str, ::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SET_ITEM_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_Value()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_VALUE_OFFSET))(nullptr);
		}

		::System::Void set_Value(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SET_VALUE_OFFSET))(str, nullptr);
		}

		::System::Int32 get_Count()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_COUNT_OFFSET))(nullptr);
		}

		::System::Void Add(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_ADD_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* Remove(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_REMOVE_OFFSET))(str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* Remove(::System::Int32 arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_REMOVE_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* Remove(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_REMOVE_OFFSET))(arg, nullptr);
		}

		Il2CppObject* get_Childs()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_CHILDS_OFFSET))(nullptr);
		}

		Il2CppObject* get_DeepChilds()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_DEEPCHILDS_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_TOSTRING_OFFSET))(nullptr);
		}

		::System::String* ToString(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_TOSTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* arg, ::System::Int32 arg, ::System::Int32 arg, ::NPA::SimpleJSON::JSONTextMode* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::NPA::SimpleJSON::JSONTextMode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_WRITETOSTRINGBUILDER_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Int32 get_AsInt()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_ASINT_OFFSET))(nullptr);
		}

		::System::Void set_AsInt(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SET_ASINT_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_AsLong()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_ASLONG_OFFSET))(nullptr);
		}

		::System::Void set_AsLong(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SET_ASLONG_OFFSET))(arg, nullptr);
		}

		::System::Single get_AsFloat()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_ASFLOAT_OFFSET))(nullptr);
		}

		::System::Void set_AsFloat(::System::Single arg)
		{
			((::System::Void(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SET_ASFLOAT_OFFSET))(arg, nullptr);
		}

		::System::Double get_AsDouble()
		{
			return (return (::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_ASDOUBLE_OFFSET))(nullptr);
		}

		::System::Void set_AsDouble(::System::Double arg)
		{
			((::System::Void(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SET_ASDOUBLE_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_AsBool()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_ASBOOL_OFFSET))(nullptr);
		}

		::System::Void set_AsBool(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SET_ASBOOL_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONArray* get_AsArray()
		{
			return (return (::NPA::SimpleJSON::JSONArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_ASARRAY_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONClass* get_AsObject()
		{
			return (return (::NPA::SimpleJSON::JSONClass*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_ASOBJECT_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONNode* op_Implicit(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_OP_IMPLICIT_OFFSET))(str, nullptr);
		}

		::System::String* op_Implicit(::NPA::SimpleJSON::JSONNode* arg)
		{
			return (return (::System::String*(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_OP_IMPLICIT_OFFSET))(arg, nullptr);
		}

		::System::Boolean op_Equality(::NPA::SimpleJSON::JSONNode* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::NPA::SimpleJSON::JSONNode*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_OP_EQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean op_Inequality(::NPA::SimpleJSON::JSONNode* arg, ::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::NPA::SimpleJSON::JSONNode*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_OP_INEQUALITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return (return (::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Text::StringBuilder* get_EscapeBuilder()
		{
			return (return (::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_GET_ESCAPEBUILDER_OFFSET))(nullptr);
		}

		::System::String* Escape(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_ESCAPE_OFFSET))(str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ParseElement(::System::String* str, ::System::Boolean arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_PARSEELEMENT_OFFSET))(str, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* Parse(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_PARSE_OFFSET))(str, nullptr);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* arg)
		{
			((::System::Void(*)(::System::IO::BinaryWriter*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SERIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void SaveToStream(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SAVETOSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void SaveToCompressedStream(::System::IO::Stream* arg)
		{
			((::System::Void(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDSTREAM_OFFSET))(arg, nullptr);
		}

		::System::Void SaveToCompressedFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDFILE_OFFSET))(str, nullptr);
		}

		::System::String* SaveToCompressedBase64()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SAVETOCOMPRESSEDBASE64_OFFSET))(nullptr);
		}

		::System::Void SaveToFile(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SAVETOFILE_OFFSET))(str, nullptr);
		}

		::System::String* SaveToBase64()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_SAVETOBASE64_OFFSET))(nullptr);
		}

		::NPA::SimpleJSON::JSONNode* Deserialize(::System::IO::BinaryReader* arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::IO::BinaryReader*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_DESERIALIZE_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* LoadFromCompressedFile(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDFILE_OFFSET))(str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* LoadFromCompressedStream(::System::IO::Stream* arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDSTREAM_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* LoadFromCompressedBase64(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_LOADFROMCOMPRESSEDBASE64_OFFSET))(str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* LoadFromStream(::System::IO::Stream* arg)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::IO::Stream*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_LOADFROMSTREAM_OFFSET))(arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* LoadFromFile(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_LOADFROMFILE_OFFSET))(str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* LoadFromBase64(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_LOADFROMBASE64_OFFSET))(str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ParseAdvanced(::System::String* str)
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_PARSEADVANCED_OFFSET))(str, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_SIMPLEJSON_JSONNODE_.CTOR_OFFSET))(nullptr);
		}

	};
}

