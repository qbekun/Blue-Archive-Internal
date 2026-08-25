#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_SBYTECONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x9B477C0)
#define SYSTEM_COMPONENTMODEL_SBYTECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B47820)
#define SYSTEM_COMPONENTMODEL_SBYTECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B478A0)
#define SYSTEM_COMPONENTMODEL_SBYTECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B47900)
#define SYSTEM_COMPONENTMODEL_SBYTECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B47990)

namespace System::ComponentModel
{
	inline static constexpr unsigned int SByteConverter_TypeDefinitionIndex = 29455;

	class SByteConverter : public ::TriInspector::InlineEditorModes
	{
	public:
		::System::Type* get_TargetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SBYTECONVERTER_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SBYTECONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SBYTECONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SBYTECONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SBYTECONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

