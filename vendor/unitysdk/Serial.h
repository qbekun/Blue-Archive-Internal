#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define SERIAL_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD96870)
#define SERIAL_.CTOR_OFFSET UNITYSDK_OFFSET(0xD96880)
#define SERIAL_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD96890)

	inline static constexpr unsigned int Serial_TypeDefinitionIndex = 9757;

	class Serial : public Il2CppObject
	{
	public:
		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIAL_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIAL_.CTOR_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + SERIAL_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

	};

