#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class BlackboardKeyType; }
namespace FlatData { class BulletType; }

#define MX_LOGIC_DATA_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3E30)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BlackBoardSumBulletTypeDamagedEffectData_TypeDefinitionIndex = 13556;

	class BlackBoardSumBulletTypeDamagedEffectData : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x58
		::System::Boolean IsDispellable; // 0x5C
		::System::String* BlackBoardKey; // 0x60
		::MX::Logic::Data::BlackboardKeyType* BlackBoardKeyType; // 0x68
		::FlatData::BulletType* BulletType; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BLACKBOARDSUMBULLETTYPEDAMAGEDEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

