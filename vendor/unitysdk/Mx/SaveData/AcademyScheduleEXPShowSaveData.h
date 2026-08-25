#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_ACADEMYSCHEDULEEXPSHOWSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D25010)
#define MX_SAVEDATA_ACADEMYSCHEDULEEXPSHOWSAVEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1D25020)
#define MX_SAVEDATA_ACADEMYSCHEDULEEXPSHOWSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D25040)
#define MX_SAVEDATA_ACADEMYSCHEDULEEXPSHOWSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D25050)
#define MX_SAVEDATA_ACADEMYSCHEDULEEXPSHOWSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D250B0)

namespace MX::SaveData
{
	inline static constexpr unsigned int AcademyScheduleEXPShowSaveData_TypeDefinitionIndex = 20003;

	class AcademyScheduleEXPShowSaveData : public Il2CppObject
	{
	public:
		::System::Boolean IsShowEXP; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ACADEMYSCHEDULEEXPSHOWSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ACADEMYSCHEDULEEXPSHOWSAVEDATA_SET_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ACADEMYSCHEDULEEXPSHOWSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ACADEMYSCHEDULEEXPSHOWSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_ACADEMYSCHEDULEEXPSHOWSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

