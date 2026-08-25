#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_AREASPAWNERDATA_SHOULDSERIALIZEENTITYTIMELINE_OFFSET UNITYSDK_OFFSET(0x11FA800)
#define MX_LOGIC_DATA_AREASPAWNERDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FA850)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AreaSpawnerData_TypeDefinitionIndex = 13667;

	class AreaSpawnerData : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x150
		Il2CppObject* EntityTimeline; // 0x158

		::System::Boolean ShouldSerializeEntityTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREASPAWNERDATA_SHOULDSERIALIZEENTITYTIMELINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREASPAWNERDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

