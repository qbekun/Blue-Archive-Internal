#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SHOWUSERCENTERWATCHEDSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D22070)
#define MX_SAVEDATA_SHOWUSERCENTERWATCHEDSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D22080)
#define MX_SAVEDATA_SHOWUSERCENTERWATCHEDSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D22090)
#define MX_SAVEDATA_SHOWUSERCENTERWATCHEDSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D220A0)

namespace MX::SaveData
{
	inline static constexpr unsigned int ShowUserCenterWatchedSaveData_TypeDefinitionIndex = 19993;

	class ShowUserCenterWatchedSaveData : public Il2CppObject
	{
	public:
		::System::Boolean Watched; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWUSERCENTERWATCHEDSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWUSERCENTERWATCHEDSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWUSERCENTERWATCHEDSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SHOWUSERCENTERWATCHEDSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

