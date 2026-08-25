#pragma once
#include "../../unitysdk.h"

namespace FlatData { class TargetGroup; }

#define MX_DATA_CONTENTTARGETGROUPDATA_INITIALIZECOMMON_OFFSET UNITYSDK_OFFSET(0x18B0D10)
#define MX_DATA_CONTENTTARGETGROUPDATA_TRYGETACCOUNTSTATES_OFFSET UNITYSDK_OFFSET(0x18B1290)
#define MX_DATA_CONTENTTARGETGROUPDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x18B12F0)
#define MX_DATA_CONTENTTARGETGROUPDATA_PREPAREINITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x18B0D70)

namespace MX::Data
{
	inline static constexpr unsigned int ContentTargetGroupData_TypeDefinitionIndex = 16039;

	class ContentTargetGroupData : public Il2CppObject
	{
	public:
		Il2CppObject* dict; // 0x28

		::System::Void InitializeCommon()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTTARGETGROUPDATA_INITIALIZECOMMON_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAccountStates(::FlatData::TargetGroup* arg, Il2CppObject&* arg)
		{
			return (return (::System::Boolean(*)(::FlatData::TargetGroup*, Il2CppObject&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTTARGETGROUPDATA_TRYGETACCOUNTSTATES_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTTARGETGROUPDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void PrepareInitializeData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_CONTENTTARGETGROUPDATA_PREPAREINITIALIZEDATA_OFFSET))(nullptr);
		}

	};
}

