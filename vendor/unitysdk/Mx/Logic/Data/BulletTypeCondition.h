#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_BULLETTYPECONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x12296E0)
#define MX_LOGIC_DATA_BULLETTYPECONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1229A50)
#define MX_LOGIC_DATA_BULLETTYPECONDITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1229A60)
#define MX_LOGIC_DATA_BULLETTYPECONDITION_SHOULDSERIALIZEBULLETTYPELIST_OFFSET UNITYSDK_OFFSET(0x1229D50)
#define MX_LOGIC_DATA_BULLETTYPECONDITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1229DA0)
#define MX_LOGIC_DATA_BULLETTYPECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1229D40)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int BulletTypeCondition_TypeDefinitionIndex = 13777;

	class BulletTypeCondition : public Il2CppObject
	{
	public:
		Il2CppObject* BulletTypeList; // 0x10

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::BulletTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::BulletTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShouldSerializeBulletTypeList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITION_SHOULDSERIALIZEBULLETTYPELIST_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::BulletTypeCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::BulletTypeCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_BULLETTYPECONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

