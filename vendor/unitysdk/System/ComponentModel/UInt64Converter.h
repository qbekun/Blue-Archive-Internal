#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x9B4A1C0)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B4A220)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B4A2A0)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B4A300)
#define SYSTEM_COMPONENTMODEL_UINT64CONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B4A390)

namespace System::ComponentModel
{
	inline static constexpr unsigned int UInt64Converter_TypeDefinitionIndex = 29470;

	class UInt64Converter : public ::TriInspector::InlineEditorModes
	{
	public:
		::System::Type* get_TargetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_UINT64CONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

