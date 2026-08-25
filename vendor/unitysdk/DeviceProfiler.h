#pragma once
#include "unitysdk.h"

class GPUCapabilities;
class DeviceTier;

#define DEVICEPROFILER_LOGGINGDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x20ADB70)
#define DEVICEPROFILER_CALCULATESHADERSCORE_OFFSET UNITYSDK_OFFSET(0x20AE3F0)
#define DEVICEPROFILER_DETERMINEGPUTIER_OFFSET UNITYSDK_OFFSET(0x20AE360)
#define DEVICEPROFILER_CALCFINALSCOREWITHRAM_OFFSET UNITYSDK_OFFSET(0x20AE490)
#define DEVICEPROFILER_GETDEVICETIER_OFFSET UNITYSDK_OFFSET(0x20AE500)
#define DEVICEPROFILER_GETCAPABILITIES_OFFSET UNITYSDK_OFFSET(0x20AE2D0)
#define DEVICEPROFILER_CALCULATEAPISCORE_OFFSET UNITYSDK_OFFSET(0x20AEF80)
#define DEVICEPROFILER_CALCULATEFEATURESCORE_OFFSET UNITYSDK_OFFSET(0x20AF000)
#define DEVICEPROFILER_CALCCAPABILITIES_OFFSET UNITYSDK_OFFSET(0x20AE640)
#define DEVICEPROFILER_CALCULATETEXTURESCORE_OFFSET UNITYSDK_OFFSET(0x20AF0B0)
#define DEVICEPROFILER_CALCULATEMEMORYSCORE_OFFSET UNITYSDK_OFFSET(0x20AF270)

	inline static constexpr unsigned int DeviceProfiler_TypeDefinitionIndex = 3569;

	class DeviceProfiler : public Il2CppObject
	{
	public:
		Il2CppObject* cachedGPUCapabilities; // 0x0

		::System::Void LoggingDebugInfo()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_LOGGINGDEBUGINFO_OFFSET))(nullptr);
		}

		::System::Int32 CalculateShaderScore(GPUCapabilities* arg)
		{
			return ((::System::Int32(*)(GPUCapabilities*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_CALCULATESHADERSCORE_OFFSET))(arg, nullptr);
		}

		DeviceTier* DetermineGPUTier(::System::Int32 arg)
		{
			return ((DeviceTier*(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_DETERMINEGPUTIER_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalcFinalScoreWithRam(::System::Int32 arg)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_CALCFINALSCOREWITHRAM_OFFSET))(arg, nullptr);
		}

		DeviceTier* GetDeviceTier()
		{
			return ((DeviceTier*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_GETDEVICETIER_OFFSET))(nullptr);
		}

		GPUCapabilities* GetCapabilities()
		{
			return ((GPUCapabilities*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_GETCAPABILITIES_OFFSET))(nullptr);
		}

		::System::Int32 CalculateAPIScore(GPUCapabilities* arg)
		{
			return ((::System::Int32(*)(GPUCapabilities*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_CALCULATEAPISCORE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateFeatureScore(GPUCapabilities* arg)
		{
			return ((::System::Int32(*)(GPUCapabilities*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_CALCULATEFEATURESCORE_OFFSET))(arg, nullptr);
		}

		GPUCapabilities* CalcCapabilities()
		{
			return ((GPUCapabilities*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_CALCCAPABILITIES_OFFSET))(nullptr);
		}

		::System::Int32 CalculateTextureScore(GPUCapabilities* arg)
		{
			return ((::System::Int32(*)(GPUCapabilities*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_CALCULATETEXTURESCORE_OFFSET))(arg, nullptr);
		}

		::System::Int32 CalculateMemoryScore(GPUCapabilities* arg)
		{
			return ((::System::Int32(*)(GPUCapabilities*, ::PVOID))((::PBYTE)hIl2Cpp + DEVICEPROFILER_CALCULATEMEMORYSCORE_OFFSET))(arg, nullptr);
		}

	};

