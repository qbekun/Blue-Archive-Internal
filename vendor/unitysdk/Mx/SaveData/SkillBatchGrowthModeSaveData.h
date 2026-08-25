#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_SKILLBATCHGROWTHMODESAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF2620)
#define MX_SAVEDATA_SKILLBATCHGROWTHMODESAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF2630)
#define MX_SAVEDATA_SKILLBATCHGROWTHMODESAVEDATA_SET_OFFSET UNITYSDK_OFFSET(0x1CF2640)
#define MX_SAVEDATA_SKILLBATCHGROWTHMODESAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF2650)
#define MX_SAVEDATA_SKILLBATCHGROWTHMODESAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF26B0)

namespace MX::SaveData
{
	inline static constexpr unsigned int SkillBatchGrowthModeSaveData_TypeDefinitionIndex = 19900;

	class SkillBatchGrowthModeSaveData : public Il2CppObject
	{
	public:
		::System::Boolean IsBatchMode; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SKILLBATCHGROWTHMODESAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SKILLBATCHGROWTHMODESAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void Set(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SKILLBATCHGROWTHMODESAVEDATA_SET_OFFSET))(arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SKILLBATCHGROWTHMODESAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_SKILLBATCHGROWTHMODESAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

