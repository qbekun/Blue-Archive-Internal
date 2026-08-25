#pragma once
#include "../unitysdk.h"

namespace UnityEngine { class AnimationCurve; }

#define CINEMACHINE_CINEMACHINEBLENDDEFINITION_CREATESTANDARDCURVES_OFFSET UNITYSDK_OFFSET(0x2855FF0)
#define CINEMACHINE_CINEMACHINEBLENDDEFINITION_GET_BLENDCURVE_OFFSET UNITYSDK_OFFSET(0x2856670)
#define CINEMACHINE_CINEMACHINEBLENDDEFINITION_.CTOR_OFFSET UNITYSDK_OFFSET(0x2856740)
#define CINEMACHINE_CINEMACHINEBLENDDEFINITION_GET_BLENDTIME_OFFSET UNITYSDK_OFFSET(0x2856760)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlendDefinition_TypeDefinitionIndex = 34282;

	class CinemachineBlendDefinition : public Il2CppObject
	{
	public:
		Style* m_Style; // 0x10
		::System::Single m_Time; // 0x14
		::UnityEngine::AnimationCurve* m_CustomCurve; // 0x18
		::Il2CppArray<::System::Object*>* sStandardCurves; // 0x0

		::System::Void CreateStandardCurves()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION_CREATESTANDARDCURVES_OFFSET))(nullptr);
		}

		::UnityEngine::AnimationCurve* get_BlendCurve()
		{
			return (return (::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION_GET_BLENDCURVE_OFFSET))(nullptr);
		}

		::System::Void .ctor(Style* arg, ::System::Single arg)
		{
			((::System::Void(*)(Style*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Single get_BlendTime()
		{
			return (return (::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEBLENDDEFINITION_GET_BLENDTIME_OFFSET))(nullptr);
		}

	};
}

