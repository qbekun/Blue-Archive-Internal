#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_COMMONSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF3E30)
#define MX_SAVEDATA_COMMONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF3E40)
#define MX_SAVEDATA_COMMONSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF3E50)
#define MX_SAVEDATA_COMMONSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF3E60)

namespace MX::SaveData
{
	inline static constexpr unsigned int CommonSaveData_TypeDefinitionIndex = 19909;

	class CommonSaveData : public Il2CppObject
	{
	public:
		::System::Boolean CampaignAutoTurnEnd; // 0x10
		::System::Boolean CampaignTacticSkip; // 0x11
		::System::Boolean CampaingStrategySkipSelected; // 0x12

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_COMMONSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_COMMONSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_COMMONSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_COMMONSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

