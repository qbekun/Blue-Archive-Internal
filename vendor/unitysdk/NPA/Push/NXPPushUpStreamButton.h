#pragma once
#include "../../unitysdk.h"

namespace NPA::SimpleJSON { class JSONNode; }

#define NPA_PUSH_NXPPUSHUPSTREAMBUTTON_.CTOR_OFFSET UNITYSDK_OFFSET(0x9CC7970)
#define NPA_PUSH_NXPPUSHUPSTREAMBUTTON_TOJSONOBJECT_OFFSET UNITYSDK_OFFSET(0x9CCAA50)
#define NPA_PUSH_NXPPUSHUPSTREAMBUTTON_APPENDJSONTO_OFFSET UNITYSDK_OFFSET(0x9CCAB60)

namespace NPA::Push
{
	inline static constexpr unsigned int NXPPushUpStreamButton_TypeDefinitionIndex = 27352;

	class NXPPushUpStreamButton : public Il2CppObject
	{
	public:
		::System::String* _upUrl; // 0x20

		::System::Void .ctor(::System::String* str, ::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHUPSTREAMBUTTON_.CTOR_OFFSET))(str, str, nullptr);
		}

		::NPA::SimpleJSON::JSONNode* ToJsonObject()
		{
			return (return (::NPA::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHUPSTREAMBUTTON_TOJSONOBJECT_OFFSET))(nullptr);
		}

		::System::Void AppendJsonTo(::System::Text::StringBuilder* arg)
		{
			((::System::Void(*)(::System::Text::StringBuilder*, ::PVOID))((::PBYTE)hIl2Cpp + NPA_PUSH_NXPPUSHUPSTREAMBUTTON_APPENDJSONTO_OFFSET))(arg, nullptr);
		}

	};
}

