#pragma once
#include "../../unitysdk.h"

#define MX_DATA_SKILLADDITIONALTOOLTIPDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x195B230)
#define MX_DATA_SKILLADDITIONALTOOLTIPDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x195B290)
#define MX_DATA_SKILLADDITIONALTOOLTIPDATA_PREPROCESSCLIENT_OFFSET UNITYSDK_OFFSET(0x195B2D0)
#define MX_DATA_SKILLADDITIONALTOOLTIPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x195B2E0)

namespace MX::Data
{
	inline static constexpr unsigned int SkillAdditionalTooltipData_TypeDefinitionIndex = 16404;

	class SkillAdditionalTooltipData : public Il2CppObject
	{
	public:
		Il2CppObject* GetData(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLADDITIONALTOOLTIPDATA_GETDATA_OFFSET))(arg, nullptr);
		}

		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLADDITIONALTOOLTIPDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void PreprocessClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLADDITIONALTOOLTIPDATA_PREPROCESSCLIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLADDITIONALTOOLTIPDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

