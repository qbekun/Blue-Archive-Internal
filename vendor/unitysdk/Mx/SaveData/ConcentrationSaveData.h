#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CONCENTRATIONSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D23D20)
#define MX_SAVEDATA_CONCENTRATIONSAVEDATA_SAVEFIRSTENTER_OFFSET UNITYSDK_OFFSET(0x1D23DA0)
#define MX_SAVEDATA_CONCENTRATIONSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D23E70)
#define MX_SAVEDATA_CONCENTRATIONSAVEDATA_ALREADYENTEREDSEASON_OFFSET UNITYSDK_OFFSET(0x1D23EF0)
#define MX_SAVEDATA_CONCENTRATIONSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D23F40)
#define MX_SAVEDATA_CONCENTRATIONSAVEDATA_ALREADYENTERED_OFFSET UNITYSDK_OFFSET(0x1D23FF0)
#define MX_SAVEDATA_CONCENTRATIONSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D24000)

namespace MX::SaveData
{
	inline static constexpr unsigned int ConcentrationSaveData_TypeDefinitionIndex = 19997;

	class ConcentrationSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* EnteredEventContentSeasonIds; // 0x10
		::System::Boolean isEntered; // 0x18

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONCENTRATIONSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void SaveFirstEnter(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONCENTRATIONSAVEDATA_SAVEFIRSTENTER_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONCENTRATIONSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean AlreadyEnteredSeason(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONCENTRATIONSAVEDATA_ALREADYENTEREDSEASON_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONCENTRATIONSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean AlreadyEntered()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONCENTRATIONSAVEDATA_ALREADYENTERED_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONCENTRATIONSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

