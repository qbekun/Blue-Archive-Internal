#pragma once
#include "unitysdk.h"

#define STOPWATCHINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x212BEE0)
#define STOPWATCHINFO_GET_STOPWATCH_OFFSET UNITYSDK_OFFSET(0x212CFE0)
#define STOPWATCHINFO_GET_PARENTLABEL_OFFSET UNITYSDK_OFFSET(0x212CFF0)
#define STOPWATCHINFO_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x212D000)

	inline static constexpr unsigned int StopwatchInfo_TypeDefinitionIndex = 3925;

	class StopwatchInfo : public Il2CppObject
	{
	public:
		::System::String* _Label_k__BackingField; // 0x10
		::System::String* _ParentLabel_k__BackingField; // 0x18
		::System::Diagnostics::Stopwatch* _Stopwatch_k__BackingField; // 0x20

		::System::Void .ctor(::System::String* str, ::System::String* str2)
		{
			((::System::Void(*)(::System::String*, ::System::String*, ::PVOID))((::PBYTE)hIl2Cpp + STOPWATCHINFO_.CTOR_OFFSET))(str, str2, nullptr);
		}

		::System::Diagnostics::Stopwatch* get_Stopwatch()
		{
			return ((::System::Diagnostics::Stopwatch*(*)(::PVOID))((::PBYTE)hIl2Cpp + STOPWATCHINFO_GET_STOPWATCH_OFFSET))(nullptr);
		}

		::System::String* get_ParentLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STOPWATCHINFO_GET_PARENTLABEL_OFFSET))(nullptr);
		}

		::System::String* get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STOPWATCHINFO_GET_LABEL_OFFSET))(nullptr);
		}

	};

