#pragma once
#include "../unitysdk.h"

#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_REDIRECTTO_OFFSET UNITYSDK_OFFSET(0xA49FDB0)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEINITIALURL_OFFSET UNITYSDK_OFFSET(0xA49FEB0)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEURISTRING_OFFSET UNITYSDK_OFFSET(0xA4A02A0)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_URLDECODE_OFFSET UNITYSDK_OFFSET(0xA4A0650)
#define UNITYENGINEINTERNAL_WEBREQUESTUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0xA4A07C0)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int WebRequestUtils_TypeDefinitionIndex = 37419;

	class WebRequestUtils : public Il2CppObject
	{
	public:
		::System::Text::RegularExpressions::Regex* domainRegex; // 0x0

		::System::String* RedirectTo(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_REDIRECTTO_OFFSET))(str, str, nullptr);
		}

		::System::String* MakeInitialUrl(::System::String* str, ::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEINITIALURL_OFFSET))(str, str, nullptr);
		}

		::System::String* MakeUriString(::System::Uri* arg, ::System::String* str, ::System::Boolean arg)
		{
			return (return (::System::String*(*)(::System::Uri*, ::System::String*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_MAKEURISTRING_OFFSET))(arg, str, arg, nullptr);
		}

		::System::String* URLDecode(::System::String* str)
		{
			return (return (::System::String*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_URLDECODE_OFFSET))(str, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_WEBREQUESTUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

