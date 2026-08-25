#pragma once
#include "unitysdk.h"

namespace UnityEngine { class AnimationCurve; }
class CurveType;
class UpdateFloatContainer;
class UpdateVector3Container;

#define FXUTILITY_ANICURVE_OFFSET UNITYSDK_OFFSET(0x20BE7E0)
#define FXUTILITY_ANICURVE_OFFSET UNITYSDK_OFFSET(0x20C0700)
#define FXUTILITY_RANDOMPLUSMINUS_OFFSET UNITYSDK_OFFSET(0x20BE750)
#define FXUTILITY_UPDATEVALUETOTARGET_OFFSET UNITYSDK_OFFSET(0x20C07E0)
#define FXUTILITY_UPDATEVALUETOTARGET_OFFSET UNITYSDK_OFFSET(0x20C08E0)

	inline static constexpr unsigned int FxUtility_TypeDefinitionIndex = 3635;

	class FxUtility : public Il2CppObject
	{
	public:
		::UnityEngine::AnimationCurve* AniCurve(CurveType* arg)
		{
			return ((::UnityEngine::AnimationCurve*(*)(CurveType*, ::PVOID))((::PBYTE)hIl2Cpp + FXUTILITY_ANICURVE_OFFSET))(arg, nullptr);
		}

		::UnityEngine::AnimationCurve* AniCurve(::System::String* str)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + FXUTILITY_ANICURVE_OFFSET))(str, nullptr);
		}

		::System::Int32 RandomPlusMinus(::System::Single arg)
		{
			return ((::System::Int32(*)(::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + FXUTILITY_RANDOMPLUSMINUS_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateValueToTarget(UpdateFloatContainer* arg)
		{
			((::System::Void(*)(UpdateFloatContainer*, ::PVOID))((::PBYTE)hIl2Cpp + FXUTILITY_UPDATEVALUETOTARGET_OFFSET))(arg, nullptr);
		}

		::System::Void UpdateValueToTarget(UpdateVector3Container* arg)
		{
			((::System::Void(*)(UpdateVector3Container*, ::PVOID))((::PBYTE)hIl2Cpp + FXUTILITY_UPDATEVALUETOTARGET_OFFSET))(arg, nullptr);
		}

	};

