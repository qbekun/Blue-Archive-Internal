#pragma once
#include "unitysdk.h"

namespace MX::Data { class EventContentMeetupData; }
namespace MX::Data::Excel { class CharacterExcel; }
class EventMeetupCharacter;
namespace MX::Data::Excel { class CostumeExcel; }

#define EVENTMEETUPCHARACTER_GETCHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x24AEDD0)
#define EVENTMEETUPCHARACTER_GET_EVENTCONTENTMEETUPDATA_OFFSET UNITYSDK_OFFSET(0x24AEE60)
#define EVENTMEETUPCHARACTER_GET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x24AEE70)
#define EVENTMEETUPCHARACTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x24AEE80)
#define EVENTMEETUPCHARACTER_CREATEEVENTMEETUPCHARACTER_OFFSET UNITYSDK_OFFSET(0x24AEE90)
#define EVENTMEETUPCHARACTER_SET_EVENTCONTENTMEETUPDATA_OFFSET UNITYSDK_OFFSET(0x24AF230)
#define EVENTMEETUPCHARACTER_GET_COSTUMEEXCEL_OFFSET UNITYSDK_OFFSET(0x24AF240)
#define EVENTMEETUPCHARACTER_SET_FAVORRANK_OFFSET UNITYSDK_OFFSET(0x24AF3B0)
#define EVENTMEETUPCHARACTER_SET_CHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x24AF3C0)
#define EVENTMEETUPCHARACTER_GET_CHARACTEREXCEL_OFFSET UNITYSDK_OFFSET(0x24AF3E0)

	inline static constexpr unsigned int EventMeetupCharacter_TypeDefinitionIndex = 5844;

	class EventMeetupCharacter : public Il2CppObject
	{
	public:
		::MX::Data::EventContentMeetupData* _EventContentMeetupData_k__BackingField; // 0x10
		::MX::Data::Excel::CharacterExcel* _CharacterExcel_k__BackingField; // 0x18
		::System::Int32 _FavorRank_k__BackingField; // 0x28

		::System::String* GetCharacterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTMEETUPCHARACTER_GETCHARACTERNAME_OFFSET))(nullptr);
		}

		::MX::Data::EventContentMeetupData* get_EventContentMeetupData()
		{
			return ((::MX::Data::EventContentMeetupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTMEETUPCHARACTER_GET_EVENTCONTENTMEETUPDATA_OFFSET))(nullptr);
		}

		::System::Int32 get_FavorRank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTMEETUPCHARACTER_GET_FAVORRANK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTMEETUPCHARACTER_.CTOR_OFFSET))(nullptr);
		}

		EventMeetupCharacter* CreateEventMeetupCharacter(::MX::Data::EventContentMeetupData* arg)
		{
			return ((EventMeetupCharacter*(*)(::MX::Data::EventContentMeetupData*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTMEETUPCHARACTER_CREATEEVENTMEETUPCHARACTER_OFFSET))(arg, nullptr);
		}

		::System::Void set_EventContentMeetupData(::MX::Data::EventContentMeetupData* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentMeetupData*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTMEETUPCHARACTER_SET_EVENTCONTENTMEETUPDATA_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CostumeExcel* get_CostumeExcel()
		{
			return ((::MX::Data::Excel::CostumeExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTMEETUPCHARACTER_GET_COSTUMEEXCEL_OFFSET))(nullptr);
		}

		::System::Void set_FavorRank(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + EVENTMEETUPCHARACTER_SET_FAVORRANK_OFFSET))(arg, nullptr);
		}

		::System::Void set_CharacterExcel(::MX::Data::Excel::CharacterExcel* arg)
		{
			((::System::Void(*)(::MX::Data::Excel::CharacterExcel*, ::PVOID))((::PBYTE)hIl2Cpp + EVENTMEETUPCHARACTER_SET_CHARACTEREXCEL_OFFSET))(arg, nullptr);
		}

		::MX::Data::Excel::CharacterExcel* get_CharacterExcel()
		{
			return ((::MX::Data::Excel::CharacterExcel*(*)(::PVOID))((::PBYTE)hIl2Cpp + EVENTMEETUPCHARACTER_GET_CHARACTEREXCEL_OFFSET))(nullptr);
		}

	};

