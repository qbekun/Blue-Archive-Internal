#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
namespace MX::Data { class EventContentLocationData; }
namespace MX::GameLogic::DBModel { class EventContentLocationDB; }

#define UIACADEMYEVENTCONTENTOPERATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x219C4B0)
#define UIACADEMYEVENTCONTENTOPERATIONINFO_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x219C4C0)

	inline static constexpr unsigned int UIAcademyEventContentOperationInfo_TypeDefinitionIndex = 4139;

	class UIAcademyEventContentOperationInfo : public Il2CppObject
	{
	public:
		UISprite* eventPointIconSprite; // 0x18
		UILabel* eventPointLabel; // 0x20
		UILabel* remainScheduleCountLabel; // 0x28

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYEVENTCONTENTOPERATIONINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void RefreshInfo(::MX::Data::EventContentLocationData* arg, ::MX::GameLogic::DBModel::EventContentLocationDB* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentLocationData*, ::MX::GameLogic::DBModel::EventContentLocationDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYEVENTCONTENTOPERATIONINFO_REFRESHINFO_OFFSET))(arg, arg2, nullptr);
		}

	};

