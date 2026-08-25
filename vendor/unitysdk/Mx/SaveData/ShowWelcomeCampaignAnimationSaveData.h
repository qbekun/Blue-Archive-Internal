#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWWELCOMECAMPAIGNANIMATIONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1230)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowWelcomeCampaignAnimationSaveData_TypeDefinitionIndex = 19892;

	class ShowWelcomeCampaignAnimationSaveData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWWELCOMECAMPAIGNANIMATIONSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

