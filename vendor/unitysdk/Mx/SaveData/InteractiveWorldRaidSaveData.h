#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_INTERACTIVEWORLDRAIDSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D24300)
#define MX_SAVEDATA_INTERACTIVEWORLDRAIDSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D24380)
#define MX_SAVEDATA_INTERACTIVEWORLDRAIDSAVEDATA_GETSEASONSAVEDATA_OFFSET UNITYSDK_OFFSET(0x1D24550)
#define MX_SAVEDATA_INTERACTIVEWORLDRAIDSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D247B0)
#define MX_SAVEDATA_INTERACTIVEWORLDRAIDSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D24830)

namespace MX::SaveData
{
	inline static constexpr unsigned int InteractiveWorldRaidSaveData_TypeDefinitionIndex = 20000;

	class InteractiveWorldRaidSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* SeasonSaveDataDic; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_INTERACTIVEWORLDRAIDSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_INTERACTIVEWORLDRAIDSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		InteractiveWorldRaidSeasonSaveData* GetSeasonSaveData(::System::Int64 arg)
		{
			return (return (InteractiveWorldRaidSeasonSaveData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_INTERACTIVEWORLDRAIDSAVEDATA_GETSEASONSAVEDATA_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_INTERACTIVEWORLDRAIDSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_INTERACTIVEWORLDRAIDSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

