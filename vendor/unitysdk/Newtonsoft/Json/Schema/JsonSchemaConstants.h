#pragma once
#include "../../../unitysdk.h"

#define NEWTONSOFT_JSON_SCHEMA_JSONSCHEMACONSTANTS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x94EF580)

namespace Newtonsoft::Json::Schema
{
	inline static constexpr unsigned int JsonSchemaConstants_TypeDefinitionIndex = 31981;

	class JsonSchemaConstants : public Il2CppObject
	{
	public:
		::System::String* TypePropertyName; // 0x0
		::System::String* PropertiesPropertyName; // 0x0
		::System::String* ItemsPropertyName; // 0x0
		::System::String* AdditionalItemsPropertyName; // 0x0
		::System::String* RequiredPropertyName; // 0x0
		::System::String* PatternPropertiesPropertyName; // 0x0
		::System::String* AdditionalPropertiesPropertyName; // 0x0
		::System::String* RequiresPropertyName; // 0x0
		::System::String* MinimumPropertyName; // 0x0
		::System::String* MaximumPropertyName; // 0x0
		::System::String* ExclusiveMinimumPropertyName; // 0x0
		::System::String* ExclusiveMaximumPropertyName; // 0x0
		::System::String* MinimumItemsPropertyName; // 0x0
		::System::String* MaximumItemsPropertyName; // 0x0
		::System::String* PatternPropertyName; // 0x0
		::System::String* MaximumLengthPropertyName; // 0x0
		::System::String* MinimumLengthPropertyName; // 0x0
		::System::String* EnumPropertyName; // 0x0
		::System::String* ReadOnlyPropertyName; // 0x0
		::System::String* TitlePropertyName; // 0x0
		::System::String* DescriptionPropertyName; // 0x0
		::System::String* FormatPropertyName; // 0x0
		::System::String* DefaultPropertyName; // 0x0
		::System::String* TransientPropertyName; // 0x0
		::System::String* DivisibleByPropertyName; // 0x0
		::System::String* HiddenPropertyName; // 0x0
		::System::String* DisallowPropertyName; // 0x0
		::System::String* ExtendsPropertyName; // 0x0
		::System::String* IdPropertyName; // 0x0
		::System::String* UniqueItemsPropertyName; // 0x0
		::System::String* OptionValuePropertyName; // 0x0
		::System::String* OptionLabelPropertyName; // 0x0
		Il2CppObject* JsonSchemaTypeMapping; // 0x0

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SCHEMA_JSONSCHEMACONSTANTS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

