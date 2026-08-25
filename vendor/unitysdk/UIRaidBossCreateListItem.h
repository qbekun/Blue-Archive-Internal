#pragma once
#include "unitysdk.h"

class UILabel;
class UITexture;
namespace MX::Data { class RaidStageInfo; }

#define UIRAIDBOSSCREATELISTITEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x27A1620)
#define UIRAIDBOSSCREATELISTITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0x27A1760)
#define UIRAIDBOSSCREATELISTITEM_SET_RAIDSTAGEID_OFFSET UNITYSDK_OFFSET(0x27A1770)
#define UIRAIDBOSSCREATELISTITEM_GET_RAIDSTAGEID_OFFSET UNITYSDK_OFFSET(0x27A1780)

	inline static constexpr unsigned int UIRaidBossCreateListItem_TypeDefinitionIndex = 7475;

	class UIRaidBossCreateListItem : public Il2CppObject
	{
	public:
		::System::Int64 _RaidStageId_k__BackingField; // 0x18
		UILabel* Name; // 0x20
		UITexture* Portrait; // 0x28

		::System::Void Initialize(::MX::Data::RaidStageInfo* arg)
		{
			((::System::Void(*)(::MX::Data::RaidStageInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDBOSSCREATELISTITEM_INITIALIZE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDBOSSCREATELISTITEM_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RaidStageId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + UIRAIDBOSSCREATELISTITEM_SET_RAIDSTAGEID_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_RaidStageId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UIRAIDBOSSCREATELISTITEM_GET_RAIDSTAGEID_OFFSET))(nullptr);
		}

	};

