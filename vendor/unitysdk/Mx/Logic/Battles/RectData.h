#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector2; }

#define MX_LOGIC_BATTLES_RECTDATA_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x136C220)
#define MX_LOGIC_BATTLES_RECTDATA_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x136C420)
#define MX_LOGIC_BATTLES_RECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x136C550)
#define MX_LOGIC_BATTLES_RECTDATA_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x136C570)
#define MX_LOGIC_BATTLES_RECTDATA_.CCTOR_OFFSET UNITYSDK_OFFSET(0x136C950)

namespace MX::Logic::Battles
{
	inline static constexpr unsigned int RectData_TypeDefinitionIndex = 14353;

	class RectData : public Il2CppObject
	{
	public:
		::UnityEngine::Vector2* Direction; // 0x10
		::System::Single Width; // 0x18
		::System::Single Height; // 0x1C

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RECTDATA_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Battles::RectData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Battles::RectData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RECTDATA_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RECTDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Battles::RectData&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Battles::RectData&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RECTDATA_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_BATTLES_RECTDATA_.CCTOR_OFFSET))(nullptr);
		}

	};
}

