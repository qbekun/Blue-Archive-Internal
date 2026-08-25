#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_GUIDEPOPUPWATCHEDONCESAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D028F0)
#define MX_SAVEDATA_GUIDEPOPUPWATCHEDONCESAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D02970)
#define MX_SAVEDATA_GUIDEPOPUPWATCHEDONCESAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D02A20)
#define MX_SAVEDATA_GUIDEPOPUPWATCHEDONCESAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D02A30)

namespace MX::SaveData
{
	inline static constexpr unsigned int GuidePopupWatchedOnceSaveData_TypeDefinitionIndex = 19978;

	class GuidePopupWatchedOnceSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* GuidePopupIdList; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GUIDEPOPUPWATCHEDONCESAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GUIDEPOPUPWATCHEDONCESAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GUIDEPOPUPWATCHEDONCESAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_GUIDEPOPUPWATCHEDONCESAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

