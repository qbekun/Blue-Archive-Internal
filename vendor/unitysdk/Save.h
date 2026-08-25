#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define SAVE_.CTOR_OFFSET UNITYSDK_OFFSET(0xD97B10)
#define SAVE_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD97B20)
#define SAVE_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD97B30)

	inline static constexpr unsigned int Save_TypeDefinitionIndex = 9767;

	class Save : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SAVE_.CTOR_OFFSET))(nullptr);
		}

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SAVE_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + SAVE_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

	};

