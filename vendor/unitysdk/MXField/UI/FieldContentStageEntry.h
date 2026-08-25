#pragma once
#include "../../unitysdk.h"

namespace MX::Data { class CampaignStageInfo; }

#define MXFIELD_UI_FIELDCONTENTSTAGEENTRY_.CTOR_OFFSET UNITYSDK_OFFSET(0xEA66E0)
#define MXFIELD_UI_FIELDCONTENTSTAGEENTRY_ENTER_OFFSET UNITYSDK_OFFSET(0xEA66F0)

namespace MXField::UI
{
	inline static constexpr unsigned int FieldContentStageEntry_TypeDefinitionIndex = 10754;

	class FieldContentStageEntry : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGEENTRY_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Enter(::MX::Data::CampaignStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::CampaignStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + MXFIELD_UI_FIELDCONTENTSTAGEENTRY_ENTER_OFFSET))(arg, nullptr);
		}

	};
}

