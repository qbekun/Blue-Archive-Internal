#pragma once
#include "../../unitysdk.h"

namespace MX::SaveData { class ConquestSaveData; }

#define MX_SAVEDATA_CONQUESTSAVEDATADICT_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFF060)
#define MX_SAVEDATA_CONQUESTSAVEDATADICT_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFF0E0)
#define MX_SAVEDATA_CONQUESTSAVEDATADICT_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFF3C0)
#define MX_SAVEDATA_CONQUESTSAVEDATADICT_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF340)
#define MX_SAVEDATA_CONQUESTSAVEDATADICT_GETCONQUESTMAINSTORYSAVEDATABYEVENTCONTENTID_OFFSET UNITYSDK_OFFSET(0x1CFF570)

namespace MX::SaveData
{
	inline static constexpr unsigned int ConquestSaveDataDict_TypeDefinitionIndex = 19959;

	class ConquestSaveDataDict : public Il2CppObject
	{
	public:
		Il2CppObject* EventIdConquestMainstorySaveDict; // 0x10

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATADICT_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATADICT_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATADICT_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATADICT_.CTOR_OFFSET))(nullptr);
		}

		::MX::SaveData::ConquestSaveData* GetConquestMainstorySaveDataByEventContentId(::System::Int64 arg)
		{
			return (return (::MX::SaveData::ConquestSaveData*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CONQUESTSAVEDATADICT_GETCONQUESTMAINSTORYSAVEDATABYEVENTCONTENTID_OFFSET))(arg, nullptr);
		}

	};
}

