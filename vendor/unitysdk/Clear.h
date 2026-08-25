#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define CLEAR_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD98990)
#define CLEAR_.CTOR_OFFSET UNITYSDK_OFFSET(0xD989A0)
#define CLEAR_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD989B0)

	inline static constexpr unsigned int Clear_TypeDefinitionIndex = 9780;

	class Clear : public Il2CppObject
	{
	public:
		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEAR_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLEAR_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + CLEAR_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

	};

