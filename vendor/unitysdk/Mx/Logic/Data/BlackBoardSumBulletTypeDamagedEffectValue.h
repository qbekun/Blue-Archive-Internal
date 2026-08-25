#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }
namespace FlatData { class BulletType; }
namespace MX::GameData::DAO::Battle { class BlackBoardSumBulletTypeDamagedEffectDAO; }

#define MX_LOGIC_DATA_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1234760)
#define MX_LOGIC_DATA_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTVALUE_GET_ISDISPELLABLE_OFFSET UNITYSDK_OFFSET(0x1234820)
#define MX_LOGIC_DATA_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTVALUE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1234830)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlackBoardSumBulletTypeDamagedEffectValue_TypeDefinitionIndex = 13855;

	class BlackBoardSumBulletTypeDamagedEffectValue : public Il2CppObject
	{
	public:
		::System::Int32 _Duration_k__BackingField; // 0x48
		::System::Boolean _IsDispellable_k__BackingField; // 0x4C
		::System::String* BlackBoardKey; // 0x50
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x58
		::FlatData::BulletType* BulletType; // 0x5C

		::System::Void .ctor(::MX::GameData::DAO::Battle::BlackBoardSumBulletTypeDamagedEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::BlackBoardSumBulletTypeDamagedEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsDispellable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTVALUE_GET_ISDISPELLABLE_OFFSET))(nullptr);
		}

		::System::Int32 get_Duration()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTVALUE_GET_DURATION_OFFSET))(nullptr);
		}

	};
}

