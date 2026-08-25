#pragma once
#include "../../unitysdk.h"

namespace MX::Data::Excel { class MiniGameRhythmBgmExcel; }
namespace MX::Data { class MiniGameRhythmData; }

#define MX_DATA_MINIGAMERHYTHMBGMINFO_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x18FA6E0)
#define MX_DATA_MINIGAMERHYTHMBGMINFO_GETSPECIALRHYTHMDATA_OFFSET UNITYSDK_OFFSET(0x18FA780)
#define MX_DATA_MINIGAMERHYTHMBGMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x18FA7E0)

namespace MX::Data
{
	inline static constexpr unsigned int MiniGameRhythmBgmInfo_TypeDefinitionIndex = 16191;

	class MiniGameRhythmBgmInfo : public Il2CppObject
	{
	public:
		::MX::Data::Excel::MiniGameRhythmBgmExcel* Excel; // 0x10
		Il2CppObject* DifficultyGameData; // 0x20

		::System::Boolean IsSpecial()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMERHYTHMBGMINFO_ISSPECIAL_OFFSET))(nullptr);
		}

		::MX::Data::MiniGameRhythmData* GetSpecialRhythmData()
		{
			return (return (::MX::Data::MiniGameRhythmData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMERHYTHMBGMINFO_GETSPECIALRHYTHMDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_MINIGAMERHYTHMBGMINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

