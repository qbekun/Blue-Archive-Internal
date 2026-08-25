#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_TACTICROLECONDITION_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x1227AC0)
#define MX_LOGIC_DATA_TACTICROLECONDITION_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1227E30)
#define MX_LOGIC_DATA_TACTICROLECONDITION_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1228120)
#define MX_LOGIC_DATA_TACTICROLECONDITION_SHOULDSERIALIZETACTICROLELIST_OFFSET UNITYSDK_OFFSET(0x1228320)
#define MX_LOGIC_DATA_TACTICROLECONDITION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x1228370)
#define MX_LOGIC_DATA_TACTICROLECONDITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x1228110)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TacticRoleCondition_TypeDefinitionIndex = 13771;

	class TacticRoleCondition : public Il2CppObject
	{
	public:
		Il2CppObject* TacticRoleList; // 0x10

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONDITION_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TacticRoleCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TacticRoleCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONDITION_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TacticRoleCondition&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TacticRoleCondition&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONDITION_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean ShouldSerializeTacticRoleList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONDITION_SHOULDSERIALIZETACTICROLELIST_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONDITION_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TACTICROLECONDITION_.CTOR_OFFSET))(nullptr);
		}

	};
}

