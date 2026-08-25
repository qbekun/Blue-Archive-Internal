#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x9B49E00)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B49E60)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B49EE0)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B49F40)
#define SYSTEM_COMPONENTMODEL_UINT16CONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B49FD0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int UInt16Converter_TypeDefinitionIndex = 29468;

	class UInt16Converter : public ::TriInspector::InlineEditorModes
	{
	public:
		::System::Type* get_TargetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT16CONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

