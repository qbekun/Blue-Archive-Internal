#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_ANY_OFFSET UNITYSDK_OFFSET(0x1D24010)
#define MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D24060)
#define MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_ADDANDSAVE_OFFSET UNITYSDK_OFFSET(0x1D240E0)
#define MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D241C0)
#define MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D24270)
#define MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D242F0)

namespace MX::SaveData
{
	inline static constexpr unsigned int SelectPickupGachaNoticeSaveData_TypeDefinitionIndex = 19998;

	class SelectPickupGachaNoticeSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* CheckedShopRecruitIds; // 0x10

		::System::Boolean Any(::System::Int64 arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_ANY_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void AddAndSave(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_ADDANDSAVE_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SELECTPICKUPGACHANOTICESAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

