#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_FRIENDSORTINGSAVEDATA_V2_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFF740)
#define MX_SAVEDATA_FRIENDSORTINGSAVEDATA_V2_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFF7D0)
#define MX_SAVEDATA_FRIENDSORTINGSAVEDATA_V2_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFF7E0)
#define MX_SAVEDATA_FRIENDSORTINGSAVEDATA_V2_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF7B0)

namespace MX::SaveData
{
	inline static constexpr unsigned int FriendSortingSaveData_V2_TypeDefinitionIndex = 19960;

	class FriendSortingSaveData_V2 : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FRIENDSORTINGSAVEDATA_V2_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FRIENDSORTINGSAVEDATA_V2_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FRIENDSORTINGSAVEDATA_V2_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_FRIENDSORTINGSAVEDATA_V2_.CTOR_OFFSET))(nullptr);
		}

	};
}

