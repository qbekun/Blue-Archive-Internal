#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define MOVEPROPINTERACTIONSTARTPOSITION_.CTOR_OFFSET UNITYSDK_OFFSET(0xD99900)
#define MOVEPROPINTERACTIONSTARTPOSITION_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD99910)
#define MOVEPROPINTERACTIONSTARTPOSITION_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD999C0)

	inline static constexpr unsigned int MovePropInteractionStartPosition_TypeDefinitionIndex = 9794;

	class MovePropInteractionStartPosition : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVEPROPINTERACTIONSTARTPOSITION_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + MOVEPROPINTERACTIONSTARTPOSITION_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVEPROPINTERACTIONSTARTPOSITION_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

	};

