#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class NXPToyPushDeepLinkUrls; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_PUSH_NXPPUSHAPPLINKBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC76E0)
#define NPA_PUSH_NXPPUSHAPPLINKBUTTON_TOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CCA640)
#define NPA_PUSH_NXPPUSHAPPLINKBUTTON_APPENDJSONTO_OFFSET UNITYSDK_OFFSET(0x9CCA7F0)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPPushAppLinkButton_TypeDefinitionIndex = 27349;

	class NXPPushAppLinkButton : public Il2CppObject
	{
	public:
		::NPA::Push::NXPToyPushDeepLinkUrls* _appLinkUrl; // 0x20

		::System::Void .ctor(::System::String* str, ::NPA::Push::NXPToyPushDeepLinkUrls* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Push::NXPToyPushDeepLinkUrls*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHAPPLINKBUTTON_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ToJsonObject()
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHAPPLINKBUTTON_TOJSONOBJECT_OFFSET))(nullptr);
		}

		::System::Void AppendJsonTo(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHAPPLINKBUTTON_APPENDJSONTO_OFFSET))(arg, nullptr);
		}

	};
}

