#pragma once
#include "../unitysdk.h"

namespace FlatData { class BulletType; }

namespace FlatData
{
	inline static constexpr unsigned int BulletType_TypeDefinitionIndex = 9369;

	class BulletType : public Il2CppObject
	{
	public:
		::System::Int32 value__; // 0x10
		::FlatData::BulletType* Normal; // 0x0
		::FlatData::BulletType* Pierce; // 0x0
		::FlatData::BulletType* Explosion; // 0x0
		::FlatData::BulletType* Siege; // 0x0
		::FlatData::BulletType* Mystic; // 0x0
		::FlatData::BulletType* None; // 0x0
		::FlatData::BulletType* Sonic; // 0x0
		::FlatData::BulletType* Chemical; // 0x0

	};
}

