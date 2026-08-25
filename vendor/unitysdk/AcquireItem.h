#pragma once
#include "unitysdk.h"

namespace MXUnderCover { class UCEntity; }

#define ACQUIREITEM_CALCULATEESTIMATEDURATION_OFFSET UNITYSDK_OFFSET(0xD983A0)
#define ACQUIREITEM_CO_INTERNALINVOKE_OFFSET UNITYSDK_OFFSET(0xD983B0)
#define ACQUIREITEM_.CTOR_OFFSET UNITYSDK_OFFSET(0xD98460)

	inline static constexpr unsigned int AcquireItem_TypeDefinitionIndex = 9776;

	class AcquireItem : public Il2CppObject
	{
	public:
		::System::String* ItemId; // 0x28
		::System::Boolean HideUIAcquireNotice; // 0x30

		::System::Single CalculateEstimateDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ACQUIREITEM_CALCULATEESTIMATEDURATION_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* co_InternalInvoke(::MXUnderCover::UCEntity* arg)
		{
			return ((::System::Collections::IEnumerator*(*)(::MXUnderCover::UCEntity*, ::PVOID))((::PBYTE)hIl2Cpp + ACQUIREITEM_CO_INTERNALINVOKE_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACQUIREITEM_.CTOR_OFFSET))(nullptr);
		}

	};

