#pragma once
#include "../../unitysdk.h"

#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x925B640)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x925B6B0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x925B6D0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x925B8E0)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTUREID_OFFSET UNITYSDK_OFFSET(0x925BA20)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTURENAME_OFFSET UNITYSDK_OFFSET(0x925BA30)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_DEFAULTMESSAGE_OFFSET UNITYSDK_OFFSET(0x925B680)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_FORMATEDINVALIDCULTUREID_OFFSET UNITYSDK_OFFSET(0x925BA40)
#define SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x925BB50)

namespace System::Globalization
{
	inline static constexpr unsigned int CultureNotFoundException_TypeDefinitionIndex = 24952;

	class CultureNotFoundException : public <>c__DisplayClass0_0
	{
	public:
		::System::String* _invalidCultureName; // 0x98
		Il2CppObject* _invalidCultureId; // 0xA0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::Void .ctor(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* arg, ::System::Runtime::Serialization::StreamingContext* arg)
		{
			((::System::Void(*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GETOBJECTDATA_OFFSET))(arg, arg, nullptr);
		}

		Il2CppObject* get_InvalidCultureId()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTUREID_OFFSET))(nullptr);
		}

		::System::String* get_InvalidCultureName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_INVALIDCULTURENAME_OFFSET))(nullptr);
		}

		::System::String* get_DefaultMessage()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_DEFAULTMESSAGE_OFFSET))(nullptr);
		}

		::System::String* get_FormatedInvalidCultureId()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_FORMATEDINVALIDCULTUREID_OFFSET))(nullptr);
		}

		::System::String* get_Message()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CULTURENOTFOUNDEXCEPTION_GET_MESSAGE_OFFSET))(nullptr);
		}

	};
}

