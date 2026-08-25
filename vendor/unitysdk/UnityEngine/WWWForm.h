#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_WWWFORM_GET_DEFAULTENCODING_OFFSET UNITYSDK_OFFSET(0xA4A0860)
#define UNITYENGINE_WWWFORM_.CTOR_OFFSET UNITYSDK_OFFSET(0xA4A0870)
#define UNITYENGINE_WWWFORM_ADDFIELD_OFFSET UNITYSDK_OFFSET(0xA4A0A40)
#define UNITYENGINE_WWWFORM_ADDFIELD_OFFSET UNITYSDK_OFFSET(0xA4A0A80)
#define UNITYENGINE_WWWFORM_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0xA4A0CF0)
#define UNITYENGINE_WWWFORM_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA4A0E20)
#define UNITYENGINE_WWWFORM_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4A2340)

namespace UnityEngine
{
	inline static constexpr unsigned int WWWForm_TypeDefinitionIndex = 37420;

	class WWWForm : public Il2CppObject
	{
	public:
		Il2CppObject* formData; // 0x10
		Il2CppObject* fieldNames; // 0x18
		Il2CppObject* fileNames; // 0x20
		Il2CppObject* types; // 0x28
		::Il2CppArray<::System::Object*>* boundary; // 0x30
		::System::Boolean containsFiles; // 0x38
		::Il2CppArray<::System::Object*>* dDash; // 0x0
		::Il2CppArray<::System::Object*>* crlf; // 0x8
		::Il2CppArray<::System::Object*>* contentTypeHeader; // 0x10
		::Il2CppArray<::System::Object*>* dispositionHeader; // 0x18
		::Il2CppArray<::System::Object*>* endQuote; // 0x20
		::Il2CppArray<::System::Object*>* fileNameField; // 0x28
		::Il2CppArray<::System::Object*>* ampersand; // 0x30
		::Il2CppArray<::System::Object*>* equal; // 0x38

		::System::Text::Encoding* get_DefaultEncoding()
		{
			return (return (::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_GET_DEFAULTENCODING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddField(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_ADDFIELD_OFFSET))(str, str, nullptr);
		}

		::System::Void AddField(::System::String* str, ::System::String* str, ::System::Text::Encoding* arg)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::Text::Encoding*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_ADDFIELD_OFFSET))(str, str, arg, nullptr);
		}

		Il2CppObject* get_headers()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_GET_HEADERS_OFFSET))(nullptr);
		}

		::Il2CppArray<::System::Object*>* get_data()
		{
			return (return (::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_GET_DATA_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_WWWFORM_.CCTOR_OFFSET))(nullptr);
		}

	};
}

