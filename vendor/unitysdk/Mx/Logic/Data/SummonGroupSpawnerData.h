#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_SUMMONGROUPSPAWNERDATA_SHOULDSERIALIZEENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x11FC2F0)
#define MX_LOGIC_DATA_SUMMONGROUPSPAWNERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FC340)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SummonGroupSpawnerData_TypeDefinitionIndex = 13730;

	class SummonGroupSpawnerData : public Il2CppObject
	{
	public:
		Il2CppObject* SummonGroups; // 0x150

		::System::Boolean ShouldSerializeEntityTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONGROUPSPAWNERDATA_SHOULDSERIALIZEENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SUMMONGROUPSPAWNERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

