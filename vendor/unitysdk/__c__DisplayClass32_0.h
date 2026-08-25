#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
namespace MX::Conquest { class ConquestTile; }

#define <>C__DISPLAYCLASS32_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x142A950)
#define <>C__DISPLAYCLASS32_0__SYNCOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x142B370)
#define <>C__DISPLAYCLASS32_0__SYNCOBJECT_B__1_OFFSET UNITYSDK_OFFSET(0x142B3A0)

	inline static constexpr unsigned int <>c__DisplayClass32_0_TypeDefinitionIndex = 14834;

	class <>c__DisplayClass32_0 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConquestEventObjectDB* conquestEventObjectDB; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS32_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SyncObject_b__0(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS32_0__SYNCOBJECT_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SyncObject_b__1(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS32_0__SYNCOBJECT_B__1_OFFSET))(arg, nullptr);
		}

	};

