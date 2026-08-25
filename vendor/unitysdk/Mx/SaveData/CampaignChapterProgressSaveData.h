#pragma once
#include "../../unitysdk.h"

namespace FlatData { class StageDifficulty; }

#define MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_ADDPERFECTCLEAR_OFFSET UNITYSDK_OFFSET(0x1CF1B30)
#define MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_ADD_OFFSET UNITYSDK_OFFSET(0x1CF1C20)
#define MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF1D10)
#define MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1E30)
#define MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1CF1F50)
#define MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CF20B0)
#define MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF2220)

namespace MX::SaveData
{
	inline static constexpr unsigned int CampaignChapterProgressSaveData_TypeDefinitionIndex = 19896;

	class CampaignChapterProgressSaveData : public Il2CppObject
	{
	public:
		Il2CppObject* NormalChapterIds; // 0x10
		Il2CppObject* HardChapterIds; // 0x18
		Il2CppObject* PerfectClearNormalChapterIds; // 0x20
		Il2CppObject* PerfectClearHardChapterIds; // 0x28

		::System::Void AddPerfectClear(::System::Int64 arg, ::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_ADDPERFECTCLEAR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Add(::System::Int64 arg, ::FlatData::StageDifficulty* arg)
		{
			((::System::Void(*)(::System::Int64, ::FlatData::StageDifficulty*, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_ADD_OFFSET))(arg, arg, nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Contains(::System::Int64 arg, ::FlatData::StageDifficulty* arg, ::System::Boolean arg)
		{
			return (return (::System::Boolean(*)(::System::Int64, ::FlatData::StageDifficulty*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_CONTAINS_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAMPAIGNCHAPTERPROGRESSSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

	};
}

