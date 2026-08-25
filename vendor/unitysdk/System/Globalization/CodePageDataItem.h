#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x92A7E00)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_CREATESTRING_OFFSET UNITYSDK_OFFSET(0x92A7EB0)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_WEBNAME_OFFSET UNITYSDK_OFFSET(0x92A7F50)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_HEADERNAME_OFFSET UNITYSDK_OFFSET(0x92A8010)
#define SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_.CCTOR_OFFSET UNITYSDK_OFFSET(0x92A80E0)

namespace System::Globalization
{
	inline static constexpr unsigned int CodePageDataItem_TypeDefinitionIndex = 25006;

	class CodePageDataItem : public Il2CppObject
	{
	public:
		::System::Int32 m_dataIndex; // 0x10
		::System::Int32 m_uiFamilyCodePage; // 0x14
		::System::String* m_webName; // 0x18
		::System::String* m_headerName; // 0x20
		::System::String* m_bodyName; // 0x28
		::System::UInt32 m_flags; // 0x30
		::Il2CppArray<::System::Object*>* sep; // 0x0

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* CreateString(::System::String* str, ::System::UInt32 arg)
		{
			return (return (::System::String*(*)(::System::String*, ::System::UInt32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_CREATESTRING_OFFSET))(str, arg, nullptr);
		}

		::System::String* get_WebName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_WEBNAME_OFFSET))(nullptr);
		}

		::System::String* get_HeaderName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_GET_HEADERNAME_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CODEPAGEDATAITEM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

