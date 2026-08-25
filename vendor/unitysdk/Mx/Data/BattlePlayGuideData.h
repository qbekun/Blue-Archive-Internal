#pragma once
#include "../../unitysdk.h"

namespace FlatData { class RaidBossGroupType; }

#define MX_DATA_BATTLEPLAYGUIDEDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x187BDA0)
#define MX_DATA_BATTLEPLAYGUIDEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x187BDE0)
#define MX_DATA_BATTLEPLAYGUIDEDATA_GETRAIDCONTENTPLAYGUIDELIST_OFFSET UNITYSDK_OFFSET(0x187BDF0)

namespace MX::Data
{
	inline static constexpr unsigned int BattlePlayGuideData_TypeDefinitionIndex = 15975;

	class BattlePlayGuideData : public Il2CppObject
	{
	public:
		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPLAYGUIDEDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPLAYGUIDEDATA_.CTOR_OFFSET))(nullptr);
		}

		Il2CppObject* GetRaidContentPlayGuideList(::FlatData::RaidBossGroupType* arg)
		{
			return (return (Il2CppObject*(*)(::FlatData::RaidBossGroupType*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_BATTLEPLAYGUIDEDATA_GETRAIDCONTENTPLAYGUIDELIST_OFFSET))(arg, nullptr);
		}

	};
}

