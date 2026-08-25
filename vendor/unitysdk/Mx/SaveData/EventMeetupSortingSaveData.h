#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_EVENTMEETUPSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA8F0)
#define MX_SAVEDATA_EVENTMEETUPSORTINGSAVEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA900)
#define MX_SAVEDATA_EVENTMEETUPSORTINGSAVEDATA_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA980)
#define MX_SAVEDATA_EVENTMEETUPSORTINGSAVEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA970)

namespace MX::SaveData
{
	inline static constexpr unsigned int EventMeetupSortingSaveData_TypeDefinitionIndex = 19940;

	class EventMeetupSortingSaveData : public Il2CppObject
	{
	public:
		SortingRule* StudentSortingRule; // 0x10
		SortingOrder* StudentSortingOrder; // 0x14

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTMEETUPSORTINGSAVEDATA_SETDEFAULTDATA_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTMEETUPSORTINGSAVEDATA_CLONE_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTMEETUPSORTINGSAVEDATA_VALIDATE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_EVENTMEETUPSORTINGSAVEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

