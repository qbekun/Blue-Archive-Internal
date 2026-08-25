#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWLOBBYMESSANGERICONBIRTHDAYSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1120)
#define MX_SAVEDATA_SHOWLOBBYMESSANGERICONBIRTHDAYSAVEDATA_HASBEENTODAY_OFFSET UNITYSDK_OFFSET(0x1CF1130)
#define MX_SAVEDATA_SHOWLOBBYMESSANGERICONBIRTHDAYSAVEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1CF11E0)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowLobbyMessangerIconBirthDaySaveData_TypeDefinitionIndex = 19891;

	class ShowLobbyMessangerIconBirthDaySaveData : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYMESSANGERICONBIRTHDAYSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean HasBeenToday()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYMESSANGERICONBIRTHDAYSAVEDATA_HASBEENTODAY_OFFSET))(nullptr);
		}

		::System::Void Set()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYMESSANGERICONBIRTHDAYSAVEDATA_SET_OFFSET))(nullptr);
		}

	};
}

