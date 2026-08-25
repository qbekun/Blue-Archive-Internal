#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_EVENTARCHIVESORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1D02AB0)
#define MX_SAVEDATA_EVENTARCHIVESORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1D02AC0)
#define MX_SAVEDATA_EVENTARCHIVESORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1D02AD0)
#define MX_SAVEDATA_EVENTARCHIVESORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1D02B40)

namespace MX::SaveData
{
	inline static constexpr unsigned int EventArchiveSortingSaveData_TypeDefinitionIndex = 19979;

	class EventArchiveSortingSaveData : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTARCHIVESORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTARCHIVESORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTARCHIVESORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTARCHIVESORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

