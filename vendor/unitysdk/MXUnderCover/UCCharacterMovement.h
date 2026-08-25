#pragma once
#include "../unitysdk.h"

namespace MXUnderCover::Movement { class UCMovementImplement; }

#define MXUNDERCOVER_UCCHARACTERMOVEMENT_CREATEIMPLEMENT_OFFSET UNITYSDK_OFFSET(0xD89680)
#define MXUNDERCOVER_UCCHARACTERMOVEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD896E0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCCharacterMovement_TypeDefinitionIndex = 9693;

	class UCCharacterMovement : public Il2CppObject
	{
	public:
		::MXUnderCover::Movement::UCMovementImplement* CreateImplement()
		{
			return ((::MXUnderCover::Movement::UCMovementImplement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCHARACTERMOVEMENT_CREATEIMPLEMENT_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCCHARACTERMOVEMENT_.CTOR_OFFSET))(nullptr);
		}

	};
}

