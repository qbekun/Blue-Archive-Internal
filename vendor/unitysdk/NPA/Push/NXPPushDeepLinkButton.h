#pragma once
#include "../../unitysdk.h"

namespace NPA::Push { class NXPToyPushButtonActionType; }
namespace NPA::Push { class NXPToyPushDeepLinkUrls; }
namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_PUSH_NXPPUSHDEEPLINKBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC7560)
#define NPA_PUSH_NXPPUSHDEEPLINKBUTTON_TOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CCA8B0)
#define NPA_PUSH_NXPPUSHDEEPLINKBUTTON_APPENDJSONTO_OFFSET UNITYSDK_OFFSET(0x9CCA9A0)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPPushDeepLinkButton_TypeDefinitionIndex = 27351;

	class NXPPushDeepLinkButton : public Il2CppObject
	{
	public:
		::NPA::Push::NXPToyPushButtonActionType* _actionType; // 0x20
		::NPA::Push::NXPToyPushDeepLinkUrls* _deepLinkUrls; // 0x28

		::System::Void .ctor(::System::String* str, ::NPA::Push::NXPToyPushButtonActionType* arg, ::NPA::Push::NXPToyPushDeepLinkUrls* arg)
		{
			((::System::Void(*)(::System::String*, ::NPA::Push::NXPToyPushButtonActionType*, ::NPA::Push::NXPToyPushDeepLinkUrls*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHDEEPLINKBUTTON_.CTOR_OFFSET))(str, arg, arg, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ToJsonObject()
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHDEEPLINKBUTTON_TOJSONOBJECT_OFFSET))(nullptr);
		}

		::System::Void AppendJsonTo(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHDEEPLINKBUTTON_APPENDJSONTO_OFFSET))(arg, nullptr);
		}

	};
}

