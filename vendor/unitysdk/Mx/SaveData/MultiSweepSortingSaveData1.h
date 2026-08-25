#pragma once
#include "../../unitysdk.h"

#define MX_SAVEDATA_MULTISWEEPSORTINGSAVEDATA1_.CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA5E0)
#define MX_SAVEDATA_MULTISWEEPSORTINGSAVEDATA1_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1CFA600)
#define MX_SAVEDATA_MULTISWEEPSORTINGSAVEDATA1_CLONE_OFFSET UNITYSDK_OFFSET(0x1CFA610)
#define MX_SAVEDATA_MULTISWEEPSORTINGSAVEDATA1_SETDEFAULTDATA_OFFSET UNITYSDK_OFFSET(0x1CFA690)

namespace MX::SaveData
{
	inline static constexpr unsigned int MultiSweepSortingSaveData1_TypeDefinitionIndex = 19936;

	class MultiSweepSortingSaveData1 : public Il2CppObject
	{
	public:
		SortingRule* SortingRule; // 0x10
		SortingOrder* SortingOrder; // 0x14
		MultiSweepFilter* MultiSweepFilter; // 0x18

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTISWEEPSORTINGSAVEDATA1_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean Validate()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTISWEEPSORTINGSAVEDATA1_VALIDATE_OFFSET))(nullptr);
		}

		::System::Object* Clone()
		{
			return (return (::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTISWEEPSORTINGSAVEDATA1_CLONE_OFFSET))(nullptr);
		}

		::System::Void SetDefaultData()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_SAVEDATA_MULTISWEEPSORTINGSAVEDATA1_SETDEFAULTDATA_OFFSET))(nullptr);
		}

	};
}

