#pragma once
#include "../../../unitysdk.h"

namespace UnityEngine { class Vector3; }
namespace UnityEngine { class Quaternion; }

#define MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C0B0)
#define MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_GET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1E9C0E0)
#define MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1E9C0F0)
#define MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_SET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1E9C100)
#define MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1E9C110)
#define MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1E9C120)
#define MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1E9C140)

namespace MX::MinigameCCG::Visual
{
	inline static constexpr unsigned int TransformInfo_TypeDefinitionIndex = 21217;

	class TransformInfo : public Il2CppObject
	{
	public:
		::UnityEngine::Vector3* _LocalPosition_k__BackingField; // 0x10
		::UnityEngine::Quaternion* _LocalRotation_k__BackingField; // 0x1C
		::UnityEngine::Vector3* _LocalScale_k__BackingField; // 0x2C

		::System::Void .ctor(::UnityEngine::Vector3* arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::UnityEngine::Quaternion*, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* get_LocalRotation()
		{
			return (return (::UnityEngine::Quaternion*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_GET_LOCALROTATION_OFFSET))(nullptr);
		}

		::System::Void set_LocalScale(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_SET_LOCALSCALE_OFFSET))(arg, nullptr);
		}

		::System::Void set_LocalRotation(::UnityEngine::Quaternion* arg)
		{
			((::System::Void(*)(::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_SET_LOCALROTATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_LocalPosition(::UnityEngine::Vector3* arg)
		{
			((::System::Void(*)(::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_SET_LOCALPOSITION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Vector3* get_LocalScale()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_GET_LOCALSCALE_OFFSET))(nullptr);
		}

		::UnityEngine::Vector3* get_LocalPosition()
		{
			return (return (::UnityEngine::Vector3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_MINIGAMECCG_VISUAL_TRANSFORMINFO_GET_LOCALPOSITION_OFFSET))(nullptr);
		}

	};
}

