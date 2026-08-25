#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class LevelAreaEntityData; }

#define MX_LOGIC_DATA_AREATIMELINEDATA_SHOULDSERIALIZESPAWNCHECKLOGICEFFETTEMPLATEID_OFFSET UNITYSDK_OFFSET(0x11FA970)
#define MX_LOGIC_DATA_AREATIMELINEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11FA990)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AreaTimelineData_TypeDefinitionIndex = 13668;

	class AreaTimelineData : public Il2CppObject
	{
	public:
		::System::Int32 Frame; // 0x10
		::System::String* SpawnCheckLogicEffetTemplateId; // 0x18
		::MX::Logic::Data::LevelAreaEntityData* AreaData; // 0x20

		::System::Boolean ShouldSerializeSpawnCheckLogicEffetTemplateId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREATIMELINEDATA_SHOULDSERIALIZESPAWNCHECKLOGICEFFETTEMPLATEID_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_AREATIMELINEDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

