#pragma once
#include "unitysdk.h"

#define SKILLBATCHMODEITEMINPUTRECORD_GET_REQUIEREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x22E8210)
#define SKILLBATCHMODEITEMINPUTRECORD_SET_LEVELUPCOST_OFFSET UNITYSDK_OFFSET(0x22E8220)
#define SKILLBATCHMODEITEMINPUTRECORD_.CTOR_OFFSET UNITYSDK_OFFSET(0x22E4760)
#define SKILLBATCHMODEITEMINPUTRECORD_SET_REQUIEREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x22E8230)
#define SKILLBATCHMODEITEMINPUTRECORD_GET_LEVELUPCOST_OFFSET UNITYSDK_OFFSET(0x22E8240)

	inline static constexpr unsigned int SkillBatchModeItemInputRecord_TypeDefinitionIndex = 4870;

	class SkillBatchModeItemInputRecord : public Il2CppObject
	{
	public:
		Il2CppObject* _RequieredMaterials_k__BackingField; // 0x10
		::System::Int64 _LevelUpCost_k__BackingField; // 0x18

		Il2CppObject* get_RequieredMaterials()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLBATCHMODEITEMINPUTRECORD_GET_REQUIEREDMATERIALS_OFFSET))(nullptr);
		}

		::System::Void set_LevelUpCost(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + SKILLBATCHMODEITEMINPUTRECORD_SET_LEVELUPCOST_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLBATCHMODEITEMINPUTRECORD_.CTOR_OFFSET))(nullptr);
		}

		::System::Void set_RequieredMaterials(Il2CppObject* arg)
		{
			((::System::Void(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SKILLBATCHMODEITEMINPUTRECORD_SET_REQUIEREDMATERIALS_OFFSET))(arg, nullptr);
		}

		::System::Int64 get_LevelUpCost()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SKILLBATCHMODEITEMINPUTRECORD_GET_LEVELUPCOST_OFFSET))(nullptr);
		}

	};

