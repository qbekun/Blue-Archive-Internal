#pragma once
#include "../../unitysdk.h"

namespace Unity::Burst { class BurstCompileAttribute&; }
namespace Unity::Burst { class BurstCompileAttribute; }

#define UNITY_BURST_BURSTCOMPILEROPTIONS_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2E680)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_GET_ISGLOBAL_OFFSET UNITYSDK_OFFSET(0x9E2F1E0)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_GET_ENABLEBURSTCOMPILATION_OFFSET UNITYSDK_OFFSET(0x9E2F1F0)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_SET_ENABLEBURSTCOMPILATION_OFFSET UNITYSDK_OFFSET(0x9E2F0C0)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_SET_ENABLEBURSTSAFETYCHECKS_OFFSET UNITYSDK_OFFSET(0x9E2F1B0)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_GET_OPTIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x9E2F230)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_TRYGETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9E2F240)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_GETBURSTCOMPILEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9E2F2D0)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_HASBURSTCOMPILEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x9E2E470)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_ONOPTIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x9E2F200)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_MAYBETRIGGERRECOMPILATION_OFFSET UNITYSDK_OFFSET(0x9E2F220)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_.CCTOR_OFFSET UNITYSDK_OFFSET(0x9E2F770)
#define UNITY_BURST_BURSTCOMPILEROPTIONS_CHECKISSECONDARYUNITYPROCESS_OFFSET UNITYSDK_OFFSET(0x9E2F8A0)

namespace Unity::Burst
{
	inline static constexpr unsigned int BurstCompilerOptions_TypeDefinitionIndex = 37240;

	class BurstCompilerOptions : public Il2CppObject
	{
	public:
		::System::Boolean ForceDisableBurstCompilation; // 0x0
		::System::Boolean ForceBurstCompilationSynchronously; // 0x1
		::System::Boolean IsSecondaryUnityProcess; // 0x2
		::System::Boolean _enableBurstCompilation; // 0x10
		::System::Boolean _enableBurstSafetyChecks; // 0x11
		::System::Boolean _IsGlobal_k__BackingField; // 0x12
		::System::Action* _OptionsChanged_k__BackingField; // 0x18

		::System::Void .ctor(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_IsGlobal()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_GET_ISGLOBAL_OFFSET))(nullptr);
		}

		::System::Boolean get_EnableBurstCompilation()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_GET_ENABLEBURSTCOMPILATION_OFFSET))(nullptr);
		}

		::System::Void set_EnableBurstCompilation(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_SET_ENABLEBURSTCOMPILATION_OFFSET))(arg, nullptr);
		}

		::System::Void set_EnableBurstSafetyChecks(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_SET_ENABLEBURSTSAFETYCHECKS_OFFSET))(arg, nullptr);
		}

		::System::Action* get_OptionsChanged()
		{
			return (return (::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_GET_OPTIONSCHANGED_OFFSET))(nullptr);
		}

		::System::Boolean TryGetAttribute(::System::Reflection::MemberInfo* arg, ::Unity::Burst::BurstCompileAttribute&* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::Unity::Burst::BurstCompileAttribute&*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_TRYGETATTRIBUTE_OFFSET))(arg, arg, nullptr);
		}

		::Unity::Burst::BurstCompileAttribute* GetBurstCompileAttribute(::System::Reflection::MemberInfo* arg)
		{
			return (return (::Unity::Burst::BurstCompileAttribute*(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_GETBURSTCOMPILEATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Boolean HasBurstCompileAttribute(::System::Reflection::MemberInfo* arg)
		{
			return (return (::System::Boolean(*)(::System::Reflection::MemberInfo*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_HASBURSTCOMPILEATTRIBUTE_OFFSET))(arg, nullptr);
		}

		::System::Void OnOptionsChanged()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_ONOPTIONSCHANGED_OFFSET))(nullptr);
		}

		::System::Void MaybeTriggerRecompilation()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_MAYBETRIGGERRECOMPILATION_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_.CCTOR_OFFSET))(nullptr);
		}

		::System::Boolean CheckIsSecondaryUnityProcess()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEROPTIONS_CHECKISSECONDARYUNITYPROCESS_OFFSET))(nullptr);
		}

	};
}

