#pragma once
#include "../../unitysdk.h"

namespace Unity::Burst { class FloatMode; }
namespace Unity::Burst { class FloatPrecision; }

#define UNITY_BURST_BURSTCOMPILEATTRIBUTE_SET_FLOATMODE_OFFSET UNITYSDK_OFFSET(0x9E2D880)
#define UNITY_BURST_BURSTCOMPILEATTRIBUTE_SET_FLOATPRECISION_OFFSET UNITYSDK_OFFSET(0x9E2D890)
#define UNITY_BURST_BURSTCOMPILEATTRIBUTE_SET_COMPILESYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x9E2D8A0)
#define UNITY_BURST_BURSTCOMPILEATTRIBUTE_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x9E2D900)
#define UNITY_BURST_BURSTCOMPILEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2D910)
#define UNITY_BURST_BURSTCOMPILEATTRIBUTE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9E2D920)

namespace Unity::Burst
{
	inline static constexpr unsigned int BurstCompileAttribute_TypeDefinitionIndex = 37230;

	class BurstCompileAttribute : public ::UnityEngine::AudioClip
	{
	public:
		::Unity::Burst::FloatMode* _FloatMode_k__BackingField; // 0x10
		::Unity::Burst::FloatPrecision* _FloatPrecision_k__BackingField; // 0x14
		Il2CppObject* _compileSynchronously; // 0x18
		::Il2CppArray<::System::Object*>* _Options_k__BackingField; // 0x20

		::System::Void set_FloatMode(::Unity::Burst::FloatMode* arg)
		{
			((::System::Void(*)(::Unity::Burst::FloatMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEATTRIBUTE_SET_FLOATMODE_OFFSET))(arg, nullptr);
		}

		::System::Void set_FloatPrecision(::Unity::Burst::FloatPrecision* arg)
		{
			((::System::Void(*)(::Unity::Burst::FloatPrecision*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEATTRIBUTE_SET_FLOATPRECISION_OFFSET))(arg, nullptr);
		}

		::System::Void set_CompileSynchronously(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEATTRIBUTE_SET_COMPILESYNCHRONOUSLY_OFFSET))(arg, nullptr);
		}

		::System::Void set_Options(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEATTRIBUTE_SET_OPTIONS_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEATTRIBUTE_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .ctor(::Unity::Burst::FloatPrecision* arg, ::Unity::Burst::FloatMode* arg)
		{
			((::System::Void(*)(::Unity::Burst::FloatPrecision*, ::Unity::Burst::FloatMode*, ::PVOID))((::PBYTE)hIl2Cpp + UNITY_BURST_BURSTCOMPILEATTRIBUTE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};
}

