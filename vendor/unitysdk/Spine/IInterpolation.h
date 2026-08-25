#pragma once
#include "../unitysdk.h"

namespace Spine { class IInterpolation; }

#define SPINE_IINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x000000)
#define SPINE_IINTERPOLATION_APPLY_OFFSET UNITYSDK_OFFSET(0x95AE7F0)
#define SPINE_IINTERPOLATION_.CTOR_OFFSET UNITYSDK_OFFSET(0x95AE840)
#define SPINE_IINTERPOLATION_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95AE850)

namespace Spine
{
	inline static constexpr unsigned int IInterpolation_TypeDefinitionIndex = 35043;

	class IInterpolation : public Il2CppObject
	{
	public:
		::Spine::IInterpolation* Pow2; // 0x0
		::Spine::IInterpolation* Pow2Out; // 0x8

		::System::Single Apply(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION_APPLY_OFFSET))(arg, nullptr);
		}

		::System::Single Apply(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION_APPLY_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_IINTERPOLATION_.CCTOR_OFFSET))(nullptr);
		}

	};
}

