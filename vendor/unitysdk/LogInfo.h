#pragma once
#include "unitysdk.h"

class StopwatchInfo;

#define LOGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x212CAA0)
#define LOGINFO_GET_INDENT_OFFSET UNITYSDK_OFFSET(0x212D010)
#define LOGINFO_GET_TIMEMS_OFFSET UNITYSDK_OFFSET(0x212D020)
#define LOGINFO_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x212D030)

	inline static constexpr unsigned int LogInfo_TypeDefinitionIndex = 3926;

	class LogInfo : public Il2CppObject
	{
	public:
		::System::String* _Label_k__BackingField; // 0x10
		::System::Int32 _Indent_k__BackingField; // 0x18
		::System::Int64 _TimeMS_k__BackingField; // 0x20

		::System::Void .ctor(StopwatchInfo* arg, ::System::Int32 arg2)
		{
			((::System::Void(*)(StopwatchInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + LOGINFO_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Int32 get_Indent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINFO_GET_INDENT_OFFSET))(nullptr);
		}

		::System::Int64 get_TimeMS()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINFO_GET_TIMEMS_OFFSET))(nullptr);
		}

		::System::String* get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOGINFO_GET_LABEL_OFFSET))(nullptr);
		}

	};

