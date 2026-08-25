#pragma once
#include "unitysdk.h"

class MXStopwatch;
class LogInfo;

#define MXSTOPWATCH_STARTACCUMULATOR_OFFSET UNITYSDK_OFFSET(0x212BC50)
#define MXSTOPWATCH_PRINT_OFFSET UNITYSDK_OFFSET(0x212BF70)
#define MXSTOPWATCH_GETTOTALTIMEMS_OFFSET UNITYSDK_OFFSET(0x212C2F0)
#define MXSTOPWATCH_.CTOR_OFFSET UNITYSDK_OFFSET(0x212BDC0)
#define MXSTOPWATCH_FINISHACCUMULATOR_OFFSET UNITYSDK_OFFSET(0x212C710)
#define MXSTOPWATCH_GETCURRENTINDENT_OFFSET UNITYSDK_OFFSET(0x212CA60)
#define MXSTOPWATCH_STOPACCUMULATOR_OFFSET UNITYSDK_OFFSET(0x212CB00)
#define MXSTOPWATCH_CREATELOG_OFFSET UNITYSDK_OFFSET(0x212C510)
#define MXSTOPWATCH_START_OFFSET UNITYSDK_OFFSET(0x212CBA0)
#define MXSTOPWATCH_STOP_OFFSET UNITYSDK_OFFSET(0x212CD30)

	inline static constexpr unsigned int MXStopwatch_TypeDefinitionIndex = 3929;

	class MXStopwatch : public Il2CppObject
	{
	public:
		MXStopwatch* instance; // 0x0
		Il2CppObject* stopwatches; // 0x10
		Il2CppObject* logs; // 0x18
		Il2CppObject* accumulators; // 0x20

		::System::Void StartAccumulator(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTOPWATCH_STARTACCUMULATOR_OFFSET))(str, str2, nullptr);
		}

		::System::Void Print()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTOPWATCH_PRINT_OFFSET))(nullptr);
		}

		::System::Int64 GetTotalTimeMS()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTOPWATCH_GETTOTALTIMEMS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTOPWATCH_.CTOR_OFFSET))(nullptr);
		}

		::System::Void FinishAccumulator(::System::String* str, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::String*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTOPWATCH_FINISHACCUMULATOR_OFFSET))(str, arg, nullptr);
		}

		::System::Int32 GetCurrentIndent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTOPWATCH_GETCURRENTINDENT_OFFSET))(nullptr);
		}

		::System::Void StopAccumulator(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTOPWATCH_STOPACCUMULATOR_OFFSET))(str, nullptr);
		}

		::System::String* CreateLog(LogInfo* arg, ::System::Int64 arg2, ::System::Int32 arg3)
		{
			return ((::System::String*(*)(LogInfo*, ::System::Int64, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + MXSTOPWATCH_CREATELOG_OFFSET))(arg, arg2, arg3, nullptr);
		}

		::System::Void Start(::System::String* str)
		{
			((::System::Void(*)(::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + MXSTOPWATCH_START_OFFSET))(str, nullptr);
		}

		::System::Void Stop()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MXSTOPWATCH_STOP_OFFSET))(nullptr);
		}

	};

