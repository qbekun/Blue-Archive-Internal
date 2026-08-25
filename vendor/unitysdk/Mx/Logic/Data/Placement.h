#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class Placement; }
namespace UnityEngine { class Vector2; }

#define MX_LOGIC_DATA_PLACEMENT_GET_INVALID_OFFSET UNITYSDK_OFFSET(0x11F9900)
#define MX_LOGIC_DATA_PLACEMENT_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x11F9960)
#define MX_LOGIC_DATA_PLACEMENT_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x11F9970)
#define MX_LOGIC_DATA_PLACEMENT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x11F9980)
#define MX_LOGIC_DATA_PLACEMENT_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x11F9990)
#define MX_LOGIC_DATA_PLACEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F99A0)
#define MX_LOGIC_DATA_PLACEMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F99F0)
#define MX_LOGIC_DATA_PLACEMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x11F9BA0)
#define MX_LOGIC_DATA_PLACEMENT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x11F9C50)
#define MX_LOGIC_DATA_PLACEMENT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x11F9D30)
#define MX_LOGIC_DATA_PLACEMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x11F9B10)
#define MX_LOGIC_DATA_PLACEMENT_.CCTOR_OFFSET UNITYSDK_OFFSET(0x11F9E20)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int Placement_TypeDefinitionIndex = 13662;

	class Placement : public Il2CppObject
	{
	public:
		::MX::Logic::Data::Placement* _Invalid_k__BackingField; // 0x0
		::UnityEngine::Vector2* _Direction_k__BackingField; // 0x10
		::UnityEngine::Vector2* _Position_k__BackingField; // 0x18

		::MX::Logic::Data::Placement* get_Invalid()
		{
			return ((::MX::Logic::Data::Placement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_GET_INVALID_OFFSET))(nullptr);
		}

		::UnityEngine::Vector2* get_Direction()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_GET_DIRECTION_OFFSET))(nullptr);
		}

		::System::Void set_Direction(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_SET_DIRECTION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector2* get_Position()
		{
			return ((::UnityEngine::Vector2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_GET_POSITION_OFFSET))(nullptr);
		}

		::System::Void set_Position(::UnityEngine::Vector2* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_SET_POSITION_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor(::UnityEngine::Vector2* arg, ::UnityEngine::Vector2* arg2)
		{
			((::System::Void(*)(::UnityEngine::Vector2*, ::UnityEngine::Vector2*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::Boolean op_Equality(::MX::Logic::Data::Placement* arg, ::MX::Logic::Data::Placement* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::Placement*, ::MX::Logic::Data::Placement*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Logic::Data::Placement* arg, ::MX::Logic::Data::Placement* arg2)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::Placement*, ::MX::Logic::Data::Placement*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::MX::Logic::Data::Placement* arg)
		{
			return ((::System::Boolean(*)(::MX::Logic::Data::Placement*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_PLACEMENT_.CCTOR_OFFSET))(nullptr);
		}

	};
}

