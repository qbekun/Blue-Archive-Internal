#pragma once
#include "unitysdk.h"

class HpAnimationData;

#define PROGRESSANIMATION_INITIALIZEANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0x25CDB80)
#define PROGRESSANIMATION_ONANIMATIONFINISHED_OFFSET UNITYSDK_OFFSET(0x25CDD80)
#define PROGRESSANIMATION_UPDATE_OFFSET UNITYSDK_OFFSET(0x25CDC70)

	inline static constexpr unsigned int ProgressAnimation_TypeDefinitionIndex = 6342;

	class ProgressAnimation : public Il2CppObject
	{
	public:
		::System::Void InitializeAnimationData(HpAnimationData* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(HpAnimationData*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PROGRESSANIMATION_INITIALIZEANIMATIONDATA_OFFSET))(arg, arg2, nullptr);
		}

		::System::Void OnAnimationFinished(HpAnimationData* arg)
		{
			((::System::Void(*)(HpAnimationData*, ::PVOID))((::PBYTE)hIl2Cpp + PROGRESSANIMATION_ONANIMATIONFINISHED_OFFSET))(arg, nullptr);
		}

		::System::Void Update(HpAnimationData* arg, ::System::Single arg2)
		{
			((::System::Void(*)(HpAnimationData*, ::System::Single, ::PVOID))((::PBYTE)hIl2Cpp + PROGRESSANIMATION_UPDATE_OFFSET))(arg, arg2, nullptr);
		}

	};

