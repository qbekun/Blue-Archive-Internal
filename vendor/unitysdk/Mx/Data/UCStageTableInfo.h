#pragma once
#include "../../unitysdk.h"

#define MX_DATA_UCSTAGETABLEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1964950)

namespace MX::Data
{
	inline static constexpr unsigned int UCStageTableInfo_TypeDefinitionIndex = 16436;

	class UCStageTableInfo : public Il2CppObject
	{
	public:
		::System::Int64 GroupId; // 0x10
		::System::String* StageAssetKey; // 0x18
		::System::Int32 StageTryCount; // 0x20
		::System::Boolean ApplySkip; // 0x24
		::System::Int32 SkipCount; // 0x28
		::System::Boolean ShowClearScene; // 0x2C
		::System::String* StageTipsName; // 0x30
		::System::String* StageTipsDescription; // 0x38
		::System::String* StageName; // 0x40
		::System::Int64 SeasonId; // 0x48

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_UCSTAGETABLEINFO_.CTOR_OFFSET))(nullptr);
		}

	};
}

