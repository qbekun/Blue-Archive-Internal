#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_BATTLEPASSPAIDLOCKSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D211D0)
#define MX_SAVEDATA_BATTLEPASSPAIDLOCKSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D21240)
#define MX_SAVEDATA_BATTLEPASSPAIDLOCKSAVEDATA_PLAYEDANIMATION_OFFSET UNITYSDK_OFFSET(0x1D21250)
#define MX_SAVEDATA_BATTLEPASSPAIDLOCKSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D21230)
#define MX_SAVEDATA_BATTLEPASSPAIDLOCKSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D21270)

namespace MX::SaveData
{
	inline static constexpr unsigned int BattlePassPaidLockSaveData_TypeDefinitionIndex = 19990;

	class BattlePassPaidLockSaveData : public Il2CppObject
	{
	public:
		::System::Boolean PlayedUnlockAnimation; // 0x10

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPASSPAIDLOCKSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPASSPAIDLOCKSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void PlayedAnimation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPASSPAIDLOCKSAVEDATA_PLAYEDANIMATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPASSPAIDLOCKSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_BATTLEPASSPAIDLOCKSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

