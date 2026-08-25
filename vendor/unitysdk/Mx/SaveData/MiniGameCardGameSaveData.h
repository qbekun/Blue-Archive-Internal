#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_MINIGAMECARDGAMESAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFB390)
#define MX_SAVEDATA_MINIGAMECARDGAMESAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFB3A0)
#define MX_SAVEDATA_MINIGAMECARDGAMESAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB3C0)
#define MX_SAVEDATA_MINIGAMECARDGAMESAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFB3D0)

namespace MX::SaveData
{
	inline static constexpr unsigned int MiniGameCardGameSaveData_TypeDefinitionIndex = 19948;

	class MiniGameCardGameSaveData : public Il2CppObject
	{
	public:
		::System::Int64 EventContentId; // 0x10
		::System::Boolean HasEntered; // 0x18
		::System::Single BattleTimeScale; // 0x1C
		::System::Boolean IsPerkSelectionEnabled; // 0x20

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMECARDGAMESAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMECARDGAMESAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMECARDGAMESAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMECARDGAMESAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

