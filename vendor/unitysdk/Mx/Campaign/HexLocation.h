#pragma once
#include "../../unitysdk.h"

namespace MX::Campaign { class HexLocation; }
namespace MX::Campaign { class Hex; }
class Direction;
namespace UnityEngine { class Vector3; }

#define MX_CAMPAIGN_HEXLOCATION_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x143A3B0)
#define MX_CAMPAIGN_HEXLOCATION_GET_INVALID_OFFSET UNITYSDK_OFFSET(0x143A3E0)
#define MX_CAMPAIGN_HEXLOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x143A3D0)
#define MX_CAMPAIGN_HEXLOCATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x143A400)
#define MX_CAMPAIGN_HEXLOCATION_TOHEX_OFFSET UNITYSDK_OFFSET(0x143A420)
#define MX_CAMPAIGN_HEXLOCATION_GETNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x143A450)
#define MX_CAMPAIGN_HEXLOCATION_VECTORTOLOCATION_OFFSET UNITYSDK_OFFSET(0x143A510)
#define MX_CAMPAIGN_HEXLOCATION_LOCATIONTOVECTOR_OFFSET UNITYSDK_OFFSET(0x143A8D0)
#define MX_CAMPAIGN_HEXLOCATION_GETVERTEXPOSITION_OFFSET UNITYSDK_OFFSET(0x143AAA0)
#define MX_CAMPAIGN_HEXLOCATION_DISTANCE_OFFSET UNITYSDK_OFFSET(0x143AC50)
#define MX_CAMPAIGN_HEXLOCATION_GETLOCATIONRING_OFFSET UNITYSDK_OFFSET(0x143AE80)
#define MX_CAMPAIGN_HEXLOCATION_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x143B120)
#define MX_CAMPAIGN_HEXLOCATION_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x143A4F0)
#define MX_CAMPAIGN_HEXLOCATION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x143B0F0)
#define MX_CAMPAIGN_HEXLOCATION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1438560)
#define MX_CAMPAIGN_HEXLOCATION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x143B140)
#define MX_CAMPAIGN_HEXLOCATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x143B160)
#define MX_CAMPAIGN_HEXLOCATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x143B200)
#define MX_CAMPAIGN_HEXLOCATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x143B220)
#define MX_CAMPAIGN_HEXLOCATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x143B250)
#define MX_CAMPAIGN_HEXLOCATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x143B300)

namespace MX::Campaign
{
	inline static constexpr unsigned int HexLocation_TypeDefinitionIndex = 14900;

	class HexLocation : public Il2CppObject
	{
	public:
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		::System::Int32 NeighborCount; // 0x0
		::Il2CppArray<::System::Object*>* Directions; // 0x8

		::MX::Campaign::HexLocation* get_Zero()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_GET_ZERO_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* get_Invalid()
		{
			return ((::MX::Campaign::HexLocation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_GET_INVALID_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_.CTOR_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void .ctor(::MX::Campaign::HexLocation* arg)
		{
			((::System::Void(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::Hex* ToHex()
		{
			return ((::MX::Campaign::Hex*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_TOHEX_OFFSET))(nullptr);
		}

		::MX::Campaign::HexLocation* GetNeighbor(Direction* arg)
		{
			return ((::MX::Campaign::HexLocation*(*)(Direction*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_GETNEIGHBOR_OFFSET))(arg, nullptr);
		}

		::MX::Campaign::HexLocation* VectorToLocation(::UnityEngine::Vector3* arg, ::System::Boolean arg2)
		{
			return ((::MX::Campaign::HexLocation*(*)(::UnityEngine::Vector3*, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_VECTORTOLOCATION_OFFSET))(arg, arg2, nullptr);
		}

		::UnityEngine::Vector3* LocationToVector(::MX::Campaign::HexLocation* arg)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_LOCATIONTOVECTOR_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* GetVertexPosition(::MX::Campaign::HexLocation* arg, ::System::Int32 arg2, ::System::Int32 arg3)
		{
			return ((::UnityEngine::Vector3*(*)(::MX::Campaign::HexLocation*, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_GETVERTEXPOSITION_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Int32 Distance(::MX::Campaign::HexLocation* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((::System::Int32(*)(::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_DISTANCE_OFFSET))(arg, arg2, nullptr);
		}

		Il2CppObject* GetLocationRing(::MX::Campaign::HexLocation* arg, ::System::Int32 arg2)
		{
			return ((Il2CppObject*(*)(::MX::Campaign::HexLocation*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_GETLOCATIONRING_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::HexLocation* op_Subtraction(::MX::Campaign::HexLocation* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((::MX::Campaign::HexLocation*(*)(::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_OP_SUBTRACTION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::HexLocation* op_Addition(::MX::Campaign::HexLocation* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((::MX::Campaign::HexLocation*(*)(::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_OP_ADDITION_OFFSET))(arg, arg2, nullptr);
		}

		::MX::Campaign::HexLocation* op_Multiply(::MX::Campaign::HexLocation* arg, ::System::Int32 arg2)
		{
			return ((::MX::Campaign::HexLocation*(*)(::MX::Campaign::HexLocation*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_OP_MULTIPLY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Equality(::MX::Campaign::HexLocation* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_OP_EQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean op_Inequality(::MX::Campaign::HexLocation* arg, ::MX::Campaign::HexLocation* arg2)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexLocation*, ::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_OP_INEQUALITY_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean Equals(::System::Object* arg)
		{
			return ((::System::Boolean(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Boolean Equals(::MX::Campaign::HexLocation* arg)
		{
			return ((::System::Boolean(*)(::MX::Campaign::HexLocation*, ::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_EQUALS_OFFSET))(arg, nullptr);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_GETHASHCODE_OFFSET))(nullptr);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_CAMPAIGN_HEXLOCATION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

