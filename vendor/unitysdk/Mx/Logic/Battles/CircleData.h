#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_BATTLES_CIRCLEDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1336FB0)
#define MX_LOGIC_BATTLES_CIRCLEDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1337290)
#define MX_LOGIC_BATTLES_CIRCLEDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1337490)
#define MX_LOGIC_BATTLES_CIRCLEDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x1337280)
#define MX_LOGIC_BATTLES_CIRCLEDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x13375C0)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int CircleData_TypeDefinitionIndex = 14276;

	class CircleData : public Il2CppObject
	{
	public:
		::System::Single Radius; // 0x10

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::CircleData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::CircleData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CIRCLEDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CIRCLEDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::CircleData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::CircleData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CIRCLEDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CIRCLEDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_CIRCLEDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

