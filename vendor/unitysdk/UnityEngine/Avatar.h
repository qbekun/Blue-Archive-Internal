#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class HumanDescription; }
namespace UnityEngine { class Quaternion; }
namespace UnityEngine { class Vector3; }
namespace UnityEngine { class HumanDescription&; }
namespace UnityEngine { class Quaternion&; }
namespace UnityEngine { class Vector3&; }

#define UNITYENGINE_AVATAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xA1CCF40)
#define UNITYENGINE_AVATAR_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA1CCF90)
#define UNITYENGINE_AVATAR_GET_ISHUMAN_OFFSET UNITYSDK_OFFSET(0xA1CCFD0)
#define UNITYENGINE_AVATAR_GET_HUMANDESCRIPTION_OFFSET UNITYSDK_OFFSET(0xA1CD010)
#define UNITYENGINE_AVATAR_SETMUSCLEMINMAX_OFFSET UNITYSDK_OFFSET(0xA1CD0D0)
#define UNITYENGINE_AVATAR_SETPARAMETER_OFFSET UNITYSDK_OFFSET(0xA1CD130)
#define UNITYENGINE_AVATAR_GETAXISLENGTH_OFFSET UNITYSDK_OFFSET(0xA1CD180)
#define UNITYENGINE_AVATAR_GETPREROTATION_OFFSET UNITYSDK_OFFSET(0xA1CD220)
#define UNITYENGINE_AVATAR_GETPOSTROTATION_OFFSET UNITYSDK_OFFSET(0xA1CD300)
#define UNITYENGINE_AVATAR_GETZYPOSTQ_OFFSET UNITYSDK_OFFSET(0xA1CD3E0)
#define UNITYENGINE_AVATAR_GETZYROLL_OFFSET UNITYSDK_OFFSET(0xA1CD530)
#define UNITYENGINE_AVATAR_GETLIMITSIGN_OFFSET UNITYSDK_OFFSET(0xA1CD640)
#define UNITYENGINE_AVATAR_INTERNAL_GETAXISLENGTH_OFFSET UNITYSDK_OFFSET(0xA1CD1E0)
#define UNITYENGINE_AVATAR_INTERNAL_GETPREROTATION_OFFSET UNITYSDK_OFFSET(0xA1CD2A0)
#define UNITYENGINE_AVATAR_INTERNAL_GETPOSTROTATION_OFFSET UNITYSDK_OFFSET(0xA1CD380)
#define UNITYENGINE_AVATAR_INTERNAL_GETZYPOSTQ_OFFSET UNITYSDK_OFFSET(0xA1CD4B0)
#define UNITYENGINE_AVATAR_INTERNAL_GETZYROLL_OFFSET UNITYSDK_OFFSET(0xA1CD5E0)
#define UNITYENGINE_AVATAR_INTERNAL_GETLIMITSIGN_OFFSET UNITYSDK_OFFSET(0xA1CD6E0)
#define UNITYENGINE_AVATAR_GET_HUMANDESCRIPTION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CD090)
#define UNITYENGINE_AVATAR_INTERNAL_GETPREROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CD750)
#define UNITYENGINE_AVATAR_INTERNAL_GETPOSTROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CD7A0)
#define UNITYENGINE_AVATAR_INTERNAL_GETZYPOSTQ_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CD7F0)
#define UNITYENGINE_AVATAR_INTERNAL_GETZYROLL_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CD840)
#define UNITYENGINE_AVATAR_INTERNAL_GETLIMITSIGN_INJECTED_OFFSET UNITYSDK_OFFSET(0xA1CD890)

namespace UnityEngine
{
	inline static constexpr unsigned int Avatar_TypeDefinitionIndex = 36472;

	class Avatar : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean get_isValid()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GET_ISVALID_OFFSET))(nullptr);
		}

		::System::Boolean get_isHuman()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GET_ISHUMAN_OFFSET))(nullptr);
		}

		::UnityEngine::HumanDescription* get_humanDescription()
		{
			return (return (::UnityEngine::HumanDescription*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GET_HUMANDESCRIPTION_OFFSET))(nullptr);
		}

		::System::Void SetMuscleMinMax(::System::Int32 arg, ::System::Single arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_SETMUSCLEMINMAX_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void SetParameter(::System::Int32 arg, ::System::Single arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_SETPARAMETER_OFFSET))(arg, arg, nullptr);
		}

		::System::Single GetAxisLength(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETAXISLENGTH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetPreRotation(::System::Int32 arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETPREROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetPostRotation(::System::Int32 arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETPOSTROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* GetZYPostQ(::System::Int32 arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Int32, ::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETZYPOSTQ_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* GetZYRoll(::System::Int32 arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Int32, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETZYROLL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* GetLimitSign(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GETLIMITSIGN_OFFSET))(arg, nullptr);
		}

		::System::Single Internal_GetAxisLength(::System::Int32 arg)
		{
			return (return (::System::Single(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETAXISLENGTH_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* Internal_GetPreRotation(::System::Int32 arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETPREROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* Internal_GetPostRotation(::System::Int32 arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETPOSTROTATION_OFFSET))(arg, nullptr);
		}

		::UnityEngine::Quaternion* Internal_GetZYPostQ(::System::Int32 arg, ::UnityEngine::Quaternion* arg, ::UnityEngine::Quaternion* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Int32, ::UnityEngine::Quaternion*, ::UnityEngine::Quaternion*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETZYPOSTQ_OFFSET))(arg, arg, arg, nullptr);
		}

		::UnityEngine::Quaternion* Internal_GetZYRoll(::System::Int32 arg, ::UnityEngine::Vector3* arg)
		{
			return (return (::UnityEngine::Quaternion*(*)(::System::Int32, ::UnityEngine::Vector3*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETZYROLL_OFFSET))(arg, arg, nullptr);
		}

		::UnityEngine::Vector3* Internal_GetLimitSign(::System::Int32 arg)
		{
			return (return (::UnityEngine::Vector3*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETLIMITSIGN_OFFSET))(arg, nullptr);
		}

		::System::Void get_humanDescription_Injected(::UnityEngine::HumanDescription&* arg)
		{
			((::System::Void(*)(::UnityEngine::HumanDescription&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_GET_HUMANDESCRIPTION_INJECTED_OFFSET))(arg, nullptr);
		}

		::System::Void Internal_GetPreRotation_Injected(::System::Int32 arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETPREROTATION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_GetPostRotation_Injected(::System::Int32 arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETPOSTROTATION_INJECTED_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Internal_GetZYPostQ_Injected(::System::Int32 arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Quaternion&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Quaternion&*, ::UnityEngine::Quaternion&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETZYPOSTQ_INJECTED_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Internal_GetZYRoll_Injected(::System::Int32 arg, ::UnityEngine::Vector3&* arg, ::UnityEngine::Quaternion&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&*, ::UnityEngine::Quaternion&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETZYROLL_INJECTED_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Internal_GetLimitSign_Injected(::System::Int32 arg, ::UnityEngine::Vector3&* arg)
		{
			((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATAR_INTERNAL_GETLIMITSIGN_INJECTED_OFFSET))(arg, arg, nullptr);
		}

	};
}

