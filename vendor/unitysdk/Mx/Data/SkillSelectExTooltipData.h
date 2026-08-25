#pragma once
#include "../../unitysdk.h"

#define MX_DATA_SKILLSELECTEXTOOLTIPDATA_INITIALIZECLIENT_OFFSET UNITYSDK_OFFSET(0x195DF70)
#define MX_DATA_SKILLSELECTEXTOOLTIPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x195DFB0)
#define MX_DATA_SKILLSELECTEXTOOLTIPDATA_PREPROCESSCLIENT_OFFSET UNITYSDK_OFFSET(0x195DFC0)
#define MX_DATA_SKILLSELECTEXTOOLTIPDATA_GETDATA_OFFSET UNITYSDK_OFFSET(0x195DFD0)

namespace MX::Data
{
	inline static constexpr unsigned int SkillSelectExTooltipData_TypeDefinitionIndex = 16407;

	class SkillSelectExTooltipData : public Il2CppObject
	{
	public:
		::System::Void InitializeClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLSELECTEXTOOLTIPDATA_INITIALIZECLIENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLSELECTEXTOOLTIPDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PreprocessClient()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLSELECTEXTOOLTIPDATA_PREPROCESSCLIENT_OFFSET))(nullptr);
		}

		Il2CppObject* GetData(::System::Int64 arg)
		{
			return (return (Il2CppObject*(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_SKILLSELECTEXTOOLTIPDATA_GETDATA_OFFSET))(arg, nullptr);
		}

	};
}

