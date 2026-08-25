#pragma once
#include "../unitysdk.h"

#define UNITYENGINE_HELPURLATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0xA22EA70)
#define UNITYENGINE_HELPURLATTRIBUTE_GET_URL_OFFSET UNITYSDK_OFFSET(0xA22EAE0)

namespace UnityEngine
{
	inline static constexpr unsigned int HelpURLAttribute_TypeDefinitionIndex = 31140;

	class HelpURLAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::System::String* m_Url; // 0x10
		::System::Boolean m_Dispatcher; // 0x18
		::System::String* m_DispatchingFieldName; // 0x20

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HELPURLATTRIBUTE_.CTOR_OFFSET))(str, nullptr);
		}

		::System::String* get_URL()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_HELPURLATTRIBUTE_GET_URL_OFFSET))(nullptr);
		}

	};
}

