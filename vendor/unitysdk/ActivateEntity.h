#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define ACTIVATEENTITY_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD97E60)
#define ACTIVATEENTITY_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD97E70)
#define ACTIVATEENTITY_.CTOR_OFFSET UNITYSDK_OFFSET(0xD97F00)

	inline static constexpr unsigned int ActivateEntity_TypeDefinitionIndex = 9771;

	class ActivateEntity : public Il2CppObject
	{
	public:
		::MXUnderCover::UCEntity* TargetEntity; // 0x28
		::System::Boolean Activate; // 0x30
		::System::Boolean ditherWhenInactive; // 0x31

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVATEENTITY_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + ACTIVATEENTITY_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVATEENTITY_.CTOR_OFFSET))(nullptr);
		}

	};

