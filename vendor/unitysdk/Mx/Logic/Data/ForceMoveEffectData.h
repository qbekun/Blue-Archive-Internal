#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Data { class ForceMoveType; }
namespace MX::Core::Math { class TransitionType; }

#define MX_LOGIC_DATA_FORCEMOVEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4140)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ForceMoveEffectData_TypeDefinitionIndex = 13595;

	class ForceMoveEffectData : public Il2CppObject
	{
	public:
		::System::Int32 Duration; // 0x58
		::System::Int64 Distance; // 0x60
		::MX::Logic::Data::ForceMoveType* DirectionType; // 0x68
		::MX::Core::Math::TransitionType* Transition; // 0x6C

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_FORCEMOVEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

