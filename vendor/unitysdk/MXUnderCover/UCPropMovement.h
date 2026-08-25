#pragma once
#include "../unitysdk.h"

namespace MXUnderCover::Movement { class UCMovementImplement; }

#define MXUNDERCOVER_UCPROPMOVEMENT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD92FA0)
#define MXUNDERCOVER_UCPROPMOVEMENT_CREATEIMPLEMENT_OFFSET UNITYSDK_OFFSET(0xD92FC0)

namespace MXUnderCover
{
	inline static constexpr unsigned int UCPropMovement_TypeDefinitionIndex = 9722;

	class UCPropMovement : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPMOVEMENT_.CTOR_OFFSET))(nullptr);
		}

		::MXUnderCover::Movement::UCMovementImplement* CreateImplement()
		{
			return ((::MXUnderCover::Movement::UCMovementImplement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MXUNDERCOVER_UCPROPMOVEMENT_CREATEIMPLEMENT_OFFSET))(nullptr);
		}

	};
}

