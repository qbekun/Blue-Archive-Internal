#pragma once
#include "unitysdk.h"

class UILabel;
class UISlider;
namespace UnityEngine { class GameObject; }
class UISmallParcelCard;
namespace MX::Data { class AcademyLocationData; }
namespace MX::Data { class EventContentLocationData; }
namespace MX::GameLogic::DBModel { class EventContentLocationDB; }

#define UIACADEMYLOCATIONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x21B3F10)
#define UIACADEMYLOCATIONINFO_SETDATA_OFFSET UNITYSDK_OFFSET(0x21B3A00)
#define UIACADEMYLOCATIONINFO_SETLOCATIONEXP_OFFSET UNITYSDK_OFFSET(0x21B77A0)
#define UIACADEMYLOCATIONINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x21B7B00)

	inline static constexpr unsigned int UIAcademyLocationInfo_TypeDefinitionIndex = 4201;

	class UIAcademyLocationInfo : public Il2CppObject
	{
	public:
		UILabel* locationRankLabel; // 0x18
		UILabel* locationNameLabel; // 0x20
		UISlider* expSlider; // 0x28
		UILabel* expLabel; // 0x30
		::UnityEngine::GameObject* maxGuageRoot; // 0x38
		UISmallParcelCard* parcelCard; // 0x40

		::System::Void SetData(::MX::Data::AcademyLocationData* arg)
		{
			((::System::Void(*)(::MX::Data::AcademyLocationData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONINFO_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentLocationData* arg, ::MX::GameLogic::DBModel::EventContentLocationDB* arg2)
		{
			((::System::Void(*)(::MX::Data::EventContentLocationData*, ::MX::GameLogic::DBModel::EventContentLocationDB*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONINFO_SETDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void SetLocationExp(::MX::Data::AcademyLocationData* arg)
		{
			((::System::Void(*)(::MX::Data::AcademyLocationData*, ::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONINFO_SETLOCATIONEXP_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIACADEMYLOCATIONINFO_.CTOR_OFFSET))(nullptr);
		}

	};

