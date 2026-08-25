#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_PROGRESSCAMPAIGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF24F0)
#define MX_SAVEDATA_PROGRESSCAMPAIGN_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF2560)
#define MX_SAVEDATA_PROGRESSCAMPAIGN_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF2550)
#define MX_SAVEDATA_PROGRESSCAMPAIGN_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF2570)

namespace MX::SaveData
{
	inline static constexpr unsigned int ProgressCampaign_TypeDefinitionIndex = 19898;

	class ProgressCampaign : public Il2CppObject
	{
	public:
		::System::Boolean IsProgress; // 0x10

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PROGRESSCAMPAIGN_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PROGRESSCAMPAIGN_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PROGRESSCAMPAIGN_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_PROGRESSCAMPAIGN_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

