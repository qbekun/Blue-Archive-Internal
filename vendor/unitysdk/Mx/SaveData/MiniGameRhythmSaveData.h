#pragma once
#include "../../unitysdk.h"

namespace FlatData { class Difficulty; }

#define MX_SAVEDATA_MINIGAMERHYTHMSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFAFA0)
#define MX_SAVEDATA_MINIGAMERHYTHMSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFB0F0)
#define MX_SAVEDATA_MINIGAMERHYTHMSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFB1B0)
#define MX_SAVEDATA_MINIGAMERHYTHMSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFB230)

namespace MX::SaveData
{
	inline static constexpr unsigned int MiniGameRhythmSaveData_TypeDefinitionIndex = 19946;

	class MiniGameRhythmSaveData : public Il2CppObject
	{
	public:
		::System::Int64 EventContentId; // 0x10
		::FlatData::Difficulty* Difficulty; // 0x18
		::System::Int32 bgmIndex; // 0x1C
		MinigameRhythmOption* RhythmOption; // 0x20
		Il2CppObject* alreadyOpen; // 0x28

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMERHYTHMSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMERHYTHMSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMERHYTHMSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MINIGAMERHYTHMSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

