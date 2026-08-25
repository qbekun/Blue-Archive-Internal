#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::Campaign { class Hex; }
namespace UnityEngine { class Vector3; }

#define MX_CAMPAIGN_HEX_.CTOR_OFFSET UNITYSDK_OFFSET(0x143A440)
#define MX_CAMPAIGN_HEX_TOLOCATION_OFFSET UNITYSDK_OFFSET(0x143A8A0)
#define MX_CAMPAIGN_HEX_VECTORTOHEX_OFFSET UNITYSDK_OFFSET(0x143A560)
#define MX_CAMPAIGN_HEX_HEXTOVECTOR_OFFSET UNITYSDK_OFFSET(0x143A9D0)
#define MX_CAMPAIGN_HEX_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x143B430)
#define MX_CAMPAIGN_HEX_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x143B450)
#define MX_CAMPAIGN_HEX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x143B470)
#define MX_CAMPAIGN_HEX_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x143B490)
#define MX_CAMPAIGN_HEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x143B4B0)
#define MX_CAMPAIGN_HEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x143B530)
#define MX_CAMPAIGN_HEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x143B550)

namespace MX::Campaign
{
	inline static constexpr unsigned int Hex_TypeDefinitionIndex = 14901;

	class Hex : public Il2CppObject
	{
	public:
		::System::Int32 col; // 0x10
		::System::Int32 row; // 0x14

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::HexLocation* ToLocation()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_TOLOCATION_OFFSET))(nullptr);
		}

		::MX::Campaign::Hex* VectorToHex(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			return ((::MX::Campaign::Hex*(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_VECTORTOHEX_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* HexToVector(::MX::Campaign::Hex* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Campaign::Hex*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_HEXTOVECTOR_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::Hex* op_Subtraction(::MX::Campaign::Hex* arg, ::MX::Campaign::Hex* arg2)
		{
			return ((::MX::Campaign::Hex*(*)(::MX::Campaign::Hex*, ::MX::Campaign::Hex*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::Hex* op_Addition(::MX::Campaign::Hex* arg, ::MX::Campaign::Hex* arg2)
		{
			return ((::MX::Campaign::Hex*(*)(::MX::Campaign::Hex*, ::MX::Campaign::Hex*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::Campaign::Hex* arg, ::MX::Campaign::Hex* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::Hex*, ::MX::Campaign::Hex*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Campaign::Hex* arg, ::MX::Campaign::Hex* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::Hex*, ::MX::Campaign::Hex*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Campaign::Hex* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::Hex*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEX_GETHASHCODE_OFFSET))(nullptr);
		}

	};
}

