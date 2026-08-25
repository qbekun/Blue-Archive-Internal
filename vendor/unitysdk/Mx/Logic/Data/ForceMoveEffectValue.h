#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ForceMoveType; }
namespace MX::Core::Math { class TransitionType; }
namespace MX::GameData::DAO::Battle { class ForceMoveEffectDAO; }

#define MX_LOGIC_DATA_FORCEMOVEEFFECTVALUE_GET_DIRECTIONTYPE_OFFSET UNITYSDK_OFFSET(0x123A8A0)
#define MX_LOGIC_DATA_FORCEMOVEEFFECTVALUE_GET_DURATIONFRAME_OFFSET UNITYSDK_OFFSET(0x123A8B0)
#define MX_LOGIC_DATA_FORCEMOVEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123A8C0)
#define MX_LOGIC_DATA_FORCEMOVEEFFECTVALUE_GET_TRANSITION_OFFSET UNITYSDK_OFFSET(0x123A9C0)
#define MX_LOGIC_DATA_FORCEMOVEEFFECTVALUE_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x123A9D0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ForceMoveEffectValue_TypeDefinitionIndex = 13890;

	class ForceMoveEffectValue : public Il2CppObject
	{
	public:
		::System::Int32 _DurationFrame_k__BackingField; // 0x48
		::System::Int64 _Distance_k__BackingField; // 0x50
		::MX::Logic::Data::ForceMoveType* _DirectionType_k__BackingField; // 0x58
		::MX::Core::Math::TransitionType* _Transition_k__BackingField; // 0x5C

		::MX::Logic::Data::ForceMoveType* get_DirectionType()
		{
			return ((::MX::Logic::Data::ForceMoveType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVEEFFECTVALUE_GET_DIRECTIONTYPE_OFFSET))(nullptr);
		}

		::System::Int32 get_DurationFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVEEFFECTVALUE_GET_DURATIONFRAME_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::ForceMoveEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::ForceMoveEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::MX::Core::Math::TransitionType* get_Transition()
		{
			return ((::MX::Core::Math::TransitionType*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVEEFFECTVALUE_GET_TRANSITION_OFFSET))(nullptr);
		}

		::System::Int64 get_Distance()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVEEFFECTVALUE_GET_DISTANCE_OFFSET))(nullptr);
		}

	};
}

