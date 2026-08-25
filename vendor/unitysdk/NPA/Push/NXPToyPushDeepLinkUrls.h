#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC66A0)
#define NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_SETAPPLEURL_OFFSET UNITYSDK_OFFSET(0x9CC6700)
#define NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_SETGALAXYURL_OFFSET UNITYSDK_OFFSET(0x9CC6710)
#define NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_SETONEURL_OFFSET UNITYSDK_OFFSET(0x9CC6720)
#define NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_SETPLAYURL_OFFSET UNITYSDK_OFFSET(0x9CC6730)
#define NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_APPENDTOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CC6740)
#define NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_APPENDURLSJSONTO_OFFSET UNITYSDK_OFFSET(0x9CC69E0)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPToyPushDeepLinkUrls_TypeDefinitionIndex = 27344;

	class NXPToyPushDeepLinkUrls : public Il2CppObject
	{
	public:
		::System::String* _appleUrl; // 0x10
		::System::String* _galaxyUrl; // 0x18
		::System::String* _oneUrl; // 0x20
		::System::String* _playUrl; // 0x28

		::System::Void .ctor(::System::String* str, ::System::String* str, ::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_.CTOR_OFFSET))(str, str, str, str, nullptr);
		}

		::System::Void SetAppleUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_SETAPPLEURL_OFFSET))(str, nullptr);
		}

		::System::Void SetGalaxyUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_SETGALAXYURL_OFFSET))(str, nullptr);
		}

		::System::Void SetOneUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_SETONEURL_OFFSET))(str, nullptr);
		}

		::System::Void SetPlayUrl(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_SETPLAYURL_OFFSET))(str, nullptr);
		}

		::System::Void AppendToJsonObject(::NPA::SimpleJSON::JSONNode* arg)
		{
			((::System::Void(*)(::NPA::SimpleJSON::JSONNode*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_APPENDTOJSONOBJECT_OFFSET))(arg, nullptr);
		}

		::System::Void AppendUrlsJsonTo(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPTOYPUSHDEEPLINKURLS_APPENDURLSJSONTO_OFFSET))(arg, nullptr);
		}

	};
}

