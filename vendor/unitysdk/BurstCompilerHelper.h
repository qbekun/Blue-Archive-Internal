#pragma once
#include "unitysdk.h"

#define BURSTCOMPILERHELPER_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E2E7B0)
#define BURSTCOMPILERHELPER_ISBURSTENABLED_OFFSET UNITYSDK_OFFSET(0x9E2E750)
#define BURSTCOMPILERHELPER_ISBURSTENABLED$BURSTMANAGED_OFFSET UNITYSDK_OFFSET(0x9E2EC10)
#define BURSTCOMPILERHELPER_ISCOMPILEDBYBURST_OFFSET UNITYSDK_OFFSET(0x9E2E970)
#define BURSTCOMPILERHELPER_DISCARDEDMETHOD_OFFSET UNITYSDK_OFFSET(0x9E2EC70)

	inline static constexpr unsigned int BurstCompilerHelper_TypeDefinitionIndex = 37235;

	class BurstCompilerHelper : public Il2CppObject
	{
	public:
		IsBurstEnabledDelegate* IsBurstEnabledImpl; // 0x0
		::System::Boolean IsBurstGenerated; // 0x8

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BURSTCOMPILERHELPER_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean IsBurstEnabled()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BURSTCOMPILERHELPER_ISBURSTENABLED_OFFSET))(nullptr);
		}

		::System::Boolean IsBurstEnabled$BurstManaged()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BURSTCOMPILERHELPER_ISBURSTENABLED$BURSTMANAGED_OFFSET))(nullptr);
		}

		::System::Boolean IsCompiledByBurst(::System::Delegate* arg)
		{
			return (return (::System::Boolean(*)(::System::Delegate*, ::PVOID))((::PBYTE)hIl2Cpp + BURSTCOMPILERHELPER_ISCOMPILEDBYBURST_OFFSET))(arg, nullptr);
		}

		::System::Void DiscardedMethod(bool&* arg)
		{
			((::System::Void(*)(bool&*, ::PVOID))((::PBYTE)hIl2Cpp + BURSTCOMPILERHELPER_DISCARDEDMETHOD_OFFSET))(arg, nullptr);
		}

	};

