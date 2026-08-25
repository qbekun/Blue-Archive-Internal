#pragma once
#include "unitysdk.h"

#define ATTRIBUTEVALUECACHE_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x997F440)
#define ATTRIBUTEVALUECACHE_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x997F480)
#define ATTRIBUTEVALUECACHE_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x997F810)
#define ATTRIBUTEVALUECACHE_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x997F8D0)
#define ATTRIBUTEVALUECACHE_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x997F9C0)
#define ATTRIBUTEVALUECACHE_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x997FA40)
#define ATTRIBUTEVALUECACHE_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x997FAE0)
#define ATTRIBUTEVALUECACHE_WRITERAW_OFFSET UNITYSDK_OFFSET(0x997FC20)
#define ATTRIBUTEVALUECACHE_WRITERAW_OFFSET UNITYSDK_OFFSET(0x997FD20)
#define ATTRIBUTEVALUECACHE_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x997FDA0)
#define ATTRIBUTEVALUECACHE_REPLAY_OFFSET UNITYSDK_OFFSET(0x997FE20)
#define ATTRIBUTEVALUECACHE_TRIM_OFFSET UNITYSDK_OFFSET(0x99801E0)
#define ATTRIBUTEVALUECACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x99806C0)
#define ATTRIBUTEVALUECACHE_STARTCOMPLEXVALUE_OFFSET UNITYSDK_OFFSET(0x997F640)
#define ATTRIBUTEVALUECACHE_ADDITEM_OFFSET UNITYSDK_OFFSET(0x997F6A0)
#define ATTRIBUTEVALUECACHE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9980740)

	inline static constexpr unsigned int AttributeValueCache_TypeDefinitionIndex = 27725;

	class AttributeValueCache : public Il2CppObject
	{
	public:
		::System::Text::StringBuilder* stringValue; // 0x10
		::System::String* singleStringValue; // 0x18
		::Il2CppArray<::System::Object*>* items; // 0x20
		::System::Int32 firstItem; // 0x28
		::System::Int32 lastItem; // 0x2C

		::System::String* get_StringValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_GET_STRINGVALUE_OFFSET))(nullptr);
		}

		::System::Void WriteEntityRef(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_WRITEENTITYREF_OFFSET))(str, nullptr);
		}

		::System::Void WriteCharEntity(::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_WRITECHARENTITY_OFFSET))(arg, nullptr);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char arg, ::System::Char arg)
		{
			((::System::Void(*)(::System::Char, ::System::Char, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_WRITESURROGATECHARENTITY_OFFSET))(arg, arg, nullptr);
		}

		::System::Void WriteWhitespace(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_WRITEWHITESPACE_OFFSET))(str, nullptr);
		}

		::System::Void WriteString(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_WRITESTRING_OFFSET))(str, nullptr);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_WRITECHARS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_WRITERAW_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void WriteRaw(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_WRITERAW_OFFSET))(str, nullptr);
		}

		::System::Void WriteValue(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_WRITEVALUE_OFFSET))(str, nullptr);
		}

		::System::Void Replay(::System::Xml::XmlWriter* arg)
		{
			((::System::Void(*)(::System::Xml::XmlWriter*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_REPLAY_OFFSET))(arg, nullptr);
		}

		::System::Void Trim()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_TRIM_OFFSET))(nullptr);
		}

		::System::Void Clear()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_CLEAR_OFFSET))(nullptr);
		}

		::System::Void StartComplexValue()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_STARTCOMPLEXVALUE_OFFSET))(nullptr);
		}

		::System::Void AddItem(ItemType* arg, ::System::Object* arg)
		{
			((::System::Void(*)(ItemType*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_ADDITEM_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ATTRIBUTEVALUECACHE_.CTOR_OFFSET))(nullptr);
		}

	};

