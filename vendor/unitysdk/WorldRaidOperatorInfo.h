#pragma once
#include "unitysdk.h"

namespace FlatData { class OperatorCondition; }

#define WORLDRAIDOPERATORINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EF88A0)
#define WORLDRAIDOPERATORINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1EF8CE0)
#define WORLDRAIDOPERATORINFO_ISCONDTIONOPERATOR_OFFSET UNITYSDK_OFFSET(0x1EF8720)

	inline static constexpr unsigned int WorldRaidOperatorInfo_TypeDefinitionIndex = 1913;

	class WorldRaidOperatorInfo : public Il2CppObject
	{
	public:
		::System::String* typeStringKey; // 0x10
		::FlatData::OperatorCondition* typeCondition; // 0x18

		::System::Void .ctor(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOPERATORINFO_.CTOR_OFFSET))(str, nullptr);
		}

		::System::Void .ctor(::FlatData::OperatorCondition* arg)
		{
			((::System::Void(*)(::FlatData::OperatorCondition*, ::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOPERATORINFO_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean IsCondtionOperator()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDRAIDOPERATORINFO_ISCONDTIONOPERATOR_OFFSET))(nullptr);
		}

	};

