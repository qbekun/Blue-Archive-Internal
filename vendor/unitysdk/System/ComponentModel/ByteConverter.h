#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x9B24850)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B248B0)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B24930)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B24990)
#define SYSTEM_COMPONENTMODEL_BYTECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B24A20)

namespace System::ComponentModel
{
	inline static constexpr unsigned int ByteConverter_TypeDefinitionIndex = 29356;

	class ByteConverter : public ::TriInspector::InlineEditorModes
	{
	public:
		::System::Type* get_TargetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_BYTECONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

