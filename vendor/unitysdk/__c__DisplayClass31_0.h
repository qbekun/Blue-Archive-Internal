#pragma once
#include "unitysdk.h"

namespace MX::GameLogic::DBModel { class ConquestEventObjectDB; }
namespace MX::Conquest { class ConquestTile; }

#define <>C__DISPLAYCLASS31_0_.CTOR_OFFSET UNITYSDK_OFFSET(0x142A3D0)
#define <>C__DISPLAYCLASS31_0__SYNCOBJECT_B__0_OFFSET UNITYSDK_OFFSET(0x142B2E0)
#define <>C__DISPLAYCLASS31_0__SYNCOBJECT_B__1_OFFSET UNITYSDK_OFFSET(0x142B310)
#define <>C__DISPLAYCLASS31_0__SYNCOBJECT_B__2_OFFSET UNITYSDK_OFFSET(0x142B340)

	inline static constexpr unsigned int <>c__DisplayClass31_0_TypeDefinitionIndex = 14833;

	class <>c__DisplayClass31_0 : public Il2CppObject
	{
	public:
		::MX::GameLogic::DBModel::ConquestEventObjectDB* conquestEventObjectDB; // 0x10

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS31_0_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean _SyncObject_b__0(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS31_0__SYNCOBJECT_B__0_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SyncObject_b__1(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS31_0__SYNCOBJECT_B__1_OFFSET))(arg, nullptr);
		}

		::System::Boolean _SyncObject_b__2(::MX::Conquest::ConquestTile* arg)
		{
			return ((::System::Boolean(*)(::MX::Conquest::ConquestTile*, ::PVOID))((::PBYTE)hIl2Cpp + <>C__DISPLAYCLASS31_0__SYNCOBJECT_B__2_OFFSET))(arg, nullptr);
		}

	};

