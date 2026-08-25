#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class TagConstraint; }
namespace MX::Logic::Data { class IncludeType; }

#define MX_LOGIC_DATA_TAGCONSTRAINT_ISMATCH_OFFSET UNITYSDK_OFFSET(0x11F25F0)
#define MX_LOGIC_DATA_TAGCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F2800)
#define MX_LOGIC_DATA_TAGCONSTRAINT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F2980)
#define MX_LOGIC_DATA_TAGCONSTRAINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11F2A10)
#define MX_LOGIC_DATA_TAGCONSTRAINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11F2B10)
#define MX_LOGIC_DATA_TAGCONSTRAINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11F2B70)
#define MX_LOGIC_DATA_TAGCONSTRAINT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11F2C30)
#define MX_LOGIC_DATA_TAGCONSTRAINT_REGISTERFORMATTER_OFFSET UNITYSDK_OFFSET(0x11F2CB0)
#define MX_LOGIC_DATA_TAGCONSTRAINT_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F30E0)
#define MX_LOGIC_DATA_TAGCONSTRAINT_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11F3150)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TagConstraint_TypeDefinitionIndex = 13501;

	class TagConstraint : public Il2CppObject
	{
	public:
		::MX::Logic::Data::TagConstraint* Empty; // 0x0
		::MX::Logic::Data::IncludeType* IncludeType; // 0x10
		Il2CppObject* TagNamesInt; // 0x18

		::System::Boolean IsMatch(Il2CppObject* arg)
		{
			return ((::System::Boolean(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONSTRAINT_ISMATCH_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::TagConstraint* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TagConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONSTRAINT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONSTRAINT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::TagConstraint* arg, ::MX::Logic::Data::TagConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TagConstraint*, ::MX::Logic::Data::TagConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONSTRAINT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::TagConstraint* arg, ::MX::Logic::Data::TagConstraint* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::TagConstraint*, ::MX::Logic::Data::TagConstraint*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONSTRAINT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONSTRAINT_.CCTOR_OFFSET))(nullptr);
		}

		::System::Void RegisterFormatter()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONSTRAINT_REGISTERFORMATTER_OFFSET))(nullptr);
		}

		::System::Void Serialize(::MemoryPack::MemoryPackWriter&* arg, ::MX::Logic::Data::TagConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackWriter&*, ::MX::Logic::Data::TagConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONSTRAINT_SERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void Deserialize(::MemoryPack::MemoryPackReader&* arg, ::MX::Logic::Data::TagConstraint&* arg2)
		{
			((::System::Void(*)(::MemoryPack::MemoryPackReader&*, ::MX::Logic::Data::TagConstraint&*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TAGCONSTRAINT_DESERIALIZE_OFFSET))(arg, arg2, nullptr);
		}

	};
}

