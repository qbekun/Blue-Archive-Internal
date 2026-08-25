#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_PUSH_NXPPUSHWEBLINKBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC73E0)
#define NPA_PUSH_NXPPUSHWEBLINKBUTTON_GETWEBURL_OFFSET UNITYSDK_OFFSET(0x9CCABE0)
#define NPA_PUSH_NXPPUSHWEBLINKBUTTON_SETWEBURL_OFFSET UNITYSDK_OFFSET(0x9CCABF0)
#define NPA_PUSH_NXPPUSHWEBLINKBUTTON_TOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CCAC00)
#define NPA_PUSH_NXPPUSHWEBLINKBUTTON_APPENDJSONTO_OFFSET UNITYSDK_OFFSET(0x9CCAD10)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPPushWebLinkButton_TypeDefinitionIndex = 27353;

	class NXPPushWebLinkButton : public Il2CppObject
	{
	public:
		::System::String* _webUrl; // 0x20

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHWEBLINKBUTTON_.CTOR_OFFSET))(str, str, nullptr);
		}

		::System::String* GetWebUrl()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHWEBLINKBUTTON_GETWEBURL_OFFSET))(nullptr);
		}

		::System::Void SetWebUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHWEBLINKBUTTON_SETWEBURL_OFFSET))(str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ToJsonObject()
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHWEBLINKBUTTON_TOJSONOBJECT_OFFSET))(nullptr);
		}

		::System::Void AppendJsonTo(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHWEBLINKBUTTON_APPENDJSONTO_OFFSET))(arg, nullptr);
		}

	};
}

