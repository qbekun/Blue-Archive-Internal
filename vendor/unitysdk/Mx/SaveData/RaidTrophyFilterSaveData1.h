#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_SETDEFAULTGROUPS_OFFSET UNITYSDK_OFFSET(0x1CF9F00)
#define MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_ISDEFAULTGROUP_OFFSET UNITYSDK_OFFSET(0x1CF9F80)
#define MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CF9FC0)
#define MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA040)
#define MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA100)
#define MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1CFA110)
#define MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA160)

namespace MX::SaveData
{
	inline static constexpr unsigned int RaidTrophyFilterSaveData1_TypeDefinitionIndex = 19929;

	class RaidTrophyFilterSaveData1 : public Il2CppObject
	{
	public:
		Il2CppObject* GroupIds; // 0x10
		::System::Boolean IncludeNotOwned; // 0x18

		::System::Void SetDefaultGroups()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_SETDEFAULTGROUPS_OFFSET))(nullptr);
		}

		::System::Boolean IsDefaultGroup()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_ISDEFAULTGROUP_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsDefault()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_ISDEFAULT_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_RAIDTROPHYFILTERSAVEDATA1_CLONE_OFFSET))(nullptr);
		}

	};
}

