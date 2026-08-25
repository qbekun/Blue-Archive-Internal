#pragma once
#include "unitysdk.h"

namespace UnityEngine { class GameObject; }
class UITexture;
class UILabel;
namespace UnityEngine { class BoxCollider; }
namespace MX::Data { class EventContentMeetupData; }

#define UISCENARIOMODE_VOLUMEUNITFAVOR_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x2817FE0)
#define UISCENARIOMODE_VOLUMEUNITFAVOR_BLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x28153E0)
#define UISCENARIOMODE_VOLUMEUNITFAVOR_SETDATA_OFFSET UNITYSDK_OFFSET(0x2814B80)
#define UISCENARIOMODE_VOLUMEUNITFAVOR_SETDATA_OFFSET UNITYSDK_OFFSET(0x2815120)
#define UISCENARIOMODE_VOLUMEUNITFAVOR_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x2814F90)
#define UISCENARIOMODE_VOLUMEUNITFAVOR_ONCLICK_OFFSET UNITYSDK_OFFSET(0x2818070)
#define UISCENARIOMODE_VOLUMEUNITFAVOR_.CTOR_OFFSET UNITYSDK_OFFSET(0x2818330)

	inline static constexpr unsigned int UIScenarioMode_VolumeUnitFavor_TypeDefinitionIndex = 7810;

	class UIScenarioMode_VolumeUnitFavor : public Il2CppObject
	{
	public:
		::UnityEngine::GameObject* active; // 0x18
		UITexture* portrait; // 0x20
		UILabel* sort; // 0x28
		::UnityEngine::GameObject* empty; // 0x30
		::UnityEngine::BoxCollider* _collider; // 0x38
		::System::Int64 characterId; // 0x40
		::MX::Data::EventContentMeetupData* eventContentMeetupData; // 0x48

		::UnityEngine::BoxCollider* get_Collider()
		{
			return ((::UnityEngine::BoxCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNITFAVOR_GET_COLLIDER_OFFSET))(nullptr);
		}

		::System::Void BlockInput()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNITFAVOR_BLOCKINPUT_OFFSET))(nullptr);
		}

		::System::Void SetData(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNITFAVOR_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetData(::MX::Data::EventContentMeetupData* arg)
		{
			((::System::Void(*)(::MX::Data::EventContentMeetupData*, ::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNITFAVOR_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void SetEmpty()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNITFAVOR_SETEMPTY_OFFSET))(nullptr);
		}

		::System::Void OnClick()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNITFAVOR_ONCLICK_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISCENARIOMODE_VOLUMEUNITFAVOR_.CTOR_OFFSET))(nullptr);
		}

	};

