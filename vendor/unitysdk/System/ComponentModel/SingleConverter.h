#pragma once
#include "../../unitysdk.h"

#define SYSTEM_COMPONENTMODEL_SINGLECONVERTER_GET_ALLOWHEX_OFFSET UNITYSDK_OFFSET(0x9B47B50)
#define SYSTEM_COMPONENTMODEL_SINGLECONVERTER_GET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x9B47B60)
#define SYSTEM_COMPONENTMODEL_SINGLECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B47BC0)
#define SYSTEM_COMPONENTMODEL_SINGLECONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x9B47C60)
#define SYSTEM_COMPONENTMODEL_SINGLECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9B47CC0)
#define SYSTEM_COMPONENTMODEL_SINGLECONVERTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9B47D50)

namespace System::ComponentModel
{
	inline static constexpr unsigned int SingleConverter_TypeDefinitionIndex = 29457;

	class SingleConverter : public ::TriInspector::InlineEditorModes
	{
	public:
		::System::Boolean get_AllowHex()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SINGLECONVERTER_GET_ALLOWHEX_OFFSET))(nullptr);
		}

		::System::Type* get_TargetType()
		{
			return (return (::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SINGLECONVERTER_GET_TARGETTYPE_OFFSET))(nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Int32 arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SINGLECONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::Object* FromString(::System::String* str, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::Object*(*)(::System::String*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SINGLECONVERTER_FROMSTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString(::System::Object* arg, ::System::Globalization::NumberFormatInfo* arg)
		{
			return (return (::System::String*(*)(::System::Object*, ::System::Globalization::NumberFormatInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SINGLECONVERTER_TOSTRING_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_SINGLECONVERTER_.CTOR_OFFSET))(nullptr);
		}

	};
}

