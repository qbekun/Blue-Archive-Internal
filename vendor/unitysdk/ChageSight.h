#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define CHAGESIGHT_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD9A160)
#define CHAGESIGHT_.CTOR_OFFSET UNITYSDK_OFFSET(0xD9A1F0)
#define CHAGESIGHT_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD9A200)

	inline static constexpr unsigned int ChageSight_TypeDefinitionIndex = 9796;

	class ChageSight : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* SightIndices; // 0x28
		::Il2CppArray<::System::Object*>* Entities; // 0x30

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + CHAGESIGHT_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGESIGHT_.CTOR_OFFSET))(nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CHAGESIGHT_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

	};

