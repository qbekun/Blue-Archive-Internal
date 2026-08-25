#pragma once
#include "unitysdk.h"

class UISprite;
class UILabel;
namespace UnityEngine { class Transform; }
namespace MX::Data { class WorldRaidSeasonInfo; }
namespace UnityEngine { class Coroutine; }

#define UIWORLDRAIDENTERPARCEL_.CTOR_OFFSET UNITYSDK_OFFSET(0xBFE480)
#define UIWORLDRAIDENTERPARCEL_SETDATA_OFFSET UNITYSDK_OFFSET(0xBFE490)
#define UIWORLDRAIDENTERPARCEL_COTIMERUPDATE_OFFSET UNITYSDK_OFFSET(0xBFEB70)
#define UIWORLDRAIDENTERPARCEL_REFRESHCOUNT_OFFSET UNITYSDK_OFFSET(0xBFE8F0)

	inline static constexpr unsigned int UIWorldRaidEnterParcel_TypeDefinitionIndex = 8778;

	class UIWorldRaidEnterParcel : public Il2CppObject
	{
	public:
		UISprite* ParcelIcon; // 0x18
		UILabel* ParcelCount; // 0x20
		UILabel* ParcelTimer; // 0x28
		::UnityEngine::Transform* ParcelTimerTransform; // 0x30
		::MX::Data::WorldRaidSeasonInfo* seasonInfo; // 0x38
		::UnityEngine::Coroutine* TimerUpdateCoroutine; // 0x40
		::System::Int64 prevCount; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDENTERPARCEL_.CTOR_OFFSET))(nullptr);
		}

		::System::Void SetData(::MX::Data::WorldRaidSeasonInfo* arg)
		{
			((::System::Void(*)(::MX::Data::WorldRaidSeasonInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDENTERPARCEL_SETDATA_OFFSET))(arg, nullptr);
		}

		::System::Collections::IEnumerator* CoTimerUpdate()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDENTERPARCEL_COTIMERUPDATE_OFFSET))(nullptr);
		}

		::System::Void RefreshCount()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIWORLDRAIDENTERPARCEL_REFRESHCOUNT_OFFSET))(nullptr);
		}

	};

