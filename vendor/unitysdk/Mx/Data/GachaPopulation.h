#pragma once
#include "../../unitysdk.h"

#define MX_DATA_GACHAPOPULATION_GET_PROBABILITYSUM_OFFSET UNITYSDK_OFFSET(0x18497B0)
#define MX_DATA_GACHAPOPULATION_SET_GACHAGROUPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x18497C0)
#define MX_DATA_GACHAPOPULATION_SET_GACHAELEMENTS_OFFSET UNITYSDK_OFFSET(0x18497D0)
#define MX_DATA_GACHAPOPULATION_GET_GACHAGROUPUNIQUEID_OFFSET UNITYSDK_OFFSET(0x18497E0)
#define MX_DATA_GACHAPOPULATION_GET_GACHAELEMENTS_OFFSET UNITYSDK_OFFSET(0x18497F0)
#define MX_DATA_GACHAPOPULATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1849800)
#define MX_DATA_GACHAPOPULATION_SET_PROBABILITYSUM_OFFSET UNITYSDK_OFFSET(0x1849810)

namespace MX::Data
{
	inline static constexpr unsigned int GachaPopulation_TypeDefinitionIndex = 15831;

	class GachaPopulation : public Il2CppObject
	{
	public:
		::System::Int64 _GachaGroupUniqueId_k__BackingField; // 0x10
		::System::Int32 _ProbabilitySum_k__BackingField; // 0x18
		Il2CppObject* _GachaElements_k__BackingField; // 0x20

		::System::Int32 get_ProbabilitySum()
		{
			return (return (::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAPOPULATION_GET_PROBABILITYSUM_OFFSET))(nullptr);
		}

		::System::Void set_GachaGroupUniqueId(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAPOPULATION_SET_GACHAGROUPUNIQUEID_OFFSET))(arg, nullptr);
		}

		::System::Void set_GachaElements(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAPOPULATION_SET_GACHAELEMENTS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_GachaGroupUniqueId()
		{
			return (return (::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAPOPULATION_GET_GACHAGROUPUNIQUEID_OFFSET))(nullptr);
		}

		Il2CppObject* get_GachaElements()
		{
			return (return (Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAPOPULATION_GET_GACHAELEMENTS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAPOPULATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_ProbabilitySum(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_DATA_GACHAPOPULATION_SET_PROBABILITYSUM_OFFSET))(arg, nullptr);
		}

	};
}

