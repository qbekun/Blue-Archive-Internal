#pragma once
#include "../unitysdk.h"

#define SPINE_MATHUTILS_SIN_OFFSET UNITYSDK_OFFSET(0x95AE390)
#define SPINE_MATHUTILS_COS_OFFSET UNITYSDK_OFFSET(0x95AE3F0)
#define SPINE_MATHUTILS_SINDEG_OFFSET UNITYSDK_OFFSET(0x95AE450)
#define SPINE_MATHUTILS_COSDEG_OFFSET UNITYSDK_OFFSET(0x95AE4B0)
#define SPINE_MATHUTILS_ATAN2DEG_OFFSET UNITYSDK_OFFSET(0x95A85F0)
#define SPINE_MATHUTILS_ATAN2_OFFSET UNITYSDK_OFFSET(0x95AADD0)
#define SPINE_MATHUTILS_CLAMP_OFFSET UNITYSDK_OFFSET(0x95AE510)
#define SPINE_MATHUTILS_RANDOMTRIANGLE_OFFSET UNITYSDK_OFFSET(0x95AE530)
#define SPINE_MATHUTILS_RANDOMTRIANGLE_OFFSET UNITYSDK_OFFSET(0x95AE5A0)
#define SPINE_MATHUTILS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x95AE770)

namespace Spine
{
	inline static constexpr unsigned int MathUtils_TypeDefinitionIndex = 35042;

	class MathUtils : public Il2CppObject
	{
	public:
		::System::Single PI; // 0x0
		::System::Single PI2; // 0x0
		::System::Single InvPI2; // 0x0
		::System::Single RadDeg; // 0x0
		::System::Single DegRad; // 0x0
		::System::Random* random; // 0x0

		::System::Single Sin(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_SIN_OFFSET))(arg, nullptr);
		}

		::System::Single Cos(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_COS_OFFSET))(arg, nullptr);
		}

		::System::Single SinDeg(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_SINDEG_OFFSET))(arg, nullptr);
		}

		::System::Single CosDeg(::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_COSDEG_OFFSET))(arg, nullptr);
		}

		::System::Single Atan2Deg(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_ATAN2DEG_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Atan2(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_ATAN2_OFFSET))(arg, arg, nullptr);
		}

		::System::Single Clamp(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_CLAMP_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Single RandomTriangle(::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_RANDOMTRIANGLE_OFFSET))(arg, arg, nullptr);
		}

		::System::Single RandomTriangle(::System::Single arg, ::System::Single arg, ::System::Single arg)
		{
			return (return (::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_RANDOMTRIANGLE_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_MATHUTILS_.CCTOR_OFFSET))(nullptr);
		}

	};
}

