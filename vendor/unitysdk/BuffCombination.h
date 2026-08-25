#pragma once
#include "unitysdk.h"

namespace FlatData { class School; }

#define BUFFCOMBINATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x24E09F0)
#define BUFFCOMBINATION_GETBUFFVALUE_OFFSET UNITYSDK_OFFSET(0x24E0B60)
#define BUFFCOMBINATION_GETTOTALBUFF_OFFSET UNITYSDK_OFFSET(0x24E0CF0)

	inline static constexpr unsigned int BuffCombination_TypeDefinitionIndex = 6002;

	class BuffCombination : public Il2CppObject
	{
	public:
		::System::Int64 stageId; // 0x10
		Il2CppObject* Main; // 0x18
		Il2CppObject* Support; // 0x20

		::System::Void .ctor(::System::Int64 arg)
		{
			((::System::Void(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + BUFFCOMBINATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Single GetBuffValue(::FlatData::School* arg, ::System::Int32 arg2)
		{
			return ((::System::Single(*)(::FlatData::School*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + BUFFCOMBINATION_GETBUFFVALUE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Single GetTotalBuff()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BUFFCOMBINATION_GETTOTALBUFF_OFFSET))(nullptr);
		}

	};

