#pragma once
#include "../../unitysdk.h"

namespace MX::MinigameShooting { class MGSGameMode; }

#define MX_SAVEDATA_MINIGAMESHOOTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFAF00)
#define MX_SAVEDATA_MINIGAMESHOOTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFAF70)
#define MX_SAVEDATA_MINIGAMESHOOTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFAF80)
#define MX_SAVEDATA_MINIGAMESHOOTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFAF90)

namespace MX::SaveData
{
	inline static constexpr unsigned int MiniGameShootingSaveData_TypeDefinitionIndex = 19945;

	class MiniGameShootingSaveData : public Il2CppObject
	{
	public:
		::MX::MinigameShooting::MGSGameMode* LastEnterGameMode; // 0x10

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMESHOOTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMESHOOTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMESHOOTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMESHOOTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

