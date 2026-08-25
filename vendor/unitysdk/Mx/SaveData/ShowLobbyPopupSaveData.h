#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1CF07A0)
#define MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF0840)
#define MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_HASBEENTODAY_OFFSET UNITYSDK_OFFSET(0x1CF08B0)
#define MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF09A0)
#define MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CF09B0)
#define MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF09C0)
#define MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF09D0)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowLobbyPopupSaveData_TypeDefinitionIndex = 19883;

	class ShowLobbyPopupSaveData : public Il2CppObject
	{
	public:
		::System::DateTime* saveTime; // 0x10

		::System::Void Set()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_SET_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean HasBeenToday()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_HASBEENTODAY_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void Remove()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_REMOVE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWLOBBYPOPUPSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

