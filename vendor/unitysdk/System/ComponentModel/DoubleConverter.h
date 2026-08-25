#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x9B2F630)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x9B2F640)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B2F6A0)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B2F740)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B2F7A0)
#define SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B2F830)

namespace System::ComponentModel
{
	inline static constexpr unsigned int DoubleConverter_TypeDefinitionIndex = 29385;

	class DoubleConverter : public ::TriInspector::InlineEditorModes
	{
	public:
		::System::Boolean get_AllowHex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_GET_ALLOWHEX_OFFSET))(nullptr);
		}

		::System::Type* get_TargetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_DOUBLECONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

