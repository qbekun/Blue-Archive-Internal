#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define CHANGEBGM_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD98770)
#define CHANGEBGM_.CTOR_OFFSET UNITYSDK_OFFSET(0xD98800)
#define CHANGEBGM_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD98810)

	inline static constexpr unsigned int ChangeBGM_TypeDefinitionIndex = 9778;

	class ChangeBGM : public Il2CppObject
	{
	public:
		::System::Int64 BgmId; // 0x28

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + CHANGEBGM_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEBGM_.CTOR_OFFSET))(nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHANGEBGM_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

	};

