#pragma once
#include "../../unitysdk.h"

namespace E7::Native { class NativeAudioPointer; }
namespace E7::Native { class NativeAudioAnalyzerResult; }

#define E7_NATIVE_NATIVEAUDIOANALYZER_GET_ANALYZED_OFFSET UNITYSDK_OFFSET(0x289F730)
#define E7_NATIVE_NATIVEAUDIOANALYZER_GET_ANALYSISRESULT_OFFSET UNITYSDK_OFFSET(0x289F740)
#define E7_NATIVE_NATIVEAUDIOANALYZER_SET_ANALYSISRESULT_OFFSET UNITYSDK_OFFSET(0x289F750)
#define E7_NATIVE_NATIVEAUDIOANALYZER_TICKSTOMS_OFFSET UNITYSDK_OFFSET(0x289F760)
#define E7_NATIVE_NATIVEAUDIOANALYZER_TICKSTOMS_OFFSET UNITYSDK_OFFSET(0x289F770)
#define E7_NATIVE_NATIVEAUDIOANALYZER_STDDEV_OFFSET UNITYSDK_OFFSET(0x289F780)
#define E7_NATIVE_NATIVEAUDIOANALYZER_ANALYZE_OFFSET UNITYSDK_OFFSET(0x289F8B0)
#define E7_NATIVE_NATIVEAUDIOANALYZER_FINISH_OFFSET UNITYSDK_OFFSET(0x289F9D0)
#define E7_NATIVE_NATIVEAUDIOANALYZER_ANALYZEROUTINE_OFFSET UNITYSDK_OFFSET(0x289F960)
#define E7_NATIVE_NATIVEAUDIOANALYZER_.CTOR_OFFSET UNITYSDK_OFFSET(0x289FA40)

namespace E7::Native
{
	inline static constexpr unsigned int NativeAudioAnalyzer_TypeDefinitionIndex = 37982;

	class NativeAudioAnalyzer : public Il2CppObject
	{
	public:
		::System::Single secondsOfPlay; // 0x0
		::System::Int32 framesOfPlay; // 0x0
		::E7::Native::NativeAudioPointer* silence; // 0x0
		Il2CppObject* allTicks; // 0x18
		::System::Collections::IEnumerator* analyzeRoutine; // 0x20
		::System::Diagnostics::Stopwatch* sw; // 0x28
		::E7::Native::NativeAudioAnalyzerResult* _AnalysisResult_k__BackingField; // 0x30

		::System::Boolean get_Analyzed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZER_GET_ANALYZED_OFFSET))(nullptr);
		}

		::E7::Native::NativeAudioAnalyzerResult* get_AnalysisResult()
		{
			return (return (::E7::Native::NativeAudioAnalyzerResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZER_GET_ANALYSISRESULT_OFFSET))(nullptr);
		}

		::System::Void set_AnalysisResult(::E7::Native::NativeAudioAnalyzerResult* arg)
		{
			((::System::Void(*)(::E7::Native::NativeAudioAnalyzerResult*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZER_SET_ANALYSISRESULT_OFFSET))(arg, nullptr);
		}

		::System::Single TicksToMs(::System::Int64 arg)
		{
			return (return (::System::Single(*)(::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZER_TICKSTOMS_OFFSET))(arg, nullptr);
		}

		::System::Single TicksToMs(::System::Double arg)
		{
			return (return (::System::Single(*)(::System::Double, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZER_TICKSTOMS_OFFSET))(arg, nullptr);
		}

		::System::Single StdDev(Il2CppObject* arg)
		{
			return (return (::System::Single(*)(Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZER_STDDEV_OFFSET))(arg, nullptr);
		}

		::System::Void Analyze()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZER_ANALYZE_OFFSET))(nullptr);
		}

		::System::Void Finish()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZER_FINISH_OFFSET))(nullptr);
		}

		::System::Collections::IEnumerator* AnalyzeRoutine()
		{
			return (return (::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZER_ANALYZEROUTINE_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7_NATIVE_NATIVEAUDIOANALYZER_.CTOR_OFFSET))(nullptr);
		}

	};
}

