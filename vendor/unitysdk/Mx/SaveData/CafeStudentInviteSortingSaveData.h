#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_CAFESTUDENTINVITESORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA850)
#define MX_SAVEDATA_CAFESTUDENTINVITESORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA860)
#define MX_SAVEDATA_CAFESTUDENTINVITESORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA870)
#define MX_SAVEDATA_CAFESTUDENTINVITESORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA880)

namespace MX::SaveData
{
	inline static constexpr unsigned int CafeStudentInviteSortingSaveData_TypeDefinitionIndex = 19939;

	class CafeStudentInviteSortingSaveData : public Il2CppObject
	{
	public:
		SortingRule* StudentSortingRule; // 0x10
		SortingOrder* StudentSortingOrder; // 0x14

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFESTUDENTINVITESORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFESTUDENTINVITESORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFESTUDENTINVITESORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_CAFESTUDENTINVITESORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

	};
}

